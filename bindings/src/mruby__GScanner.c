/*
 * struct _GScanner
 * Defined in file gscanner.h @ line 37
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_GLib.h"

#if BIND_GScanner_TYPE

/*
 * Class Methods
 */

#if BIND_GScanner_INITIALIZE
mrb_value
mrb_GLib_GScanner_initialize(mrb_state* mrb, mrb_value self) {
  struct _GScanner* native_object = (struct _GScanner*)malloc(sizeof(struct _GScanner));
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
  struct _GScanner * native_self = mruby_unbox_struct _GScanner(self);

  gpointer native_field = native_self->user_data;

  mrb_value ruby_field = TODO_mruby_box_gpointer(mrb, native_field);

  return ruby_field;
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
  struct _GScanner * native_self = mruby_unbox_struct _GScanner(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_gpointer(ruby_field);

  gpointer native_field = TODO_mruby_unbox_gpointer(ruby_field);

  native_self->user_data = native_field;

  return ruby_field;
}
#endif

#if BIND_GScanner_max_parse_errors_FIELD_READER
/* get_max_parse_errors
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScanner_get_max_parse_errors(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox_struct _GScanner(self);

  guint native_field = native_self->max_parse_errors;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
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
  struct _GScanner * native_self = mruby_unbox_struct _GScanner(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->max_parse_errors = native_field;

  return ruby_field;
}
#endif

#if BIND_GScanner_parse_errors_FIELD_READER
/* get_parse_errors
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScanner_get_parse_errors(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox_struct _GScanner(self);

  guint native_field = native_self->parse_errors;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
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
  struct _GScanner * native_self = mruby_unbox_struct _GScanner(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->parse_errors = native_field;

  return ruby_field;
}
#endif

#if BIND_GScanner_input_name_FIELD_READER
/* get_input_name
 *
 * Return Type: const gchar *
 */
mrb_value
mrb_GLib_GScanner_get_input_name(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox_struct _GScanner(self);

  const gchar * native_field = native_self->input_name;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
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
  struct _GScanner * native_self = mruby_unbox_struct _GScanner(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  const char * native_field = mrb_string_value_cstr(mrb, &ruby_field);

  native_self->input_name = native_field;

  return ruby_field;
}
#endif

#if BIND_GScanner_qdata_FIELD_READER
/* get_qdata
 *
 * Return Type: GData *
 */
mrb_value
mrb_GLib_GScanner_get_qdata(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox_struct _GScanner(self);

  GData * native_field = native_self->qdata;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box__GData(mrb, native_field));

  return ruby_field;
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
  struct _GScanner * native_self = mruby_unbox_struct _GScanner(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, GData_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GData expected");
    return mrb_nil_value();
  }

  GData * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox__GData(ruby_field));

  native_self->qdata = native_field;

  return ruby_field;
}
#endif

#if BIND_GScanner_config_FIELD_READER
/* get_config
 *
 * Return Type: GScannerConfig *
 */
mrb_value
mrb_GLib_GScanner_get_config(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox_struct _GScanner(self);

  GScannerConfig * native_field = native_self->config;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box__GScannerConfig(mrb, native_field));

  return ruby_field;
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
  struct _GScanner * native_self = mruby_unbox_struct _GScanner(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, GScannerConfig_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GScannerConfig expected");
    return mrb_nil_value();
  }

  GScannerConfig * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox__GScannerConfig(ruby_field));

  native_self->config = native_field;

  return ruby_field;
}
#endif

#if BIND_GScanner_token_FIELD_READER
/* get_token
 *
 * Return Type: GTokenType
 */
