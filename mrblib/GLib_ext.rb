module GLib
  def self.raise_error(err, type=nil)
    unless err.nil?
      type ||= StandardError
      raise type.new(err.message)
    end
  end
end
