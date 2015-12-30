class File < IO
  # Modes:
  # "r"  Read-only, starts at beginning of file  (default mode).
  #
  # "r+" Read-write, starts at beginning of file.
  #
  # "w"  Write-only, truncates existing file
  #      to zero length or creates a new file for writing.
  #
  # "w+" Read-write, truncates existing file to zero length
  #      or creates a new file for reading and writing.
  #
  # "a"  Write-only, each write call appends data at end of file.
  #      Creates a new file for writing if file does not exist.
  #
  # "a+" Read-write, each write call appends data at end of file.
  #      Creates a new file for reading and writing if file does
  #      not exist.
  #
  #  The following modes must be used separately, and along with one or more of the modes seen above.
  #
  # "b"  Binary file mode
  #    Suppresses EOL <-> CRLF conversion on Windows. And
  #    sets external encoding to ASCII-8BIT unless explicitly
  #    specified.
  #
  # "t"  Text file mode
  def initialize(filename, mode='r')
    @filename = filename
    @mode = mode
    @closed = false
    @io, err = GLib.g_io_channel_new_file(@filename, @mode)
    GLib.g_io_channel_set_close_on_unref(@io, true)
    GLib.raise_error(err, SystemCallError)
  end

  def self.open(*args, &block)
    f = File.new(*args)
    if block
      begin
        block[f]
      ensure
        f.close
      end
    else
      f
    end
  end
  
  def self.absolute_path(path)
    GLib.g_file_get_path(GLib.g_file_new_for_path(path))
  end
  class << self
    alias expand_path absolute_path
  end

  # def self.atime(path)
  #   stat = File::Stat.new(path)
  #   stat.atime
  # end
  
  def self.basename(file_name)
    file = GLib.g_file_new_for_path(file_name)
    GLib.g_file_get_basename(file)
  end

  # def self.ctime(path)
  #   stat = File::Stat.new(path)
  #   stat.ctime
  # end

  def self.delete(*paths)
    paths.each do |path|
      status = GLib.g_unlink(path)
      raise SystemCallError.new('Operation not permitted') if status == -1
    end
  end

  def self.extname(path)
    path = path.gsub('\\', '/')
    dot_idx = path.rindex(".")
    return "" unless dot_idx
    slash_idx = path.rindex("/")
    slash_idx ||= -1
    # no . in the last component of the path
    return "" if dot_idx < slash_idx
    # last component starts with a .
    return "" if dot_idx == slash_idx + 1
    # last component ends with a .
    return "" if dot_idx == path.length - 1
  
    return path[dot_idx..(path.length)]
  end

  def self.read(path)
    result = nil
    File.open(path) do |f|
      result = f.read
    end
    result
  end
  
  def self.join(*parts)
    GLib.g_build_filenamev(parts)
  end

  # #<
  # # ## `#flock(locking_constant)`
  # # Locks or unlocks a file according to locking_constant.
  # # - Args
  # #   + `locking_constant` Bitwise or of
  # #     - `File::LOCK_EX` (Get an exclusive lock)
  # #     - `File::LOCK_NB` (Do not block)
  # #     - `File::LOCK_SH` (Get a shared lock)
  # #     - `File::LOCK_UN` (Release any held locks)
  # # - Returns false if File::LOCK_NB is specified and the operation would otherwise have blocked.
  # #>
  # def flock(locking_constant)
  #   if (locking_constant & File::LOCK_UN) > 0
  #     return APR::apr_file_unlock(@io)
  #   end
  # 
  #   apr_flags = []
  #   if (locking_constant & File::LOCK_EX) > 0
  #     apr_flags << APR::APR_FLOCK_EXCLUSIVE
  #   end
  #   if (locking_constant & File::LOCK_SH) > 0
  #     apr_flags << APR::APR_FLOCK_SHARED
  #   end
  #   if (locking_constant & File::LOCK_NB) > 0
  #     apr_flags << APR::APR_FLOCK_NONBLOCK
  #   end
  # 
  #   apr_lock_type = apr_flags.inject(0) { |acc, cur| (acc | cur) }
  #   err = APR.apr_file_lock(@io, apr_lock_type)
  #   APR.raise_apr_errno(err, ignore: APR::APR_EAGAIN)
  # 
  #   if err == APR::APR_EAGAIN
  #     false
  #   else
  #     0
  #   end
  # end
  
  def close
    GLib.g_io_channel_close(@io)
    @closed = true
  end
  
  def closed?
    @closed
  end
  
  def assert_can_read
    if closed? || (!@mode.include?('r') && !@mode.include?('+'))
      raise IOError.new 'not opened for reading'
    end
  end
  
  def assert_can_write
    if closed? || (!@mode.include?('w') && !@mode.include?('a') && !@mode.include?('+'))
      raise IOError.new 'not opened for writing'
    end
  end
  
  def flush
    assert_can_write
    GLib.raise_error(GLib.g_io_channel_flush(@io))
  end
  
  # IO Subclass Contract Implementation
  # -----------------------------------
  
  def read(length = nil)
    assert_can_read
  
    read = ""
    if length.nil?
      loop {
        status, text, err = GLib.g_io_channel_read_chars(@io, 100)
        _set_status(status)
        GLib.raise_error(err)
        break if text.nil? || text.length == 0
        read += text
      }
    elsif length > 0
      status, text, err = GLib.g_io_channel_read_chars(@io, length)
      _set_status(status)
      GLib.raise_error(err)
      read += text unless text.nil?
    end
  
    if length.nil?
      # should be "" if nothing was read (EOF hit)
      read
    elsif length == 0
      # Per ruby documents, return "" on length == 0
      ""
    else
      # length was provided non-zero, so return nil if nothing read
      read == "" ? nil : read
    end
  end
  
  def write(str)
    assert_can_write
    as_str = str.to_s
    status, bytes_written, err = GLib.g_io_channel_write_chars(@io, as_str)
    _set_status(status)
    GLib.raise_error(err)
    bytes_written
  end
  
  def eof?
    assert_can_read
    @eof
  end
  alias eof eof?
  
  # IO Default Overrides
  # --------------------
  
  def getc
    assert_can_read
    status, text, len, err = GLib.g_io_channel_read_chars(@io, 1)
    _set_status(status)
    GLib.raise_error(err)
    if status == GLib::GIOStatus::G_IO_STATUS_EOF
      nil
    else
      text[0]
    end
  end
  
  def getbyte
    assert_can_read
    status, text, len, err = GLib.g_io_channel_read_chars(@io, 1)
    _set_status(status)
    GLib.raise_error(err)
    if status == GLib::GIOStatus::G_IO_STATUS_EOF
      nil
    else
      text[0].ord
    end
  end
  
  # def ungetbyte(byte)
  #   assert_can_read
  #   if byte.class == String
  #     byte.reverse.each_char do |ch|
  #       err = APR.apr_file_ungetc(ch, @io)
  #       APR.raise_apr_errno(err)
  #     end
  #   elsif byte.class == Fixnum
  #     err = APR.apr_file_ungetc(byte.chr, @io)
  #     APR.raise_apr_errno(err)
  #   else
  #     raise ArgumentError.new("Expected a String or Fixnum")
  #   end
  # end
  # alias ungetc ungetbyte # No difference between byte & char in mruby
  
  def seek(amount, whence=IO::SEEK_SET)
    whence = IO::Util.ruby_seek_to_glib(whence)
    status, err = GLib.g_io_channel_seek_position(@io, amount, whence)
    _set_status(status)
    GLib.raise_error(err)
    # TODO: Should return current position
  end
  
  def _set_status(status)
    if status == GLib::GIOStatus::G_IO_STATUS_EOF
      @eof = true
    end
  end
end
