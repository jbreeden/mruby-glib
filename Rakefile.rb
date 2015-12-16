desc 'Generate declarations.json'
task :declarations do
  sh "find ../glib/glib -ipath '../glib/glib/g*.h' | xargs -n 1 clang2json -I ../glib > declarations.json"
end

desc 'Generate bindings'
task :bindings do
  sh "ruby ~/projects/mruby-bindings/mruby_bindings.rb --input declarations.json --gem mruby-glib --module GLib --force --verbose"
end
