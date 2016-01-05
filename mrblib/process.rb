module Process
  @@children = {}
  
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

        { env: env, argv: argv, options: options }
      # [cmdname, argv0], arg1, ... : command name, argv[0] and zero or more arguments (no shell)
      elsif command[0].class == Array
        raise NotImplementedError.new('Process::spawn does not yet support this calling convention')
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
        { env: env, argv: argv, options: options }
      end
    end
  end

  def self.spawn(*command)
    args = Private.parse_spawn_args(*command)
    env = args[:env]
    argv = args[:argv]
    options = args[:options]
    
    if env
      # TODO: Configure environment variables from env hash
      raise NotImplementedError.new('Process::spawn does not yet support setting environment variables')
    end
    
    if options
      raise NotImplementedError.new('Process::spawn does not yet support any options')
    end

    # TODO: Set appropriate flags based on options
    launcher = GLib.g_subprocess_launcher_new(GLib::GSubprocessFlags::G_SUBPROCESS_FLAGS_INHERIT_FDS)

    if options
      if options[:in]
        # TODO: Redirect stdin based on options[:in]
      end
      if options[:out]
        # TODO: Redirect stdout based on options[:out]
      end
      if options[:err]
        # TODO: Redirect stderr based on options[:err]
      end
    end

    process, err = GLib.g_subprocess_launcher_spawnv(launcher, argv)
    GLib.raise_error(err, SystemCallError)

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
