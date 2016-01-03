/*
 * struct _GInetAddress
 * Defined in file ginetaddress.h @ line 43
 */

#include "mruby_GLib.h"

#if BIND_GInetAddress_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GInetAddress::initialize */
/* sha: 736e28bf2ae862a70ec6e8270305b947f05ee9faf165dd5ca4f53b0bd1ac99d1 */
#if BIND_GInetAddress_INITIALIZE
mrb_value
mrb_GLib_GInetAddress_initialize(mrb_state* mrb, mrb_value self) {
  struct _GInetAddress* native_object = (struct _GInetAddress*)calloc(1, sizeof(struct _GInetAddress));
  mruby_giftwrap__GInetAddress_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetAddress::initialize */
/* sha: 4b351c030eca3406de0bb03e2994a24240f3a05f90ff6998a36768cb13c085fb */
mrb_value
mrb_GLib_GInetAddress_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GInetAddress.disown only accepts objects of type GLib::GInetAddress");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetAddress::belongs_to_ruby */
/* sha: 77ac848d35c2dc18e7b7e032b757d7b3af88542ef9c44d72427b59cc02f03762 */
mrb_value
mrb_GLib_GInetAddress_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GInetAddress.belongs_to_ruby only accepts objects of type GLib::GInetAddress");
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

/* MRUBY_BINDING: GInetAddress::parent_instance_reader */
/* sha: 5db693560ee07665e32f150555a095b21876ae800d7f3034dd3483c808c12d79 */
#if BIND_GInetAddress_parent_instance_FIELD_READER
/* get_parent_instance
 *
 * Return Type: GObject
 */
mrb_value
mrb_GLib_GInetAddress_get_parent_instance(mrb_state* mrb, mrb_value self) {
  struct _GInetAddress * native_self = mruby_unbox__GInetAddress(self);

  GObject native_parent_instance = native_self->parent_instance;

  mrb_value parent_instance = TODO_mruby_box_GObject(mrb, native_parent_instance);

  return parent_instance;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetAddress::parent_instance_writer */
/* sha: 80ab895b1e704776c0cdab99121c8f62a7315d2b752ecd9393de2c71f67895af */
#if BIND_GInetAddress_parent_instance_FIELD_WRITER
/* set_parent_instance
 *
 * Parameters:
 * - value: GObject
 */
mrb_value
mrb_GLib_GInetAddress_set_parent_instance(mrb_state* mrb, mrb_value self) {
  struct _GInetAddress * native_self = mruby_unbox__GInetAddress(self);
  mrb_value parent_instance;

  mrb_get_args(mrb, "o", &parent_instance);

  /* type checking */
  TODO_type_check_GObject(parent_instance);

  GObject native_parent_instance = TODO_mruby_unbox_GObject(parent_instance);

  native_self->parent_instance = native_parent_instance;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetAddress::priv_reader */
/* sha: 9460e388d711056f5fa51c9863d8fc00c9f272cab08366849df75b58266ab1ec */
#if BIND_GInetAddress_priv_FIELD_READER
/* get_priv
 *
 * Return Type: GInetAddressPrivate *
 */
mrb_value
mrb_GLib_GInetAddress_get_priv(mrb_state* mrb, mrb_value self) {
  struct _GInetAddress * native_self = mruby_unbox__GInetAddress(self);

  GInetAddressPrivate * native_priv = native_self->priv;

  mrb_value priv = (native_priv == NULL ? mrb_nil_value() : mruby_box__GInetAddressPrivate(mrb, native_priv));

  return priv;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetAddress::priv_writer */
/* sha: 720d2a778fa4c3e287fa3b346f0d1c2fe7403017ebb6271dd66b8617aa4858a5 */
#if BIND_GInetAddress_priv_FIELD_WRITER
/* set_priv
 *
 * Parameters:
 * - value: GInetAddressPrivate *
 */
mrb_value
mrb_GLib_GInetAddress_set_priv(mrb_state* mrb, mrb_value self) {
  struct _GInetAddress * native_self = mruby_unbox__GInetAddress(self);
  mrb_value priv;

  mrb_get_args(mrb, "o", &priv);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, priv, GInetAddressPrivate_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GInetAddressPrivate expected");
    return mrb_nil_value();
  }

  GInetAddressPrivate * native_priv = (mrb_nil_p(priv) ? NULL : mruby_unbox__GInetAddressPrivate(priv));

  native_self->priv = native_priv;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_GLib_GInetAddress_init(mrb_state* mrb) {
/* MRUBY_BINDING: GInetAddress::class_definition */
/* sha: 6dfd1a6f7a1b6d176781e7535805fb7e8fcd9c787a5a8467dda7167c2d897501 */
  struct RClass* GInetAddress_class = mrb_define_class_under(mrb, GLib_module(mrb), "GInetAddress", mrb->object_class);
  MRB_SET_INSTANCE_TT(GInetAddress_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetAddress::class_method_definitions */
/* sha: 6b03df22b668db6295f8c67ebc506cd1d75115e0eea5c042ecc8d8a169b0a9d5 */
#if BIND_GInetAddress_INITIALIZE
  mrb_define_method(mrb, GInetAddress_class, "initialize", mrb_GLib_GInetAddress_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GInetAddress_class, "disown", mrb_GLib_GInetAddress_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GInetAddress_class, "belongs_to_ruby?", mrb_GLib_GInetAddress_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetAddress::attr_definitions */
/* sha: da344ec891679265565ced39fd23f7d6b5f32758f85fc38d0e9aa65f3a3103d6 */
  /*
   * Fields
   */
#if BIND_GInetAddress_parent_instance_FIELD_READER
  mrb_define_method(mrb, GInetAddress_class, "parent_instance", mrb_GLib_GInetAddress_get_parent_instance, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GInetAddress_parent_instance_FIELD_WRITER
  mrb_define_method(mrb, GInetAddress_class, "parent_instance=", mrb_GLib_GInetAddress_set_parent_instance, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GInetAddress_priv_FIELD_READER
  mrb_define_method(mrb, GInetAddress_class, "priv", mrb_GLib_GInetAddress_get_priv, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GInetAddress_priv_FIELD_WRITER
  mrb_define_method(mrb, GInetAddress_class, "priv=", mrb_GLib_GInetAddress_set_priv, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetAddress::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
