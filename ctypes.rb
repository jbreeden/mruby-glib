CTypes.typedef('char *', 'gchar *')

# CTypes.define('struct _GError **') do
#   self.recv_type = 'GError *'
#   
#   boxing_fn.name = 'mrb_fixnum_value'
#   boxing_fn.invocation_template = <<EOF
# if (%{box} > MRB_INT_MAX) {
#   mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
#   return mrb_nil_value();
# }
# mrb_value %{as} = #{boxing_fn.name}(%{box});
# EOF
# 
#   unboxing_fn.name = 'mrb_fixnum'
#   unboxing_fn.invocation_template = "#{type_name} %{as} = #{unboxing_fn.name}(%{unbox});"
# 
#   self.type_check = <<EOF
# if (!mrb_obj_is_kind_of(mrb, %{value}, mrb->fixnum_class)) {
#   mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
#   return mrb_nil_value();
# }
# EOF
# end
