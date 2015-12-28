# Destructors
# ----------

CTypes.set_destructor('struct _GError', 'g_error_free')
CTypes.set_destructor('struct _GMatchInfo', 'g_free')
CTypes.set_destructor('struct _GRegex', 'g_regex_unref')
CTypes.set_destructor('struct _GMatchInfo', 'g_match_info_unref')
CTypes.set_destructor('struct _GIOChannel', 'g_io_channel_unref')

# Custom Types
# ------------

CTypes.typedef('bool', 'gboolean')
CTypes.typedef('int', 'guint32')
CTypes.typedef('int', 'gsize')
CTypes.typedef('int', 'gssize')
CTypes.typedef('out:int *', 'gsize *')
CTypes.typedef('const char *', 'const gchar *')

CTypes['GQuark'] = CTypes['int'].aliased_as('GQuark')

CTypes.define('GError **', 'struct _GError **') do
  self.out_only = true
  self.recv_template = "struct GError * %{value} = NULL;"
  self.invocation_arg_template = "&%{value}"
  boxing_fn.invocation_template = "mrb_value %{as} = (%{box} == NULL ? mrb_nil_value() : mruby_giftwrap__GError(mrb, %{box}));"
end

CTypes.define('GMatchInfo **') do
  self.out_only = true
  self.recv_template = "struct GMatchInfo * %{value} = NULL;"
  self.invocation_arg_template = "&%{value}"
  boxing_fn.invocation_template = "mrb_value %{as} = (%{box} == NULL ? mrb_nil_value() : mruby_giftwrap__GMatchInfo(mrb, %{box}));"
end

CTypes['nullterminated:gstring:array'] = CTypes['nullterminated:cstring:array'].dup
CTypes['nullterminated:gstring:array'].boxing_fn.cleanup_template = "g_strfreev(%{value});"
