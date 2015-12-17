CTypes.typedef('char *', 'gchar *')

# CTypes.define('struct _GError **') do
#   self.recv_type = "struct GError *"
#   self.out_only = true
#   boxing_fn.name = "mruby_box__GError"
#   boxing_fn.invocation_template = "mrb_value %{as} = (%{box} == NULL ? mrb_nil_value() : #{boxing_fn.name}(mrb, %{box}));"
# end
