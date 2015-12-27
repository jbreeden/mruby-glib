/*
 * struct _GScanner
 * Defined in file gscanner.h @ line 37
 */

#include "mruby_GLib.h"

#if BIND_GScanner_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GScanner::initialize */
/* sha: 0999d801a768d4e00ac69d69b12255079367da259db69595e027dd5b250b129a */
#if BIND_GScanner_INITIALIZE
mrb_value
mrb_GLib_GScanner_initialize(mrb_state* mrb, mrb_value self) {
  struct _GScanner* native_object = (struct _GScanner*)calloc(1, sizeof(struct _GScanner));
  mruby_giftwrap__GScanner_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::initialize */
/* sha: 4bcc9906ada7629f03ec387c1cccef0eadd1287e87dc60f54b03ed0a9e24a6d2 */
mrb_value
mrb_GLib_GScanner_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GScanner.disown only accepts objects of type GLib::GScanner");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::belongs_to_ruby */
/* sha: ecdc6fcc7ae7aeb8a7c218c0807cd867c2cb251ee2815080f1c7a598a11684c0 */
mrb_value
mrb_GLib_GScanner_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GScanner.belongs_to_ruby only accepts objects of type GLib::GScanner");
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

/* MRUBY_BINDING: GScanner::user_data_reader */
/* sha: 948147b64314582fb4b7b20ee3ab26cb57b3739c8caf4fb37cd3e9d005a1d041 */
#if BIND_GScanner_user_data_FIELD_READER
/* get_user_data
 *
 * Return Type: gpointer
 */
mrb_value
mrb_GLib_GScanner_get_user_data(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);

  gpointer native_user_data = native_self->user_data;

  mrb_value user_data = TODO_mruby_box_gpointer(mrb, native_user_data);

  return user_data;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::user_data_writer */
/* sha: 70688d1e4a364326490f15f85cefa2f66d639df32032ae4d1c5b11e1c88f31b9 */
#if BIND_GScanner_user_data_FIELD_WRITER
/* set_user_data
 *
 * Parameters:
 * - value: gpointer
 */
mrb_value
mrb_GLib_GScanner_set_user_data(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);
  mrb_value user_data;

  mrb_get_args(mrb, "o", &user_data);

  /* type checking */
  TODO_type_check_gpointer(user_data);

  gpointer native_user_data = TODO_mruby_unbox_gpointer(user_data);

  native_self->user_data = native_user_data;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::max_parse_errors_reader */
/* sha: 1a07fe2663cf795c52b09990db4d5d6d51ca380115476874c3efc67800557809 */
#if BIND_GScanner_max_parse_errors_FIELD_READER
/* get_max_parse_errors
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScanner_get_max_parse_errors(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);

  guint native_max_parse_errors = native_self->max_parse_errors;

  mrb_value max_parse_errors = mrb_fixnum_value(native_max_parse_errors);

  return max_parse_errors;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::max_parse_errors_writer */
/* sha: f812198b3164e4962c45c09e66c77f9ff039d7b528e876dcc315c28ae73abc4b */
#if BIND_GScanner_max_parse_errors_FIELD_WRITER
/* set_max_parse_errors
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GScanner_set_max_parse_errors(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);
  mrb_int native_max_parse_errors;

  mrb_get_args(mrb, "i", &native_max_parse_errors);

  native_self->max_parse_errors = native_max_parse_errors;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::parse_errors_reader */
/* sha: 2f91f575011d313d58b81c686a4680e8d29c2ca3be4d74e6502de5d9bec87826 */
#if BIND_GScanner_parse_errors_FIELD_READER
/* get_parse_errors
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScanner_get_parse_errors(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);

  guint native_parse_errors = native_self->parse_errors;

  mrb_value parse_errors = mrb_fixnum_value(native_parse_errors);

  return parse_errors;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::parse_errors_writer */
/* sha: eae30ca8cf8552e1746ef974a692b6b3c8ab9f2ff0b9058de029386ad738f145 */
#if BIND_GScanner_parse_errors_FIELD_WRITER
/* set_parse_errors
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GScanner_set_parse_errors(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);
  mrb_int native_parse_errors;

  mrb_get_args(mrb, "i", &native_parse_errors);

  native_self->parse_errors = native_parse_errors;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::input_name_reader */
/* sha: 31e9ca8c88c2c869ef1a143ef39f2264b3795a3a3186985e3be1c8de71472482 */
#if BIND_GScanner_input_name_FIELD_READER
/* get_input_name
 *
 * Return Type: const gchar *
 */
mrb_value
mrb_GLib_GScanner_get_input_name(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);

  const gchar * native_input_name = native_self->input_name;

  mrb_value input_name = native_input_name == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_input_name);

  return input_name;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::input_name_writer */
