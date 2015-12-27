/*
 * struct _GScannerConfig
 * Defined in file gscanner.h @ line 38
 */

#include "mruby_GLib.h"

#if BIND_GScannerConfig_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GScannerConfig::initialize */
/* sha: b26ff83b8bab95760437b452f69f4b347aa1b9e9dd0d689bf3f100ac48d0362c */
#if BIND_GScannerConfig_INITIALIZE
mrb_value
mrb_GLib_GScannerConfig_initialize(mrb_state* mrb, mrb_value self) {
  struct _GScannerConfig* native_object = (struct _GScannerConfig*)calloc(1, sizeof(struct _GScannerConfig));
  mruby_giftwrap__GScannerConfig_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::initialize */
/* sha: c80e720d0c3b39595404488ab236da4c2a97d282c603fd220c489e65fd0fee7e */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::belongs_to_ruby */
/* sha: f95cf24959e41dd12ad4db76216db5757cd8f40987846c6c9247fde8611285bf */
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
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: GScannerConfig::cset_skip_characters_reader */
/* sha: 36796e49ae0dafd1e6aba566a8dfad67810bcc63df14bbf0dbf1044f768719f3 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::cset_skip_characters_writer */
/* sha: 10844b70c60484a3ef2f98d4e40b0b4efa486f104238a730247536784e38eaa8 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::cset_identifier_first_reader */
/* sha: 1dada52a631b213b01bba4925d19b91fde0c3f36282644d2457c512d546ab330 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::cset_identifier_first_writer */
/* sha: 5bed6524352845166b834606cc51dd947466ac97b2c0dffdf1d9ed8ffbf09099 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::cset_identifier_nth_reader */
/* sha: f81a18901540836570c3451c86308e3e3ea950fc05484b70d3296596d9f6abdc */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::cset_identifier_nth_writer */
/* sha: 9014fbbe632023ee654222181f6c647c79939c23f7276233c2f16c9b1e25dc03 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::cpair_comment_single_reader */
/* sha: 51143b96cb919fd7869f8bca25a1dd04416f9d5a75dbd15685fc218f898dc32c */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::cpair_comment_single_writer */
/* sha: 56c0311c1fb6e25b44a53e6f4095991d28ba9485adcdadee1b81dc0a466c9e58 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::case_sensitive_reader */
/* sha: d40ca5711377b166d7c8dd1f6274aae7b8f3b83ea52daa08f010469a75f34b6b */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::case_sensitive_writer */
/* sha: e210a8afa6695453625353fdf28a654241523277d98e8c0e6101b3140ccb3446 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::skip_comment_multi_reader */
/* sha: aefedd6bce0ca23cd1e8929a6aa872eddee242cd3d5b0fdfdd9c03064df8b248 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::skip_comment_multi_writer */
/* sha: b42f077c81dc92bef046b5f058b3150e1bfc94fc76a259a6ee502a8a0da106ee */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::skip_comment_single_reader */
/* sha: e28a9230c0e77f39f0f47eaf5e5e4f535369f9d2ca65910dcb70b9941be00c01 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::skip_comment_single_writer */
/* sha: 9a48341527454a2481d866907190904c26f0686af86f7367a003a39105127159 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::scan_comment_multi_reader */
/* sha: ee28ceaed95cedcf845c64687923c6642b880b43be46eddff6a573f176d63b7c */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::scan_comment_multi_writer */
/* sha: 3f5d53c505d3bd270bf3cafacdb37e041cfa6bcfee6c89946249ba80b408339b */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::scan_identifier_reader */
/* sha: 7d655fb58ca29cdff9195211cd9f70ef3251a9d3ae40da2cb85456084bd8a669 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::scan_identifier_writer */
/* sha: 2045800de6a5626d3b4a4150a3823f46c52b5e1c64657343adc03e8b273149c0 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::scan_identifier_1char_reader */
/* sha: 3d19c97b8e10ef2cd0d0cc81bd7591847ee013e2f09e97d99aa6be41f0d672c0 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::scan_identifier_1char_writer */
/* sha: 8535352b0719a661e9e4ccf9a0e067c414a7e662a764f691121c1afc22db3563 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::scan_identifier_NULL_reader */
/* sha: c84815eb0bbe0163bdbae25def63d72c3dc434dfc1bc6fdc8726003da5dd780d */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::scan_identifier_NULL_writer */
/* sha: 6e33b93c398c70991974b99ed0ea5c83463c654164f783a6c5cf354111e1a5e1 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::scan_symbols_reader */
/* sha: 601d942309db275cd151bcc98ee2fd22e5161b44c2850c8fb584606c0437aac1 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::scan_symbols_writer */
/* sha: 2ded7f28dcc5b0452a3bcdd8b4f19320e34c7d107c880c3eb0f5621095443e78 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::scan_binary_reader */
/* sha: 1e9a201ed706458e3d739532cce5d2564196b91826f5d5233197f84b4e025d0c */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::scan_binary_writer */
/* sha: 0d85b9835f80c9f4cc8471b76bb482cc1b27964ecc45589b48f4bbf0dda5ce32 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::scan_octal_reader */
/* sha: 6d7823ce6b577886bb6bc8837ebab769eac446b4fdad628070466abf3bf3ce58 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::scan_octal_writer */
/* sha: e7b6879e045de761edeea86683a5326ffb7d70227bce8e51b56cd92152af0e0c */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::scan_float_reader */
/* sha: 95e23e8d419cb9221abffb9d14d9bf2c8f067dfadc7684b4ce9402d34b0e6e89 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::scan_float_writer */
/* sha: 8f44dbaf20a15e4db67b315027b28462ac215de4dadd8f13c639b07a9ae57d37 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::scan_hex_reader */
/* sha: d6cb8f80311a549c8d2bbe458b502c264fe6c77eefa3c105e79394da67eb5bde */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::scan_hex_writer */
/* sha: bbc370451ba3e0730cef5fe1dbc7bdf2ace519b05767d2662632b4f56eab5734 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::scan_hex_dollar_reader */
/* sha: a8f78c2fa60ed8092770f0f028c6e2f8a8cc0cb94710d688091aa5200dd48ae0 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::scan_hex_dollar_writer */
/* sha: 6b19e24fd6317fe28652e6bf639a4d0e45ec73c5b65aa0dd7cf128cf21cc1cb5 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::scan_string_sq_reader */
/* sha: 024b1a583990ac47834411832e0ed70a36acd699f689ca612ad5bb3364fed053 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::scan_string_sq_writer */
/* sha: b005c3fd3ff56401c99c611c5630b0dc44944377de9ff45a1cf569432414445d */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::scan_string_dq_reader */
/* sha: a67a85807bd07b76226550d42a777067383ecce3a1a76929fda203eb8f78e0df */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::scan_string_dq_writer */
/* sha: a170037e5604fb231145afe523d23b42f882b303e152b8b96351b704cf4e67de */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::numbers_2_int_reader */
/* sha: f5395cd3761a3dca42766a2daddcdec361cb4200f0adcfcabd9e669524b4d176 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::numbers_2_int_writer */
/* sha: 83f382a885d13dde0fdec3a9e23853d5f26d6fd21ab7ebfe009cae2dc7356886 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::int_2_float_reader */
/* sha: 681a18c32d403c28c6adcf98bf99a808155e148da83a3e123f0aa2d20897ce4d */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::int_2_float_writer */
/* sha: 63933551120f4c6c6449b039458805c13a229b790c6c56ce03c4d4125285da53 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::identifier_2_string_reader */
/* sha: 8dacaa8f9d12b26712115a2b33d4b584a0a15683641857f7707c908bd619abb0 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::identifier_2_string_writer */
/* sha: 9e6b0b5a2bab07ae62dd6ea8831e990f735bfe02a4f29e54496718926078d268 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::char_2_token_reader */
/* sha: be92bd8d64895e6f30c6e931d403d13cfcbcf7c3df54f582ca8993a53e4ead03 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::char_2_token_writer */
/* sha: 59eaba385bb6a19464cfd995906510169c5cf9a862ee8cff5b732a6ca20e7a2e */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::symbol_2_token_reader */
/* sha: 9d30fb3f96724ec3682ae880c83ec9bd0b600777e35f641705052879a3820205 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::symbol_2_token_writer */
/* sha: c37b24aad5fff1bf90a9e6baaef6bdabf795e8cbdc29959ab01babcf0eee6010 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::scope_0_fallback_reader */
/* sha: 5225ebe57338e5f70e0b8342fd659f0fd8b6aabd64d639cdcab1615f22d7c67d */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::scope_0_fallback_writer */
/* sha: 8ad94473d436ad0728977471311544c0b6ede3415269b871add3d1ef7f6c9f3a */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::store_int64_reader */
/* sha: 6c014bdf85e893bf3cf15f23d695b9027850f60db8f2bfd193318acf7469fcda */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::store_int64_writer */
/* sha: a3df758c82162d01b8f922a16bd3fb904c838409a2ce33438b74dc1809dc4f3f */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::padding_dummy_reader */
/* sha: 8d8b94dac1dbd2cffca3511fe113c7e9f6c478507390fc94a5064d27f0d14435 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig::padding_dummy_writer */
/* sha: 8909983058ca918bdaa46352e38fe03310997cb41ed002ad704daf7c6602c207 */
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
/* MRUBY_BINDING_END */


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
