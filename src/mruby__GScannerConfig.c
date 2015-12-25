/*
 * struct _GScannerConfig
 * Defined in file gscanner.h @ line 38
 */

#include "mruby_GLib.h"

#if BIND_GScannerConfig_TYPE

/*
 * Class Methods
 */

#if BIND_GScannerConfig_INITIALIZE
mrb_value
mrb_GLib_GScannerConfig_initialize(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig* native_object = (struct _GScannerConfig*)calloc(1, sizeof(struct _GScannerConfig));
  mruby_giftwrap__GScannerConfig_data_ptr(self, native_object);
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
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);

  gchar * native_cset_skip_characters = native_self->cset_skip_characters;

  mrb_value cset_skip_characters = TODO_mruby_box_gchar_PTR(mrb, native_cset_skip_characters);

  return cset_skip_characters;
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
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);
  mrb_value cset_skip_characters;

  mrb_get_args(mrb, "o", &cset_skip_characters);

  /* type checking */
  TODO_type_check_gchar_PTR(cset_skip_characters);

  gchar * native_cset_skip_characters = TODO_mruby_unbox_gchar_PTR(cset_skip_characters);

  native_self->cset_skip_characters = native_cset_skip_characters;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GScannerConfig_cset_identifier_first_FIELD_READER
/* get_cset_identifier_first
 *
 * Return Type: gchar *
 */
mrb_value
mrb_GLib_GScannerConfig_get_cset_identifier_first(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);

  gchar * native_cset_identifier_first = native_self->cset_identifier_first;

  mrb_value cset_identifier_first = TODO_mruby_box_gchar_PTR(mrb, native_cset_identifier_first);

  return cset_identifier_first;
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
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);
  mrb_value cset_identifier_first;

  mrb_get_args(mrb, "o", &cset_identifier_first);

  /* type checking */
  TODO_type_check_gchar_PTR(cset_identifier_first);

  gchar * native_cset_identifier_first = TODO_mruby_unbox_gchar_PTR(cset_identifier_first);

  native_self->cset_identifier_first = native_cset_identifier_first;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GScannerConfig_cset_identifier_nth_FIELD_READER
/* get_cset_identifier_nth
 *
 * Return Type: gchar *
 */
mrb_value
mrb_GLib_GScannerConfig_get_cset_identifier_nth(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);

  gchar * native_cset_identifier_nth = native_self->cset_identifier_nth;

  mrb_value cset_identifier_nth = TODO_mruby_box_gchar_PTR(mrb, native_cset_identifier_nth);

  return cset_identifier_nth;
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
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);
  mrb_value cset_identifier_nth;

  mrb_get_args(mrb, "o", &cset_identifier_nth);

  /* type checking */
  TODO_type_check_gchar_PTR(cset_identifier_nth);

  gchar * native_cset_identifier_nth = TODO_mruby_unbox_gchar_PTR(cset_identifier_nth);

  native_self->cset_identifier_nth = native_cset_identifier_nth;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GScannerConfig_cpair_comment_single_FIELD_READER
/* get_cpair_comment_single
 *
 * Return Type: gchar *
 */
mrb_value
mrb_GLib_GScannerConfig_get_cpair_comment_single(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);

  gchar * native_cpair_comment_single = native_self->cpair_comment_single;

  mrb_value cpair_comment_single = TODO_mruby_box_gchar_PTR(mrb, native_cpair_comment_single);

  return cpair_comment_single;
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
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);
  mrb_value cpair_comment_single;

  mrb_get_args(mrb, "o", &cpair_comment_single);

  /* type checking */
  TODO_type_check_gchar_PTR(cpair_comment_single);

  gchar * native_cpair_comment_single = TODO_mruby_unbox_gchar_PTR(cpair_comment_single);

  native_self->cpair_comment_single = native_cpair_comment_single;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GScannerConfig_case_sensitive_FIELD_READER
