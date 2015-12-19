# Destructors
# ----------

CTypes.set_destructor('struct _GError', 'g_error_free')

# Custom Types
# ------------

CTypes.typedef('bool', 'gboolean')
CTypes.typedef('int', 'guint32')
CTypes.typedef('int', 'gsize')
CTypes.typedef('const char *', 'const gchar *')

CTypes.typedef('char *', 'gchar *')
CTypes['gchar *'].boxing_fn.cleanup_template = "g_free(%{value});"

CTypes['GQuark'] = CTypes['int'].aliased_as('GQuark')

CTypes.define('struct _GError **') do
  self.recv_template = "struct GError * %{value} = NULL;"
  self.invocation_arg_template = "&%{value}"
  self.out_only = true
  boxing_fn.invocation_template = "mrb_value %{as} = (%{box} == NULL ? mrb_nil_value() : mruby_giftwrap__GError(mrb, %{box}));"
end
