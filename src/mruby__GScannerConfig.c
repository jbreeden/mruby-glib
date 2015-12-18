/*
 * struct _GScannerConfig
 * Defined in file gscanner.h @ line 38
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_GLib.h"

#if BIND_GScannerConfig_TYPE

/*
 * Class Methods
 */

#if BIND_GScannerConfig_INITIALIZE
mrb_value
mrb_GLib_GScannerConfig_initialize(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig* native_object = (struct _GScannerConfig*)malloc(sizeof(struct _GScannerConfig));
  mruby_gift_struct _GScannerConfig_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_GScannerConfig_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GScannerConfig.disown only accepts objects of type GLib::GScannerConfig");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_GScannerConfig_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GScannerConfig.belongs_to_ruby only accepts objects of type GLib::GScannerConfig");
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

#if BIND_GScannerConfig_cset_skip_characters_FIELD_READER
/* get_cset_skip_characters
 *
 * Return Type: gchar *
 */
mrb_value
mrb_GLib_GScannerConfig_get_cset_skip_characters(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);

  gchar * native_field = native_self->cset_skip_characters;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_cset_skip_characters_FIELD_WRITER
/* set_cset_skip_characters
 *
 * Parameters:
 * - value: gchar *
 */
mrb_value
mrb_GLib_GScannerConfig_set_cset_skip_characters(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);
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

  native_self->cset_skip_characters = native_field;

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_cset_identifier_first_FIELD_READER
/* get_cset_identifier_first
 *
 * Return Type: gchar *
 */
mrb_value
mrb_GLib_GScannerConfig_get_cset_identifier_first(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);

  gchar * native_field = native_self->cset_identifier_first;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_cset_identifier_first_FIELD_WRITER
/* set_cset_identifier_first
 *
 * Parameters:
 * - value: gchar *
 */
mrb_value
mrb_GLib_GScannerConfig_set_cset_identifier_first(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);
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

  native_self->cset_identifier_first = native_field;

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_cset_identifier_nth_FIELD_READER
/* get_cset_identifier_nth
 *
 * Return Type: gchar *
 */
mrb_value
mrb_GLib_GScannerConfig_get_cset_identifier_nth(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);

  gchar * native_field = native_self->cset_identifier_nth;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_cset_identifier_nth_FIELD_WRITER
/* set_cset_identifier_nth
 *
 * Parameters:
 * - value: gchar *
 */
mrb_value
mrb_GLib_GScannerConfig_set_cset_identifier_nth(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);
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

  native_self->cset_identifier_nth = native_field;

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_cpair_comment_single_FIELD_READER
/* get_cpair_comment_single
 *
 * Return Type: gchar *
 */
mrb_value
mrb_GLib_GScannerConfig_get_cpair_comment_single(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);

  gchar * native_field = native_self->cpair_comment_single;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_cpair_comment_single_FIELD_WRITER
/* set_cpair_comment_single
 *
 * Parameters:
 * - value: gchar *
 */