/* sha: 2ac0aea151e7125bb629fff40436f7d7788aa496a769a521fe852f5d4857964c */
#if BIND_GScanner_input_name_FIELD_WRITER
/* set_input_name
 *
 * Parameters:
 * - value: const gchar *
 */
mrb_value
mrb_GLib_GScanner_set_input_name(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);
  char * native_input_name = NULL;

  mrb_get_args(mrb, "z!", &native_input_name);

  native_self->input_name = native_input_name;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::qdata_reader */
/* sha: a0127bb5500e7f0e8f124c2e335a7c6ffce19c538f4d375da30f04a89ff60902 */
#if BIND_GScanner_qdata_FIELD_READER
/* get_qdata
 *
 * Return Type: GData *
 */
mrb_value
mrb_GLib_GScanner_get_qdata(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);

  GData * native_qdata = native_self->qdata;

  mrb_value qdata = (native_qdata == NULL ? mrb_nil_value() : mruby_box__GData(mrb, native_qdata));

  return qdata;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::qdata_writer */
/* sha: 3b03a5df52309b3612ab27ff43420b477a2954aa4c19594fb7012114b2a4d4bc */
#if BIND_GScanner_qdata_FIELD_WRITER
/* set_qdata
 *
 * Parameters:
 * - value: GData *
 */
mrb_value
mrb_GLib_GScanner_set_qdata(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);
  mrb_value qdata;

  mrb_get_args(mrb, "o", &qdata);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, qdata, GData_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GData expected");
    return mrb_nil_value();
  }

  GData * native_qdata = (mrb_nil_p(qdata) ? NULL : mruby_unbox__GData(qdata));

  native_self->qdata = native_qdata;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::config_reader */
/* sha: a1af0e07b054b0ffd8352e474dd9beedb2c8e2b02b3de001512762f656c6f5d8 */
#if BIND_GScanner_config_FIELD_READER
/* get_config
 *
 * Return Type: GScannerConfig *
 */
mrb_value
mrb_GLib_GScanner_get_config(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);

  GScannerConfig * native_config = native_self->config;

  mrb_value config = (native_config == NULL ? mrb_nil_value() : mruby_box__GScannerConfig(mrb, native_config));

  return config;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::config_writer */
/* sha: 9de25a142a286584d31c5ff6a75ef0aba18b2d7c378fc1b802c6949ea2f701be */
#if BIND_GScanner_config_FIELD_WRITER
/* set_config
 *
 * Parameters:
 * - value: GScannerConfig *
 */
mrb_value
mrb_GLib_GScanner_set_config(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);
  mrb_value config;

  mrb_get_args(mrb, "o", &config);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, config, GScannerConfig_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GScannerConfig expected");
    return mrb_nil_value();
  }

  GScannerConfig * native_config = (mrb_nil_p(config) ? NULL : mruby_unbox__GScannerConfig(config));

  native_self->config = native_config;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::token_reader */
/* sha: 217398a00cd4a296f817b290334352ecd4ffcc21e8f5c164afd89033655f73dd */
#if BIND_GScanner_token_FIELD_READER
/* get_token
 *
 * Return Type: GTokenType
 */
mrb_value
mrb_GLib_GScanner_get_token(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);

  GTokenType native_token = native_self->token;

  mrb_value token = mrb_fixnum_value(native_token);

  return token;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::token_writer */
/* sha: 97b07154924e8abd0931579d45ef96ef14ab34fc6c1905b1ae5500491b584e78 */
#if BIND_GScanner_token_FIELD_WRITER
/* set_token
 *
 * Parameters:
 * - value: GTokenType
 */
