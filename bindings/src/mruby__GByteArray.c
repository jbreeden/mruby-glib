/*
 * struct _GByteArray
 * Defined in file garray.h @ line 38
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_GLib.h"

#if BIND_GByteArray_TYPE

/*
 * Class Methods
 */

#if BIND_GByteArray_INITIALIZE
mrb_value
mrb_GLib_GByteArray_initialize(mrb_state* mrb, mrb_value self) {
  struct _GByteArray* native_object = (struct _GByteArray*)malloc(sizeof(struct _GByteArray));
  mruby_gift_struct _GByteArray_data_ptr(self, native_object);
  return self;
}
#endif

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

/*
 * Fields
 */

#if BIND_GByteArray_data_FIELD_READER
/* get_data
 *
 * Return Type: guint8 *
 */
mrb_value
mrb_GLib_GByteArray_get_data(mrb_state* mrb, mrb_value self) {
  struct _GByteArray * native_self = mruby_unbox_struct _GByteArray(self);

  guint8 * native_field = native_self->data;

  mrb_value ruby_field = TODO_mruby_box_guint8_PTR(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GByteArray_data_FIELD_WRITER
/* set_data
 *
 * Parameters:
 * - value: guint8 *
 */
mrb_value
mrb_GLib_GByteArray_set_data(mrb_state* mrb, mrb_value self) {
  struct _GByteArray * native_self = mruby_unbox_struct _GByteArray(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_guint8_PTR(ruby_field);

  guint8 * native_field = TODO_mruby_unbox_guint8_PTR(ruby_field);

  native_self->data = native_field;

  return ruby_field;
}
#endif

#if BIND_GByteArray_len_FIELD_READER
/* get_len
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GByteArray_get_len(mrb_state* mrb, mrb_value self) {
  struct _GByteArray * native_self = mruby_unbox_struct _GByteArray(self);

  guint native_field = native_self->len;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GByteArray_len_FIELD_WRITER
/* set_len
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GByteArray_set_len(mrb_state* mrb, mrb_value self) {
  struct _GByteArray * native_self = mruby_unbox_struct _GByteArray(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = mrb_fixnum(ruby_field);

  native_self->len = native_field;

  return ruby_field;
}
#endif


void mrb_GLib_GByteArray_init(mrb_state* mrb) {
  struct RClass* GByteArray_class = mrb_define_class_under(mrb, GLib_module(mrb), "GByteArray", mrb->object_class);
  MRB_SET_INSTANCE_TT(GByteArray_class, MRB_TT_DATA);

#if BIND_GByteArray_INITIALIZE
  mrb_define_method(mrb, GByteArray_class, "initialize", mrb_GLib_GByteArray_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GByteArray_class, "disown", mrb_GLib_GByteArray_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GByteArray_class, "belongs_to_ruby?", mrb_GLib_GByteArray_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

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

}

#endif
