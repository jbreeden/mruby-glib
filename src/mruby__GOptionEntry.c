/*
 * struct _GOptionEntry
 * Defined in file goption.h @ line 52
 */

#include "mruby_GLib.h"

#if BIND_GOptionEntry_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GOptionEntry::initialize */
/* sha: 9e03d3134f152228a29be48bbf5404226c568aaef652eabc258b1117aea13102 */
#if BIND_GOptionEntry_INITIALIZE
mrb_value
mrb_GLib_GOptionEntry_initialize(mrb_state* mrb, mrb_value self) {
  struct _GOptionEntry* native_object = (struct _GOptionEntry*)calloc(1, sizeof(struct _GOptionEntry));
  mruby_giftwrap__GOptionEntry_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOptionEntry::initialize */
/* sha: ebfbdd2b33bb1cc471d01a8cb9304602d08da28ca81897f314b906c079f243c0 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOptionEntry::belongs_to_ruby */
/* sha: f57e1b54cd4f87b7888ccf8140df8a1dba1c6bb9e3927262e3588645cbf170ac */
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
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: GOptionEntry::long_name_reader */
/* sha: 60a00571569cfeab95ec3e57a2c3a4264d7e7a2023666a6e7c0385ebaefb3983 */
#if BIND_GOptionEntry_long_name_FIELD_READER
/* get_long_name
 *
 * Return Type: const gchar *
 */
mrb_value
mrb_GLib_GOptionEntry_get_long_name(mrb_state* mrb, mrb_value self) {
  struct _GOptionEntry * native_self = mruby_unbox__GOptionEntry(self);

  const gchar * native_long_name = native_self->long_name;

  mrb_value long_name = native_long_name == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_long_name);

  return long_name;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOptionEntry::long_name_writer */
/* sha: de2cd45914c6eeb872d0c6703da1868eae0f47ad79343fe3831668a3c4bc2059 */
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

  mrb_get_args(mrb, "z", &native_long_name);

  native_self->long_name = native_long_name;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOptionEntry::short_name_reader */
/* sha: 7363b8f20487735c72dd63598870760cbe7b9d9b0b29eca9b1d66f48b2372f5c */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOptionEntry::short_name_writer */
/* sha: 1c49796b975591824ba5e6fc5addcb4c2d1a26a1cac7402031923161ff2841b3 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOptionEntry::flags_reader */
/* sha: cb2da14a3bddd700dc50cfc8e5eeb0c2dc21c903be8188a0cef075558d542d18 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOptionEntry::flags_writer */
/* sha: 75346e9314b19152f0c895e35175cc76f5822868414dec87ed91d6e5cb16bc5b */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOptionEntry::arg_reader */
/* sha: b6f00d833a8927b39fba3653e43a736f760fe55cb9e35ee6ff372105ab86310d */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOptionEntry::arg_writer */
/* sha: 958162b9888cf4859c20ace94711cfde161a1314483aafacff40246bf88fdac6 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOptionEntry::arg_data_reader */
/* sha: 52260f0c71cb60510ba0d2e4d8779774479a2e80cdac784f534cbc26dc505ff8 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOptionEntry::arg_data_writer */
/* sha: 7a510f55a2f72fd92ced25f6aa00e7923947cb0b2042095d7ebda041f203e556 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOptionEntry::description_reader */
/* sha: 0fd215c201b6a1c2bd69471bd147f2a981d93a79f1b36a85496ce22d0ec55e85 */
#if BIND_GOptionEntry_description_FIELD_READER
/* get_description
 *
 * Return Type: const gchar *
 */
mrb_value
mrb_GLib_GOptionEntry_get_description(mrb_state* mrb, mrb_value self) {
  struct _GOptionEntry * native_self = mruby_unbox__GOptionEntry(self);

  const gchar * native_description = native_self->description;

  mrb_value description = native_description == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_description);

  return description;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOptionEntry::description_writer */
/* sha: d42c0bdadb73f293506a198872f32562489402d5d4085e948b6d162d4e2591d9 */
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

  mrb_get_args(mrb, "z", &native_description);

  native_self->description = native_description;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOptionEntry::arg_description_reader */
/* sha: 7c9cb95197f90cd33a2422f9641a890d8f636a33d4c592af8820690ac41e9676 */
#if BIND_GOptionEntry_arg_description_FIELD_READER
/* get_arg_description
 *
 * Return Type: const gchar *
 */
mrb_value
mrb_GLib_GOptionEntry_get_arg_description(mrb_state* mrb, mrb_value self) {
  struct _GOptionEntry * native_self = mruby_unbox__GOptionEntry(self);

  const gchar * native_arg_description = native_self->arg_description;

  mrb_value arg_description = native_arg_description == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_arg_description);

  return arg_description;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOptionEntry::arg_description_writer */
/* sha: 5bf29e4045dc05072c3304e14c3e18d6caa1b9b023adeb76a32a5556e88ce84f */
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

  mrb_get_args(mrb, "z", &native_arg_description);

  native_self->arg_description = native_arg_description;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


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
