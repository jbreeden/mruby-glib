GLIB_HOME = "/usr/local/Cellar/glib/2.46.2"

task :test do
  sh 'mruby test/test_bindings.rb'
end

task :specs do
  Dir['specs/*'].each do |spec|
    system "mruby #{spec}"
  end
end

namespace :api do
  run = proc { |ruby_cmd| system "echo \"puts ERB.new(File.read('api.erb'), nil, '-').result\" | #{ruby_cmd}" }
  desc 'Print the MRuby APIs'
  task :mruby do
    run["mruby"]
  end
  desc 'Print the CRuby APIs'
  task :cruby do
    run["ruby -r erb"]
  end
end
