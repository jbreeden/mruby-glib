/*
 * struct _GOutputVector
 * Defined in file giotypes.h @ line 423
 */

#include "mruby_GLib.h"

#if BIND_GOutputVector_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GOutputVector::initialize */
/* sha: 71d6d72e57d830a4e32475dd7c197ca1ff9812f93b1bf7e60e61135acecb4e29 */
#if BIND_GOutputVector_INITIALIZE
mrb_value
mrb_GLib_GOutputVector_initialize(mrb_state* mrb, mrb_value self) {
  struct _GOutputVector* native_object = (struct _GOutputVector*)calloc(1, sizeof(struct _GOutputVector));
  mruby_giftwrap__GOutputVector_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputVector::initialize */
/* sha: b5eb22925d095a738e83dd611ecb56c47542c9a8afdee2eeb4ed2dd485b71486 */
mrb_value
mrb_GLib_GOutputVector_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GOutputVector.disown only accepts objects of type GLib::GOutputVector");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputVector::belongs_to_ruby */
/* sha: 8f4a5aad7ae6b283b2e83876df80a46cd149d55f360c774dcff740f0ae50f1a9 */
mrb_value
mrb_GLib_GOutputVector_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GOutputVector.belongs_to_ruby only accepts objects of type GLib::GOutputVector");
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

/* MRUBY_BINDING: GOutputVector::buffer_reader */
/* sha: fc807d45c026aaed787206be8d071c76dc6bcbf4f4bd3b9eec5a62fff95d756c */
#if BIND_GOutputVector_buffer_FIELD_READER
/* get_buffer
 *
 * Return Type: gconstpointer
 */
mrb_value
mrb_GLib_GOutputVector_get_buffer(mrb_state* mrb, mrb_value self) {
  struct _GOutputVector * native_self = mruby_unbox__GOutputVector(self);

  gconstpointer native_buffer = native_self->buffer;

  mrb_value buffer = TODO_mruby_box_gpointer(mrb, native_buffer);

  return buffer;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputVector::buffer_writer */
/* sha: 34228e41d6285cc7837a787466d47cdc1925d4b6d853db73b05c17ccf517b0fa */
#if BIND_GOutputVector_buffer_FIELD_WRITER
/* set_buffer
 *
 * Parameters:
 * - value: gconstpointer
 */
mrb_value
mrb_GLib_GOutputVector_set_buffer(mrb_state* mrb, mrb_value self) {
  struct _GOutputVector * native_self = mruby_unbox__GOutputVector(self);
  mrb_value buffer;

  mrb_get_args(mrb, "o", &buffer);

  /* type checking */
  TODO_type_check_gpointer(buffer);

  gconstpointer native_buffer = TODO_mruby_unbox_gpointer(buffer);

  native_self->buffer = native_buffer;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputVector::size_reader */
/* sha: 09bc1a9fc4e7cb737b5e356ed3f8af7804b146ce7b3e2dc0d17a3582f35b7fd9 */
#if BIND_GOutputVector_size_FIELD_READER
/* get_size
 *
 * Return Type: gsize
 */
mrb_value
mrb_GLib_GOutputVector_get_size(mrb_state* mrb, mrb_value self) {
  struct _GOutputVector * native_self = mruby_unbox__GOutputVector(self);

  gsize native_size = native_self->size;

  mrb_value size = mrb_fixnum_value(native_size);

  return size;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputVector::size_writer */
/* sha: 7dee9cffb9d23a3f3f2b48e66252865af4d585d782ce26d6eeacd3b5678d587e */
#if BIND_GOutputVector_size_FIELD_WRITER
/* set_size
 *
 * Parameters:
 * - value: gsize
 */
mrb_value
mrb_GLib_GOutputVector_set_size(mrb_state* mrb, mrb_value self) {
  struct _GOutputVector * native_self = mruby_unbox__GOutputVector(self);
  mrb_int native_size;

  mrb_get_args(mrb, "i", &native_size);

  native_self->size = native_size;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_GLib_GOutputVector_init(mrb_state* mrb) {
  struct RClass* GOutputVector_class = mrb_define_class_under(mrb, GLib_module(mrb), "GOutputVector", mrb->object_class);
  MRB_SET_INSTANCE_TT(GOutputVector_class, MRB_TT_DATA);

#if BIND_GOutputVector_INITIALIZE
  mrb_define_method(mrb, GOutputVector_class, "initialize", mrb_GLib_GOutputVector_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GOutputVector_class, "disown", mrb_GLib_GOutputVector_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GOutputVector_class, "belongs_to_ruby?", mrb_GLib_GOutputVector_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GOutputVector_buffer_FIELD_READER
  mrb_define_method(mrb, GOutputVector_class, "buffer", mrb_GLib_GOutputVector_get_buffer, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GOutputVector_buffer_FIELD_WRITER
  mrb_define_method(mrb, GOutputVector_class, "buffer=", mrb_GLib_GOutputVector_set_buffer, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GOutputVector_size_FIELD_READER
  mrb_define_method(mrb, GOutputVector_class, "size", mrb_GLib_GOutputVector_get_size, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GOutputVector_size_FIELD_WRITER
  mrb_define_method(mrb, GOutputVector_class, "size=", mrb_GLib_GOutputVector_set_size, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
