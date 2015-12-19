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
    value = self[key]
    ::APR.apr_env_delete(key, pool)
    value
  end

  def pool
    unless @pool
      err, env_pool = ::APR.apr_pool_create(nil)
      @pool = env_pool
    end
    @pool
  end
end
