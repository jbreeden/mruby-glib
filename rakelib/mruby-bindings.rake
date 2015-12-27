namespace :bindings do
  desc 'Extract type information from C files'
  task :scrape do
    declarations = File.expand_path("declarations.json")
    headers = File.expand_path("mruby-bindings.in/headers_list.txt")
    # I just happened to put it here. Should probably use pkg-config
    # to determine this at runtime.
    rm declarations if File.exists?(declarations)
    ENV['PKG_CONFIG_PATH'] = "/usr/local/opt/glib2/lib/pkgconfig/"
    cd "#{GLIB_HOME}/include/glib-2.0" do
      cflags = `pkg-config glib-2.0 --cflags`.sub("\n", '')
      sh "cat #{headers} | xargs -n 1 clang2json #{cflags} | grep -v _g_utf8_make_valid >> #{declarations}"
      sh "clang2json #{cflags} #{GLIB_HOME}/lib/glib-2.0/include/glibconfig.h | grep -v _g_utf8_make_valid >> #{declarations}"
    end
  end

  desc 'Generate bindings'
  task :generate do
    cmd = ['mrbind generate']
    cmd << '-input declarations.json'
    cmd << '-module GLib'
    cmd << '-gem mruby-glib'
    cmd << '-load mruby-bindings.in/ctypes.rb' if File.exists?('mruby-bindings.in/ctypes.rb')
    cmd << '-load mruby-bindings.in/macro_types.rb' if File.exists?('mruby-bindings.in/macro_types.rb')
    cmd << '-load mruby-bindings.in/fn_types.rb' if File.exists?('mruby-bindings.in/fn_types.rb')
    cmd << '-includes mruby-bindings.in/includes.h'
    cmd << '-output bindings'
    cmd << '-force'
    sh cmd.join(' ')
  end
  
  desc "Merge generated code into mrbgem"
  task :merge do
    sh "mrbind merge -from bindings -to ."
  end
  
  namespace :merge do
    desc "Merge generated code from src folder"
    task :src do
      sh "mrbind merge -from bindings -to . src"
    end
    
    desc "Merge generated code from include folder"
    task :include do
      sh "mrbind merge -from bindings -to . include"
    end
    
    desc "Merge generated code from mrblib folder"
    task :mrblib do
      sh "mrbind merge -from bindings -to . mrblib"
    end
  end
  
  task :fn_count do
    sh "cat include/mruby_GLib_functions.h | egrep 'TRUE|FALSE' | wc -l"
  end

  task :bound_fns do
    sh "cat include/mruby_GLib_functions.h | egrep 'TRUE'"
  end

  task :bound_fn_count do
    sh "cat include/mruby_GLib_functions.h | egrep 'TRUE' | wc -l"
  end

  task :unbound_fns do
    sh "cat include/mruby_GLib_functions.h | egrep 'FALSE'"
  end

  task :unbound_fn_count do
    sh "cat include/mruby_GLib_functions.h | egrep 'FALSE' | wc -l"
  end
end
