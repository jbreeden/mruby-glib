GLIB_HOME = "/usr/local/Cellar/glib/2.46.2"

namespace :test do
  def each_test_file(&block)
    Dir['specs/*.rb'].reject { |f| File.basename(f) == 'fixture.rb' }.each(&block)
  end

  def test_file_name(test_file)
    File.basename(test_file).sub(/\.rb$/, '')
  end
  
  each_test_file do |test_file|
    test = test_file_name(test_file)
    desc "Run the #{test} tests"
    task (test) do
      Dir.chdir 'specs' do
        system "mruby #{test_file.sub(/^specs\//, '')}"
      end
    end
  end

  desc "Run all of the tests"
  task :all do
    Dir.chdir 'specs' do
      Dir['*.rb'].reject { |f| File.basename(f) == 'specs/fixture.rb' }.sort.each do |f|
        system "mruby #{f}"
      end
    end
  end

  desc "Run all the tests and print a summary"
  task :summary do
    IO.popen("rake test:all", "r") do |io|
      while s = io.gets
        puts s if /(^[a-z])|tests failed/i =~ s
      end
    end
  end
end