mrb_value
mrb_GLib_GScanner_get_token(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox_struct _GScanner(self);

  GTokenType native_field = native_self->token;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
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
  struct _GScanner * native_self = mruby_unbox_struct _GScanner(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = (int)ruby_field;

  native_self->token = native_field;

  return ruby_field;
}
#endif

#if BIND_GScanner_value_FIELD_READER
/* get_value
 *
 * Return Type: GTokenValue
 */
mrb_value
mrb_GLib_GScanner_get_value(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox_struct _GScanner(self);

  GTokenValue native_field = native_self->value;

  mrb_value ruby_field = TODO_mruby_box_GTokenValue(mrb, native_field);

  return ruby_field;
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
  struct _GScanner * native_self = mruby_unbox_struct _GScanner(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_GTokenValue(ruby_field);

  GTokenValue native_field = TODO_mruby_unbox_GTokenValue(ruby_field);

  native_self->value = native_field;

  return ruby_field;
}
#endif

#if BIND_GScanner_line_FIELD_READER
/* get_line
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScanner_get_line(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox_struct _GScanner(self);

  guint native_field = native_self->line;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
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
  struct _GScanner * native_self = mruby_unbox_struct _GScanner(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->line = native_field;

  return ruby_field;
}
#endif

#if BIND_GScanner_position_FIELD_READER
/* get_position
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScanner_get_position(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox_struct _GScanner(self);

  guint native_field = native_self->position;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
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
  struct _GScanner * native_self = mruby_unbox_struct _GScanner(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->position = native_field;

  return ruby_field;
}
#endif

#if BIND_GScanner_next_token_FIELD_READER
/* get_next_token
 *
 * Return Type: GTokenType
 */
mrb_value
mrb_GLib_GScanner_get_next_token(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox_struct _GScanner(self);

  GTokenType native_field = native_self->next_token;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
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
  struct _GScanner * native_self = mruby_unbox_struct _GScanner(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = (int)ruby_field;

  native_self->next_token = native_field;

  return ruby_field;
}
#endif

#if BIND_GScanner_next_value_FIELD_READER
/* get_next_value
 *
 * Return Type: GTokenValue
 */
mrb_value
mrb_GLib_GScanner_get_next_value(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox_struct _GScanner(self);

  GTokenValue native_field = native_self->next_value;

  mrb_value ruby_field = TODO_mruby_box_GTokenValue(mrb, native_field);

  return ruby_field;
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
  struct _GScanner * native_self = mruby_unbox_struct _GScanner(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_GTokenValue(ruby_field);

  GTokenValue native_field = TODO_mruby_unbox_GTokenValue(ruby_field);

  native_self->next_value = native_field;

  return ruby_field;
}
#endif

#if BIND_GScanner_next_line_FIELD_READER
/* get_next_line
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScanner_get_next_line(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox_struct _GScanner(self);

  guint native_field = native_self->next_line;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
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
  struct _GScanner * native_self = mruby_unbox_struct _GScanner(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->next_line = native_field;

  return ruby_field;
}
#endif

#if BIND_GScanner_next_position_FIELD_READER
/* get_next_position
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScanner_get_next_position(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox_struct _GScanner(self);

  guint native_field = native_self->next_position;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
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
  struct _GScanner * native_self = mruby_unbox_struct _GScanner(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->next_position = native_field;

  return ruby_field;
}
#endif

#if BIND_GScanner_symbol_table_FIELD_READER
/* get_symbol_table
 *
 * Return Type: GHashTable *
 */
mrb_value
mrb_GLib_GScanner_get_symbol_table(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox_struct _GScanner(self);

  GHashTable * native_field = native_self->symbol_table;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box__GHashTable(mrb, native_field));

  return ruby_field;
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
  struct _GScanner * native_self = mruby_unbox_struct _GScanner(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, GHashTable_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GHashTable expected");
    return mrb_nil_value();
  }

  GHashTable * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox__GHashTable(ruby_field));

  native_self->symbol_table = native_field;

  return ruby_field;
}
#endif

#if BIND_GScanner_input_fd_FIELD_READER
/* get_input_fd
 *
 * Return Type: gint
 */
mrb_value
mrb_GLib_GScanner_get_input_fd(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox_struct _GScanner(self);

  gint native_field = native_self->input_fd;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
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
  struct _GScanner * native_self = mruby_unbox_struct _GScanner(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = (int)ruby_field;

  native_self->input_fd = native_field;

  return ruby_field;
}
#endif

#if BIND_GScanner_text_FIELD_READER
/* get_text
 *
 * Return Type: const gchar *
 */
mrb_value
mrb_GLib_GScanner_get_text(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox_struct _GScanner(self);

  const gchar * native_field = native_self->text;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
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
  struct _GScanner * native_self = mruby_unbox_struct _GScanner(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  const char * native_field = mrb_string_value_cstr(mrb, &ruby_field);

  native_self->text = native_field;

  return ruby_field;
}
#endif

#if BIND_GScanner_text_end_FIELD_READER
/* get_text_end
 *
 * Return Type: const gchar *
 */
mrb_value
mrb_GLib_GScanner_get_text_end(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox_struct _GScanner(self);

  const gchar * native_field = native_self->text_end;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
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
  struct _GScanner * native_self = mruby_unbox_struct _GScanner(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  const char * native_field = mrb_string_value_cstr(mrb, &ruby_field);

  native_self->text_end = native_field;

  return ruby_field;
}
#endif

#if BIND_GScanner_buffer_FIELD_READER
/* get_buffer
 *
 * Return Type: gchar *
 */
mrb_value
mrb_GLib_GScanner_get_buffer(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox_struct _GScanner(self);

  gchar * native_field = native_self->buffer;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
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
  struct _GScanner * native_self = mruby_unbox_struct _GScanner(self);
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

  native_self->buffer = native_field;

  return ruby_field;
}
#endif

#if BIND_GScanner_scope_id_FIELD_READER
/* get_scope_id
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GScanner_get_scope_id(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox_struct _GScanner(self);

  guint native_field = native_self->scope_id;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
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
  struct _GScanner * native_self = mruby_unbox_struct _GScanner(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->scope_id = native_field;

  return ruby_field;
}
#endif

#if BIND_GScanner_msg_handler_FIELD_READER
/* get_msg_handler
 *
 * Return Type: GScannerMsgFunc
 */
mrb_value
mrb_GLib_GScanner_get_msg_handler(mrb_state* mrb, mrb_value self) {
  struct _GScanner * native_self = mruby_unbox_struct _GScanner(self);

  GScannerMsgFunc native_field = native_self->msg_handler;

  mrb_value ruby_field = TODO_mruby_box_GScannerMsgFunc(mrb, native_field);

  return ruby_field;
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
  struct _GScanner * native_self = mruby_unbox_struct _GScanner(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_GScannerMsgFunc(ruby_field);

  GScannerMsgFunc native_field = TODO_mruby_unbox_GScannerMsgFunc(ruby_field);

  native_self->msg_handler = native_field;

  return ruby_field;
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
