/*
 * GTestLogBuffer
 * Defined in file gtestutils.h @ line 375
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_GLib.h"

#if BIND_GTestLogBuffer_TYPE

/*
 * Class Methods
 */

#if BIND_GTestLogBuffer_INITIALIZE
mrb_value
mrb_GLib_GTestLogBuffer_initialize(mrb_state* mrb, mrb_value self) {
  GTestLogBuffer* native_object = (GTestLogBuffer*)malloc(sizeof(GTestLogBuffer));
  mruby_gift_GTestLogBuffer_data_ptr(self, native_object);
  return self;
}
#endif

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

/*
 * Fields
 */

#if BIND_GTestLogBuffer_data_FIELD_READER
/* get_data
 *
 * Return Type: GString *
 */
mrb_value
mrb_GLib_GTestLogBuffer_get_data(mrb_state* mrb, mrb_value self) {
  GTestLogBuffer * native_self = mruby_unbox_GTestLogBuffer(self);

  GString * native_field = native_self->data;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box__GString(mrb, native_field));

  return ruby_field;
}
#endif

#if BIND_GTestLogBuffer_data_FIELD_WRITER
/* set_data
 *
 * Parameters:
 * - value: GString *
 */
mrb_value
mrb_GLib_GTestLogBuffer_set_data(mrb_state* mrb, mrb_value self) {
  GTestLogBuffer * native_self = mruby_unbox_GTestLogBuffer(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, GString_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GString expected");
    return mrb_nil_value();
  }

  GString * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox__GString(ruby_field));

  native_self->data = native_field;

  return ruby_field;
}
#endif

#if BIND_GTestLogBuffer_msgs_FIELD_READER
/* get_msgs
 *
 * Return Type: GSList *
 */
mrb_value
mrb_GLib_GTestLogBuffer_get_msgs(mrb_state* mrb, mrb_value self) {
  GTestLogBuffer * native_self = mruby_unbox_GTestLogBuffer(self);

  GSList * native_field = native_self->msgs;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box__GSList(mrb, native_field));

  return ruby_field;
}
#endif

#if BIND_GTestLogBuffer_msgs_FIELD_WRITER
/* set_msgs
 *
 * Parameters:
 * - value: GSList *
 */
mrb_value
mrb_GLib_GTestLogBuffer_set_msgs(mrb_state* mrb, mrb_value self) {
  GTestLogBuffer * native_self = mruby_unbox_GTestLogBuffer(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, GSList_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GSList expected");
    return mrb_nil_value();
  }

  GSList * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox__GSList(ruby_field));

  native_self->msgs = native_field;

  return ruby_field;
}
#endif


void mrb_GLib_GTestLogBuffer_init(mrb_state* mrb) {
  struct RClass* GTestLogBuffer_class = mrb_define_class_under(mrb, GLib_module(mrb), "GTestLogBuffer", mrb->object_class);
  MRB_SET_INSTANCE_TT(GTestLogBuffer_class, MRB_TT_DATA);

#if BIND_GTestLogBuffer_INITIALIZE
  mrb_define_method(mrb, GTestLogBuffer_class, "initialize", mrb_GLib_GTestLogBuffer_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GTestLogBuffer_class, "disown", mrb_GLib_GTestLogBuffer_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GTestLogBuffer_class, "belongs_to_ruby?", mrb_GLib_GTestLogBuffer_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

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

}

#endif
