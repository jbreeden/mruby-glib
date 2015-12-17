desc 'Generate declarations.json'
task :declarations do
  declarations = File.expand_path(File.dirname(__FILE__)) + "/declarations.json"
  headers = File.expand_path(File.dirname(__FILE__)) + "/headers_list.txt"
  # I just happened to put it here. Should probably use pkg-config
  # to determine this at runtime.
  cd '/usr/local/opt/glib2/include/glib-2.0' do
    sh "cat #{headers} | xargs -n 1 clang2json -I . -I ../../lib/glib-2.0/include >> #{declarations}"
  end
end

desc 'Generate bindings'
task :bindings do
  sh "ruby ~/projects/mruby-bindings/mruby_bindings.rb -l ctypes.rb --input declarations.json --gem mruby-glib --module GLib --force --verbose"
end

task :fncount do
  sh "cat bindings/include/mruby_GLib_functions.h | egrep 'TRUE|FALSE' | wc -l"
end

task :boundcount do
  sh "cat bindings/include/mruby_GLib_functions.h | egrep 'TRUE' | wc -l"
end

task :unboundcount do
  sh "cat bindings/include/mruby_GLib_functions.h | egrep 'FALSE' | wc -l"
end

task :macros do
  sh "cat bindings/src/mruby_GLib_macro_constants.c | ruby -ne 'match = $_[/mrb_define.*\"(.*)\"/, 1]; puts match if match'"
end
