CTypes.typedef('char *', 'gchar *')
CTypes['gchar *'].return_cleanup = "g_free(%{value});"
CTypes.typedef('const char *', 'const gchar *')

CTypes.define('struct _GError **') do
  self.recv_type = "struct GError *"
  self.out_only = true
  boxing_fn.name = "mruby_box__GError"
  boxing_fn.invocation_template = "mrb_value %{as} = (%{box} == NULL ? mrb_nil_value() : #{boxing_fn.name}(mrb, %{box}));"
end

CTypes.define('in:nullterminated:cstring:array') do
  # `defined`ed type name is bogus (arbitrary, and used for lookups)
  self.type_name = 'char **'
  self.recv_type = 'mrb_value'
  self.format_specifier = 'A!'
  self.needs_unboxing = true
  self.needs_type_check = false
  self.unboxing_fn.invocation_template = <<EOS
char ** %{as} = NULL;
do {
  int len = mrb_ary_len(mrb, %{unbox});
  %{as} = (char**)calloc((len + 1), sizeof(char*));
  for (int i = 0; i < len; i++) {
    %{as}[i] = mrb_string_value_cstr(mrb, mrb_ary_ref(mrb, %{unbox}, i));
  }
} while (0);
EOS
  self.unboxing_fn.param_cleanup_template = "free(%{value});"
end

CTypes.set_fn_param_type('g_spawn_async', 'argv', CTypes['in:nullterminated:cstring:array'])
CTypes.set_fn_param_type('g_spawn_async', 'envp', CTypes['in:nullterminated:cstring:array'])
