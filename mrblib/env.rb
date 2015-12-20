ENV = Object.new

class << ENV
  def [](key)
    value = GLib.g_getenv(key)
  end

  def []=(key, value)
    success = GLib.g_setenv(key, value, true)
    unless success
      raise SystemCallError.new("Could not set environment variable")
    end
    value
  end

  def delete(key)
    self[key] = nil
  end
  
  def keys
    GLib.g_listenv
  end
end
