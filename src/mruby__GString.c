/*
 * struct _GString
 * Defined in file gstring.h @ line 39
 */

#include "mruby_GLib.h"

#if BIND_GString_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GString::initialize */
/* sha: b9f54ad07070f888362e9e577c0d1b0645262fc5e01b69412e7dde040c39771d */
#if BIND_GString_INITIALIZE
mrb_value
mrb_GLib_GString_initialize(mrb_state* mrb, mrb_value self) {
  struct _GString* native_object = (struct _GString*)calloc(1, sizeof(struct _GString));
  mruby_giftwrap__GString_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GString::initialize */
/* sha: 00b2a5f31f8ee005512830a64db0bff4b99e52c18b918fef9dc7f2dccae1dc2e */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GString::belongs_to_ruby */
/* sha: a4e4e30261a67d45d478b7789619563bb8fd852a5227273e87d1c04f6e73faf1 */
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
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: GString::str_reader */
/* sha: 3e83b4888a6d607ceb078743426ae38661c9b6a846c7d064d45ac12c74b7b723 */
#if BIND_GString_str_FIELD_READER
/* get_str
 *
 * Return Type: gchar *
 */
mrb_value
mrb_GLib_GString_get_str(mrb_state* mrb, mrb_value self) {
  struct _GString * native_self = mruby_unbox__GString(self);

  gchar * native_str = native_self->str;

  mrb_value str = TODO_mruby_box_gchar_PTR(mrb, native_str);

  return str;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GString::str_writer */
/* sha: 2b0707ef3a1658ee97dd5700417e8bca31f25bc4fd8c1646eed9ff8ff881ce78 */
#if BIND_GString_str_FIELD_WRITER
/* set_str
 *
 * Parameters:
 * - value: gchar *
 */
mrb_value
mrb_GLib_GString_set_str(mrb_state* mrb, mrb_value self) {
  struct _GString * native_self = mruby_unbox__GString(self);
  mrb_value str;

  mrb_get_args(mrb, "o", &str);

  /* type checking */
  TODO_type_check_gchar_PTR(str);

  gchar * native_str = TODO_mruby_unbox_gchar_PTR(str);

  native_self->str = native_str;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GString::len_reader */
/* sha: 681f3797fe45656b6f3307f89e8acf64ef2e79bd923dca494a4114510f464fa3 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GString::len_writer */
/* sha: e72cb4e11869301f422d5b263b6a7498af672aab71390a64dfde2cbb78af2e12 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GString::allocated_len_reader */
/* sha: 3df77c13014cd3a9804dc358c3dc0f14dac3ef579483adbf1050f232272e44c9 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GString::allocated_len_writer */
/* sha: b29b23e9646f34c229742d6e777a0717b98ad4ae2f5c483d8fa9f98f4c11056f */
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
/* MRUBY_BINDING_END */


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
