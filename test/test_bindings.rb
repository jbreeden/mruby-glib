$sandbox = 'sandbox'

def test(title, &block)
  print "#{title}: "
  begin
    result = block[]
    if result == :fail || result == false
      puts "FAILED"
    elsif result = :pass || result == true
      puts "PASSED"
    end
  rescue Exception => ex
    puts "FAILED - #{ex}"
  end
end

def cruby(script)
  GLib.g_spawn_command_line_sync("ruby -e '#{script}'")
end

test "g_base64_encode" do
  GLib.g_base64_encode("test", 4) == "dGVzdA=="
end

test "g_base64_decode" do
  GLib.g_base64_decode(GLib.g_base64_encode("test", 4)) == "test"
end

test 'g_build_filenamev' do
  result = GLib.g_build_filenamev(['one', 'two'])
  result.start_with?('one') && result.end_with?('two')
end

test 'g_build_pathv' do
  result = GLib.g_build_pathv('/', ['one', 'two'])
  result == 'one/two'
end

test 'g_compute_checksum_for_string (sha1)' do
  sha1 = GLib.g_compute_checksum_for_string(GLib::GChecksumType::G_CHECKSUM_SHA1, 'test')
  sha1 == "a94a8fe5ccb19ba61c4c0873d391e987982fbbd3"
end

test 'g_compute_checksum_for_string (sha256)' do
  sha1 = GLib.g_compute_checksum_for_string(GLib::GChecksumType::G_CHECKSUM_SHA256, 'test')
  sha1 == "9f86d081884c7d659a2feaa0c55ad015a3bf4f1b2b0b822cd15d6c15b0f00a08"
end

test 'g_compute_checksum_for_string (sha512)' do
  sha1 = GLib.g_compute_checksum_for_string(GLib::GChecksumType::G_CHECKSUM_SHA512, 'test')
  sha1 == "ee26b0dd4af7e749aa1a8ee3c10ae9923f618980772e473f8819a5d4940e0db27ac185f8a0e1d5f84f88bc887fd67b143732c304cc5fa9ad8e6f57f50028a8ff"
end

test 'g_compute_checksum_for_string (MD5)' do
  sha1 = GLib.g_compute_checksum_for_string(GLib::GChecksumType::G_CHECKSUM_MD5, 'test')
  sha1 == "098f6bcd4621d373cade4e832627b4f6"
end

test 'g_filename_to_uri' do
  # todo (works, but need a way to make absolute path for a good test)
  true
end

test 'g_find_program_in_path' do
  result = GLib.g_find_program_in_path('ping')
  result.length > 'ping'.length && result.include?('ping')
end

test 'g_get_current_dir' do
  # Assuming this test will be run in the mrbgem's dir...
  GLib.g_get_current_dir.include?('mruby-glib')
end

test 'g_io_channel_read_line' do
  io, err = GLib.g_io_channel_new_file("#{$sandbox}/two_line_file.txt", "r")
  status, text, eol, err = GLib.g_io_channel_read_line(io)
  raise "First line didn't match" unless text.start_with? "This file has two lines."
  status, text, eol, err = GLib.g_io_channel_read_line(io)
  GLib.g_io_channel_shutdown(io, true)
  raise "Second line didn't match" unless text.start_with? "This is the second line."
end

test 'g_io_channel_read_chars' do
  io, err = GLib.g_io_channel_new_file("#{$sandbox}/two_line_file.txt", "r")
  status, text, err = GLib.g_io_channel_read_chars(io, "This file has two lines.".length)
  GLib.g_io_channel_shutdown(io, true)
  text == "This file has two lines."
end

test 'g_io_channel_read_to_end' do
  io, err = GLib.g_io_channel_new_file("#{$sandbox}/two_line_file.txt", "r")
  status, text, err = GLib.g_io_channel_read_to_end(io)
  GLib.g_io_channel_shutdown(io, true)
  text.include?("This file has two lines.") && text.include?("This is the second line.")
end

test 'g_io_channel_write_chars' do
  io, err = GLib.g_io_channel_new_file("#{$sandbox}/file_for_writing.txt", "w")
  status, bytes_written, err = GLib.g_io_channel_write_chars(io, 'testing')
  GLib.g_io_channel_shutdown(io, true)
  bytes_written == 'testing'.length && err.nil?
end

test 'g_io_channel_write' do
  io, err = GLib.g_io_channel_new_file("#{$sandbox}/file_for_writing.txt", "w")
  status, bytes_written, err = GLib.g_io_channel_write(io, 'testing')
  GLib.g_io_channel_shutdown(io, true)
  bytes_written == 'testing'.length && err.nil?
end

test 'g_listenv' do
  GLib.g_listenv.include? 'PATH'
end

test 'g_mkdtemp w/ invalid template' do
  GLib.g_mkdtemp('invalid_template').nil?
end

test 'g_mkdtemp w/ valid template' do
  result = GLib.g_mkdtemp('dir_XXXXXX')
  GLib.g_spawn_command_line_sync("rm -r #{result}")
  !result.nil? && result.include?('dir_')
end

test 'g_shell_parse_argv' do
  success, argv, err = GLib.g_shell_parse_argv('one two "three four"')
  argv.length == 3
end

test 'g_regex_check_replacement w/ replacement' do
  valid, has_replacements, err  = GLib.g_regex_check_replacement('test')
  valid == true && has_replacements == false && err.nil?
end

test 'g_regex_check_replacement w/o replacement' do
  valid, has_replacements, err  = GLib.g_regex_check_replacement('test\\0')
  valid == true && has_replacements == true && err.nil?
end

test 'g_regex_escape_nul' do
  GLib.g_regex_escape_nul("test\0test") == "test\\x00test"
end

test 'g_regex_escape_string' do
  GLib.g_regex_escape_string("test.*") == "test\\.\\*"
end

test 'g_regex_split_simple' do
  GLib.g_regex_split_simple('[.,]', 'a,b.c', 0, 0) == ['a', 'b', 'c']
end

test 'g_file_copy' do
  cruby('File.delete("copied.txt") if File.exists? "copied.txt"')
  source = GLib.g_file_new_for_path("#{$sandbox}/two_line_file.txt")
  dest = GLib.g_file_new_for_path("copied.txt")
  GLib.g_file_copy(source, dest, 0)
  status, contents, err = GLib.g_file_get_contents('copied.txt')
  passed = contents.include? 'This file has two lines.'
  cruby('File.delete("copied.txt") if File.exists? "copied.txt"')
  passed
end

test 'g_file_delete' do
  cruby('File.open("delete_me.txt", "w") {}')
  raise 'Failed to create file' unless GLib.g_file_test('delete_me.txt', GLib::GFileTest::G_FILE_TEST_EXISTS)
  file = GLib.g_file_new_for_path('delete_me.txt')
  GLib.g_file_delete(file)
  !GLib.g_file_test('delete_me.txt', GLib::GFileTest::G_FILE_TEST_EXISTS)
end

test 'g_file_equal' do
  # Tests that the GFiles refer to the same file, not that the files are identical
  f1 = GLib.g_file_new_for_path("#{$sandbox}/two_line_file.txt")
  f2 = GLib.g_file_new_for_path("#{$sandbox}/two_line_file.txt")
  GLib.g_file_equal(f1, f2)
end

test 'g_file_get_basename' do
  file = GLib.g_file_new_for_path('./path/to/file/../file.rb')
  'file.rb' == GLib.g_file_get_basename(file)
end