mrb_value
mrb_GLib_GScannerConfig_set_cpair_comment_single(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);
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

  native_self->cpair_comment_single = native_field;

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_case_sensitive_FIELD_READER
/* get_case_sensitive
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_case_sensitive(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);

  guint native_field = native_self->case_sensitive;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_case_sensitive_FIELD_WRITER
/* set_case_sensitive
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GScannerConfig_set_case_sensitive(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->case_sensitive = native_field;

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_skip_comment_multi_FIELD_READER
/* get_skip_comment_multi
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_skip_comment_multi(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);

  guint native_field = native_self->skip_comment_multi;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_skip_comment_multi_FIELD_WRITER
/* set_skip_comment_multi
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GScannerConfig_set_skip_comment_multi(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->skip_comment_multi = native_field;

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_skip_comment_single_FIELD_READER
/* get_skip_comment_single
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_skip_comment_single(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);

  guint native_field = native_self->skip_comment_single;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_skip_comment_single_FIELD_WRITER
/* set_skip_comment_single
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GScannerConfig_set_skip_comment_single(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->skip_comment_single = native_field;

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_scan_comment_multi_FIELD_READER
/* get_scan_comment_multi
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_scan_comment_multi(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);

  guint native_field = native_self->scan_comment_multi;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_scan_comment_multi_FIELD_WRITER
/* set_scan_comment_multi
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GScannerConfig_set_scan_comment_multi(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->scan_comment_multi = native_field;

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_scan_identifier_FIELD_READER
/* get_scan_identifier
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_scan_identifier(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);

  guint native_field = native_self->scan_identifier;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_scan_identifier_FIELD_WRITER
/* set_scan_identifier
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GScannerConfig_set_scan_identifier(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->scan_identifier = native_field;

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_scan_identifier_1char_FIELD_READER
/* get_scan_identifier_1char
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_scan_identifier_1char(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);

  guint native_field = native_self->scan_identifier_1char;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_scan_identifier_1char_FIELD_WRITER
/* set_scan_identifier_1char
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GScannerConfig_set_scan_identifier_1char(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->scan_identifier_1char = native_field;

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_scan_identifier_NULL_FIELD_READER
/* get_scan_identifier_NULL
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_scan_identifier_NULL(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);

  guint native_field = native_self->scan_identifier_NULL;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_scan_identifier_NULL_FIELD_WRITER
/* set_scan_identifier_NULL
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GScannerConfig_set_scan_identifier_NULL(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->scan_identifier_NULL = native_field;

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_scan_symbols_FIELD_READER
/* get_scan_symbols
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_scan_symbols(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);

  guint native_field = native_self->scan_symbols;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_scan_symbols_FIELD_WRITER
/* set_scan_symbols
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GScannerConfig_set_scan_symbols(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->scan_symbols = native_field;

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_scan_binary_FIELD_READER
/* get_scan_binary
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_scan_binary(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);

  guint native_field = native_self->scan_binary;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_scan_binary_FIELD_WRITER
/* set_scan_binary
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GScannerConfig_set_scan_binary(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->scan_binary = native_field;

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_scan_octal_FIELD_READER
/* get_scan_octal
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_scan_octal(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);

  guint native_field = native_self->scan_octal;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_scan_octal_FIELD_WRITER
/* set_scan_octal
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GScannerConfig_set_scan_octal(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->scan_octal = native_field;

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_scan_float_FIELD_READER
/* get_scan_float
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_scan_float(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);

  guint native_field = native_self->scan_float;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_scan_float_FIELD_WRITER
/* set_scan_float
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GScannerConfig_set_scan_float(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->scan_float = native_field;

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_scan_hex_FIELD_READER
/* get_scan_hex
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_scan_hex(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);

  guint native_field = native_self->scan_hex;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_scan_hex_FIELD_WRITER
/* set_scan_hex
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GScannerConfig_set_scan_hex(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->scan_hex = native_field;

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_scan_hex_dollar_FIELD_READER
/* get_scan_hex_dollar
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_scan_hex_dollar(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);

  guint native_field = native_self->scan_hex_dollar;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_scan_hex_dollar_FIELD_WRITER
/* set_scan_hex_dollar
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GScannerConfig_set_scan_hex_dollar(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->scan_hex_dollar = native_field;

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_scan_string_sq_FIELD_READER
/* get_scan_string_sq
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_scan_string_sq(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);

  guint native_field = native_self->scan_string_sq;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_scan_string_sq_FIELD_WRITER
/* set_scan_string_sq
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GScannerConfig_set_scan_string_sq(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->scan_string_sq = native_field;

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_scan_string_dq_FIELD_READER
/* get_scan_string_dq
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_scan_string_dq(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);

  guint native_field = native_self->scan_string_dq;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_scan_string_dq_FIELD_WRITER
/* set_scan_string_dq
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GScannerConfig_set_scan_string_dq(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->scan_string_dq = native_field;

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_numbers_2_int_FIELD_READER
/* get_numbers_2_int
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_numbers_2_int(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);

  guint native_field = native_self->numbers_2_int;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_numbers_2_int_FIELD_WRITER
/* set_numbers_2_int
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GScannerConfig_set_numbers_2_int(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->numbers_2_int = native_field;

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_int_2_float_FIELD_READER
/* get_int_2_float
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_int_2_float(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);

  guint native_field = native_self->int_2_float;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_int_2_float_FIELD_WRITER
/* set_int_2_float
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GScannerConfig_set_int_2_float(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->int_2_float = native_field;

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_identifier_2_string_FIELD_READER
/* get_identifier_2_string
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_identifier_2_string(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);

  guint native_field = native_self->identifier_2_string;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_identifier_2_string_FIELD_WRITER
/* set_identifier_2_string
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GScannerConfig_set_identifier_2_string(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->identifier_2_string = native_field;

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_char_2_token_FIELD_READER
/* get_char_2_token
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_char_2_token(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);

  guint native_field = native_self->char_2_token;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_char_2_token_FIELD_WRITER
/* set_char_2_token
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GScannerConfig_set_char_2_token(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->char_2_token = native_field;

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_symbol_2_token_FIELD_READER
/* get_symbol_2_token
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_symbol_2_token(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);

  guint native_field = native_self->symbol_2_token;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_symbol_2_token_FIELD_WRITER
/* set_symbol_2_token
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GScannerConfig_set_symbol_2_token(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->symbol_2_token = native_field;

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_scope_0_fallback_FIELD_READER
/* get_scope_0_fallback
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_scope_0_fallback(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);

  guint native_field = native_self->scope_0_fallback;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_scope_0_fallback_FIELD_WRITER
/* set_scope_0_fallback
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GScannerConfig_set_scope_0_fallback(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->scope_0_fallback = native_field;

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_store_int64_FIELD_READER
/* get_store_int64
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_store_int64(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);

  guint native_field = native_self->store_int64;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_store_int64_FIELD_WRITER
/* set_store_int64
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GScannerConfig_set_store_int64(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->store_int64 = native_field;

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_padding_dummy_FIELD_READER
/* get_padding_dummy
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_padding_dummy(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);

  guint native_field = native_self->padding_dummy;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GScannerConfig_padding_dummy_FIELD_WRITER
/* set_padding_dummy
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GScannerConfig_set_padding_dummy(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox_struct _GScannerConfig(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->padding_dummy = native_field;

  return ruby_field;
}
#endif


void mrb_GLib_GScannerConfig_init(mrb_state* mrb) {
  struct RClass* GScannerConfig_class = mrb_define_class_under(mrb, GLib_module(mrb), "GScannerConfig", mrb->object_class);
  MRB_SET_INSTANCE_TT(GScannerConfig_class, MRB_TT_DATA);

#if BIND_GScannerConfig_INITIALIZE
  mrb_define_method(mrb, GScannerConfig_class, "initialize", mrb_GLib_GScannerConfig_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GScannerConfig_class, "disown", mrb_GLib_GScannerConfig_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GScannerConfig_class, "belongs_to_ruby?", mrb_GLib_GScannerConfig_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GScannerConfig_cset_skip_characters_FIELD_READER
  mrb_define_method(mrb, GScannerConfig_class, "cset_skip_characters", mrb_GLib_GScannerConfig_get_cset_skip_characters, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScannerConfig_cset_skip_characters_FIELD_WRITER
  mrb_define_method(mrb, GScannerConfig_class, "cset_skip_characters=", mrb_GLib_GScannerConfig_set_cset_skip_characters, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScannerConfig_cset_identifier_first_FIELD_READER
  mrb_define_method(mrb, GScannerConfig_class, "cset_identifier_first", mrb_GLib_GScannerConfig_get_cset_identifier_first, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScannerConfig_cset_identifier_first_FIELD_WRITER
  mrb_define_method(mrb, GScannerConfig_class, "cset_identifier_first=", mrb_GLib_GScannerConfig_set_cset_identifier_first, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScannerConfig_cset_identifier_nth_FIELD_READER
  mrb_define_method(mrb, GScannerConfig_class, "cset_identifier_nth", mrb_GLib_GScannerConfig_get_cset_identifier_nth, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScannerConfig_cset_identifier_nth_FIELD_WRITER
  mrb_define_method(mrb, GScannerConfig_class, "cset_identifier_nth=", mrb_GLib_GScannerConfig_set_cset_identifier_nth, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScannerConfig_cpair_comment_single_FIELD_READER
  mrb_define_method(mrb, GScannerConfig_class, "cpair_comment_single", mrb_GLib_GScannerConfig_get_cpair_comment_single, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScannerConfig_cpair_comment_single_FIELD_WRITER
  mrb_define_method(mrb, GScannerConfig_class, "cpair_comment_single=", mrb_GLib_GScannerConfig_set_cpair_comment_single, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScannerConfig_case_sensitive_FIELD_READER
  mrb_define_method(mrb, GScannerConfig_class, "case_sensitive", mrb_GLib_GScannerConfig_get_case_sensitive, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScannerConfig_case_sensitive_FIELD_WRITER
  mrb_define_method(mrb, GScannerConfig_class, "case_sensitive=", mrb_GLib_GScannerConfig_set_case_sensitive, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScannerConfig_skip_comment_multi_FIELD_READER
  mrb_define_method(mrb, GScannerConfig_class, "skip_comment_multi", mrb_GLib_GScannerConfig_get_skip_comment_multi, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScannerConfig_skip_comment_multi_FIELD_WRITER
  mrb_define_method(mrb, GScannerConfig_class, "skip_comment_multi=", mrb_GLib_GScannerConfig_set_skip_comment_multi, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScannerConfig_skip_comment_single_FIELD_READER
  mrb_define_method(mrb, GScannerConfig_class, "skip_comment_single", mrb_GLib_GScannerConfig_get_skip_comment_single, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScannerConfig_skip_comment_single_FIELD_WRITER
  mrb_define_method(mrb, GScannerConfig_class, "skip_comment_single=", mrb_GLib_GScannerConfig_set_skip_comment_single, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScannerConfig_scan_comment_multi_FIELD_READER
  mrb_define_method(mrb, GScannerConfig_class, "scan_comment_multi", mrb_GLib_GScannerConfig_get_scan_comment_multi, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScannerConfig_scan_comment_multi_FIELD_WRITER
  mrb_define_method(mrb, GScannerConfig_class, "scan_comment_multi=", mrb_GLib_GScannerConfig_set_scan_comment_multi, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScannerConfig_scan_identifier_FIELD_READER
  mrb_define_method(mrb, GScannerConfig_class, "scan_identifier", mrb_GLib_GScannerConfig_get_scan_identifier, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScannerConfig_scan_identifier_FIELD_WRITER
  mrb_define_method(mrb, GScannerConfig_class, "scan_identifier=", mrb_GLib_GScannerConfig_set_scan_identifier, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScannerConfig_scan_identifier_1char_FIELD_READER
  mrb_define_method(mrb, GScannerConfig_class, "scan_identifier_1char", mrb_GLib_GScannerConfig_get_scan_identifier_1char, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScannerConfig_scan_identifier_1char_FIELD_WRITER
  mrb_define_method(mrb, GScannerConfig_class, "scan_identifier_1char=", mrb_GLib_GScannerConfig_set_scan_identifier_1char, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScannerConfig_scan_identifier_NULL_FIELD_READER
  mrb_define_method(mrb, GScannerConfig_class, "scan_identifier_NULL", mrb_GLib_GScannerConfig_get_scan_identifier_NULL, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScannerConfig_scan_identifier_NULL_FIELD_WRITER
  mrb_define_method(mrb, GScannerConfig_class, "scan_identifier_NULL=", mrb_GLib_GScannerConfig_set_scan_identifier_NULL, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScannerConfig_scan_symbols_FIELD_READER
  mrb_define_method(mrb, GScannerConfig_class, "scan_symbols", mrb_GLib_GScannerConfig_get_scan_symbols, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScannerConfig_scan_symbols_FIELD_WRITER
  mrb_define_method(mrb, GScannerConfig_class, "scan_symbols=", mrb_GLib_GScannerConfig_set_scan_symbols, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScannerConfig_scan_binary_FIELD_READER
  mrb_define_method(mrb, GScannerConfig_class, "scan_binary", mrb_GLib_GScannerConfig_get_scan_binary, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScannerConfig_scan_binary_FIELD_WRITER
  mrb_define_method(mrb, GScannerConfig_class, "scan_binary=", mrb_GLib_GScannerConfig_set_scan_binary, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScannerConfig_scan_octal_FIELD_READER
  mrb_define_method(mrb, GScannerConfig_class, "scan_octal", mrb_GLib_GScannerConfig_get_scan_octal, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScannerConfig_scan_octal_FIELD_WRITER
  mrb_define_method(mrb, GScannerConfig_class, "scan_octal=", mrb_GLib_GScannerConfig_set_scan_octal, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScannerConfig_scan_float_FIELD_READER
  mrb_define_method(mrb, GScannerConfig_class, "scan_float", mrb_GLib_GScannerConfig_get_scan_float, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScannerConfig_scan_float_FIELD_WRITER
  mrb_define_method(mrb, GScannerConfig_class, "scan_float=", mrb_GLib_GScannerConfig_set_scan_float, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScannerConfig_scan_hex_FIELD_READER
  mrb_define_method(mrb, GScannerConfig_class, "scan_hex", mrb_GLib_GScannerConfig_get_scan_hex, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScannerConfig_scan_hex_FIELD_WRITER
  mrb_define_method(mrb, GScannerConfig_class, "scan_hex=", mrb_GLib_GScannerConfig_set_scan_hex, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScannerConfig_scan_hex_dollar_FIELD_READER
  mrb_define_method(mrb, GScannerConfig_class, "scan_hex_dollar", mrb_GLib_GScannerConfig_get_scan_hex_dollar, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScannerConfig_scan_hex_dollar_FIELD_WRITER
  mrb_define_method(mrb, GScannerConfig_class, "scan_hex_dollar=", mrb_GLib_GScannerConfig_set_scan_hex_dollar, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScannerConfig_scan_string_sq_FIELD_READER
  mrb_define_method(mrb, GScannerConfig_class, "scan_string_sq", mrb_GLib_GScannerConfig_get_scan_string_sq, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScannerConfig_scan_string_sq_FIELD_WRITER
  mrb_define_method(mrb, GScannerConfig_class, "scan_string_sq=", mrb_GLib_GScannerConfig_set_scan_string_sq, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScannerConfig_scan_string_dq_FIELD_READER
  mrb_define_method(mrb, GScannerConfig_class, "scan_string_dq", mrb_GLib_GScannerConfig_get_scan_string_dq, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScannerConfig_scan_string_dq_FIELD_WRITER
  mrb_define_method(mrb, GScannerConfig_class, "scan_string_dq=", mrb_GLib_GScannerConfig_set_scan_string_dq, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScannerConfig_numbers_2_int_FIELD_READER
  mrb_define_method(mrb, GScannerConfig_class, "numbers_2_int", mrb_GLib_GScannerConfig_get_numbers_2_int, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScannerConfig_numbers_2_int_FIELD_WRITER
  mrb_define_method(mrb, GScannerConfig_class, "numbers_2_int=", mrb_GLib_GScannerConfig_set_numbers_2_int, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScannerConfig_int_2_float_FIELD_READER
  mrb_define_method(mrb, GScannerConfig_class, "int_2_float", mrb_GLib_GScannerConfig_get_int_2_float, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScannerConfig_int_2_float_FIELD_WRITER
  mrb_define_method(mrb, GScannerConfig_class, "int_2_float=", mrb_GLib_GScannerConfig_set_int_2_float, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScannerConfig_identifier_2_string_FIELD_READER
  mrb_define_method(mrb, GScannerConfig_class, "identifier_2_string", mrb_GLib_GScannerConfig_get_identifier_2_string, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScannerConfig_identifier_2_string_FIELD_WRITER
  mrb_define_method(mrb, GScannerConfig_class, "identifier_2_string=", mrb_GLib_GScannerConfig_set_identifier_2_string, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScannerConfig_char_2_token_FIELD_READER
  mrb_define_method(mrb, GScannerConfig_class, "char_2_token", mrb_GLib_GScannerConfig_get_char_2_token, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScannerConfig_char_2_token_FIELD_WRITER
  mrb_define_method(mrb, GScannerConfig_class, "char_2_token=", mrb_GLib_GScannerConfig_set_char_2_token, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScannerConfig_symbol_2_token_FIELD_READER
  mrb_define_method(mrb, GScannerConfig_class, "symbol_2_token", mrb_GLib_GScannerConfig_get_symbol_2_token, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScannerConfig_symbol_2_token_FIELD_WRITER
  mrb_define_method(mrb, GScannerConfig_class, "symbol_2_token=", mrb_GLib_GScannerConfig_set_symbol_2_token, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScannerConfig_scope_0_fallback_FIELD_READER
  mrb_define_method(mrb, GScannerConfig_class, "scope_0_fallback", mrb_GLib_GScannerConfig_get_scope_0_fallback, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScannerConfig_scope_0_fallback_FIELD_WRITER
  mrb_define_method(mrb, GScannerConfig_class, "scope_0_fallback=", mrb_GLib_GScannerConfig_set_scope_0_fallback, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScannerConfig_store_int64_FIELD_READER
  mrb_define_method(mrb, GScannerConfig_class, "store_int64", mrb_GLib_GScannerConfig_get_store_int64, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScannerConfig_store_int64_FIELD_WRITER
  mrb_define_method(mrb, GScannerConfig_class, "store_int64=", mrb_GLib_GScannerConfig_set_store_int64, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScannerConfig_padding_dummy_FIELD_READER
  mrb_define_method(mrb, GScannerConfig_class, "padding_dummy", mrb_GLib_GScannerConfig_get_padding_dummy, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScannerConfig_padding_dummy_FIELD_WRITER
  mrb_define_method(mrb, GScannerConfig_class, "padding_dummy=", mrb_GLib_GScannerConfig_set_padding_dummy, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
