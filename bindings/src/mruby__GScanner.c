/*
 * struct _GScanner
 * Defined in file gscanner.h @ line 37
 */

#include "mruby_GLib.h"

#if BIND_GScanner_TYPE

/*
 * Class Methods
 */

#if BIND_GScanner_INITIALIZE
mrb_value
mrb_GLib_GScanner_initialize(mrb_state* mrb, mrb_value self) {
  struct _GScanner* native_object = (struct _GScanner*)calloc(1, sizeof(struct _GScanner));
  mruby_gift_struct _GScanner_data_ptr(self, native_object);
  return self;
}
#endif

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

/*
 * Fields
 */

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

#if BIND_GScanner_input_name_FIELD_READER
/* get_input_name
 *
 * Return Type: const gchar *
 */
mrb_value
mrb_GLib_GScanner_get_input_name(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);

  const gchar * native_input_name = native_self->input_name;

  mrb_value input_name = mrb_str_new_cstr(mrb, native_input_name);

  return input_name;
}
#endif

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

#if BIND_GScanner_text_FIELD_READER
/* get_text
 *
 * Return Type: const gchar *
 */
mrb_value
mrb_GLib_GScanner_get_text(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);

  const gchar * native_text = native_self->text;

  mrb_value text = mrb_str_new_cstr(mrb, native_text);

  return text;
}
#endif

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

#if BIND_GScanner_text_end_FIELD_READER
/* get_text_end
 *
 * Return Type: const gchar *
 */
mrb_value
mrb_GLib_GScanner_get_text_end(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);

  const gchar * native_text_end = native_self->text_end;

  mrb_value text_end = mrb_str_new_cstr(mrb, native_text_end);

  return text_end;
}
#endif

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

#if BIND_GScanner_buffer_FIELD_READER
/* get_buffer
 *
 * Return Type: gchar *
 */
mrb_value
mrb_GLib_GScanner_get_buffer(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);

  gchar * native_buffer = native_self->buffer;

  mrb_value buffer = mrb_str_new_cstr(mrb, native_buffer);

  return buffer;
}
#endif

#if BIND_GScanner_buffer_FIELD_WRITER
/* set_buffer
 *
 * Parameters:
 * - value: gchar *
 */
mrb_value
mrb_GLib_GScanner_set_buffer(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox__GScanner(self);
  char * native_buffer = NULL;

  mrb_get_args(mrb, "z!", &native_buffer);

  native_self->buffer = native_buffer;
  

  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

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
