File.open('./bindings/src/mruby_GLib.c', 'r') do |f|
  this_fn_name = ''
  todo = false
  f.each_line do |line|
    if line =~ /^#if BIND.*FUNCTION/
      this_fn_name = line.split(' ')[1].strip
      todo = false
      next
    end

    todo = true if line =~ /todo/i

    if line =~ /^#endif/
      puts this_fn_name unless todo
      todo = false
    end

    if line =~ /gem_init/
      break
    end
  end
end
