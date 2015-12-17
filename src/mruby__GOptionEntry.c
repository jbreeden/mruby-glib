/*
 * struct _GOptionEntry
 * Defined in file goption.h @ line 52
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_GLib.h"

#if BIND_GOptionEntry_TYPE

/*
 * Class Methods
 */

#if BIND_GOptionEntry_INITIALIZE
mrb_value
mrb_GLib_GOptionEntry_initialize(mrb_state* mrb, mrb_value self) {
  struct _GOptionEntry* native_object = (struct _GOptionEntry*)malloc(sizeof(struct _GOptionEntry));
  mruby_gift_struct _GOptionEntry_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_GOptionEntry_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GOptionEntry.disown only accepts objects of type GLib::GOptionEntry");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_GOptionEntry_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GOptionEntry.belongs_to_ruby only accepts objects of type GLib::GOptionEntry");
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

#if BIND_GOptionEntry_long_name_FIELD_READER
/* get_long_name
 *
 * Return Type: const gchar *
 */
mrb_value
mrb_GLib_GOptionEntry_get_long_name(mrb_state* mrb, mrb_value self) {
  struct _GOptionEntry * native_self = mruby_unbox_struct _GOptionEntry(self);

  const gchar * native_field = native_self->long_name;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GOptionEntry_long_name_FIELD_WRITER
/* set_long_name
 *
 * Parameters:
 * - value: const gchar *
 */
mrb_value
mrb_GLib_GOptionEntry_set_long_name(mrb_state* mrb, mrb_value self) {
  struct _GOptionEntry * native_self = mruby_unbox_struct _GOptionEntry(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  const char * native_field = mrb_string_value_cstr(mrb, &ruby_field);

  native_self->long_name = native_field;

  return ruby_field;
}
#endif

#if BIND_GOptionEntry_short_name_FIELD_READER
/* get_short_name
 *
 * Return Type: gchar
 */
mrb_value
mrb_GLib_GOptionEntry_get_short_name(mrb_state* mrb, mrb_value self) {
  struct _GOptionEntry * native_self = mruby_unbox_struct _GOptionEntry(self);

  gchar native_field = native_self->short_name;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GOptionEntry_short_name_FIELD_WRITER
/* set_short_name
 *
 * Parameters:
 * - value: gchar
 */
mrb_value
mrb_GLib_GOptionEntry_set_short_name(mrb_state* mrb, mrb_value self) {
  struct _GOptionEntry * native_self = mruby_unbox_struct _GOptionEntry(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  char native_field = mrb_fixnum(ruby_field);

  native_self->short_name = native_field;

  return ruby_field;
}
#endif

#if BIND_GOptionEntry_flags_FIELD_READER
/* get_flags
 *
 * Return Type: gint
 */
mrb_value
mrb_GLib_GOptionEntry_get_flags(mrb_state* mrb, mrb_value self) {
  struct _GOptionEntry * native_self = mruby_unbox_struct _GOptionEntry(self);

  gint native_field = native_self->flags;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GOptionEntry_flags_FIELD_WRITER
/* set_flags
 *
 * Parameters:
 * - value: gint
 */
mrb_value
mrb_GLib_GOptionEntry_set_flags(mrb_state* mrb, mrb_value self) {
  struct _GOptionEntry * native_self = mruby_unbox_struct _GOptionEntry(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->flags = native_field;

  return ruby_field;
}
#endif

#if BIND_GOptionEntry_arg_FIELD_READER
/* get_arg
 *
 * Return Type: GOptionArg
 */
mrb_value
mrb_GLib_GOptionEntry_get_arg(mrb_state* mrb, mrb_value self) {
  struct _GOptionEntry * native_self = mruby_unbox_struct _GOptionEntry(self);

  GOptionArg native_field = native_self->arg;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GOptionEntry_arg_FIELD_WRITER
/* set_arg
 *
 * Parameters:
 * - value: GOptionArg
 */
mrb_value
mrb_GLib_GOptionEntry_set_arg(mrb_state* mrb, mrb_value self) {
  struct _GOptionEntry * native_self = mruby_unbox_struct _GOptionEntry(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->arg = native_field;

  return ruby_field;
}
#endif

#if BIND_GOptionEntry_arg_data_FIELD_READER
/* get_arg_data
 *
 * Return Type: gpointer
 */
mrb_value
mrb_GLib_GOptionEntry_get_arg_data(mrb_state* mrb, mrb_value self) {
  struct _GOptionEntry * native_self = mruby_unbox_struct _GOptionEntry(self);

  gpointer native_field = native_self->arg_data;

  mrb_value ruby_field = TODO_mruby_box_gpointer(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GOptionEntry_arg_data_FIELD_WRITER
/* set_arg_data
 *
 * Parameters:
 * - value: gpointer
 */
mrb_value
mrb_GLib_GOptionEntry_set_arg_data(mrb_state* mrb, mrb_value self) {
  struct _GOptionEntry * native_self = mruby_unbox_struct _GOptionEntry(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_gpointer(ruby_field);

  gpointer native_field = TODO_mruby_unbox_gpointer(ruby_field);

  native_self->arg_data = native_field;

  return ruby_field;
}
#endif

#if BIND_GOptionEntry_description_FIELD_READER
/* get_description
 *
 * Return Type: const gchar *
 */
mrb_value
mrb_GLib_GOptionEntry_get_description(mrb_state* mrb, mrb_value self) {
  struct _GOptionEntry * native_self = mruby_unbox_struct _GOptionEntry(self);

  const gchar * native_field = native_self->description;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GOptionEntry_description_FIELD_WRITER
/* set_description
 *
 * Parameters:
 * - value: const gchar *
 */
mrb_value
mrb_GLib_GOptionEntry_set_description(mrb_state* mrb, mrb_value self) {
  struct _GOptionEntry * native_self = mruby_unbox_struct _GOptionEntry(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  const char * native_field = mrb_string_value_cstr(mrb, &ruby_field);

  native_self->description = native_field;

  return ruby_field;
}
#endif

#if BIND_GOptionEntry_arg_description_FIELD_READER
/* get_arg_description
 *
 * Return Type: const gchar *
 */
mrb_value
mrb_GLib_GOptionEntry_get_arg_description(mrb_state* mrb, mrb_value self) {
  struct _GOptionEntry * native_self = mruby_unbox_struct _GOptionEntry(self);

  const gchar * native_field = native_self->arg_description;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GOptionEntry_arg_description_FIELD_WRITER
/* set_arg_description
 *
 * Parameters:
 * - value: const gchar *
 */
mrb_value
mrb_GLib_GOptionEntry_set_arg_description(mrb_state* mrb, mrb_value self) {
  struct _GOptionEntry * native_self = mruby_unbox_struct _GOptionEntry(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  const char * native_field = mrb_string_value_cstr(mrb, &ruby_field);

  native_self->arg_description = native_field;

  return ruby_field;
}
#endif


void mrb_GLib_GOptionEntry_init(mrb_state* mrb) {
  struct RClass* GOptionEntry_class = mrb_define_class_under(mrb, GLib_module(mrb), "GOptionEntry", mrb->object_class);
  MRB_SET_INSTANCE_TT(GOptionEntry_class, MRB_TT_DATA);

#if BIND_GOptionEntry_INITIALIZE
  mrb_define_method(mrb, GOptionEntry_class, "initialize", mrb_GLib_GOptionEntry_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GOptionEntry_class, "disown", mrb_GLib_GOptionEntry_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GOptionEntry_class, "belongs_to_ruby?", mrb_GLib_GOptionEntry_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GOptionEntry_long_name_FIELD_READER
  mrb_define_method(mrb, GOptionEntry_class, "long_name", mrb_GLib_GOptionEntry_get_long_name, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GOptionEntry_long_name_FIELD_WRITER
  mrb_define_method(mrb, GOptionEntry_class, "long_name=", mrb_GLib_GOptionEntry_set_long_name, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GOptionEntry_short_name_FIELD_READER
  mrb_define_method(mrb, GOptionEntry_class, "short_name", mrb_GLib_GOptionEntry_get_short_name, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GOptionEntry_short_name_FIELD_WRITER
  mrb_define_method(mrb, GOptionEntry_class, "short_name=", mrb_GLib_GOptionEntry_set_short_name, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GOptionEntry_flags_FIELD_READER
  mrb_define_method(mrb, GOptionEntry_class, "flags", mrb_GLib_GOptionEntry_get_flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GOptionEntry_flags_FIELD_WRITER
  mrb_define_method(mrb, GOptionEntry_class, "flags=", mrb_GLib_GOptionEntry_set_flags, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GOptionEntry_arg_FIELD_READER
  mrb_define_method(mrb, GOptionEntry_class, "arg", mrb_GLib_GOptionEntry_get_arg, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GOptionEntry_arg_FIELD_WRITER
  mrb_define_method(mrb, GOptionEntry_class, "arg=", mrb_GLib_GOptionEntry_set_arg, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GOptionEntry_arg_data_FIELD_READER
  mrb_define_method(mrb, GOptionEntry_class, "arg_data", mrb_GLib_GOptionEntry_get_arg_data, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GOptionEntry_arg_data_FIELD_WRITER
  mrb_define_method(mrb, GOptionEntry_class, "arg_data=", mrb_GLib_GOptionEntry_set_arg_data, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GOptionEntry_description_FIELD_READER
  mrb_define_method(mrb, GOptionEntry_class, "description", mrb_GLib_GOptionEntry_get_description, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GOptionEntry_description_FIELD_WRITER
  mrb_define_method(mrb, GOptionEntry_class, "description=", mrb_GLib_GOptionEntry_set_description, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GOptionEntry_arg_description_FIELD_READER
  mrb_define_method(mrb, GOptionEntry_class, "arg_description", mrb_GLib_GOptionEntry_get_arg_description, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GOptionEntry_arg_description_FIELD_WRITER
  mrb_define_method(mrb, GOptionEntry_class, "arg_description=", mrb_GLib_GOptionEntry_set_arg_description, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
