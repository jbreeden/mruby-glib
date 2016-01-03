/*
 * struct _GSocket
 * Defined in file gsocket.h @ line 68
 */

#include "mruby_GLib.h"

#if BIND_GSocket_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GSocket::initialize */
/* sha: 677c7f39de51e3b96085f3331e25d8764dcd92fda455b3aec42b26df72784180 */
#if BIND_GSocket_INITIALIZE
mrb_value
mrb_GLib_GSocket_initialize(mrb_state* mrb, mrb_value self) {
  struct _GSocket* native_object = (struct _GSocket*)calloc(1, sizeof(struct _GSocket));
  mruby_giftwrap__GSocket_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocket::initialize */
/* sha: d83aa93f3f35e50d66745c6876cdb368347d97c55d36b18187d1894b8022a00e */
mrb_value
mrb_GLib_GSocket_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSocket.disown only accepts objects of type GLib::GSocket");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocket::belongs_to_ruby */
/* sha: 4c1a486454fba14c86f4404cfd62a6000e83541b2d6dc32373887fba6b38b770 */
mrb_value
mrb_GLib_GSocket_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSocket.belongs_to_ruby only accepts objects of type GLib::GSocket");
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

/* MRUBY_BINDING: GSocket::parent_instance_reader */
/* sha: a47a92d0382b659a9e1bf0c35e237bfb162a4eced11812303e42915b0cc45472 */
#if BIND_GSocket_parent_instance_FIELD_READER
/* get_parent_instance
 *
 * Return Type: GObject
 */
mrb_value
mrb_GLib_GSocket_get_parent_instance(mrb_state* mrb, mrb_value self) {
  struct _GSocket * native_self = mruby_unbox__GSocket(self);

  GObject native_parent_instance = native_self->parent_instance;

  mrb_value parent_instance = TODO_mruby_box_GObject(mrb, native_parent_instance);

  return parent_instance;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocket::parent_instance_writer */
/* sha: 18cc45d674a4f0a397ff026f4d11600ac5d372a0ed5525e4d85b3f76133fa56d */
#if BIND_GSocket_parent_instance_FIELD_WRITER
/* set_parent_instance
 *
 * Parameters:
 * - value: GObject
 */
mrb_value
mrb_GLib_GSocket_set_parent_instance(mrb_state* mrb, mrb_value self) {
  struct _GSocket * native_self = mruby_unbox__GSocket(self);
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

/* MRUBY_BINDING: GSocket::priv_reader */
/* sha: 2b7462810724e8f434f56f4323fc93615d179f68795c5f9cbe392f0b0162d932 */
#if BIND_GSocket_priv_FIELD_READER
/* get_priv
 *
 * Return Type: GSocketPrivate *
 */
mrb_value
mrb_GLib_GSocket_get_priv(mrb_state* mrb, mrb_value self) {
  struct _GSocket * native_self = mruby_unbox__GSocket(self);

  GSocketPrivate * native_priv = native_self->priv;

  mrb_value priv = (native_priv == NULL ? mrb_nil_value() : mruby_box__GSocketPrivate(mrb, native_priv));

  return priv;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocket::priv_writer */
/* sha: ec7cd62096dac674f0b6df4b3354839fb9e4d3ba2e2a847ae9b5f5ab93a3f879 */
#if BIND_GSocket_priv_FIELD_WRITER
/* set_priv
 *
 * Parameters:
 * - value: GSocketPrivate *
 */
mrb_value
mrb_GLib_GSocket_set_priv(mrb_state* mrb, mrb_value self) {
  struct _GSocket * native_self = mruby_unbox__GSocket(self);
  mrb_value priv;

  mrb_get_args(mrb, "o", &priv);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, priv, GSocketPrivate_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GSocketPrivate expected");
    return mrb_nil_value();
  }

  GSocketPrivate * native_priv = (mrb_nil_p(priv) ? NULL : mruby_unbox__GSocketPrivate(priv));

  native_self->priv = native_priv;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_GLib_GSocket_init(mrb_state* mrb) {
/* MRUBY_BINDING: GSocket::class_definition */
/* sha: d76b0dc7703de95c2b592b6fb45bf5b009eeca575b549d626ad45f127923d9f0 */
  struct RClass* GSocket_class = mrb_define_class_under(mrb, GLib_module(mrb), "GSocket", mrb->object_class);
  MRB_SET_INSTANCE_TT(GSocket_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocket::class_method_definitions */
/* sha: 599c8a832e0c18fe020c19e08a15b4059f5823871cc65157fcc389b3e767b77c */
#if BIND_GSocket_INITIALIZE
  mrb_define_method(mrb, GSocket_class, "initialize", mrb_GLib_GSocket_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GSocket_class, "disown", mrb_GLib_GSocket_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GSocket_class, "belongs_to_ruby?", mrb_GLib_GSocket_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocket::attr_definitions */
/* sha: b555dd2da740ede880651dfd5e98b720c8aa83a382f631b7bb87c7b4ce73ce1f */
  /*
   * Fields
   */
#if BIND_GSocket_parent_instance_FIELD_READER
  mrb_define_method(mrb, GSocket_class, "parent_instance", mrb_GLib_GSocket_get_parent_instance, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSocket_parent_instance_FIELD_WRITER
  mrb_define_method(mrb, GSocket_class, "parent_instance=", mrb_GLib_GSocket_set_parent_instance, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSocket_priv_FIELD_READER
  mrb_define_method(mrb, GSocket_class, "priv", mrb_GLib_GSocket_get_priv, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSocket_priv_FIELD_WRITER
  mrb_define_method(mrb, GSocket_class, "priv=", mrb_GLib_GSocket_set_priv, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocket::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
