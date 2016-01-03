# Destructors
# ----------

CTypes.set_destructor('struct _GError', 'g_error_free')
CTypes.set_destructor('struct _GMatchInfo', 'g_free')
CTypes.set_destructor('struct _GRegex', 'g_regex_unref')
CTypes.set_destructor('struct _GMatchInfo', 'g_match_info_unref')
CTypes.set_destructor('struct _GIOChannel', 'g_io_channel_unref')
CTypes.set_destructor('struct _GFile', 'g_object_unref')
CTypes.set_destructor('struct _GFileInfo', 'g_object_unref')
CTypes.set_destructor('struct _GSocketAddress', 'g_object_unref')
CTypes.set_destructor('struct _GInputStream', 'g_object_unref')
CTypes.set_destructor('struct _GOutputStream', 'g_object_unref')
CTypes.set_destructor('struct _GIOStream', 'g_object_unref')
CTypes.set_destructor('struct _GFileInputStream', 'g_object_unref')
CTypes.set_destructor('struct _GFileOutputStream', 'g_object_unref')
CTypes.set_destructor('struct _GFileIOStream', 'g_object_unref')
CTypes.set_destructor('struct _GSeekable', 'g_object_unref')
CTypes.set_destructor('struct _GSubprocess', 'g_object_unref')
CTypes.set_destructor('struct _GSubprocessLauncher', 'g_object_unref')

# Custom Types
# ------------

CTypes.typedef('bool', 'gboolean')
CTypes.typedef('int', 'guint32')
CTypes.typedef('int', 'gsize')
CTypes.typedef('int', 'gssize')
CTypes.typedef('out:int *', 'gsize *')
CTypes.typedef('const char *', 'const gchar *')
CTypes.typedef('unused:pointer', 'GCancellable *')

CTypes['GQuark'] = CTypes['int'].aliased_as('GQuark')

CTypes.define('GError **', 'struct _GError **') do
  self.out_only = true
  self.recv_template = "struct GError * %{value} = NULL;"
  self.invocation_arg_template = "&%{value}"
  self.boxing_fn.invocation_template = "mrb_value %{as} = (%{box} == NULL ? mrb_nil_value() : mruby_giftwrap__GError(mrb, %{box}));"
end

CTypes.define('GMatchInfo **') do
  self.out_only = true
  self.recv_template = "struct GMatchInfo * %{value} = NULL;"
  self.invocation_arg_template = "&%{value}"
  self.boxing_fn.invocation_template = "mrb_value %{as} = (%{box} == NULL ? mrb_nil_value() : mruby_giftwrap__GMatchInfo(mrb, %{box}));"
end

CTypes.define('return:gstring') do
  self.type_name = 'gchar *'
  self.recv_template = 'gchar * %{value};'
  self.boxing_fn.invocation_template = "mrb_value %{as} = mrb_str_new_cstr(mrb, %{box});"
  self.boxing_fn.cleanup_template = "g_free(%{value});"
end

CTypes['nullterminated:gstring:array'] = CTypes['nullterminated:cstring:array'].dup
CTypes['nullterminated:gstring:array'].boxing_fn.cleanup_template = "g_strfreev(%{value});"
