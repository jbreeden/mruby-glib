/*
 * struct _GOptionEntry
 * Defined in file goption.h @ line 52
 */

#include "mruby_GLib.h"

#if BIND_GOptionEntry_TYPE

/*
 * Class Methods
 */

#if BIND_GOptionEntry_INITIALIZE
mrb_value
mrb_GLib_GOptionEntry_initialize(mrb_state* mrb, mrb_value self) {
  struct _GOptionEntry* native_object = (struct _GOptionEntry*)calloc(1, sizeof(struct _GOptionEntry));
  mruby_giftwrap__GOptionEntry_data_ptr(self, native_object);
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
  struct _GOptionEntry * native_self = mruby_unbox__GOptionEntry(self);

  const gchar * native_long_name = native_self->long_name;

  mrb_value long_name = mrb_str_new_cstr(mrb, native_long_name);

  return long_name;
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
  struct _GOptionEntry * native_self = mruby_unbox__GOptionEntry(self);
  char * native_long_name = NULL;

  mrb_get_args(mrb, "z!", &native_long_name);

  native_self->long_name = native_long_name;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GOptionEntry_short_name_FIELD_READER
/* get_short_name
 *
 * Return Type: gchar
 */
mrb_value
mrb_GLib_GOptionEntry_get_short_name(mrb_state* mrb, mrb_value self) {
  struct _GOptionEntry * native_self = mruby_unbox__GOptionEntry(self);

  gchar native_short_name = native_self->short_name;

  mrb_value short_name = mrb_fixnum_value(native_short_name);

  return short_name;
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
  struct _GOptionEntry * native_self = mruby_unbox__GOptionEntry(self);
  mrb_int native_short_name;

  mrb_get_args(mrb, "i", &native_short_name);

  native_self->short_name = native_short_name;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GOptionEntry_flags_FIELD_READER
/* get_flags
 *
 * Return Type: gint
 */
mrb_value
mrb_GLib_GOptionEntry_get_flags(mrb_state* mrb, mrb_value self) {
  struct _GOptionEntry * native_self = mruby_unbox__GOptionEntry(self);

  gint native_flags = native_self->flags;

  mrb_value flags = mrb_fixnum_value(native_flags);

  return flags;
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
  struct _GOptionEntry * native_self = mruby_unbox__GOptionEntry(self);
  mrb_int native_flags;

  mrb_get_args(mrb, "i", &native_flags);

  native_self->flags = native_flags;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GOptionEntry_arg_FIELD_READER
/* get_arg
 *
 * Return Type: GOptionArg
 */
mrb_value
mrb_GLib_GOptionEntry_get_arg(mrb_state* mrb, mrb_value self) {
  struct _GOptionEntry * native_self = mruby_unbox__GOptionEntry(self);

  GOptionArg native_arg = native_self->arg;

  mrb_value arg = mrb_fixnum_value(native_arg);

  return arg;
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
  struct _GOptionEntry * native_self = mruby_unbox__GOptionEntry(self);
  mrb_int native_arg;

  mrb_get_args(mrb, "i", &native_arg);

  native_self->arg = native_arg;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GOptionEntry_arg_data_FIELD_READER
/* get_arg_data
 *
 * Return Type: gpointer
 */
mrb_value
mrb_GLib_GOptionEntry_get_arg_data(mrb_state* mrb, mrb_value self) {
  struct _GOptionEntry * native_self = mruby_unbox__GOptionEntry(self);

  gpointer native_arg_data = native_self->arg_data;

  mrb_value arg_data = TODO_mruby_box_gpointer(mrb, native_arg_data);

  return arg_data;
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
  struct _GOptionEntry * native_self = mruby_unbox__GOptionEntry(self);
  mrb_value arg_data;

  mrb_get_args(mrb, "o", &arg_data);

  /* type checking */
  TODO_type_check_gpointer(arg_data);

  gpointer native_arg_data = TODO_mruby_unbox_gpointer(arg_data);

  native_self->arg_data = native_arg_data;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GOptionEntry_description_FIELD_READER
/* get_description
 *
 * Return Type: const gchar *
 */
mrb_value
mrb_GLib_GOptionEntry_get_description(mrb_state* mrb, mrb_value self) {
  struct _GOptionEntry * native_self = mruby_unbox__GOptionEntry(self);

  const gchar * native_description = native_self->description;

  mrb_value description = mrb_str_new_cstr(mrb, native_description);

  return description;
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
  struct _GOptionEntry * native_self = mruby_unbox__GOptionEntry(self);
  char * native_description = NULL;

  mrb_get_args(mrb, "z!", &native_description);

  native_self->description = native_description;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GOptionEntry_arg_description_FIELD_READER
/* get_arg_description
 *
 * Return Type: const gchar *
 */
mrb_value
mrb_GLib_GOptionEntry_get_arg_description(mrb_state* mrb, mrb_value self) {
  struct _GOptionEntry * native_self = mruby_unbox__GOptionEntry(self);

  const gchar * native_arg_description = native_self->arg_description;

  mrb_value arg_description = mrb_str_new_cstr(mrb, native_arg_description);

  return arg_description;
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
  struct _GOptionEntry * native_self = mruby_unbox__GOptionEntry(self);
  char * native_arg_description = NULL;

  mrb_get_args(mrb, "z!", &native_arg_description);

  native_self->arg_description = native_arg_description;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
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
