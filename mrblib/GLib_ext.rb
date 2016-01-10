module GLib
  os = GLib.g_getenv('OS')
  if os.kind_of?(String) && os.downcase.include?('windows')
    OS = 'Windows'
  else
    OS = 'Unix'
  end
  
  def self.raise_error(err, type=nil)
    unless err.nil?
      type ||= StandardError
      raise type.new(err.message)
    end
  end
end
