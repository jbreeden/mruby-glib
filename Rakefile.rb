GLIB_HOME = "/usr/local/Cellar/glib/2.46.2"

task :test do
  sh 'mruby test/test_bindings.rb'
end