mrb_value
mrb_GLib_GScanner_set_token(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);
  mrb_int native_token;

  mrb_get_args(mrb, "i", &native_token);

  native_self->token = native_token;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::value_reader */
/* sha: 94411dc205da2211885c3a65d7c161576f429db5cd4dcf855dac3f5376246823 */
#if BIND_GScanner_value_FIELD_READER
/* get_value
 *
 * Return Type: GTokenValue
 */
mrb_value
mrb_GLib_GScanner_get_value(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);

  GTokenValue native_value = native_self->value;

  mrb_value value = TODO_mruby_box_GTokenValue(mrb, native_value);

  return value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::value_writer */
/* sha: 99e8b526df7ae4475f4cf13bd09dcd49a16a199c2603469f499fac9f81cc4498 */
#if BIND_GScanner_value_FIELD_WRITER
/* set_value
 *
 * Parameters:
 * - value: GTokenValue
 */
mrb_value
mrb_GLib_GScanner_set_value(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);
  mrb_value value;

  mrb_get_args(mrb, "o", &value);

  /* type checking */
  TODO_type_check_GTokenValue(value);

  GTokenValue native_value = TODO_mruby_unbox_GTokenValue(value);

  native_self->value = native_value;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::line_reader */
/* sha: 8f20a6cb28185f1c7157dfa5e2197a498de36434f77046bca914d63b29da6d99 */
#if BIND_GScanner_line_FIELD_READER
/* get_line
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScanner_get_line(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);

  guint native_line = native_self->line;

  mrb_value line = mrb_fixnum_value(native_line);

  return line;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::line_writer */
/* sha: c6144bd0fad9511b48667f10207f67372bc90120a41956871d452d3528e3af26 */
#if BIND_GScanner_line_FIELD_WRITER
/* set_line
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GScanner_set_line(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);
  mrb_int native_line;

  mrb_get_args(mrb, "i", &native_line);

  native_self->line = native_line;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::position_reader */
/* sha: 7afaedd8b5c3c11087c59dbfa1f0dd3c58e87e779524b0e69a2c3075c58448ef */
#if BIND_GScanner_position_FIELD_READER
/* get_position
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScanner_get_position(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);

  guint native_position = native_self->position;

  mrb_value position = mrb_fixnum_value(native_position);

  return position;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::position_writer */
/* sha: ebd9805062c5aad46865d2295aee7a0a2c0dac8ccf3a687de57caf0081414901 */
#if BIND_GScanner_position_FIELD_WRITER
/* set_position
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GScanner_set_position(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);
  mrb_int native_position;

  mrb_get_args(mrb, "i", &native_position);

  native_self->position = native_position;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::next_token_reader */
/* sha: cb862a46a9407615b3fb597db296bd1f9230da0447aebf4617ce259689a73d90 */
#if BIND_GScanner_next_token_FIELD_READER
/* get_next_token
 *
 * Return Type: GTokenType
 */
mrb_value
mrb_GLib_GScanner_get_next_token(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);

  GTokenType native_next_token = native_self->next_token;

  mrb_value next_token = mrb_fixnum_value(native_next_token);

  return next_token;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::next_token_writer */
/* sha: a1bc4fa125dc165a9b4f45f8cb426d2e0e2e124a61d718b7d384c55c31b18ef2 */
#if BIND_GScanner_next_token_FIELD_WRITER
/* set_next_token
 *
 * Parameters:
 * - value: GTokenType
 */
mrb_value
mrb_GLib_GScanner_set_next_token(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);
  mrb_int native_next_token;

  mrb_get_args(mrb, "i", &native_next_token);

  native_self->next_token = native_next_token;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::next_value_reader */
/* sha: 56ba283b5f8b7e21ee986f3b0156a9d6f282ed9c25f52e459fe18d85069d91cd */
#if BIND_GScanner_next_value_FIELD_READER
/* get_next_value
 *
 * Return Type: GTokenValue
 */
mrb_value
mrb_GLib_GScanner_get_next_value(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);

  GTokenValue native_next_value = native_self->next_value;

  mrb_value next_value = TODO_mruby_box_GTokenValue(mrb, native_next_value);

  return next_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::next_value_writer */
/* sha: 007e7414611927be810b7c29a227f0987d740324983c10d593cb163b88a6e31c */
#if BIND_GScanner_next_value_FIELD_WRITER
/* set_next_value
 *
 * Parameters:
 * - value: GTokenValue
 */
