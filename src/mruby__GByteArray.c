/*
 * struct _GByteArray
 * Defined in file garray.h @ line 38
 */

#include "mruby_GLib.h"

#if BIND_GByteArray_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GByteArray::initialize */
/* sha: e669951ff5bd7209890810bfe648b0c6460c4fc057fb8ec8ea0694b115af3931 */
#if BIND_GByteArray_INITIALIZE
mrb_value
mrb_GLib_GByteArray_initialize(mrb_state* mrb, mrb_value self) {
  struct _GByteArray* native_object = (struct _GByteArray*)calloc(1, sizeof(struct _GByteArray));
  mruby_giftwrap__GByteArray_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GByteArray::initialize */
/* sha: 2f8648fb1c8b83361a01d4750c01879ccf612db0fb1265eb8b3b49f2693bb143 */
mrb_value
mrb_GLib_GByteArray_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GByteArray.disown only accepts objects of type GLib::GByteArray");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GByteArray::belongs_to_ruby */
/* sha: ee56d59951d0a9ced74afb3f117888b337e4c4514d2a6c2b757bb3a0bf0f0473 */
mrb_value
mrb_GLib_GByteArray_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GByteArray.belongs_to_ruby only accepts objects of type GLib::GByteArray");
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

/* MRUBY_BINDING: GByteArray::data_reader */
/* sha: 5ddd3d4358d4fe21a4db0755de62160a376cce6d0a39f6f0c586965e71590fb6 */
#if BIND_GByteArray_data_FIELD_READER
/* get_data
 *
 * Return Type: guint8 *
 */
mrb_value
mrb_GLib_GByteArray_get_data(mrb_state* mrb, mrb_value self) {
  struct _GByteArray * native_self = mruby_unbox__GByteArray(self);

  guint8 * native_data = native_self->data;

  mrb_value data = TODO_mruby_box_guint8_PTR(mrb, native_data);

  return data;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GByteArray::data_writer */
/* sha: 2c4a6d09134cfbad5dd1e98820854a9998cbe539fa3699266c56b6231d750e71 */
#if BIND_GByteArray_data_FIELD_WRITER
/* set_data
 *
 * Parameters:
 * - value: guint8 *
 */
mrb_value
mrb_GLib_GByteArray_set_data(mrb_state* mrb, mrb_value self) {
  struct _GByteArray * native_self = mruby_unbox__GByteArray(self);
  mrb_value data;

  mrb_get_args(mrb, "o", &data);

  /* type checking */
  TODO_type_check_guint8_PTR(data);

  guint8 * native_data = TODO_mruby_unbox_guint8_PTR(data);

  native_self->data = native_data;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GByteArray::len_reader */
/* sha: 300c6e1137da3e48a4fecde9c4687dd3da00b666c3ca8adade551233e15b0584 */
#if BIND_GByteArray_len_FIELD_READER
/* get_len
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GByteArray_get_len(mrb_state* mrb, mrb_value self) {
  struct _GByteArray * native_self = mruby_unbox__GByteArray(self);

  guint native_len = native_self->len;

  mrb_value len = mrb_fixnum_value(native_len);

  return len;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GByteArray::len_writer */
/* sha: 81ee8e0ca9b598b6876fbb80255f0539744bfec70568591afd130355f0b314a0 */
#if BIND_GByteArray_len_FIELD_WRITER
/* set_len
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GByteArray_set_len(mrb_state* mrb, mrb_value self) {
  struct _GByteArray * native_self = mruby_unbox__GByteArray(self);
  mrb_int native_len;

  mrb_get_args(mrb, "i", &native_len);

  native_self->len = native_len;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_GLib_GByteArray_init(mrb_state* mrb) {
/* MRUBY_BINDING: GByteArray::class_definition */
/* sha: 488da6a7efa178c4ad7ee6b28faaf24f6b0975d134c43926068cd71a20a41cfd */
  struct RClass* GByteArray_class = mrb_define_class_under(mrb, GLib_module(mrb), "GByteArray", mrb->object_class);
  MRB_SET_INSTANCE_TT(GByteArray_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GByteArray::class_method_definitions */
/* sha: 2599228f42e10e6d7b2bfb6236b10c68e1247ede713a04620e3654fe0844ac6d */
#if BIND_GByteArray_INITIALIZE
  mrb_define_method(mrb, GByteArray_class, "initialize", mrb_GLib_GByteArray_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GByteArray_class, "disown", mrb_GLib_GByteArray_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GByteArray_class, "belongs_to_ruby?", mrb_GLib_GByteArray_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GByteArray::attr_definitions */
/* sha: 2103b783dcf7a06184e67ed486bb305b0971c9c63fb362f8b8506e0f5fc3c09e */
  /*
   * Fields
   */
#if BIND_GByteArray_data_FIELD_READER
  mrb_define_method(mrb, GByteArray_class, "data", mrb_GLib_GByteArray_get_data, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GByteArray_data_FIELD_WRITER
  mrb_define_method(mrb, GByteArray_class, "data=", mrb_GLib_GByteArray_set_data, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GByteArray_len_FIELD_READER
  mrb_define_method(mrb, GByteArray_class, "len", mrb_GLib_GByteArray_get_len, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GByteArray_len_FIELD_WRITER
  mrb_define_method(mrb, GByteArray_class, "len=", mrb_GLib_GByteArray_set_len, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GByteArray::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
