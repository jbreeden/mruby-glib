module Open3
  module Private
    def self.set_spawn_opts(spawn_args, h)
      opts = nil
      if spawn_args.last.kind_of? Hash
        opts = spawn_args.last
      else
        opts = {}
        spawn_args.push(opts)
      end
      
      h.each do |k, v|
        opts[k] = v
      end
    end
  end
  
  class PsuedoWaitThread
    attr_reader :pid
    
    def initialize(pid)
      @pid = pid
    end
    
    def value
      @value ||= begin
        Process.wait(@pid)
        $?
      end
    end
  end
  
  def self.popen2(*cmd, &block)
    Private.set_spawn_opts(cmd, {
      in: true,
      out: true
    })
    
    opts = cmd.last
    pid = Process.spawn(*cmd)
    
    wait = PsuedoWaitThread.new(pid)
    
    if block.nil?
      return [opts[:in_pipe], opts[:out_pipe], wait]
    else
      block[opts[:in_pipe], opts[:out_pipe], wait]
      opts[:in_pipe].close unless opts[:in_pipe].closed?
      opts[:out_pipe].close unless opts[:out_pipe].closed?
      wait.value
    end
  end
  
  def self.popen2e(*cmd, &block)
    Private.set_spawn_opts(cmd, {
      in: true,
      out: true,
      err: [:child, :out]
    })
    
    opts = cmd.last
    pid = Process.spawn(*cmd)
    
    wait = PsuedoWaitThread.new(pid)
    
    if block.nil?
      return [opts[:in_pipe], opts[:out_pipe], wait]
    else
      block[opts[:in_pipe], opts[:out_pipe], wait]
      opts[:in_pipe].close unless opts[:in_pipe].closed?
      opts[:out_pipe].close unless opts[:out_pipe].closed?
      wait.value
    end
  end
  
  def self.popen3(*cmd, &block)
    Private.set_spawn_opts(cmd, {
      in: true,
      out: true,
      err: true
    })
    
    opts = cmd.last
    pid = Process.spawn(*cmd)
    
    wait = PsuedoWaitThread.new(pid)
    
    if block.nil?
      return [opts[:in_pipe], opts[:out_pipe], opts[:err_pipe], wait]
    else
      block[opts[:in_pipe], opts[:out_pipe], wait]
      opts[:in_pipe].close unless opts[:in_pipe].closed?
      opts[:out_pipe].close unless opts[:out_pipe].closed?
      opts[:err_pipe].close unless opts[:err_pipe].closed?
      wait.value
    end
  end
end
