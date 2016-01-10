class File < IO
  NULL = GLib::OS == 'Windows' ? 'NUL' : '/dev/null'
  
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
    super()
    @filename = filename
    @mode = mode
    
    raise ArgumentError.new("Invalid mode: #{mode}") if mode.length > 3
    if mode.include? 't'
      @text_mode = true
      mode = mode.gsub('t', '')
    end
    if mode.include? 'b'
      @binary_mode = true
      mode = mode.gsub('b', '')
    end
    if @text_mode && @binary_mode
      raise ArgumentError.new("Invalid mode: #{mode} (cannot specify binary and text mode together)")
    end
    
    @gfile = GLib.g_file_new_for_path(filename)
    case mode
    when 'r'
      @iostream = nil
      @istream, err = GLib.g_file_read(@gfile)
      GLib.raise_error(err, SystemCallError)
      @ostream = nil
    when 'r+'
      @iostream, err = GLib.g_file_open_readwrite(@gfile)
      GLib.raise_error(err, SystemCallError)
      @istream = GLib.g_io_stream_get_input_stream(@iostream)
      @ostream = GLib.g_io_stream_get_output_stream(@iostream)
    when 'w'
      @iostream = nil
      @istream = nil
      @ostream, err = GLib.g_file_append_to(@gfile, GLib::GFileCreateFlags::G_FILE_CREATE_REPLACE_DESTINATION)
      GLib.raise_error(err, SystemCallError)
      truncate(0)
    when 'w+'
      @iostream, err = GLib.g_file_open_readwrite(@gfile)
      GLib.raise_error(err, SystemCallError)
      @istream = GLib.g_io_stream_get_input_stream(@iostream)
      @ostream = GLib.g_io_stream_get_output_stream(@iostream)
      truncate(0)
    when 'a'
      @iostream = nil
      @istream = nil
      @ostream, err = GLib.g_file_append_to(@gfile, GLib::GFileCreateFlags::G_FILE_CREATE_NONE)
      GLib.raise_error(err, SystemCallError)
    when 'a+'
      @iostream, err = GLib.g_file_append_to_readwrite(@gfile, GLib::GFileCreateFlags::G_FILE_CREATE_NONE)
      GLib.raise_error(err, SystemCallError)
      @istream = GLib.g_io_stream_get_input_stream(@iostream)
      @ostream = GLib.g_io_stream_get_output_stream(@iostream)
    else
      raise ArgumentError.new("Invalid mode: #{mode}")
    end
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
    GLib.g_file_get_basename(GLib.g_file_new_for_path(file_name))
  end

  # def self.ctime(path)
  #   stat = File::Stat.new(path)
  #   stat.ctime
  # end

  def self.dirname(path)
    GLib.g_path_get_dirname(path)
  end

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
  
  def eof?
    # Matching CRuby's behavior of reporting eof *before* trying to read past it
    # There is probably a less-shitty way to do this.
    pos = self.tell
    self.seek(0, IO::SEEK_END)
    size = self.tell
    self.seek(pos, IO::SEEK_SET)
    pos >= size
  end
  alias eof eof?
end