mrb_value
mrb_GLib_GScanner_set_next_value(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);
  mrb_value next_value;

  mrb_get_args(mrb, "o", &next_value);

  /* type checking */
  TODO_type_check_GTokenValue(next_value);

  GTokenValue native_next_value = TODO_mruby_unbox_GTokenValue(next_value);

  native_self->next_value = native_next_value;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::next_line_reader */
/* sha: 0de8c738cee9ece541fb679751067f8f0f10ccbdd461735327246b7898f3a77b */
#if BIND_GScanner_next_line_FIELD_READER
/* get_next_line
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScanner_get_next_line(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);

  guint native_next_line = native_self->next_line;

  mrb_value next_line = mrb_fixnum_value(native_next_line);

  return next_line;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::next_line_writer */
/* sha: 01c1814888d60ddfbf2155951f4fccf2d0fa78e5f6fa7227171232af9276ae4c */
#if BIND_GScanner_next_line_FIELD_WRITER
/* set_next_line
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GScanner_set_next_line(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);
  mrb_int native_next_line;

  mrb_get_args(mrb, "i", &native_next_line);

  native_self->next_line = native_next_line;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::next_position_reader */
/* sha: d0e27feddd9e53aa1daf97b9b358b3079403ffa712c34f0e379c05773cab735d */
#if BIND_GScanner_next_position_FIELD_READER
/* get_next_position
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScanner_get_next_position(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);

  guint native_next_position = native_self->next_position;

  mrb_value next_position = mrb_fixnum_value(native_next_position);

  return next_position;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::next_position_writer */
/* sha: a0b9b318f9ba4f92473e7eb0149bc0465ad4b583baf3db0be521774ecce82214 */
#if BIND_GScanner_next_position_FIELD_WRITER
/* set_next_position
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GScanner_set_next_position(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);
  mrb_int native_next_position;

  mrb_get_args(mrb, "i", &native_next_position);

  native_self->next_position = native_next_position;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::symbol_table_reader */
/* sha: c20071ebc7f00e0f478984228daee6e407006fe2f33c51284390727bbf38f254 */
#if BIND_GScanner_symbol_table_FIELD_READER
/* get_symbol_table
 *
 * Return Type: GHashTable *
 */
mrb_value
mrb_GLib_GScanner_get_symbol_table(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);

  GHashTable * native_symbol_table = native_self->symbol_table;

  mrb_value symbol_table = (native_symbol_table == NULL ? mrb_nil_value() : mruby_box__GHashTable(mrb, native_symbol_table));

  return symbol_table;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::symbol_table_writer */
/* sha: 14164d30a733df7a0eca3eb6aceeff3deb86eca70e8c4e56190f2a1e2264d44c */
#if BIND_GScanner_symbol_table_FIELD_WRITER
/* set_symbol_table
 *
 * Parameters:
 * - value: GHashTable *
 */
mrb_value
mrb_GLib_GScanner_set_symbol_table(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);
  mrb_value symbol_table;

  mrb_get_args(mrb, "o", &symbol_table);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, symbol_table, GHashTable_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GHashTable expected");
    return mrb_nil_value();
  }

  GHashTable * native_symbol_table = (mrb_nil_p(symbol_table) ? NULL : mruby_unbox__GHashTable(symbol_table));

  native_self->symbol_table = native_symbol_table;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::input_fd_reader */
/* sha: ddb027dbb6786c98cd95aec47a965283d70d87b4c1c2b931753334a4f6d6c325 */
#if BIND_GScanner_input_fd_FIELD_READER
/* get_input_fd
 *
 * Return Type: gint
 */
mrb_value
mrb_GLib_GScanner_get_input_fd(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);

  gint native_input_fd = native_self->input_fd;

  mrb_value input_fd = mrb_fixnum_value(native_input_fd);

  return input_fd;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::input_fd_writer */
/* sha: f6dcdf56faebae0ca5f3a822a03b33c4ae58f59212c30b270110416b5a2985d8 */
#if BIND_GScanner_input_fd_FIELD_WRITER
/* set_input_fd
 *
 * Parameters:
 * - value: gint
 */
