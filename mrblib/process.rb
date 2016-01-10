module Process
  @@children = {}
  
  class Test < IO
    def initialize(istream)
      @istream = istream
      super()
    end
  end
  
  module Private
    def self.parse_spawn_args(*command)
      env = nil
      options = nil;

      if command.length == 0
        raise ArgumentError.new('Wrong number of arguments (0 for 1+)')
      end

      if command[0].class == Hash
        env = command.shift
      end

      if command.last.class == Hash
        options = command.pop
      end
      
      # commandline: command line string which is passed to the standard shell
      if command.length == 1 && command[0].class == String
        argv = nil
        if 'Windows' == ENV['OS']
          argv = ["cmd.exe", '/C', command[0]]
        else
          argv = ["sh", '-c', command[0]]
        end

        { env: env, argv: argv, options: options || {} }
      # [cmdname, argv0], arg1, ... : command name, argv[0] and zero or more arguments (no shell)
      elsif command[0].class == Array
        raise NotImplementedError.new('Process::spawn does not yet support specifying argv0 separately')
        ## TODO: Need to launch as cmdname, but pass argv0 as argv[0]...
        ##       previous implementation is wrong
        # if command[0].length != 2
        #   raise ArgumentError.new('wrong first argument')
        # end
        # argv = [command[0][0], command[0][1]].concat(command[1..(command.length)])
        # { env: env, argv: argv, options: options }
      # cmdname, arg1, ... : command name and one or more arguments (no shell)
      else
        argv = command
        { env: env, argv: argv, options: options || {}}
      end
    end
    
    def self.setup_redirects(options)
      options[:in_flag] = GLib::GSubprocessFlags::G_SUBPROCESS_FLAGS_STDIN_INHERIT
      options[:in_io] = nil
      options[:out_flag] = 0
      options[:out_io] = nil
      options[:err_flag] = 0
      options[:err_io] = nil
      
      if options
        if options[:in]
          case options[:in]
          when IO
            options[:in_flag] = GLib::GSubprocessFlags::G_SUBPROCESS_FLAGS_STDIN_PIPE
            options[:in_io] = options[:in]
          when TrueClass
            options[:in_flag] = GLib::GSubprocessFlags::G_SUBPROCESS_FLAGS_STDIN_PIPE
          else
            raise ArgumentError.new("Unsupported value for options[:in] - #{options[:in]}")
          end
        end
        
        if options[:out]
          case options[:out]
          when File::NULL
            options[:out_flag] = GLib::GSubprocessFlags::G_SUBPROCESS_FLAGS_STDOUT_SILENCE
          when IO
            options[:out_flag] = GLib::GSubprocessFlags::G_SUBPROCESS_FLAGS_STDOUT_PIPE
            options[:out_io] = options[:out]
          when TrueClass
            options[:out_flag] = GLib::GSubprocessFlags::G_SUBPROCESS_FLAGS_STDOUT_PIPE
          else
            raise ArgumentError.new("Unsupported value for options[:out] - #{options[:out]}")
          end
        end
        
        if options[:err]
          case options[:err]
          when [:child, :out]
            options[:err_flag] = GLib::GSubprocessFlags::G_SUBPROCESS_FLAGS_STDERR_MERGE
          when File::NULL
            options[:err_flag] = GLib::GSubprocessFlags::G_SUBPROCESS_FLAGS_STDERR_SILENCE
          when IO
            options[:err_flag] = GLib::GSubprocessFlags::G_SUBPROCESS_FLAGS_STDERR_PIPE
            options[:err_io] = options[:err]
          when TrueClass
            options[:err_flag] = GLib::GSubprocessFlags::G_SUBPROCESS_FLAGS_STDERR_PIPE
          else
            raise ArgumentError.new("Unsupported value for options[:err] - #{options[:err]}")
          end
        end
      end
    end
    
    def self.apply_redirects(process, options)
      case options[:in]
      when IO
        ostream = GLib.g_subprocess_get_stdin_pipe(process)
        raise "Could not get child's input pipe" if ostream.nil?
        options[:in].assert_can_read
        # TODO: In user space for now... due to GLib limitations on Windows
        #  - Should use available API's when on Unix
        #  - Should write a replacement API for Windows
        GLib.g_output_stream_splice_thread(
          ostream,
          options[:in].istream,
          GLib::GOutputStreamSpliceFlags::G_OUTPUT_STREAM_SPLICE_CLOSE_TARGET
        )
      when TrueClass
        options[:in_pipe] = IO::GOutputStreamWrapper.new(GLib.g_subprocess_get_stdin_pipe(process))
      end
      
      case options[:out]
      when IO
        istream = GLib.g_subprocess_get_stdout_pipe(process)
        raise "Could not get child's output pipe" if istream.nil?
        options[:out].assert_can_write
        GLib.g_output_stream_splice_thread(
          options[:out].ostream,
          istream,
          GLib::GOutputStreamSpliceFlags::G_OUTPUT_STREAM_SPLICE_NONE
        )
      when TrueClass
        options[:out_pipe] = IO::GInputStreamWrapper.new(GLib.g_subprocess_get_stdout_pipe(process))
      end
      
      case options[:err]
      when IO
        istream = GLib.g_subprocess_get_stderr_pipe(process)
        raise "Could not get child's error pipe" if istream.nil?
        options[:err].assert_can_write
        GLib.g_output_stream_splice_thread(
          options[:err].ostream,
          istream,
          GLib::GOutputStreamSpliceFlags::G_OUTPUT_STREAM_SPLICE_NONE
        )
      when TrueClass
        options[:err_pipe] = IO::GInputStreamWrapper.new(GLib.g_subprocess_get_stderr_pipe(process))
      end
    end
  end

  def self.spawn(*command)
    args = Private.parse_spawn_args(*command)
    env = args[:env]
    argv = args[:argv]
    options = args[:options]
    
    if env
      raise NotImplementedError.new('Process::spawn does not yet support setting environment variables')
    end
    
    Private.setup_redirects(options)

    launcher = GLib.g_subprocess_launcher_new(options[:in_flag] | options[:out_flag] | options[:err_flag])

    # TODO: Update ENV

    process, err = GLib.g_subprocess_launcher_spawnv(launcher, argv)
    GLib.raise_error(err, SystemCallError)
    
    Private.apply_redirects(process, options)

    id = GLib.g_subprocess_get_identifier(process).to_i
    @@children[id] = process
    id
  end

  def self.wait(pid)
    process = @@children[pid]
    unless process
      raise SystemCallError.new("No child process known to MRuby: #{pid}")
    end
    @@children.delete(pid)
    
    status, err = GLib.g_subprocess_wait(process)
    GLib.raise_error(err)
    
    status = {}
    status[:pid] = pid
    if GLib.g_subprocess_get_if_exited(process)
      status[:exited] = true
      status[:exitstatus] = GLib.g_subprocess_get_exit_status(process)
    else
      status[:exited] = false
      status[:exitstatus] = nil
    end
    if GLib.g_subprocess_get_if_signaled(process)
      status[:signaled] = true
      status[:termsig] = GLib.g_subprocess_get_term_sig(process)
    else
      status[:signaled] = false
      status[:termsig] = nil
    end
    
    $? = Process::Status.new(status)
    return pid
  end
  class << self
    alias waitpid wait
  end
end
