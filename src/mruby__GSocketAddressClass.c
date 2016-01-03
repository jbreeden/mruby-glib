/*
 * struct _GSocketAddressClass
 * Defined in file gsocketaddress.h @ line 40
 */

#include "mruby_GLib.h"

#if BIND_GSocketAddressClass_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GSocketAddressClass::initialize */
/* sha: a9b30790ac9d5c52cdb387ddd763aa7bcbc77321e29d26433bd3ff60de2ec4db */
#if BIND_GSocketAddressClass_INITIALIZE
mrb_value
mrb_GLib_GSocketAddressClass_initialize(mrb_state* mrb, mrb_value self) {
  struct _GSocketAddressClass* native_object = (struct _GSocketAddressClass*)calloc(1, sizeof(struct _GSocketAddressClass));
  mruby_giftwrap__GSocketAddressClass_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketAddressClass::initialize */
/* sha: dc430929e6465b79f552673a67bc6b83e870398956a1d4c534aaacb0d89a929a */
mrb_value
mrb_GLib_GSocketAddressClass_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSocketAddressClass.disown only accepts objects of type GLib::GSocketAddressClass");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketAddressClass::belongs_to_ruby */
/* sha: 675721ffd235d8f99813a11928c87f54e43f23507928aa680a0230b53459570b */
mrb_value
mrb_GLib_GSocketAddressClass_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSocketAddressClass.belongs_to_ruby only accepts objects of type GLib::GSocketAddressClass");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: GSocketAddressClass::parent_class_reader */
/* sha: 1e605a79ae5a3ccfc668bfb88d684ca193066e94b2a058a9cb3f02ade543f06d */
#if BIND_GSocketAddressClass_parent_class_FIELD_READER
/* get_parent_class
 *
 * Return Type: GObjectClass
 */
mrb_value
mrb_GLib_GSocketAddressClass_get_parent_class(mrb_state* mrb, mrb_value self) {
  struct _GSocketAddressClass * native_self = mruby_unbox__GSocketAddressClass(self);

  GObjectClass native_parent_class = native_self->parent_class;

  mrb_value parent_class = TODO_mruby_box_GObjectClass(mrb, native_parent_class);

  return parent_class;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketAddressClass::parent_class_writer */
/* sha: adcbb1e7e5e5937de061beda53d736161908ff5ea5d6fe9606df0634d1894d50 */
#if BIND_GSocketAddressClass_parent_class_FIELD_WRITER
/* set_parent_class
 *
 * Parameters:
 * - value: GObjectClass
 */
mrb_value
mrb_GLib_GSocketAddressClass_set_parent_class(mrb_state* mrb, mrb_value self) {
  struct _GSocketAddressClass * native_self = mruby_unbox__GSocketAddressClass(self);
  mrb_value parent_class;

  mrb_get_args(mrb, "o", &parent_class);

  /* type checking */
  TODO_type_check_GObjectClass(parent_class);

  GObjectClass native_parent_class = TODO_mruby_unbox_GObjectClass(parent_class);

  native_self->parent_class = native_parent_class;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketAddressClass::get_family_reader */
/* sha: 564c8ce0e173d83a4eaee25f021b15901274d3753ac3bb43d1d8a55b23385e13 */
#if BIND_GSocketAddressClass_get_family_FIELD_READER
/* get_get_family
 *
 * Return Type: GSocketFamily (*)(GSocketAddress *)
 */
mrb_value
mrb_GLib_GSocketAddressClass_get_get_family(mrb_state* mrb, mrb_value self) {
  struct _GSocketAddressClass * native_self = mruby_unbox__GSocketAddressClass(self);

  GSocketFamily (*)(GSocketAddress *) native_get_family = native_self->get_family;

  mrb_value get_family = TODO_mruby_box_GSocketFamily_LPAREN_PTR_RPAREN_LPAREN_GSocketAddress_PTR_RPAREN(mrb, native_get_family);

  return get_family;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketAddressClass::get_family_writer */
/* sha: e0b97bb7b2142dfcfa8b5bdce574075d3822d4afe072b4eacf97282e2966ded3 */
#if BIND_GSocketAddressClass_get_family_FIELD_WRITER
/* set_get_family
 *
 * Parameters:
 * - value: GSocketFamily (*)(GSocketAddress *)
 */
mrb_value
mrb_GLib_GSocketAddressClass_set_get_family(mrb_state* mrb, mrb_value self) {
  struct _GSocketAddressClass * native_self = mruby_unbox__GSocketAddressClass(self);
  mrb_value get_family;

  mrb_get_args(mrb, "o", &get_family);

  /* type checking */
  TODO_type_check_GSocketFamily_LPAREN_PTR_RPAREN_LPAREN_GSocketAddress_PTR_RPAREN(get_family);

  GSocketFamily (*native_get_family)(GSocketAddress *) = TODO_mruby_unbox_GSocketFamily_LPAREN_PTR_RPAREN_LPAREN_GSocketAddress_PTR_RPAREN(get_family);

  native_self->get_family = native_get_family;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketAddressClass::get_native_size_reader */
/* sha: 282b5fe044145ed8e3eb67cc4eb9364c8e27d0ca271a8e119e92b2658bc07d0d */
#if BIND_GSocketAddressClass_get_native_size_FIELD_READER
/* get_get_native_size
 *
 * Return Type: gssize (*)(GSocketAddress *)
 */
mrb_value
mrb_GLib_GSocketAddressClass_get_get_native_size(mrb_state* mrb, mrb_value self) {
  struct _GSocketAddressClass * native_self = mruby_unbox__GSocketAddressClass(self);

  gssize (*)(GSocketAddress *) native_get_native_size = native_self->get_native_size;

  mrb_value get_native_size = TODO_mruby_box_gssize_LPAREN_PTR_RPAREN_LPAREN_GSocketAddress_PTR_RPAREN(mrb, native_get_native_size);

  return get_native_size;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketAddressClass::get_native_size_writer */
/* sha: dc3c104e8f457e814fff41edf8b25360a4a60d956eae7405b35c319a6b0476bc */
#if BIND_GSocketAddressClass_get_native_size_FIELD_WRITER
/* set_get_native_size
 *
 * Parameters:
 * - value: gssize (*)(GSocketAddress *)
 */
mrb_value
mrb_GLib_GSocketAddressClass_set_get_native_size(mrb_state* mrb, mrb_value self) {
  struct _GSocketAddressClass * native_self = mruby_unbox__GSocketAddressClass(self);
  mrb_value get_native_size;

  mrb_get_args(mrb, "o", &get_native_size);

  /* type checking */
  TODO_type_check_gssize_LPAREN_PTR_RPAREN_LPAREN_GSocketAddress_PTR_RPAREN(get_native_size);

  gssize (*native_get_native_size)(GSocketAddress *) = TODO_mruby_unbox_gssize_LPAREN_PTR_RPAREN_LPAREN_GSocketAddress_PTR_RPAREN(get_native_size);

  native_self->get_native_size = native_get_native_size;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketAddressClass::to_native_reader */
/* sha: 56a9cacd638c43b871f5850362db8f40073a525da87b76b0f072fcf13ab35d41 */
#if BIND_GSocketAddressClass_to_native_FIELD_READER
/* get_to_native
 *
 * Return Type: gboolean (*)(GSocketAddress *, gpointer, gsize, GError **)
 */
mrb_value
mrb_GLib_GSocketAddressClass_get_to_native(mrb_state* mrb, mrb_value self) {
  struct _GSocketAddressClass * native_self = mruby_unbox__GSocketAddressClass(self);

  gboolean (*)(GSocketAddress *, gpointer, gsize, GError **) native_to_native = native_self->to_native;

  mrb_value to_native = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GSocketAddress_PTR_COMMA_gpointerCOMMA_gsizeCOMMA_GError_PTR_PTR_RPAREN(mrb, native_to_native);

  return to_native;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketAddressClass::to_native_writer */
/* sha: f88f761e402473edadffc409c6e756c06d6a2c64f73c532cf0f460262eab199d */
#if BIND_GSocketAddressClass_to_native_FIELD_WRITER
/* set_to_native
 *
 * Parameters:
 * - value: gboolean (*)(GSocketAddress *, gpointer, gsize, GError **)
 */
mrb_value
mrb_GLib_GSocketAddressClass_set_to_native(mrb_state* mrb, mrb_value self) {
  struct _GSocketAddressClass * native_self = mruby_unbox__GSocketAddressClass(self);
  mrb_value to_native;

  mrb_get_args(mrb, "o", &to_native);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GSocketAddress_PTR_COMMA_gpointerCOMMA_gsizeCOMMA_GError_PTR_PTR_RPAREN(to_native);

  gboolean (*native_to_native)(GSocketAddress *, gpointer, gsize, GError **) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GSocketAddress_PTR_COMMA_gpointerCOMMA_gsizeCOMMA_GError_PTR_PTR_RPAREN(to_native);

  native_self->to_native = native_to_native;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_GLib_GSocketAddressClass_init(mrb_state* mrb) {
/* MRUBY_BINDING: GSocketAddressClass::class_definition */
/* sha: 15b4b575e231924053cedc46f6a4cd6eceeae52793b86385a10062405f0375bd */
  struct RClass* GSocketAddressClass_class = mrb_define_class_under(mrb, GLib_module(mrb), "GSocketAddressClass", mrb->object_class);
  MRB_SET_INSTANCE_TT(GSocketAddressClass_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketAddressClass::class_method_definitions */
/* sha: 290a7fbab80a0ee0e886b7047525d9b6220181e4bd16493bcb664861f761ac5b */
#if BIND_GSocketAddressClass_INITIALIZE
  mrb_define_method(mrb, GSocketAddressClass_class, "initialize", mrb_GLib_GSocketAddressClass_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GSocketAddressClass_class, "disown", mrb_GLib_GSocketAddressClass_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GSocketAddressClass_class, "belongs_to_ruby?", mrb_GLib_GSocketAddressClass_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketAddressClass::attr_definitions */
/* sha: 45bcb423569a7f978286a568065f465fc98a0b3e8e2ab4d8577f9ecaffb40b9a */
  /*
   * Fields
   */
#if BIND_GSocketAddressClass_parent_class_FIELD_READER
  mrb_define_method(mrb, GSocketAddressClass_class, "parent_class", mrb_GLib_GSocketAddressClass_get_parent_class, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSocketAddressClass_parent_class_FIELD_WRITER
  mrb_define_method(mrb, GSocketAddressClass_class, "parent_class=", mrb_GLib_GSocketAddressClass_set_parent_class, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSocketAddressClass_get_family_FIELD_READER
  mrb_define_method(mrb, GSocketAddressClass_class, "get_family", mrb_GLib_GSocketAddressClass_get_get_family, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSocketAddressClass_get_family_FIELD_WRITER
  mrb_define_method(mrb, GSocketAddressClass_class, "get_family=", mrb_GLib_GSocketAddressClass_set_get_family, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSocketAddressClass_get_native_size_FIELD_READER
  mrb_define_method(mrb, GSocketAddressClass_class, "get_native_size", mrb_GLib_GSocketAddressClass_get_get_native_size, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSocketAddressClass_get_native_size_FIELD_WRITER
  mrb_define_method(mrb, GSocketAddressClass_class, "get_native_size=", mrb_GLib_GSocketAddressClass_set_get_native_size, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSocketAddressClass_to_native_FIELD_READER
  mrb_define_method(mrb, GSocketAddressClass_class, "to_native", mrb_GLib_GSocketAddressClass_get_to_native, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSocketAddressClass_to_native_FIELD_WRITER
  mrb_define_method(mrb, GSocketAddressClass_class, "to_native=", mrb_GLib_GSocketAddressClass_set_to_native, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketAddressClass::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
