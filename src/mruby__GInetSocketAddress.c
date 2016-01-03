/*
 * struct _GInetSocketAddress
 * Defined in file ginetsocketaddress.h @ line 43
 */

#include "mruby_GLib.h"

#if BIND_GInetSocketAddress_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GInetSocketAddress::initialize */
/* sha: 3c1f471425c751b98a370852972ba448b9fa1e0c153d3a54c7db947b4e0c1c02 */
#if BIND_GInetSocketAddress_INITIALIZE
mrb_value
mrb_GLib_GInetSocketAddress_initialize(mrb_state* mrb, mrb_value self) {
  struct _GInetSocketAddress* native_object = (struct _GInetSocketAddress*)calloc(1, sizeof(struct _GInetSocketAddress));
  mruby_giftwrap__GInetSocketAddress_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetSocketAddress::initialize */
/* sha: af47d0778c8772745e40eeb494443cfb264ac98a16ddcf8f4bf72653297954ea */
mrb_value
mrb_GLib_GInetSocketAddress_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GInetSocketAddress.disown only accepts objects of type GLib::GInetSocketAddress");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetSocketAddress::belongs_to_ruby */
/* sha: 110c97e8db21ff28c59439f8688b6395efa5ac08f13821f2c4a9d1ffa7e9d202 */
mrb_value
mrb_GLib_GInetSocketAddress_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GInetSocketAddress.belongs_to_ruby only accepts objects of type GLib::GInetSocketAddress");
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

/* MRUBY_BINDING: GInetSocketAddress::parent_instance_reader */
/* sha: 9f6dc668837afcbb4849c5ca91b4a44c88f397dbd71948412d9f53527f87e632 */
#if BIND_GInetSocketAddress_parent_instance_FIELD_READER
/* get_parent_instance
 *
 * Return Type: GSocketAddress
 */
mrb_value
mrb_GLib_GInetSocketAddress_get_parent_instance(mrb_state* mrb, mrb_value self) {
  struct _GInetSocketAddress * native_self = mruby_unbox__GInetSocketAddress(self);

  GSocketAddress native_parent_instance = native_self->parent_instance;

  mrb_value parent_instance = TODO_mruby_box_GSocketAddress(mrb, native_parent_instance);

  return parent_instance;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetSocketAddress::parent_instance_writer */
/* sha: acfdd6cadbdaa7b046ea13e081e0d476022d3796d1cc4ea833d777edf596bbaf */
#if BIND_GInetSocketAddress_parent_instance_FIELD_WRITER
/* set_parent_instance
 *
 * Parameters:
 * - value: GSocketAddress
 */
mrb_value
mrb_GLib_GInetSocketAddress_set_parent_instance(mrb_state* mrb, mrb_value self) {
  struct _GInetSocketAddress * native_self = mruby_unbox__GInetSocketAddress(self);
  mrb_value parent_instance;

  mrb_get_args(mrb, "o", &parent_instance);

  /* type checking */
  TODO_type_check_GSocketAddress(parent_instance);

  GSocketAddress native_parent_instance = TODO_mruby_unbox_GSocketAddress(parent_instance);

  native_self->parent_instance = native_parent_instance;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetSocketAddress::priv_reader */
/* sha: b694181d646208ea9514a20d5bda24acf761c9d95529aca00eaccc844c0e7f7f */
#if BIND_GInetSocketAddress_priv_FIELD_READER
/* get_priv
 *
 * Return Type: GInetSocketAddressPrivate *
 */
mrb_value
mrb_GLib_GInetSocketAddress_get_priv(mrb_state* mrb, mrb_value self) {
  struct _GInetSocketAddress * native_self = mruby_unbox__GInetSocketAddress(self);

  GInetSocketAddressPrivate * native_priv = native_self->priv;

  mrb_value priv = (native_priv == NULL ? mrb_nil_value() : mruby_box__GInetSocketAddressPrivate(mrb, native_priv));

  return priv;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetSocketAddress::priv_writer */
/* sha: a842a59cb8de80d7cd825a23cf81de2faf91c798e08a17d1e7a4a926db08e214 */
#if BIND_GInetSocketAddress_priv_FIELD_WRITER
/* set_priv
 *
 * Parameters:
 * - value: GInetSocketAddressPrivate *
 */
mrb_value
mrb_GLib_GInetSocketAddress_set_priv(mrb_state* mrb, mrb_value self) {
  struct _GInetSocketAddress * native_self = mruby_unbox__GInetSocketAddress(self);
  mrb_value priv;

  mrb_get_args(mrb, "o", &priv);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, priv, GInetSocketAddressPrivate_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GInetSocketAddressPrivate expected");
    return mrb_nil_value();
  }

  GInetSocketAddressPrivate * native_priv = (mrb_nil_p(priv) ? NULL : mruby_unbox__GInetSocketAddressPrivate(priv));

  native_self->priv = native_priv;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_GLib_GInetSocketAddress_init(mrb_state* mrb) {
/* MRUBY_BINDING: GInetSocketAddress::class_definition */
/* sha: 14778edd89f9bee913ae776bedd1deaefcdce8d9efcfc4b3f7617eba127a5083 */
  struct RClass* GInetSocketAddress_class = mrb_define_class_under(mrb, GLib_module(mrb), "GInetSocketAddress", mrb->object_class);
  MRB_SET_INSTANCE_TT(GInetSocketAddress_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetSocketAddress::class_method_definitions */
/* sha: e36befd4541f1c6526503de195b1c5033af847d040e769d8a0c50e31cf289165 */
#if BIND_GInetSocketAddress_INITIALIZE
  mrb_define_method(mrb, GInetSocketAddress_class, "initialize", mrb_GLib_GInetSocketAddress_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GInetSocketAddress_class, "disown", mrb_GLib_GInetSocketAddress_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GInetSocketAddress_class, "belongs_to_ruby?", mrb_GLib_GInetSocketAddress_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetSocketAddress::attr_definitions */
/* sha: 871a7c5224903dd522d15d3f06f4c8cce24556e421cc1ff154dcc64f58e14d4b */
  /*
   * Fields
   */
#if BIND_GInetSocketAddress_parent_instance_FIELD_READER
  mrb_define_method(mrb, GInetSocketAddress_class, "parent_instance", mrb_GLib_GInetSocketAddress_get_parent_instance, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GInetSocketAddress_parent_instance_FIELD_WRITER
  mrb_define_method(mrb, GInetSocketAddress_class, "parent_instance=", mrb_GLib_GInetSocketAddress_set_parent_instance, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GInetSocketAddress_priv_FIELD_READER
  mrb_define_method(mrb, GInetSocketAddress_class, "priv", mrb_GLib_GInetSocketAddress_get_priv, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GInetSocketAddress_priv_FIELD_WRITER
  mrb_define_method(mrb, GInetSocketAddress_class, "priv=", mrb_GLib_GInetSocketAddress_set_priv, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetSocketAddress::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