mrb_value
mrb_GLib_GScanner_set_input_fd(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);
  mrb_int native_input_fd;

  mrb_get_args(mrb, "i", &native_input_fd);

  native_self->input_fd = native_input_fd;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::text_reader */
/* sha: 3151bfb00a46c1388d8775a71b0f45ba3f1019cea5ced637b25806a5ebdceeed */
#if BIND_GScanner_text_FIELD_READER
/* get_text
 *
 * Return Type: const gchar *
 */
mrb_value
mrb_GLib_GScanner_get_text(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);

  const gchar * native_text = native_self->text;

  mrb_value text = native_text == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_text);

  return text;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::text_writer */
/* sha: a348a0857944166131f2fe642df8ddbb81e6540d9d47beebfba81cfed8c34261 */
#if BIND_GScanner_text_FIELD_WRITER
/* set_text
 *
 * Parameters:
 * - value: const gchar *
 */
mrb_value
mrb_GLib_GScanner_set_text(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);
  char * native_text = NULL;

  mrb_get_args(mrb, "z!", &native_text);

  native_self->text = native_text;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::text_end_reader */
/* sha: af124d7f1c128dd5f517ec10056e9a03d719d249ba34051659f417d4393e9809 */
#if BIND_GScanner_text_end_FIELD_READER
/* get_text_end
 *
 * Return Type: const gchar *
 */
mrb_value
mrb_GLib_GScanner_get_text_end(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);

  const gchar * native_text_end = native_self->text_end;

  mrb_value text_end = native_text_end == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_text_end);

  return text_end;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::text_end_writer */
/* sha: 89a15691e25cd47e1d8c2aff1980367f9c1ffaa0bc589d58b96dfd8fc85c1152 */
#if BIND_GScanner_text_end_FIELD_WRITER
/* set_text_end
 *
 * Parameters:
 * - value: const gchar *
 */
mrb_value
mrb_GLib_GScanner_set_text_end(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);
  char * native_text_end = NULL;

  mrb_get_args(mrb, "z!", &native_text_end);

  native_self->text_end = native_text_end;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::buffer_reader */
/* sha: 0b83777e1b346f893f88c262db88ae886c9a471586821b52acd02897628dca60 */
#if BIND_GScanner_buffer_FIELD_READER
/* get_buffer
 *
 * Return Type: gchar *
 */
mrb_value
mrb_GLib_GScanner_get_buffer(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);

  gchar * native_buffer = native_self->buffer;

  mrb_value buffer = TODO_mruby_box_gchar_PTR(mrb, native_buffer);

  return buffer;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::buffer_writer */
/* sha: 461fd9f059f37ec625496d437fb60cd03741032332d9d59bcd835f97626459a8 */
#if BIND_GScanner_buffer_FIELD_WRITER
/* set_buffer
 *
 * Parameters:
 * - value: gchar *
 */
mrb_value
mrb_GLib_GScanner_set_buffer(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);
  mrb_value buffer;

  mrb_get_args(mrb, "o", &buffer);

  /* type checking */
  TODO_type_check_gchar_PTR(buffer);

  gchar * native_buffer = TODO_mruby_unbox_gchar_PTR(buffer);

  native_self->buffer = native_buffer;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::scope_id_reader */
/* sha: 7f25235a57946ae76b68b40aa8d047e09e036ff215bb8d86c18f398d9851a555 */
#if BIND_GScanner_scope_id_FIELD_READER
/* get_scope_id
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScanner_get_scope_id(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);

  guint native_scope_id = native_self->scope_id;

  mrb_value scope_id = mrb_fixnum_value(native_scope_id);

  return scope_id;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::scope_id_writer */
/* sha: d2ad366020d36bab84ee28b19beae3206327db87d02878f7556a2eae46f1492c */
#if BIND_GScanner_scope_id_FIELD_WRITER
/* set_scope_id
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GScanner_set_scope_id(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);
  mrb_int native_scope_id;

  mrb_get_args(mrb, "i", &native_scope_id);

  native_self->scope_id = native_scope_id;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::msg_handler_reader */
/* sha: 3912250db57a53a5fbde6132c88f5e930238d61eb285556a5087cb4cfb1f1dc7 */
#if BIND_GScanner_msg_handler_FIELD_READER
/* get_msg_handler
 *
 * Return Type: GScannerMsgFunc
 */
