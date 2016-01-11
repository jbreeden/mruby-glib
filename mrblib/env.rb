class ENV
  def self.[](key)
    value = GLib.g_getenv(key)
  end

  def self.[]=(key, value)
    success = false
    if value.nil?
      success = g_unsetenv(key)
    else
      success = GLib.g_setenv(key, value, true)
    end

    unless success
      raise SystemCallError.new("Could not set environment variable")
    end
    value
  end

  def self.delete(key)
    self[key] = nil
  end
  
  def self.each(&block)
    if block_given?
      ret = {}
      self.keys.each do |k|
        val = self[k]
        ret[k] = val
        if block.arity == 1
          block[[k, val]]
        else
          block[k, val]
        end
      end
      ret
    else
      self.enum_for(:each)
    end
  end
  
  def self.keys
    GLib.g_listenv
  end
end
