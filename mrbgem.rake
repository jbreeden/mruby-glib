MRUBY_GLIB_GEM_DIR = File.dirname(__FILE__)

MRuby::Gem::Specification.new('mruby-glib') do |spec|
  spec.author = 'Jared Breeden'
  spec.license = 'MIT'
  spec.summary = 'Bindings for GLib'
  
  spec.rbfiles = Dir["#{$APR_GEM_DIR}/mrblib/**/*.rb"]
    .map { |f| File.expand_path(f) }
    .uniq
end