mrb_value
mrb_GLib_GScanner_get_msg_handler(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);

  GScannerMsgFunc native_msg_handler = native_self->msg_handler;

  mrb_value msg_handler = TODO_mruby_box_GScannerMsgFunc(mrb, native_msg_handler);

  return msg_handler;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner::msg_handler_writer */
/* sha: 7a5170315ce52707fab1befab7a6b8da6a6044092aaf3f383874b6c9b2009adb */
#if BIND_GScanner_msg_handler_FIELD_WRITER
/* set_msg_handler
 *
 * Parameters:
 * - value: GScannerMsgFunc
 */
mrb_value
mrb_GLib_GScanner_set_msg_handler(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);
  mrb_value msg_handler;

  mrb_get_args(mrb, "o", &msg_handler);

  /* type checking */
  TODO_type_check_GScannerMsgFunc(msg_handler);

  GScannerMsgFunc native_msg_handler = TODO_mruby_unbox_GScannerMsgFunc(msg_handler);

  native_self->msg_handler = native_msg_handler;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_GLib_GScanner_init(mrb_state* mrb) {
  struct RClass* GScanner_class = mrb_define_class_under(mrb, GLib_module(mrb), "GScanner", mrb->object_class);
  MRB_SET_INSTANCE_TT(GScanner_class, MRB_TT_DATA);

#if BIND_GScanner_INITIALIZE
  mrb_define_method(mrb, GScanner_class, "initialize", mrb_GLib_GScanner_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GScanner_class, "disown", mrb_GLib_GScanner_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GScanner_class, "belongs_to_ruby?", mrb_GLib_GScanner_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GScanner_user_data_FIELD_READER
  mrb_define_method(mrb, GScanner_class, "user_data", mrb_GLib_GScanner_get_user_data, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScanner_user_data_FIELD_WRITER
  mrb_define_method(mrb, GScanner_class, "user_data=", mrb_GLib_GScanner_set_user_data, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScanner_max_parse_errors_FIELD_READER
  mrb_define_method(mrb, GScanner_class, "max_parse_errors", mrb_GLib_GScanner_get_max_parse_errors, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScanner_max_parse_errors_FIELD_WRITER
  mrb_define_method(mrb, GScanner_class, "max_parse_errors=", mrb_GLib_GScanner_set_max_parse_errors, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScanner_parse_errors_FIELD_READER
  mrb_define_method(mrb, GScanner_class, "parse_errors", mrb_GLib_GScanner_get_parse_errors, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScanner_parse_errors_FIELD_WRITER
  mrb_define_method(mrb, GScanner_class, "parse_errors=", mrb_GLib_GScanner_set_parse_errors, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScanner_input_name_FIELD_READER
  mrb_define_method(mrb, GScanner_class, "input_name", mrb_GLib_GScanner_get_input_name, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScanner_input_name_FIELD_WRITER
  mrb_define_method(mrb, GScanner_class, "input_name=", mrb_GLib_GScanner_set_input_name, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScanner_qdata_FIELD_READER
  mrb_define_method(mrb, GScanner_class, "qdata", mrb_GLib_GScanner_get_qdata, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScanner_qdata_FIELD_WRITER
  mrb_define_method(mrb, GScanner_class, "qdata=", mrb_GLib_GScanner_set_qdata, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScanner_config_FIELD_READER
  mrb_define_method(mrb, GScanner_class, "config", mrb_GLib_GScanner_get_config, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScanner_config_FIELD_WRITER
  mrb_define_method(mrb, GScanner_class, "config=", mrb_GLib_GScanner_set_config, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScanner_token_FIELD_READER
  mrb_define_method(mrb, GScanner_class, "token", mrb_GLib_GScanner_get_token, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScanner_token_FIELD_WRITER
  mrb_define_method(mrb, GScanner_class, "token=", mrb_GLib_GScanner_set_token, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScanner_value_FIELD_READER
  mrb_define_method(mrb, GScanner_class, "value", mrb_GLib_GScanner_get_value, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScanner_value_FIELD_WRITER
  mrb_define_method(mrb, GScanner_class, "value=", mrb_GLib_GScanner_set_value, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScanner_line_FIELD_READER
  mrb_define_method(mrb, GScanner_class, "line", mrb_GLib_GScanner_get_line, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScanner_line_FIELD_WRITER
  mrb_define_method(mrb, GScanner_class, "line=", mrb_GLib_GScanner_set_line, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScanner_position_FIELD_READER
  mrb_define_method(mrb, GScanner_class, "position", mrb_GLib_GScanner_get_position, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScanner_position_FIELD_WRITER
  mrb_define_method(mrb, GScanner_class, "position=", mrb_GLib_GScanner_set_position, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScanner_next_token_FIELD_READER
  mrb_define_method(mrb, GScanner_class, "next_token", mrb_GLib_GScanner_get_next_token, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScanner_next_token_FIELD_WRITER
  mrb_define_method(mrb, GScanner_class, "next_token=", mrb_GLib_GScanner_set_next_token, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScanner_next_value_FIELD_READER
  mrb_define_method(mrb, GScanner_class, "next_value", mrb_GLib_GScanner_get_next_value, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScanner_next_value_FIELD_WRITER
  mrb_define_method(mrb, GScanner_class, "next_value=", mrb_GLib_GScanner_set_next_value, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScanner_next_line_FIELD_READER
  mrb_define_method(mrb, GScanner_class, "next_line", mrb_GLib_GScanner_get_next_line, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScanner_next_line_FIELD_WRITER
  mrb_define_method(mrb, GScanner_class, "next_line=", mrb_GLib_GScanner_set_next_line, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScanner_next_position_FIELD_READER
  mrb_define_method(mrb, GScanner_class, "next_position", mrb_GLib_GScanner_get_next_position, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScanner_next_position_FIELD_WRITER
  mrb_define_method(mrb, GScanner_class, "next_position=", mrb_GLib_GScanner_set_next_position, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScanner_symbol_table_FIELD_READER
  mrb_define_method(mrb, GScanner_class, "symbol_table", mrb_GLib_GScanner_get_symbol_table, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScanner_symbol_table_FIELD_WRITER
  mrb_define_method(mrb, GScanner_class, "symbol_table=", mrb_GLib_GScanner_set_symbol_table, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScanner_input_fd_FIELD_READER
  mrb_define_method(mrb, GScanner_class, "input_fd", mrb_GLib_GScanner_get_input_fd, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScanner_input_fd_FIELD_WRITER
  mrb_define_method(mrb, GScanner_class, "input_fd=", mrb_GLib_GScanner_set_input_fd, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScanner_text_FIELD_READER
  mrb_define_method(mrb, GScanner_class, "text", mrb_GLib_GScanner_get_text, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScanner_text_FIELD_WRITER
  mrb_define_method(mrb, GScanner_class, "text=", mrb_GLib_GScanner_set_text, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScanner_text_end_FIELD_READER
  mrb_define_method(mrb, GScanner_class, "text_end", mrb_GLib_GScanner_get_text_end, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScanner_text_end_FIELD_WRITER
  mrb_define_method(mrb, GScanner_class, "text_end=", mrb_GLib_GScanner_set_text_end, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScanner_buffer_FIELD_READER
  mrb_define_method(mrb, GScanner_class, "buffer", mrb_GLib_GScanner_get_buffer, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScanner_buffer_FIELD_WRITER
  mrb_define_method(mrb, GScanner_class, "buffer=", mrb_GLib_GScanner_set_buffer, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScanner_scope_id_FIELD_READER
  mrb_define_method(mrb, GScanner_class, "scope_id", mrb_GLib_GScanner_get_scope_id, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScanner_scope_id_FIELD_WRITER
  mrb_define_method(mrb, GScanner_class, "scope_id=", mrb_GLib_GScanner_set_scope_id, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GScanner_msg_handler_FIELD_READER
  mrb_define_method(mrb, GScanner_class, "msg_handler", mrb_GLib_GScanner_get_msg_handler, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GScanner_msg_handler_FIELD_WRITER
  mrb_define_method(mrb, GScanner_class, "msg_handler=", mrb_GLib_GScanner_set_msg_handler, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
