/*
 * struct _GString
 * Defined in file gstring.h @ line 39
 */

#include "mruby_GLib.h"

#if BIND_GString_TYPE

/*
 * Class Methods
 */

#if BIND_GString_INITIALIZE
mrb_value
mrb_GLib_GString_initialize(mrb_state* mrb, mrb_value self) {
  struct _GString* native_object = (struct _GString*)calloc(1, sizeof(struct _GString));
  mruby_gift_struct _GString_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_GString_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GString.disown only accepts objects of type GLib::GString");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_GString_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GString.belongs_to_ruby only accepts objects of type GLib::GString");
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

#if BIND_GString_str_FIELD_READER
/* get_str
 *
 * Return Type: gchar *
 */
mrb_value
mrb_GLib_GString_get_str(mrb_state* mrb, mrb_value self) {
  struct _GString * native_self = mruby_unbox__GString(self);

  gchar * native_str = native_self->str;

  mrb_value str = mrb_str_new_cstr(mrb, native_str);

  return str;
}
#endif

#if BIND_GString_str_FIELD_WRITER
/* set_str
 *
 * Parameters:
 * - value: gchar *
 */
mrb_value
mrb_GLib_GString_set_str(mrb_state* mrb, mrb_value self) {
  struct _GString * native_self = mruby_unbox__GString(self);
  char * native_str = NULL;

  mrb_get_args(mrb, "z!", &native_str);

  native_self->str = native_str;
  

  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GString_len_FIELD_READER
/* get_len
 *
 * Return Type: gsize
 */
mrb_value
mrb_GLib_GString_get_len(mrb_state* mrb, mrb_value self) {
  struct _GString * native_self = mruby_unbox__GString(self);

  gsize native_len = native_self->len;

  mrb_value len = mrb_fixnum_value(native_len);

  return len;
}
#endif

#if BIND_GString_len_FIELD_WRITER
/* set_len
 *
 * Parameters:
 * - value: gsize
 */
mrb_value
mrb_GLib_GString_set_len(mrb_state* mrb, mrb_value self) {
  struct _GString * native_self = mruby_unbox__GString(self);
  mrb_int native_len;

  mrb_get_args(mrb, "i", &native_len);

  native_self->len = native_len;
  

  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GString_allocated_len_FIELD_READER
/* get_allocated_len
 *
 * Return Type: gsize
 */
mrb_value
mrb_GLib_GString_get_allocated_len(mrb_state* mrb, mrb_value self) {
  struct _GString * native_self = mruby_unbox__GString(self);

  gsize native_allocated_len = native_self->allocated_len;

  mrb_value allocated_len = mrb_fixnum_value(native_allocated_len);

  return allocated_len;
}
#endif

#if BIND_GString_allocated_len_FIELD_WRITER
/* set_allocated_len
 *
 * Parameters:
 * - value: gsize
 */
mrb_value
mrb_GLib_GString_set_allocated_len(mrb_state* mrb, mrb_value self) {
  struct _GString * native_self = mruby_unbox__GString(self);
  mrb_int native_allocated_len;

  mrb_get_args(mrb, "i", &native_allocated_len);

  native_self->allocated_len = native_allocated_len;
  

  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif


void mrb_GLib_GString_init(mrb_state* mrb) {
  struct RClass* GString_class = mrb_define_class_under(mrb, GLib_module(mrb), "GString", mrb->object_class);
  MRB_SET_INSTANCE_TT(GString_class, MRB_TT_DATA);

#if BIND_GString_INITIALIZE
  mrb_define_method(mrb, GString_class, "initialize", mrb_GLib_GString_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GString_class, "disown", mrb_GLib_GString_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GString_class, "belongs_to_ruby?", mrb_GLib_GString_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GString_str_FIELD_READER
  mrb_define_method(mrb, GString_class, "str", mrb_GLib_GString_get_str, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GString_str_FIELD_WRITER
  mrb_define_method(mrb, GString_class, "str=", mrb_GLib_GString_set_str, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GString_len_FIELD_READER
  mrb_define_method(mrb, GString_class, "len", mrb_GLib_GString_get_len, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GString_len_FIELD_WRITER
  mrb_define_method(mrb, GString_class, "len=", mrb_GLib_GString_set_len, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GString_allocated_len_FIELD_READER
  mrb_define_method(mrb, GString_class, "allocated_len", mrb_GLib_GString_get_allocated_len, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GString_allocated_len_FIELD_WRITER
  mrb_define_method(mrb, GString_class, "allocated_len=", mrb_GLib_GString_set_allocated_len, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
