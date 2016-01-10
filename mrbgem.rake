MRUBY_GLIB_GEM_DIR = File.expand_path(File.dirname(__FILE__))

MRuby::Gem::Specification.new('mruby-glib') do |spec|
  spec.author = 'Jared Breeden'
  spec.license = 'MIT'
  spec.summary = 'Bindings for GLib'
  spec.bins << 'mruby-glib'
  
  spec.rbfiles = %w[
    GLib.rb
    GLib_ext.rb
    io.rb
    file.rb
  ].map { |f| "#{MRUBY_GLIB_GEM_DIR}/mrblib/#{f}" }
    .concat(Dir["#{MRUBY_GLIB_GEM_DIR}/mrblib/**/*.rb"])
    .uniq
end
