/*
 * struct _GArray
 * Defined in file garray.h @ line 37
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_GLib.h"

#if BIND_GArray_TYPE

/*
 * Class Methods
 */

#if BIND_GArray_INITIALIZE
mrb_value
mrb_GLib_GArray_initialize(mrb_state* mrb, mrb_value self) {
  struct _GArray* native_object = (struct _GArray*)malloc(sizeof(struct _GArray));
  mruby_gift_struct _GArray_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_GArray_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GArray.disown only accepts objects of type GLib::GArray");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_GArray_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GArray.belongs_to_ruby only accepts objects of type GLib::GArray");
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

#if BIND_GArray_data_FIELD_READER
/* get_data
 *
 * Return Type: gchar *
 */
mrb_value
mrb_GLib_GArray_get_data(mrb_state* mrb, mrb_value self) {
  struct _GArray * native_self = mruby_unbox_struct _GArray(self);

  gchar * native_field = native_self->data;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GArray_data_FIELD_WRITER
/* set_data
 *
 * Parameters:
 * - value: gchar *
 */
mrb_value
mrb_GLib_GArray_set_data(mrb_state* mrb, mrb_value self) {
  struct _GArray * native_self = mruby_unbox_struct _GArray(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_field = strdup(ruby_field);

  native_self->data = native_field;

  return ruby_field;
}
#endif

#if BIND_GArray_len_FIELD_READER
/* get_len
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GArray_get_len(mrb_state* mrb, mrb_value self) {
  struct _GArray * native_self = mruby_unbox_struct _GArray(self);

  guint native_field = native_self->len;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GArray_len_FIELD_WRITER
/* set_len
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GArray_set_len(mrb_state* mrb, mrb_value self) {
  struct _GArray * native_self = mruby_unbox_struct _GArray(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->len = native_field;

  return ruby_field;
}
#endif


void mrb_GLib_GArray_init(mrb_state* mrb) {
  struct RClass* GArray_class = mrb_define_class_under(mrb, GLib_module(mrb), "GArray", mrb->object_class);
  MRB_SET_INSTANCE_TT(GArray_class, MRB_TT_DATA);

#if BIND_GArray_INITIALIZE
  mrb_define_method(mrb, GArray_class, "initialize", mrb_GLib_GArray_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GArray_class, "disown", mrb_GLib_GArray_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GArray_class, "belongs_to_ruby?", mrb_GLib_GArray_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GArray_data_FIELD_READER
  mrb_define_method(mrb, GArray_class, "data", mrb_GLib_GArray_get_data, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GArray_data_FIELD_WRITER
  mrb_define_method(mrb, GArray_class, "data=", mrb_GLib_GArray_set_data, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GArray_len_FIELD_READER
  mrb_define_method(mrb, GArray_class, "len", mrb_GLib_GArray_get_len, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GArray_len_FIELD_WRITER
  mrb_define_method(mrb, GArray_class, "len=", mrb_GLib_GArray_set_len, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
