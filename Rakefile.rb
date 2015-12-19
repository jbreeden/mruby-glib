GLIB_HOME = "/usr/local/opt/glib2"

desc 'Generate declarations.json'
task :declarations do
  declarations = File.expand_path(File.dirname(__FILE__)) + "/mruby_bindings_config/declarations.json"
  headers = File.expand_path(File.dirname(__FILE__)) + "/mruby_bindings_config/headers_list.txt"
  # I just happened to put it here. Should probably use pkg-config
  # to determine this at runtime.
  cd "#{GLIB_HOME}/include/glib-2.0" do
    sh "cat #{headers} | xargs -n 1 clang2json -I . -I ../../lib/glib-2.0/include >> #{declarations}"
  end
end

desc 'Generate bindings'
task :bindings do
  sh <<EOS.split("\n").join(' ').gsub(/\s+/, ' ')
    ruby ~/projects/mruby-bindings/mruby_bindings.rb
      --includes mruby_bindings_config/includes.h
      -l mruby_bindings_config/ctypes.rb
      -l mruby_bindings_config/fn_types.rb
      -l mruby_bindings_config/macro_types.rb
      --input mruby_bindings_config/declarations.json
      --gem mruby-glib
      --module GLib
      --skip mrbgem.rake
      --force
EOS
end

namespace :pull do
  desc 'Pull include files from the generated bindings into the mrbgem'
  task :include do
    mkdir 'include' unless Dir.exists?('include')
    sh "cp -r bindings/include/* ./include"
  end
  
  desc 'Pull src files from the generated bindings into the mrbgem'
  task :src do
    mkdir 'src' unless Dir.exists?('src')
    sh "cp -r bindings/src/* ./src"
  end
  
  desc 'Pull mrblib files from the generated bindings into the mrbgem'
  task :mrblib do
    mkdir 'mrblib' unless Dir.exists?('mrblib')
    sh "cp -r bindings/mrblib/* ./mrblib"
  end
  
  desc 'Pull mrbgem.rake file from the generated bindings into the mrbgem'
  task :mrbgem do
    sh "cp bindings/mrbgem.rake ./mrbgem.rake" if File.exists?('bindings/mrbgem.rake')
  end
  
  desc 'Pull all files from the generated bindings into the mrbgem'
  task :all => [:include, :src, :mrblib, :mrbgem]
end

task :fncount do
  sh "cat bindings/include/mruby_GLib_functions.h | egrep 'TRUE|FALSE' | wc -l"
end

task :bound do
  sh "cat bindings/include/mruby_GLib_functions.h | egrep 'TRUE'"
end

task :boundcount do
  sh "cat bindings/include/mruby_GLib_functions.h | egrep 'TRUE' | wc -l"
end

task :unbound do
  sh "cat bindings/include/mruby_GLib_functions.h | egrep 'FALSE'"
end

task :unboundcount do
  sh "cat bindings/include/mruby_GLib_functions.h | egrep 'FALSE' | wc -l"
end

task :macros do
  sh "cat bindings/src/mruby_GLib_macro_constants.c | ruby -ne 'match = $_[/mrb_define.*\"(.*)\"/, 1]; puts match if match'"
end

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
