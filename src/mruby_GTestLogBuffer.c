/*
 * GTestLogBuffer
 * Defined in file gtestutils.h @ line 375
 */

#include "mruby_GLib.h"

#if BIND_GTestLogBuffer_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GTestLogBuffer::initialize */
/* sha: 0960f58f954f49dbcc14cb2039e8b4d5f2ce72f7e6031898f5328a02859c2972 */
#if BIND_GTestLogBuffer_INITIALIZE
mrb_value
mrb_GLib_GTestLogBuffer_initialize(mrb_state* mrb, mrb_value self) {
  GTestLogBuffer* native_object = (GTestLogBuffer*)calloc(1, sizeof(GTestLogBuffer));
  mruby_giftwrap_GTestLogBuffer_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestLogBuffer::initialize */
/* sha: 3e177554253bb0a608f6b821ac5fbd15db01bb80ea3a0579accae7b0c7781260 */
mrb_value
mrb_GLib_GTestLogBuffer_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTestLogBuffer.disown only accepts objects of type GLib::GTestLogBuffer");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestLogBuffer::belongs_to_ruby */
/* sha: 1b3fb49d4f64e3eb5417c4d667318d19e1bb9c44e42772f6c53ecef699e4cb07 */
mrb_value
mrb_GLib_GTestLogBuffer_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTestLogBuffer.belongs_to_ruby only accepts objects of type GLib::GTestLogBuffer");
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

/* MRUBY_BINDING: GTestLogBuffer::data_reader */
/* sha: 50f92e1c8ec3163b5edd6bda827c7473d5146eb26e85febed533f8a634085962 */
#if BIND_GTestLogBuffer_data_FIELD_READER
/* get_data
 *
 * Return Type: GString *
 */
mrb_value
mrb_GLib_GTestLogBuffer_get_data(mrb_state* mrb, mrb_value self) {
  GTestLogBuffer * native_self = mruby_unbox_GTestLogBuffer(self);

  GString * native_data = native_self->data;

  mrb_value data = (native_data == NULL ? mrb_nil_value() : mruby_box__GString(mrb, native_data));

  return data;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestLogBuffer::data_writer */
/* sha: 2425db4f0bd80af425814892f03f4407c00fc654e38254983ab4554521f980a2 */
#if BIND_GTestLogBuffer_data_FIELD_WRITER
/* set_data
 *
 * Parameters:
 * - value: GString *
 */
mrb_value
mrb_GLib_GTestLogBuffer_set_data(mrb_state* mrb, mrb_value self) {
  GTestLogBuffer * native_self = mruby_unbox_GTestLogBuffer(self);
  mrb_value data;

  mrb_get_args(mrb, "o", &data);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, data, GString_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GString expected");
    return mrb_nil_value();
  }

  GString * native_data = (mrb_nil_p(data) ? NULL : mruby_unbox__GString(data));

  native_self->data = native_data;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestLogBuffer::msgs_reader */
/* sha: 131016d1f6f8f4a200cab01e9e6f4ac4b93a781caadcaf944d8f4bbb85a06815 */
#if BIND_GTestLogBuffer_msgs_FIELD_READER
/* get_msgs
 *
 * Return Type: GSList *
 */
mrb_value
mrb_GLib_GTestLogBuffer_get_msgs(mrb_state* mrb, mrb_value self) {
  GTestLogBuffer * native_self = mruby_unbox_GTestLogBuffer(self);

  GSList * native_msgs = native_self->msgs;

  mrb_value msgs = (native_msgs == NULL ? mrb_nil_value() : mruby_box__GSList(mrb, native_msgs));

  return msgs;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestLogBuffer::msgs_writer */
/* sha: 3ebe5e69886e5a386f1172f59a07ef034c5476139be8602b61342bc499ece6ca */
#if BIND_GTestLogBuffer_msgs_FIELD_WRITER
/* set_msgs
 *
 * Parameters:
 * - value: GSList *
 */
mrb_value
mrb_GLib_GTestLogBuffer_set_msgs(mrb_state* mrb, mrb_value self) {
  GTestLogBuffer * native_self = mruby_unbox_GTestLogBuffer(self);
  mrb_value msgs;

  mrb_get_args(mrb, "o", &msgs);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, msgs, GSList_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GSList expected");
    return mrb_nil_value();
  }

  GSList * native_msgs = (mrb_nil_p(msgs) ? NULL : mruby_unbox__GSList(msgs));

  native_self->msgs = native_msgs;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_GLib_GTestLogBuffer_init(mrb_state* mrb) {
/* MRUBY_BINDING: GTestLogBuffer::class_definition */
/* sha: eaadfdf2b5325bfdfff09a88e808e91d6038116d3560020703db701912b3846f */
  struct RClass* GTestLogBuffer_class = mrb_define_class_under(mrb, GLib_module(mrb), "GTestLogBuffer", mrb->object_class);
  MRB_SET_INSTANCE_TT(GTestLogBuffer_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestLogBuffer::class_method_definitions */
/* sha: ea0df554b40a2df920fdbf034e9aeb1b9f0d70b7c6f4c4088728f383d0cfb48b */
#if BIND_GTestLogBuffer_INITIALIZE
  mrb_define_method(mrb, GTestLogBuffer_class, "initialize", mrb_GLib_GTestLogBuffer_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GTestLogBuffer_class, "disown", mrb_GLib_GTestLogBuffer_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GTestLogBuffer_class, "belongs_to_ruby?", mrb_GLib_GTestLogBuffer_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestLogBuffer::attr_definitions */
/* sha: a2bc5c6ad9a5acb0ed66bf778d5580fb84782d83aead3d2d311af10f3f94a35f */
  /*
   * Fields
   */
#if BIND_GTestLogBuffer_data_FIELD_READER
  mrb_define_method(mrb, GTestLogBuffer_class, "data", mrb_GLib_GTestLogBuffer_get_data, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GTestLogBuffer_data_FIELD_WRITER
  mrb_define_method(mrb, GTestLogBuffer_class, "data=", mrb_GLib_GTestLogBuffer_set_data, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GTestLogBuffer_msgs_FIELD_READER
  mrb_define_method(mrb, GTestLogBuffer_class, "msgs", mrb_GLib_GTestLogBuffer_get_msgs, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GTestLogBuffer_msgs_FIELD_WRITER
  mrb_define_method(mrb, GTestLogBuffer_class, "msgs=", mrb_GLib_GTestLogBuffer_set_msgs, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestLogBuffer::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
