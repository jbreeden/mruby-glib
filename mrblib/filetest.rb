module FileTest

  # def blockdev?(path)
  #   FileTest.is_type?(path, APR::AprFiletypeE::APR_BLK)
  # end
  # 
  # def chardev?(path)
  #   FileTest.is_type?(path, APR::AprFiletypeE::APR_CHR)
  # end

  def directory?(path)
    GLib.g_file_test(path, GLib::GFileTest::G_FILE_TEST_IS_DIR)
  end
  module_function :directory?

  def executable?(path)
    GLib.g_file_test(path, GLib::GFileTest::G_FILE_TEST_IS_EXECUTABLE)
  end
  module_function :executable?
  
  # def executable_real?(path)
  #   stat = File::Stat.new(path) rescue nil
  #   stat.executable_real?
  # end

  def exists?(path)
    GLib.g_file_test(path, GLib::GFileTest::G_FILE_TEST_EXISTS)
  end
  alias exist? exists?
  module_function :exists?
  module_function :exist?

  def file?(path)
    GLib.g_file_test(path, GLib::GFileTest::G_FILE_TEST_IS_REGULAR)
  end
  module_function :file?

  # def grpowned?(path)
  #   stat = File::Stat.new(path) rescue nil
  #   stat.grpowned?
  # end

  # def identical?(path1, path2)
  #
  # end
  #
  # def owned?(path)
  #   stat = File::Stat.new(path) rescue nil
  #   stat.owned?
  # end

  # def pipe?(path)
  #   FileTest.is_type?(path, APR::AprFiletypeE::APR_PIPE)
  # end

  # def readable?(path)
  #   stat = File::Stat.new(path) rescue nil
  #   stat.readable?
  # end
  #
  # def readable_real?(path)
  #   stat = File::Stat.new(path) rescue nil
  #   stat.readable_real?
  # end
  #
  # def setgid?(path)
  #   stat = File::Stat.new(path) rescue nil
  #   stat.setgid?
  # end
  #
  # def setuid?(path)
  #   stat = File::Stat.new(path) rescue nil
  #   stat.setuid?
  # end

  def size(path)
    stat = File::Stat.new(path)
    stat.size
  end
  alias size? size
  module_function :size
  module_function :size?

  # def socket?(path)
  #   FileTest.is_type?(path, APR::AprFiletypeE::APR_SOCKET)
  # end

  # def sticky?(path)
  #   stat = File::Stat.new(path) rescue nil
  #   stat.sticky?
  # end

  def symlink?(path)
    GLib.g_file_test(path, GLib::GFileTest::G_FILE_TEST_IS_SYMLINK)
  end
  module_function :symlink?

  # def world_readable?(path)
  #   stat = File::Stat.new(path) rescue nil
  #   stat.world_readable?
  # end
  #
  # def world_writable?(path)
  #   stat = File::Stat.new(path) rescue nil
  #   stat.world_writable?
  # end
  #
  # def writable?(path)
  #   stat = File::Stat.new(path) rescue nil
  #   stat.writable?
  # end
  #
  # def writable_real?(path)
  #   stat = File::Stat.new(path) rescue nil
  #   stat.writable_real?
  # end

  def zero?(path)
    stat = File::Stat.new(path) rescue nil
    !stat.nil? && stat.zero?
  end
end

class File
  extend FileTest
end
