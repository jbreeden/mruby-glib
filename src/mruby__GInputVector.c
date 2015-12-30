/*
 * struct _GInputVector
 * Defined in file giotypes.h @ line 404
 */

#include "mruby_GLib.h"

#if BIND_GInputVector_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GInputVector::initialize */
/* sha: 56398620ce524f3300ecafb84f53f2ec1bdbedd00490cdf1409378e7bb9a548e */
#if BIND_GInputVector_INITIALIZE
mrb_value
mrb_GLib_GInputVector_initialize(mrb_state* mrb, mrb_value self) {
  struct _GInputVector* native_object = (struct _GInputVector*)calloc(1, sizeof(struct _GInputVector));
  mruby_giftwrap__GInputVector_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputVector::initialize */
/* sha: 7854f85643a7dfe14ff4a876c9f57ed36120baae9ed2cce3cda2f4041eea43e9 */
mrb_value
mrb_GLib_GInputVector_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GInputVector.disown only accepts objects of type GLib::GInputVector");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputVector::belongs_to_ruby */
/* sha: 5eaacf60daccb35acddf7f83aa3d52efc6c8e5b3c9518a827134fc4c5d154d85 */
mrb_value
mrb_GLib_GInputVector_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GInputVector.belongs_to_ruby only accepts objects of type GLib::GInputVector");
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

/* MRUBY_BINDING: GInputVector::buffer_reader */
/* sha: b12fe30617bdcf4b71319ca38656307a7879182635643e1ce8f505ae015165c4 */
#if BIND_GInputVector_buffer_FIELD_READER
/* get_buffer
 *
 * Return Type: gpointer
 */
mrb_value
mrb_GLib_GInputVector_get_buffer(mrb_state* mrb, mrb_value self) {
  struct _GInputVector * native_self = mruby_unbox__GInputVector(self);

  gpointer native_buffer = native_self->buffer;

  mrb_value buffer = TODO_mruby_box_gpointer(mrb, native_buffer);

  return buffer;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputVector::buffer_writer */
/* sha: 54c6adf46f609633931306c97dc1c07d0f93014b7f154125c150a759f93b09ff */
#if BIND_GInputVector_buffer_FIELD_WRITER
/* set_buffer
 *
 * Parameters:
 * - value: gpointer
 */
mrb_value
mrb_GLib_GInputVector_set_buffer(mrb_state* mrb, mrb_value self) {
  struct _GInputVector * native_self = mruby_unbox__GInputVector(self);
  mrb_value buffer;

  mrb_get_args(mrb, "o", &buffer);

  /* type checking */
  TODO_type_check_gpointer(buffer);

  gpointer native_buffer = TODO_mruby_unbox_gpointer(buffer);

  native_self->buffer = native_buffer;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputVector::size_reader */
/* sha: d45367d22cc21abc260d6658818df4c840afd515506276d56f1b940c170979b4 */
#if BIND_GInputVector_size_FIELD_READER
/* get_size
 *
 * Return Type: gsize
 */
mrb_value
mrb_GLib_GInputVector_get_size(mrb_state* mrb, mrb_value self) {
  struct _GInputVector * native_self = mruby_unbox__GInputVector(self);

  gsize native_size = native_self->size;

  mrb_value size = mrb_fixnum_value(native_size);

  return size;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputVector::size_writer */
/* sha: da20684e2c1ce5ea28ab933f4655758b26694f1c54c9200b6d415dcb67dd25d4 */
#if BIND_GInputVector_size_FIELD_WRITER
/* set_size
 *
 * Parameters:
 * - value: gsize
 */
mrb_value
mrb_GLib_GInputVector_set_size(mrb_state* mrb, mrb_value self) {
  struct _GInputVector * native_self = mruby_unbox__GInputVector(self);
  mrb_int native_size;

  mrb_get_args(mrb, "i", &native_size);

  native_self->size = native_size;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_GLib_GInputVector_init(mrb_state* mrb) {
  struct RClass* GInputVector_class = mrb_define_class_under(mrb, GLib_module(mrb), "GInputVector", mrb->object_class);
  MRB_SET_INSTANCE_TT(GInputVector_class, MRB_TT_DATA);

#if BIND_GInputVector_INITIALIZE
  mrb_define_method(mrb, GInputVector_class, "initialize", mrb_GLib_GInputVector_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GInputVector_class, "disown", mrb_GLib_GInputVector_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GInputVector_class, "belongs_to_ruby?", mrb_GLib_GInputVector_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GInputVector_buffer_FIELD_READER
  mrb_define_method(mrb, GInputVector_class, "buffer", mrb_GLib_GInputVector_get_buffer, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GInputVector_buffer_FIELD_WRITER
  mrb_define_method(mrb, GInputVector_class, "buffer=", mrb_GLib_GInputVector_set_buffer, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GInputVector_size_FIELD_READER
  mrb_define_method(mrb, GInputVector_class, "size", mrb_GLib_GInputVector_get_size, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GInputVector_size_FIELD_WRITER
  mrb_define_method(mrb, GInputVector_class, "size=", mrb_GLib_GInputVector_set_size, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
