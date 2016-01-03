/*
 * struct _GOutputStream
 * Defined in file goutputstream.h @ line 51
 */

#include "mruby_GLib.h"

#if BIND_GOutputStream_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GOutputStream::initialize */
/* sha: 0617f0ab79c0ad96d832ac686ea02745a97bde9d85a51bab74c8b40d629c95ab */
#if BIND_GOutputStream_INITIALIZE
mrb_value
mrb_GLib_GOutputStream_initialize(mrb_state* mrb, mrb_value self) {
  struct _GOutputStream* native_object = (struct _GOutputStream*)calloc(1, sizeof(struct _GOutputStream));
  mruby_giftwrap__GOutputStream_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStream::initialize */
/* sha: 5676427f91d4e7e150fa7ac4ad5c6e704ac847a27c6c364ea6d1f063270859e4 */
mrb_value
mrb_GLib_GOutputStream_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GOutputStream.disown only accepts objects of type GLib::GOutputStream");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStream::belongs_to_ruby */
/* sha: 061c491dc81a81ab5118a5aa3d2d498a0b4c76000fc33d08a9ede2f5ea5aabe0 */
mrb_value
mrb_GLib_GOutputStream_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GOutputStream.belongs_to_ruby only accepts objects of type GLib::GOutputStream");
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

/* MRUBY_BINDING: GOutputStream::parent_instance_reader */
/* sha: 10da9f652970e2028ee49be1f18b7204979d2b64d25b67b41746f079763fafcd */
#if BIND_GOutputStream_parent_instance_FIELD_READER
/* get_parent_instance
 *
 * Return Type: GObject
 */
mrb_value
mrb_GLib_GOutputStream_get_parent_instance(mrb_state* mrb, mrb_value self) {
  struct _GOutputStream * native_self = mruby_unbox__GOutputStream(self);

  GObject native_parent_instance = native_self->parent_instance;

  mrb_value parent_instance = TODO_mruby_box_GObject(mrb, native_parent_instance);

  return parent_instance;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStream::parent_instance_writer */
/* sha: fae713daf36539b62a3dc5111de69f5dec5f0fdc45f8ead0da07b6a165415d10 */
#if BIND_GOutputStream_parent_instance_FIELD_WRITER
/* set_parent_instance
 *
 * Parameters:
 * - value: GObject
 */
mrb_value
mrb_GLib_GOutputStream_set_parent_instance(mrb_state* mrb, mrb_value self) {
  struct _GOutputStream * native_self = mruby_unbox__GOutputStream(self);
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

/* MRUBY_BINDING: GOutputStream::priv_reader */
/* sha: 78b8997fa336cd4afe3f86de659e82bc9b01221672c960610b95d7aa749cefe2 */
#if BIND_GOutputStream_priv_FIELD_READER
/* get_priv
 *
 * Return Type: GOutputStreamPrivate *
 */
mrb_value
mrb_GLib_GOutputStream_get_priv(mrb_state* mrb, mrb_value self) {
  struct _GOutputStream * native_self = mruby_unbox__GOutputStream(self);

  GOutputStreamPrivate * native_priv = native_self->priv;

  mrb_value priv = (native_priv == NULL ? mrb_nil_value() : mruby_box__GOutputStreamPrivate(mrb, native_priv));

  return priv;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStream::priv_writer */
/* sha: dcd89f9794c5dca57abaad487fef5db43dfe4984c930fa551499ae2d60377539 */
#if BIND_GOutputStream_priv_FIELD_WRITER
/* set_priv
 *
 * Parameters:
 * - value: GOutputStreamPrivate *
 */
mrb_value
mrb_GLib_GOutputStream_set_priv(mrb_state* mrb, mrb_value self) {
  struct _GOutputStream * native_self = mruby_unbox__GOutputStream(self);
  mrb_value priv;

  mrb_get_args(mrb, "o", &priv);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, priv, GOutputStreamPrivate_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GOutputStreamPrivate expected");
    return mrb_nil_value();
  }

  GOutputStreamPrivate * native_priv = (mrb_nil_p(priv) ? NULL : mruby_unbox__GOutputStreamPrivate(priv));

  native_self->priv = native_priv;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_GLib_GOutputStream_init(mrb_state* mrb) {
/* MRUBY_BINDING: GOutputStream::class_definition */
/* sha: d332568e11482b3a755c07e7c6a2b54872851b8e1a360af7f4e5bb4607d09de0 */
  struct RClass* GOutputStream_class = mrb_define_class_under(mrb, GLib_module(mrb), "GOutputStream", mrb->object_class);
  MRB_SET_INSTANCE_TT(GOutputStream_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStream::class_method_definitions */
/* sha: 5df389802869796b5a5e5f525d25184aacf2a8f345243d9b3639addeb63280e3 */
#if BIND_GOutputStream_INITIALIZE
  mrb_define_method(mrb, GOutputStream_class, "initialize", mrb_GLib_GOutputStream_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GOutputStream_class, "disown", mrb_GLib_GOutputStream_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GOutputStream_class, "belongs_to_ruby?", mrb_GLib_GOutputStream_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStream::attr_definitions */
/* sha: 49ceffef50afb67484d4b7d561e3ecdd18dc6603df7fc7eef7b4e56e348fb8fc */
  /*
   * Fields
   */
#if BIND_GOutputStream_parent_instance_FIELD_READER
  mrb_define_method(mrb, GOutputStream_class, "parent_instance", mrb_GLib_GOutputStream_get_parent_instance, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GOutputStream_parent_instance_FIELD_WRITER
  mrb_define_method(mrb, GOutputStream_class, "parent_instance=", mrb_GLib_GOutputStream_set_parent_instance, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GOutputStream_priv_FIELD_READER
  mrb_define_method(mrb, GOutputStream_class, "priv", mrb_GLib_GOutputStream_get_priv, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GOutputStream_priv_FIELD_WRITER
  mrb_define_method(mrb, GOutputStream_class, "priv=", mrb_GLib_GOutputStream_set_priv, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStream::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