/* get_case_sensitive
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_case_sensitive(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);

  guint native_case_sensitive = native_self->case_sensitive;

  mrb_value case_sensitive = mrb_fixnum_value(native_case_sensitive);

  return case_sensitive;
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
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);
  mrb_int native_case_sensitive;

  mrb_get_args(mrb, "i", &native_case_sensitive);

  native_self->case_sensitive = native_case_sensitive;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GScannerConfig_skip_comment_multi_FIELD_READER
/* get_skip_comment_multi
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_skip_comment_multi(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);

  guint native_skip_comment_multi = native_self->skip_comment_multi;

  mrb_value skip_comment_multi = mrb_fixnum_value(native_skip_comment_multi);

  return skip_comment_multi;
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
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);
  mrb_int native_skip_comment_multi;

  mrb_get_args(mrb, "i", &native_skip_comment_multi);

  native_self->skip_comment_multi = native_skip_comment_multi;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GScannerConfig_skip_comment_single_FIELD_READER
/* get_skip_comment_single
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_skip_comment_single(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);

  guint native_skip_comment_single = native_self->skip_comment_single;

  mrb_value skip_comment_single = mrb_fixnum_value(native_skip_comment_single);

  return skip_comment_single;
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
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);
  mrb_int native_skip_comment_single;

  mrb_get_args(mrb, "i", &native_skip_comment_single);

  native_self->skip_comment_single = native_skip_comment_single;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GScannerConfig_scan_comment_multi_FIELD_READER
/* get_scan_comment_multi
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_scan_comment_multi(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);

  guint native_scan_comment_multi = native_self->scan_comment_multi;

  mrb_value scan_comment_multi = mrb_fixnum_value(native_scan_comment_multi);

  return scan_comment_multi;
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
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);
  mrb_int native_scan_comment_multi;

  mrb_get_args(mrb, "i", &native_scan_comment_multi);

  native_self->scan_comment_multi = native_scan_comment_multi;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GScannerConfig_scan_identifier_FIELD_READER
/* get_scan_identifier
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_scan_identifier(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);

  guint native_scan_identifier = native_self->scan_identifier;

  mrb_value scan_identifier = mrb_fixnum_value(native_scan_identifier);

  return scan_identifier;
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
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);
  mrb_int native_scan_identifier;

  mrb_get_args(mrb, "i", &native_scan_identifier);

  native_self->scan_identifier = native_scan_identifier;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GScannerConfig_scan_identifier_1char_FIELD_READER
/* get_scan_identifier_1char
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_scan_identifier_1char(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);

  guint native_scan_identifier_1char = native_self->scan_identifier_1char;

  mrb_value scan_identifier_1char = mrb_fixnum_value(native_scan_identifier_1char);

  return scan_identifier_1char;
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
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);
  mrb_int native_scan_identifier_1char;

  mrb_get_args(mrb, "i", &native_scan_identifier_1char);

  native_self->scan_identifier_1char = native_scan_identifier_1char;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GScannerConfig_scan_identifier_NULL_FIELD_READER
/* get_scan_identifier_NULL
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_scan_identifier_NULL(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);

  guint native_scan_identifier_NULL = native_self->scan_identifier_NULL;

  mrb_value scan_identifier_NULL = mrb_fixnum_value(native_scan_identifier_NULL);

  return scan_identifier_NULL;
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
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);
  mrb_int native_scan_identifier_NULL;

  mrb_get_args(mrb, "i", &native_scan_identifier_NULL);

  native_self->scan_identifier_NULL = native_scan_identifier_NULL;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GScannerConfig_scan_symbols_FIELD_READER
/* get_scan_symbols
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_scan_symbols(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);

  guint native_scan_symbols = native_self->scan_symbols;

  mrb_value scan_symbols = mrb_fixnum_value(native_scan_symbols);

  return scan_symbols;
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
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);
  mrb_int native_scan_symbols;

  mrb_get_args(mrb, "i", &native_scan_symbols);

  native_self->scan_symbols = native_scan_symbols;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GScannerConfig_scan_binary_FIELD_READER
/* get_scan_binary
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_scan_binary(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);

  guint native_scan_binary = native_self->scan_binary;

  mrb_value scan_binary = mrb_fixnum_value(native_scan_binary);

  return scan_binary;
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
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);
  mrb_int native_scan_binary;

  mrb_get_args(mrb, "i", &native_scan_binary);

  native_self->scan_binary = native_scan_binary;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GScannerConfig_scan_octal_FIELD_READER
/* get_scan_octal
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_scan_octal(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);

  guint native_scan_octal = native_self->scan_octal;

  mrb_value scan_octal = mrb_fixnum_value(native_scan_octal);

  return scan_octal;
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
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);
  mrb_int native_scan_octal;

  mrb_get_args(mrb, "i", &native_scan_octal);

  native_self->scan_octal = native_scan_octal;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GScannerConfig_scan_float_FIELD_READER
/* get_scan_float
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_scan_float(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);

  guint native_scan_float = native_self->scan_float;

  mrb_value scan_float = mrb_fixnum_value(native_scan_float);

  return scan_float;
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
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);
  mrb_int native_scan_float;

  mrb_get_args(mrb, "i", &native_scan_float);

  native_self->scan_float = native_scan_float;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GScannerConfig_scan_hex_FIELD_READER
/* get_scan_hex
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_scan_hex(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);

  guint native_scan_hex = native_self->scan_hex;

  mrb_value scan_hex = mrb_fixnum_value(native_scan_hex);

  return scan_hex;
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
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);
  mrb_int native_scan_hex;

  mrb_get_args(mrb, "i", &native_scan_hex);

  native_self->scan_hex = native_scan_hex;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GScannerConfig_scan_hex_dollar_FIELD_READER
/* get_scan_hex_dollar
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_scan_hex_dollar(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);

  guint native_scan_hex_dollar = native_self->scan_hex_dollar;

  mrb_value scan_hex_dollar = mrb_fixnum_value(native_scan_hex_dollar);

  return scan_hex_dollar;
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
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);
  mrb_int native_scan_hex_dollar;

  mrb_get_args(mrb, "i", &native_scan_hex_dollar);

  native_self->scan_hex_dollar = native_scan_hex_dollar;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GScannerConfig_scan_string_sq_FIELD_READER
/* get_scan_string_sq
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_scan_string_sq(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);

  guint native_scan_string_sq = native_self->scan_string_sq;

  mrb_value scan_string_sq = mrb_fixnum_value(native_scan_string_sq);

  return scan_string_sq;
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
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);
  mrb_int native_scan_string_sq;

  mrb_get_args(mrb, "i", &native_scan_string_sq);

  native_self->scan_string_sq = native_scan_string_sq;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GScannerConfig_scan_string_dq_FIELD_READER
/* get_scan_string_dq
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_scan_string_dq(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);

  guint native_scan_string_dq = native_self->scan_string_dq;

  mrb_value scan_string_dq = mrb_fixnum_value(native_scan_string_dq);

  return scan_string_dq;
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
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);
  mrb_int native_scan_string_dq;

  mrb_get_args(mrb, "i", &native_scan_string_dq);

  native_self->scan_string_dq = native_scan_string_dq;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GScannerConfig_numbers_2_int_FIELD_READER
/* get_numbers_2_int
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_numbers_2_int(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);

  guint native_numbers_2_int = native_self->numbers_2_int;

  mrb_value numbers_2_int = mrb_fixnum_value(native_numbers_2_int);

  return numbers_2_int;
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
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);
  mrb_int native_numbers_2_int;

  mrb_get_args(mrb, "i", &native_numbers_2_int);

  native_self->numbers_2_int = native_numbers_2_int;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GScannerConfig_int_2_float_FIELD_READER
/* get_int_2_float
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_int_2_float(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);

  guint native_int_2_float = native_self->int_2_float;

  mrb_value int_2_float = mrb_fixnum_value(native_int_2_float);

  return int_2_float;
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
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);
  mrb_int native_int_2_float;

  mrb_get_args(mrb, "i", &native_int_2_float);

  native_self->int_2_float = native_int_2_float;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GScannerConfig_identifier_2_string_FIELD_READER
/* get_identifier_2_string
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_identifier_2_string(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);

  guint native_identifier_2_string = native_self->identifier_2_string;

  mrb_value identifier_2_string = mrb_fixnum_value(native_identifier_2_string);

  return identifier_2_string;
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
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);
  mrb_int native_identifier_2_string;

  mrb_get_args(mrb, "i", &native_identifier_2_string);

  native_self->identifier_2_string = native_identifier_2_string;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GScannerConfig_char_2_token_FIELD_READER
/* get_char_2_token
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_char_2_token(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);

  guint native_char_2_token = native_self->char_2_token;

  mrb_value char_2_token = mrb_fixnum_value(native_char_2_token);

  return char_2_token;
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
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);
  mrb_int native_char_2_token;

  mrb_get_args(mrb, "i", &native_char_2_token);

  native_self->char_2_token = native_char_2_token;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GScannerConfig_symbol_2_token_FIELD_READER
/* get_symbol_2_token
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_symbol_2_token(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);

  guint native_symbol_2_token = native_self->symbol_2_token;

  mrb_value symbol_2_token = mrb_fixnum_value(native_symbol_2_token);

  return symbol_2_token;
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
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);
  mrb_int native_symbol_2_token;

  mrb_get_args(mrb, "i", &native_symbol_2_token);

  native_self->symbol_2_token = native_symbol_2_token;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GScannerConfig_scope_0_fallback_FIELD_READER
/* get_scope_0_fallback
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_scope_0_fallback(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);

  guint native_scope_0_fallback = native_self->scope_0_fallback;

  mrb_value scope_0_fallback = mrb_fixnum_value(native_scope_0_fallback);

  return scope_0_fallback;
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
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);
  mrb_int native_scope_0_fallback;

  mrb_get_args(mrb, "i", &native_scope_0_fallback);

  native_self->scope_0_fallback = native_scope_0_fallback;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GScannerConfig_store_int64_FIELD_READER
/* get_store_int64
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_store_int64(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);

  guint native_store_int64 = native_self->store_int64;

  mrb_value store_int64 = mrb_fixnum_value(native_store_int64);

  return store_int64;
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
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);
  mrb_int native_store_int64;

  mrb_get_args(mrb, "i", &native_store_int64);

  native_self->store_int64 = native_store_int64;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GScannerConfig_padding_dummy_FIELD_READER
/* get_padding_dummy
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScannerConfig_get_padding_dummy(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);

  guint native_padding_dummy = native_self->padding_dummy;

  mrb_value padding_dummy = mrb_fixnum_value(native_padding_dummy);

  return padding_dummy;
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
  struct _GScannerConfig * native_self = mruby_unbox__GScannerConfig(self);
  mrb_int native_padding_dummy;

  mrb_get_args(mrb, "i", &native_padding_dummy);

  native_self->padding_dummy = native_padding_dummy;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
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
