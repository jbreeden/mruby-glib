class Dir
  # def initialize(path)
  #
  # end
  #
  # def self.open(path, &block)
  #
  # end

  def self.chdir(path, &block)
    if block.nil?
      status = GLib.g_chdir(path)
      raise SystemCallError.new("Cannot chdir into #{path}") unless status == 0
    else
      prev = pwd
      begin
        chdir path
        block[]
      ensure
        chdir prev
      end
    end
  end

  # def self.chroot
  #
  # end

  def self.delete(path)
    status = GLib.g_rmdir(path)
    raise SystemCallError.new("Cannot delete directory #{path}") unless status == 0
  end
  class << self
    alias rmdir delete
    alias unlink rmdir
  end

  def self.entries(path)
    results = ['.']
    results.push('..') if GLib.g_file_has_parent(GLib.g_file_new_for_path(path), nil)
    dir, err = GLib.g_dir_open(path, 0)
    GLib.raise_error(err, SystemCallError)

    while name = GLib.g_dir_read_name(dir)
      results.push(name)
    end
    results
  end

  def self.exists?(path)
    File.directory?(path)
  end
  class << self
    alias exist? exists?
  end

  def self.foreach(path, &block)
    files = entries(path)
    if block.nil?
      self.to_enum :foreach, path
    else
      files.each &block
    end
  end

  def self.getcwd
    GLib.g_get_current_dir
  end
  class << self
    alias pwd getcwd
  end

  def self.home
    GLib.g_get_home_dir
  end

  def self.mkdir(path)
    GLib.g_mkdir(path, 0777)
  end

  def self.tmpdir
    GLib.g_get_tmp_dir
  end

  def self.mktmpdir(prefix_suffix = nil, parent = nil)
    if block_given?
      raise "Cannot securely delete temp dir contents, so mktmpdir does not yet support a block parameter"
      # Need FileUtils::remove_entry_secure to fix
    end

    prefix_suffix = case prefix_suffix
    when NilClass
      ['d', '']
    when String
      [prefix_suffix, '']
    when Array
      prefix_suffix
    else
      raise ArgumentError.new("Invalid first parameter to Dir.mktmpdir")
    end

    parent = case parent
    when String
      parent
    when NilClass
      Dir.tmpdir
    else
      raise ArgumentError.new("Expected parent dir argument to be a String")
    end
    parent = parent[parent.length - 1] == '/' ? parent : "#{parent}/"

    now = Time.now

    dirname = nil
    loop do
      random_string = (0..5).map { (rand(26) + 'a'.ord).chr }.join('')
      dirname = "%{parent}%{prefix}%{date}-%{rand}%{suffix}" % {
        parent: parent,
        prefix: prefix_suffix.first,
        date: now.year.to_s + ('%02d' % now.month) + ('%02d' % now.day),
        rand: random_string,
        suffix: prefix_suffix.last
      }
      break unless Dir.exists?(dirname)
    end

    self.mkdir(dirname)
    dirname
  end
end
