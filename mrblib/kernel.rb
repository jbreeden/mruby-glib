module Kernel
  def spawn(*command)
    Process.spawn(*command)
  end
  
  def system(cmd)
    pid = spawn(cmd)
    Process.wait(pid)
    $?.success?
  end
  
  def `(command)
    # non-standard `out` value `true` means grab the pipe from GLib
    # and store it in spawn_opt[:out_pipe]
    spawn_opt = {out: true, err: File::NULL}
    pid = spawn(command.to_s, spawn_opt)
    result = spawn_opt[:out_pipe].read
    # Sets $?
    Process.wait(pid)
    result
  end

  def load(path)
    raise TypeError unless path.class == String

    if File.exist?(path)
      eval(File.read(path), nil, path, 0)
    else
      $LOAD_PATH.each do |dir|
        if File.exist?("#{dir}/#{path}")
          eval(File.read("#{dir}/#{path}"), nil, "#{dir}/#{path}", 0)
          return true
        end
      end
      raise LoadError.new "File not found -- #{path}"
    end
    true
  end
end

class LoadError < ScriptError
  def initialize(msg = nil)
    super
  end
end
