module Process
  module Private
    def self.parse_spawn_args(*command, pool)
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
        if APR::OS == 'Windows'
          argv = ["cmd.exe", '/C', command[0]]
        else
          argv = ["sh", '-c', command[0]]
        end

        { env: env, argv: argv, options: options }
      # [cmdname, argv0], arg1, ... : command name, argv[0] and zero or more arguments (no shell)
      elsif command[0].class == Array
        if command[0].length != 2
          raise ArgumentError.new('wrong first argument')
        end
        argv = [command[0][0], command[0][1]].concat(command[1..(command.length)])
        { env: env, argv: argv, options: options }
      # cmdname, arg1, ... : command name and one or more arguments (no shell)
      else
        argv = command
        { env: env, argv: argv, options: options }
      end
    end
  end

  def self.spawn(*command)
    args = Private.parse_spawn_args(*command, pool)
    env = args[:env]
    argv = args[:argv]
    options = args[:options]
    
    # TODO: Configure environment variables from env hash

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

    # TODO: Create the process

    process.pid
  end

  def self.wait(pid)
    # pid = ???
    # exit_code = ???
    # exit_why = ???
    $? = Process::Status.new(pid, exit_code, exit_why)
    return pid
  end
end
