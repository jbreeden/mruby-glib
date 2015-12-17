/*
 * char_directives
 * Defined in file printf-parse.h @ line 70
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_GLib.h"

#if BIND_CharDirectives_TYPE

/*
 * Class Methods
 */

#if BIND_CharDirectives_INITIALIZE
mrb_value
mrb_GLib_CharDirectives_initialize(mrb_state* mrb, mrb_value self) {
  char_directives* native_object = (char_directives*)malloc(sizeof(char_directives));
  mruby_gift_char_directives_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_CharDirectives_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::CharDirectives.disown only accepts objects of type GLib::CharDirectives");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_CharDirectives_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::CharDirectives.belongs_to_ruby only accepts objects of type GLib::CharDirectives");
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

#if BIND_CharDirectives_count_FIELD_READER
/* get_count
 *
 * Return Type: size_t
 */
mrb_value
mrb_GLib_CharDirectives_get_count(mrb_state* mrb, mrb_value self) {
  char_directives * native_self = mruby_unbox_char_directives(self);

  size_t native_field = native_self->count;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_CharDirectives_count_FIELD_WRITER
/* set_count
 *
 * Parameters:
 * - value: size_t
 */
mrb_value
mrb_GLib_CharDirectives_set_count(mrb_state* mrb, mrb_value self) {
  char_directives * native_self = mruby_unbox_char_directives(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  size_t native_field = mrb_fixnum(ruby_field);

  native_self->count = native_field;

  return ruby_field;
}
#endif

#if BIND_CharDirectives_dir_FIELD_READER
/* get_dir
 *
 * Return Type: char_directive *
 */
mrb_value
mrb_GLib_CharDirectives_get_dir(mrb_state* mrb, mrb_value self) {
  char_directives * native_self = mruby_unbox_char_directives(self);

  char_directive * native_field = native_self->dir;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box_char_directive(mrb, native_field));

  return ruby_field;
}
#endif

#if BIND_CharDirectives_dir_FIELD_WRITER
/* set_dir
 *
 * Parameters:
 * - value: char_directive *
 */
mrb_value
mrb_GLib_CharDirectives_set_dir(mrb_state* mrb, mrb_value self) {
  char_directives * native_self = mruby_unbox_char_directives(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, CharDirective_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "CharDirective expected");
    return mrb_nil_value();
  }

  char_directive * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox_char_directive(ruby_field));

  native_self->dir = native_field;

  return ruby_field;
}
#endif

#if BIND_CharDirectives_max_width_length_FIELD_READER
/* get_max_width_length
 *
 * Return Type: size_t
 */
