module Process
  class Status
    def initialize(ivars)
      ivars.each do |key, val|
        self.instance_variable_set("@#{key}".to_sym, val)
      end
    end

    def coredump?
      raise NotImplementedError.new('Process::Status#coredump? not supported')
    end

    def exitstatus
      @exitstatus
    end

    def exited?
      @exited
    end

    def pid
      @pid
    end

    def signaled?
      @signaled
    end
    
    def termsig
      @termsig
    end

    def success?
      if @exited
        @exitstatus == 0
      else
        nil
      end
    end
  end
end
