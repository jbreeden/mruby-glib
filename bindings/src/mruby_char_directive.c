/*
 * char_directive
 * Defined in file printf-parse.h @ line 53
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_GLib.h"

#if BIND_CharDirective_TYPE

/*
 * Class Methods
 */

#if BIND_CharDirective_INITIALIZE
mrb_value
mrb_GLib_CharDirective_initialize(mrb_state* mrb, mrb_value self) {
  char_directive* native_object = (char_directive*)malloc(sizeof(char_directive));
  mruby_gift_char_directive_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_CharDirective_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::CharDirective.disown only accepts objects of type GLib::CharDirective");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_CharDirective_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::CharDirective.belongs_to_ruby only accepts objects of type GLib::CharDirective");
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

#if BIND_CharDirective_dir_start_FIELD_READER
/* get_dir_start
 *
 * Return Type: const char *
 */
mrb_value
mrb_GLib_CharDirective_get_dir_start(mrb_state* mrb, mrb_value self) {
  char_directive * native_self = mruby_unbox_char_directive(self);

  const char * native_field = native_self->dir_start;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_CharDirective_dir_start_FIELD_WRITER
/* set_dir_start
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_GLib_CharDirective_set_dir_start(mrb_state* mrb, mrb_value self) {
  char_directive * native_self = mruby_unbox_char_directive(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  const char * native_field = mrb_string_value_cstr(mrb, &ruby_field);

  native_self->dir_start = native_field;

  return ruby_field;
}
#endif

#if BIND_CharDirective_dir_end_FIELD_READER
/* get_dir_end
 *
 * Return Type: const char *
 */
mrb_value
mrb_GLib_CharDirective_get_dir_end(mrb_state* mrb, mrb_value self) {
  char_directive * native_self = mruby_unbox_char_directive(self);

  const char * native_field = native_self->dir_end;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_CharDirective_dir_end_FIELD_WRITER
/* set_dir_end
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_GLib_CharDirective_set_dir_end(mrb_state* mrb, mrb_value self) {
  char_directive * native_self = mruby_unbox_char_directive(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  const char * native_field = mrb_string_value_cstr(mrb, &ruby_field);

  native_self->dir_end = native_field;

  return ruby_field;
}
#endif

#if BIND_CharDirective_flags_FIELD_READER
/* get_flags
 *
 * Return Type: int
 */
mrb_value
mrb_GLib_CharDirective_get_flags(mrb_state* mrb, mrb_value self) {
  char_directive * native_self = mruby_unbox_char_directive(self);

  int native_field = native_self->flags;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_CharDirective_flags_FIELD_WRITER
/* set_flags
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_GLib_CharDirective_set_flags(mrb_state* mrb, mrb_value self) {
  char_directive * native_self = mruby_unbox_char_directive(self);
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

#if BIND_CharDirective_width_start_FIELD_READER
/* get_width_start
 *
 * Return Type: const char *
 */
mrb_value
mrb_GLib_CharDirective_get_width_start(mrb_state* mrb, mrb_value self) {
  char_directive * native_self = mruby_unbox_char_directive(self);

  const char * native_field = native_self->width_start;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_CharDirective_width_start_FIELD_WRITER
/* set_width_start
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_GLib_CharDirective_set_width_start(mrb_state* mrb, mrb_value self) {
  char_directive * native_self = mruby_unbox_char_directive(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  const char * native_field = mrb_string_value_cstr(mrb, &ruby_field);

  native_self->width_start = native_field;

  return ruby_field;
}
#endif

#if BIND_CharDirective_width_end_FIELD_READER
/* get_width_end
 *
 * Return Type: const char *
 */
mrb_value
mrb_GLib_CharDirective_get_width_end(mrb_state* mrb, mrb_value self) {
  char_directive * native_self = mruby_unbox_char_directive(self);

  const char * native_field = native_self->width_end;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_CharDirective_width_end_FIELD_WRITER
/* set_width_end
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_GLib_CharDirective_set_width_end(mrb_state* mrb, mrb_value self) {
  char_directive * native_self = mruby_unbox_char_directive(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  const char * native_field = mrb_string_value_cstr(mrb, &ruby_field);

  native_self->width_end = native_field;

  return ruby_field;
}
#endif

#if BIND_CharDirective_width_arg_index_FIELD_READER
/* get_width_arg_index
 *
 * Return Type: size_t
 */
mrb_value
mrb_GLib_CharDirective_get_width_arg_index(mrb_state* mrb, mrb_value self) {
  char_directive * native_self = mruby_unbox_char_directive(self);

  size_t native_field = native_self->width_arg_index;

  mrb_value ruby_field = TODO_mruby_box_size_t(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_CharDirective_width_arg_index_FIELD_WRITER
/* set_width_arg_index
 *
 * Parameters:
 * - value: size_t
 */
mrb_value
mrb_GLib_CharDirective_set_width_arg_index(mrb_state* mrb, mrb_value self) {
  char_directive * native_self = mruby_unbox_char_directive(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_size_t(ruby_field);

  size_t native_field = TODO_mruby_unbox_size_t(ruby_field);

  native_self->width_arg_index = native_field;

  return ruby_field;
}
#endif

#if BIND_CharDirective_precision_start_FIELD_READER
/* get_precision_start
 *
 * Return Type: const char *
 */
mrb_value
mrb_GLib_CharDirective_get_precision_start(mrb_state* mrb, mrb_value self) {
  char_directive * native_self = mruby_unbox_char_directive(self);

  const char * native_field = native_self->precision_start;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_CharDirective_precision_start_FIELD_WRITER
/* set_precision_start
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_GLib_CharDirective_set_precision_start(mrb_state* mrb, mrb_value self) {
  char_directive * native_self = mruby_unbox_char_directive(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  const char * native_field = mrb_string_value_cstr(mrb, &ruby_field);

  native_self->precision_start = native_field;

  return ruby_field;
}
#endif

#if BIND_CharDirective_precision_end_FIELD_READER
/* get_precision_end
 *
 * Return Type: const char *
 */
mrb_value
mrb_GLib_CharDirective_get_precision_end(mrb_state* mrb, mrb_value self) {
  char_directive * native_self = mruby_unbox_char_directive(self);

  const char * native_field = native_self->precision_end;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_CharDirective_precision_end_FIELD_WRITER
/* set_precision_end
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_GLib_CharDirective_set_precision_end(mrb_state* mrb, mrb_value self) {
  char_directive * native_self = mruby_unbox_char_directive(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  const char * native_field = mrb_string_value_cstr(mrb, &ruby_field);

  native_self->precision_end = native_field;

  return ruby_field;
}
#endif

#if BIND_CharDirective_precision_arg_index_FIELD_READER
/* get_precision_arg_index
 *
 * Return Type: size_t
 */
mrb_value
mrb_GLib_CharDirective_get_precision_arg_index(mrb_state* mrb, mrb_value self) {
  char_directive * native_self = mruby_unbox_char_directive(self);

  size_t native_field = native_self->precision_arg_index;

  mrb_value ruby_field = TODO_mruby_box_size_t(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_CharDirective_precision_arg_index_FIELD_WRITER
/* set_precision_arg_index
 *
 * Parameters:
 * - value: size_t
 */
mrb_value
mrb_GLib_CharDirective_set_precision_arg_index(mrb_state* mrb, mrb_value self) {
  char_directive * native_self = mruby_unbox_char_directive(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_size_t(ruby_field);

  size_t native_field = TODO_mruby_unbox_size_t(ruby_field);

  native_self->precision_arg_index = native_field;

  return ruby_field;
}
#endif

#if BIND_CharDirective_conversion_FIELD_READER
/* get_conversion
 *
 * Return Type: char
 */
mrb_value
mrb_GLib_CharDirective_get_conversion(mrb_state* mrb, mrb_value self) {
  char_directive * native_self = mruby_unbox_char_directive(self);

  char native_field = native_self->conversion;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_CharDirective_conversion_FIELD_WRITER
/* set_conversion
 *
 * Parameters:
 * - value: char
 */
mrb_value
mrb_GLib_CharDirective_set_conversion(mrb_state* mrb, mrb_value self) {
  char_directive * native_self = mruby_unbox_char_directive(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  char native_field = mrb_fixnum(ruby_field);

  native_self->conversion = native_field;

  return ruby_field;
}
#endif

#if BIND_CharDirective_arg_index_FIELD_READER
/* get_arg_index
 *
 * Return Type: size_t
 */
mrb_value
mrb_GLib_CharDirective_get_arg_index(mrb_state* mrb, mrb_value self) {
  char_directive * native_self = mruby_unbox_char_directive(self);

  size_t native_field = native_self->arg_index;

  mrb_value ruby_field = TODO_mruby_box_size_t(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_CharDirective_arg_index_FIELD_WRITER
/* set_arg_index
 *
 * Parameters:
 * - value: size_t
 */
mrb_value
mrb_GLib_CharDirective_set_arg_index(mrb_state* mrb, mrb_value self) {
  char_directive * native_self = mruby_unbox_char_directive(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_size_t(ruby_field);

  size_t native_field = TODO_mruby_unbox_size_t(ruby_field);

  native_self->arg_index = native_field;

  return ruby_field;
}
#endif


void mrb_GLib_CharDirective_init(mrb_state* mrb) {
  RClass* CharDirective_class = mrb_define_class_under(mrb, GLib_module(mrb), "CharDirective", mrb->object_class);
  MRB_SET_INSTANCE_TT(CharDirective_class, MRB_TT_DATA);

#if BIND_CharDirective_INITIALIZE
  mrb_define_method(mrb, CharDirective_class, "initialize", mrb_GLib_CharDirective_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, CharDirective_class, "disown", mrb_GLib_CharDirective_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, CharDirective_class, "belongs_to_ruby?", mrb_GLib_CharDirective_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_CharDirective_dir_start_FIELD_READER
  mrb_define_method(mrb, CharDirective_class, "dir_start", mrb_GLib_CharDirective_get_dir_start, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CharDirective_dir_start_FIELD_WRITER
  mrb_define_method(mrb, CharDirective_class, "dir_start=", mrb_GLib_CharDirective_set_dir_start, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CharDirective_dir_end_FIELD_READER
  mrb_define_method(mrb, CharDirective_class, "dir_end", mrb_GLib_CharDirective_get_dir_end, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CharDirective_dir_end_FIELD_WRITER
  mrb_define_method(mrb, CharDirective_class, "dir_end=", mrb_GLib_CharDirective_set_dir_end, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CharDirective_flags_FIELD_READER
  mrb_define_method(mrb, CharDirective_class, "flags", mrb_GLib_CharDirective_get_flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CharDirective_flags_FIELD_WRITER
  mrb_define_method(mrb, CharDirective_class, "flags=", mrb_GLib_CharDirective_set_flags, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CharDirective_width_start_FIELD_READER
  mrb_define_method(mrb, CharDirective_class, "width_start", mrb_GLib_CharDirective_get_width_start, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CharDirective_width_start_FIELD_WRITER
  mrb_define_method(mrb, CharDirective_class, "width_start=", mrb_GLib_CharDirective_set_width_start, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CharDirective_width_end_FIELD_READER
  mrb_define_method(mrb, CharDirective_class, "width_end", mrb_GLib_CharDirective_get_width_end, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CharDirective_width_end_FIELD_WRITER
  mrb_define_method(mrb, CharDirective_class, "width_end=", mrb_GLib_CharDirective_set_width_end, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CharDirective_width_arg_index_FIELD_READER
  mrb_define_method(mrb, CharDirective_class, "width_arg_index", mrb_GLib_CharDirective_get_width_arg_index, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CharDirective_width_arg_index_FIELD_WRITER
  mrb_define_method(mrb, CharDirective_class, "width_arg_index=", mrb_GLib_CharDirective_set_width_arg_index, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CharDirective_precision_start_FIELD_READER
  mrb_define_method(mrb, CharDirective_class, "precision_start", mrb_GLib_CharDirective_get_precision_start, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CharDirective_precision_start_FIELD_WRITER
  mrb_define_method(mrb, CharDirective_class, "precision_start=", mrb_GLib_CharDirective_set_precision_start, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CharDirective_precision_end_FIELD_READER
  mrb_define_method(mrb, CharDirective_class, "precision_end", mrb_GLib_CharDirective_get_precision_end, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CharDirective_precision_end_FIELD_WRITER
  mrb_define_method(mrb, CharDirective_class, "precision_end=", mrb_GLib_CharDirective_set_precision_end, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CharDirective_precision_arg_index_FIELD_READER
  mrb_define_method(mrb, CharDirective_class, "precision_arg_index", mrb_GLib_CharDirective_get_precision_arg_index, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CharDirective_precision_arg_index_FIELD_WRITER
  mrb_define_method(mrb, CharDirective_class, "precision_arg_index=", mrb_GLib_CharDirective_set_precision_arg_index, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CharDirective_conversion_FIELD_READER
  mrb_define_method(mrb, CharDirective_class, "conversion", mrb_GLib_CharDirective_get_conversion, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CharDirective_conversion_FIELD_WRITER
  mrb_define_method(mrb, CharDirective_class, "conversion=", mrb_GLib_CharDirective_set_conversion, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CharDirective_arg_index_FIELD_READER
  mrb_define_method(mrb, CharDirective_class, "arg_index", mrb_GLib_CharDirective_get_arg_index, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CharDirective_arg_index_FIELD_WRITER
  mrb_define_method(mrb, CharDirective_class, "arg_index=", mrb_GLib_CharDirective_set_arg_index, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