mrb_value
mrb_GLib_CharDirectives_get_max_width_length(mrb_state* mrb, mrb_value self) {
  char_directives * native_self = mruby_unbox_char_directives(self);

  size_t native_field = native_self->max_width_length;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_CharDirectives_max_width_length_FIELD_WRITER
/* set_max_width_length
 *
 * Parameters:
 * - value: size_t
 */
mrb_value
mrb_GLib_CharDirectives_set_max_width_length(mrb_state* mrb, mrb_value self) {
  char_directives * native_self = mruby_unbox_char_directives(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  size_t native_field = mrb_fixnum(ruby_field);

  native_self->max_width_length = native_field;

  return ruby_field;
}
#endif

#if BIND_CharDirectives_max_precision_length_FIELD_READER
/* get_max_precision_length
 *
 * Return Type: size_t
 */
mrb_value
mrb_GLib_CharDirectives_get_max_precision_length(mrb_state* mrb, mrb_value self) {
  char_directives * native_self = mruby_unbox_char_directives(self);

  size_t native_field = native_self->max_precision_length;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_CharDirectives_max_precision_length_FIELD_WRITER
/* set_max_precision_length
 *
 * Parameters:
 * - value: size_t
 */
mrb_value
mrb_GLib_CharDirectives_set_max_precision_length(mrb_state* mrb, mrb_value self) {
  char_directives * native_self = mruby_unbox_char_directives(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  size_t native_field = mrb_fixnum(ruby_field);

  native_self->max_precision_length = native_field;

  return ruby_field;
}
#endif

#if BIND_CharDirectives_direct_alloc_dir_FIELD_READER
/* get_direct_alloc_dir
 *
 * Return Type: char_directive [7]
 */
mrb_value
mrb_GLib_CharDirectives_get_direct_alloc_dir(mrb_state* mrb, mrb_value self) {
  char_directives * native_self = mruby_unbox_char_directives(self);

  char_directive [7] native_field = native_self->direct_alloc_dir;

  mrb_value ruby_field = TODO_mruby_box_char_directive_[7](mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_CharDirectives_direct_alloc_dir_FIELD_WRITER
/* set_direct_alloc_dir
 *
 * Parameters:
 * - value: char_directive [7]
 */
mrb_value
mrb_GLib_CharDirectives_set_direct_alloc_dir(mrb_state* mrb, mrb_value self) {
  char_directives * native_self = mruby_unbox_char_directives(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_char_directive_[7](ruby_field);

  char_directive [7] native_field = TODO_mruby_unbox_char_directive_[7](ruby_field);

  native_self->direct_alloc_dir = native_field;

  return ruby_field;
}
#endif


void mrb_GLib_CharDirectives_init(mrb_state* mrb) {
  struct RClass* CharDirectives_class = mrb_define_class_under(mrb, GLib_module(mrb), "CharDirectives", mrb->object_class);
  MRB_SET_INSTANCE_TT(CharDirectives_class, MRB_TT_DATA);

#if BIND_CharDirectives_INITIALIZE
  mrb_define_method(mrb, CharDirectives_class, "initialize", mrb_GLib_CharDirectives_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, CharDirectives_class, "disown", mrb_GLib_CharDirectives_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, CharDirectives_class, "belongs_to_ruby?", mrb_GLib_CharDirectives_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_CharDirectives_count_FIELD_READER
  mrb_define_method(mrb, CharDirectives_class, "count", mrb_GLib_CharDirectives_get_count, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CharDirectives_count_FIELD_WRITER
  mrb_define_method(mrb, CharDirectives_class, "count=", mrb_GLib_CharDirectives_set_count, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CharDirectives_dir_FIELD_READER
  mrb_define_method(mrb, CharDirectives_class, "dir", mrb_GLib_CharDirectives_get_dir, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CharDirectives_dir_FIELD_WRITER
  mrb_define_method(mrb, CharDirectives_class, "dir=", mrb_GLib_CharDirectives_set_dir, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CharDirectives_max_width_length_FIELD_READER
  mrb_define_method(mrb, CharDirectives_class, "max_width_length", mrb_GLib_CharDirectives_get_max_width_length, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CharDirectives_max_width_length_FIELD_WRITER
  mrb_define_method(mrb, CharDirectives_class, "max_width_length=", mrb_GLib_CharDirectives_set_max_width_length, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CharDirectives_max_precision_length_FIELD_READER
  mrb_define_method(mrb, CharDirectives_class, "max_precision_length", mrb_GLib_CharDirectives_get_max_precision_length, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CharDirectives_max_precision_length_FIELD_WRITER
  mrb_define_method(mrb, CharDirectives_class, "max_precision_length=", mrb_GLib_CharDirectives_set_max_precision_length, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CharDirectives_direct_alloc_dir_FIELD_READER
  mrb_define_method(mrb, CharDirectives_class, "direct_alloc_dir", mrb_GLib_CharDirectives_get_direct_alloc_dir, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CharDirectives_direct_alloc_dir_FIELD_WRITER
  mrb_define_method(mrb, CharDirectives_class, "direct_alloc_dir=", mrb_GLib_CharDirectives_set_direct_alloc_dir, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
