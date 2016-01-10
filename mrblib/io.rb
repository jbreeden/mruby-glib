class IO
  attr_reader :istream, :ostream, :iostream

  # Semi-Private Util Functions
  # ---------------------------

  module Private
    def self.ruby_seek_to_glib(seek)
      case seek
      when :SET, SEEK_SET
        GLib::GSeekType::G_SEEK_SET
      when :CUR, SEEK_CUR
        GLib::GSeekType::G_SEEK_CUR
      when :END, SEEK_END
        GLib::GSeekType::G_SEEK_END
      else
        raise ArgumentError.new("Invalid seek location #{seek}")
      end
    end

  end

  # Constants
  # ---------

  SEEK_SET = 0
  SEEK_CUR = 1
  SEEK_END = 2
  RDONLY = 0
  WRONLY = 1
  RDWR = 2
  APPEND = 8
  CREAT = 512
  EXCL = 2048
  NONBLOCK = 4
  TRUNC = 1024
  NOCTTY = 131072
  BINARY = 0
  SYNC = 128
  DSYNC = 4194304
  NOFOLLOW = 256
  LOCK_SH = 1
  LOCK_EX = 2
  LOCK_UN = 8
  LOCK_NB = 4
  FNM_NOESCAPE = 1
  FNM_PATHNAME = 2
  FNM_DOTMATCH = 4
  FNM_CASEFOLD = 8
  FNM_EXTGLOB = 16
  FNM_SYSCASE = 0

  # Class Methods
  # -------------

  # def self.pipe
  #   err, pool = APR.apr_pool_create(nil)
  # 
  #   err, readEnd, writeEnd = APR.apr_file_pipe_create pool
  #   APR.raise_apr_errno(err)
  # 
  #   read_file = Pipe.new(readEnd, 'r', pool)
  #   write_file = Pipe.new(writeEnd, 'w', pool)
  # 
  #   [read_file, write_file]
  # end

  # def self.popen(*command)
  #   env = {}
  #   cmd = nil
  #   mode = "r"
  #   opt = {}
  # 
  #   READ_END = 0
  #   WRITE_END = 1
  # 
  # 
  #   if command.length == 0 || command.length > 4
  #     raise ArgumentError.new("Wrong number of arguments. #{command.length} for 1..4")
  #   end
  #   if command.first.class == Hash
  #     env = command.shift
  #   end
  #   if command.last.class == Hash
  #     opt = command.pop
  #   end
  #   cmd = command.shift
  #   unless command.empty?
  #     mode = command.shift
  #   end
  # 
  #   # mode_str_to_apr_flags throws on invalid, so input is sanitized after
  #   flags = IO::Private.mode_str_to_apr_flags(mode)
  #   child_in_pipe_ends = []
  #   child_out_pipe_ends = []
  #   read_pipe = nil  # These are set while interpretting the mode
  #   write_pipe = nil # string, and used to construct the BidirectionalPipe
  #   if (flags & APR::APR_FOPEN_WRITE) != 0
  #     child_in_pipe_ends = IO.pipe
  #     opt[:in]   = child_in_pipe_ends[READ_END]
  #     write_pipe = child_in_pipe_ends[WRITE_END]
  #     # Don't let the child inherit our side of the pipe
  #     APR.apr_file_inherit_unset(write_pipe.native_file)
  #   end
  #   if (flags & APR::APR_FOPEN_READ) != 0
  #     child_out_pipe_ends = IO.pipe
  #     opt[:out] = child_out_pipe_ends[WRITE_END]
  #     read_pipe = child_out_pipe_ends[READ_END]
  #     # Don't let the child inherit our side of the pipe
  #     APR.apr_file_inherit_unset(read_pipe.native_file)
  #   end
  # 
  #   pid = Process.spawn(env, *cmd, opt)
  # 
  #   # Close the ends of the pipes that belong to the child
  #   # (This makes sure, for example, end of file is sent when the child
  #   #  closes their end of stdout )
  #   if read_pipe
  #     # We're "reading" the output, so close the write end of the ouput
  #     child_out_pipe_ends[WRITE_END].close
  #     # Don't let the child inherit our side of the pipe
  #     APR.apr_file_inherit_unset(read_pipe.native_file)
  #   end
  #   if write_pipe
  #     # We're "writing" to the input, so close the read end of the input
  #     child_in_pipe_ends[READ_END].close
  #   end
  # 
  #   bidirectional_pipe = BidirectionalPipe.new({
  #     pid: pid,
  #     read: read_pipe,
  #     write: write_pipe
  #   })
  # 
  #   if block_given?
  #     yield bidirectional_pipe
  #     bidirectional_pipe.close
  #   else
  #     return bidirectional_pipe
  #   end
  # end
  
  def initialize
    @closed = false
    @eof = false
  end

  def <<(obj)
    self.write(obj)
  end
  
  def assert_can_read
    if closed? || (@iostream.nil? && @istream.nil?)
      raise IOError.new 'not opened for reading'
    end
  end
  
  def assert_can_write
    if closed? || (@iostream.nil? && @ostream.nil?)
      raise IOError.new 'not opened for writing'
    end
  end
  
  def close
    unless @closed
      if @iostream
        GLib.g_io_stream_close(@iostream)
      else
        GLib.g_input_stream_close(@istream) if @istream
        GLib.g_output_stream_close(@ostream) if @ostream
      end
      @closed = true
    end
  end
  
  def closed?
    @closed
  end

  def eof?
    assert_can_read
    @eof
  end
  alias eof eof?
  
  def flush
    assert_can_write
    GLib.raise_error(GLib.g_output_stream_flush(@ostream), SystemCallError)
  end

  def gets(sep=nil, limit=nil)
    # Input Normalization
    _sep = $/
    _limit = nil
    # - Either nothing is provided
    if sep.nil? && limit.nil?
      # Just continue
    # - Or sep is provided
    elsif sep.class == String && limit.nil?
      _sep = sep
    # - Or limit
    elsif sep.class == Fixnum && limit.nil?
      _limit = sep
    # - Or both
    elsif sep.class == String && limit.class == Fixnum
      _sep = sep
      _limit = limit
    # - Or the call is invalid
    else
      raise ArgumentError.new "Invalid arguments"
    end

    # Short Circuits
    assert_can_read
    raise ArgumentError.new("Limit param must be >= 0") if _limit.to_i < 0
    return "" if _limit == 0

    # Normal Path
    result = nil  # Default for reads at EOF unless limit == 0 (above)
    count = 0
    loop {
      str = self.read(1)
      break if str == nil

      if result.nil?
        result = str
      else
        result += str
      end

      count += 1
      break if result.end_with?(_sep) || (!_limit.nil? && count >= _limit)
    }

    result
  end

  def each(&block)
    assert_can_read
    if block
      while line = self.gets
        block[line]
      end
    else
      enum = self.to_enum(:each)
    end
  end
  alias each_line each

  def each_byte(&block)
    assert_can_read
    if block
      while b = self.read(1)
        block[b.ord]
      end
    else
      self.to_enum(:each_byte)
    end
  end

  def each_char(&block)
    assert_can_read
    if block
      while b = self.read(1)
        block[b]
      end
    else
      self.to_enum(:each_byte)
    end
  end

  def getc
    assert_can_read
    bytes_read, text, err = GLib.g_input_stream_read(@istream, 1)
    GLib.raise_error(err, SystemCallError)
    if bytes_read == 0
      @eof = true
      nil
    else
      text[0]
    end
  end
  
  def getbyte
    assert_can_read
    bytes_read, text, err = GLib.g_input_stream_read(@istream, 1)
    GLib.raise_error(err, SystemCallError)
    if bytes_read == 0
      @eof = true
      nil
    else
      text[0].ord
    end
  end

  def print(*objs)
    assert_can_write
    objs.each_with_index do |obj, i|
      self.write($,.to_s) if i > 0  && !$,.nil?
      self.write(obj)
    end
    self.write($\.to_s) unless $\.nil?
    nil
  end

  def puts(*args)
    assert_can_write

    # All array arguments should be flattened such that all elements are written on a new "line"
    args = args.flatten

    # On MRI, $\ is nil by default, but puts still defaults to newlines
    sep = $\.nil? ? "\n" : $\

    if args.length > 0
      args.each do |arg|
        as_str = arg.to_s
        unless as_str.end_with?(sep)
          as_str += sep
        end
        self.write(as_str)
      end
    else
      self.write(sep)
    end
    nil
  end
  
  def read(length = nil)
    assert_can_read
  
    read = ""
    if length.nil?
      loop {
        status, text, err = GLib.g_input_stream_read(@istream, 100)
        @eof = status == 0
        GLib.raise_error(err, SystemCallError)
        break if text.nil? || text.length == 0
        read += text
      }
    elsif length > 0
      status, text, err = GLib.g_input_stream_read(@istream, length)
      @eof = status == 0
      GLib.raise_error(err, SystemCallError)
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

  def seek(amount, whence=IO::SEEK_SET)
    whence = Private.ruby_seek_to_glib(whence)
    actual_stream = @iostream || @istream || @ostream
    raise SystemCallError.new("Illegal seek") unless GLib.g_seekable_can_seek(actual_stream)
    status, err = GLib.g_seekable_seek(actual_stream, amount, whence)
    GLib.raise_error(err, SystemCallError)
    GLib.g_seekable_tell(actual_stream)
  end
  
  def truncate(size)
    assert_can_write
    actual_stream = @iostream || @ostream
    raise SystemCallError.new("Illegal truncate") unless GLib.g_seekable_can_truncate(actual_stream)
    status, err = GLib.g_seekable_truncate(actual_stream, size)
    GLib.raise_error(err, SystemCallError)
    GLib.g_seekable_tell(actual_stream)
  end
  
  def tell
    actual_stream = @iostream || @istream || @ostream
    GLib.g_seekable_tell(actual_stream)
  end
  
  def write(str)
    assert_can_write
    as_str = str.to_s
    bytes_written, err = GLib.g_output_stream_write(@ostream, as_str)
    GLib.raise_error(err, SystemCallError)
    bytes_written
  end
end

class IO::GInputStreamWrapper < IO
  def initialize(istream)
    super()
    @istream = istream
  end
end

class IO::GOutputStreamWrapper < IO
  def initialize(ostream)
    super()
    @ostream = ostream
  end
end

class IO::GIOStreamWrapper < IO
  def initialize(iostream)
    super()
    @iostream = iostream
    @istream = GLib.g_io_stream_get_input_stream(@iostream)
    @ostream = GLib.g_io_stream_get_output_stream(@iostream)
  end
end
