/*
 * struct _GIOStream
 * Defined in file giostream.h @ line 46
 */

#include "mruby_GLib.h"

#if BIND_GIOStream_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GIOStream::initialize */
/* sha: ecb6bc4f01206e81f773705e380f3a3225347207db980154c48a4f4f4bb8f993 */
#if BIND_GIOStream_INITIALIZE
mrb_value
mrb_GLib_GIOStream_initialize(mrb_state* mrb, mrb_value self) {
  struct _GIOStream* native_object = (struct _GIOStream*)calloc(1, sizeof(struct _GIOStream));
  mruby_giftwrap__GIOStream_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStream::initialize */
/* sha: 73f6074d07c9a085eb54d45884586cee0ef40259f484a28f12b22564e6c57cc0 */
mrb_value
mrb_GLib_GIOStream_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GIOStream.disown only accepts objects of type GLib::GIOStream");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStream::belongs_to_ruby */
/* sha: 01eee1217dabf81ca3a348eba565da57990416ec52713ce38f3756f0d6d6bb25 */
mrb_value
mrb_GLib_GIOStream_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GIOStream.belongs_to_ruby only accepts objects of type GLib::GIOStream");
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

/* MRUBY_BINDING: GIOStream::parent_instance_reader */
/* sha: 4362caa31d2193a17153864f2e5ef256889ba93367c90671d0b4d9cbe948db2c */
#if BIND_GIOStream_parent_instance_FIELD_READER
/* get_parent_instance
 *
 * Return Type: GObject
 */
mrb_value
mrb_GLib_GIOStream_get_parent_instance(mrb_state* mrb, mrb_value self) {
  struct _GIOStream * native_self = mruby_unbox__GIOStream(self);

  GObject native_parent_instance = native_self->parent_instance;

  mrb_value parent_instance = TODO_mruby_box_GObject(mrb, native_parent_instance);

  return parent_instance;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStream::parent_instance_writer */
/* sha: 920b1277b64f354899e845e498b87d2b67898957bf26bab69d169b81092671ba */
#if BIND_GIOStream_parent_instance_FIELD_WRITER
/* set_parent_instance
 *
 * Parameters:
 * - value: GObject
 */
mrb_value
mrb_GLib_GIOStream_set_parent_instance(mrb_state* mrb, mrb_value self) {
  struct _GIOStream * native_self = mruby_unbox__GIOStream(self);
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

/* MRUBY_BINDING: GIOStream::priv_reader */
/* sha: 79a720f87ed2bcffd74f3798f49b0014519d6903cbe399ace3073d632b275d4b */
#if BIND_GIOStream_priv_FIELD_READER
/* get_priv
 *
 * Return Type: GIOStreamPrivate *
 */
mrb_value
mrb_GLib_GIOStream_get_priv(mrb_state* mrb, mrb_value self) {
  struct _GIOStream * native_self = mruby_unbox__GIOStream(self);

  GIOStreamPrivate * native_priv = native_self->priv;

  mrb_value priv = (native_priv == NULL ? mrb_nil_value() : mruby_box__GIOStreamPrivate(mrb, native_priv));

  return priv;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStream::priv_writer */
/* sha: 93c552f95110f4b2b53c3ca0453bff216eaae2bf48f7e1c30fbba34f448b7311 */
#if BIND_GIOStream_priv_FIELD_WRITER
/* set_priv
 *
 * Parameters:
 * - value: GIOStreamPrivate *
 */
mrb_value
mrb_GLib_GIOStream_set_priv(mrb_state* mrb, mrb_value self) {
  struct _GIOStream * native_self = mruby_unbox__GIOStream(self);
  mrb_value priv;

  mrb_get_args(mrb, "o", &priv);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, priv, GIOStreamPrivate_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GIOStreamPrivate expected");
    return mrb_nil_value();
  }

  GIOStreamPrivate * native_priv = (mrb_nil_p(priv) ? NULL : mruby_unbox__GIOStreamPrivate(priv));

  native_self->priv = native_priv;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_GLib_GIOStream_init(mrb_state* mrb) {
/* MRUBY_BINDING: GIOStream::class_definition */
/* sha: e04f5f1331fc33252e07ede636979c9c2955994813b5d56e44e61a1fb8cc2b56 */
  struct RClass* GIOStream_class = mrb_define_class_under(mrb, GLib_module(mrb), "GIOStream", mrb->object_class);
  MRB_SET_INSTANCE_TT(GIOStream_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStream::class_method_definitions */
/* sha: 7bd5cc2a170355f7066720badb00c2b193f237a7e4d6240d0fcd9ac411dab348 */
#if BIND_GIOStream_INITIALIZE
  mrb_define_method(mrb, GIOStream_class, "initialize", mrb_GLib_GIOStream_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GIOStream_class, "disown", mrb_GLib_GIOStream_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GIOStream_class, "belongs_to_ruby?", mrb_GLib_GIOStream_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStream::attr_definitions */
/* sha: 42cb805ecd04b656a54fdd397867f3c7f74d77799fcd3a0bee54adfd78ebc7a4 */
  /*
   * Fields
   */
#if BIND_GIOStream_parent_instance_FIELD_READER
  mrb_define_method(mrb, GIOStream_class, "parent_instance", mrb_GLib_GIOStream_get_parent_instance, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOStream_parent_instance_FIELD_WRITER
  mrb_define_method(mrb, GIOStream_class, "parent_instance=", mrb_GLib_GIOStream_set_parent_instance, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOStream_priv_FIELD_READER
  mrb_define_method(mrb, GIOStream_class, "priv", mrb_GLib_GIOStream_get_priv, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOStream_priv_FIELD_WRITER
  mrb_define_method(mrb, GIOStream_class, "priv=", mrb_GLib_GIOStream_set_priv, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStream::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
