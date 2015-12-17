/*
 * arguments
 * Defined in file printf-args.h @ line 141
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_GLib.h"

#if BIND_Arguments_TYPE

/*
 * Class Methods
 */

#if BIND_Arguments_INITIALIZE
mrb_value
mrb_GLib_Arguments_initialize(mrb_state* mrb, mrb_value self) {
  arguments* native_object = (arguments*)malloc(sizeof(arguments));
  mruby_gift_arguments_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_Arguments_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::Arguments.disown only accepts objects of type GLib::Arguments");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_Arguments_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::Arguments.belongs_to_ruby only accepts objects of type GLib::Arguments");
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

#if BIND_Arguments_count_FIELD_READER
/* get_count
 *
 * Return Type: size_t
 */
mrb_value
mrb_GLib_Arguments_get_count(mrb_state* mrb, mrb_value self) {
  arguments * native_self = mruby_unbox_arguments(self);

  size_t native_field = native_self->count;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_Arguments_count_FIELD_WRITER
/* set_count
 *
 * Parameters:
 * - value: size_t
 */
mrb_value
mrb_GLib_Arguments_set_count(mrb_state* mrb, mrb_value self) {
  arguments * native_self = mruby_unbox_arguments(self);
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

#if BIND_Arguments_arg_FIELD_READER
/* get_arg
 *
 * Return Type: argument *
 */
mrb_value
mrb_GLib_Arguments_get_arg(mrb_state* mrb, mrb_value self) {
  arguments * native_self = mruby_unbox_arguments(self);

  argument * native_field = native_self->arg;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box_argument(mrb, native_field));

  return ruby_field;
}
#endif

#if BIND_Arguments_arg_FIELD_WRITER
/* set_arg
 *
 * Parameters:
 * - value: argument *
 */
mrb_value
mrb_GLib_Arguments_set_arg(mrb_state* mrb, mrb_value self) {
  arguments * native_self = mruby_unbox_arguments(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, Argument_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Argument expected");
    return mrb_nil_value();
  }

  argument * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox_argument(ruby_field));

  native_self->arg = native_field;

  return ruby_field;
}
#endif

#if BIND_Arguments_direct_alloc_arg_FIELD_READER
/* get_direct_alloc_arg
 *
 * Return Type: argument [7]
 */
mrb_value
mrb_GLib_Arguments_get_direct_alloc_arg(mrb_state* mrb, mrb_value self) {
  arguments * native_self = mruby_unbox_arguments(self);

  argument [7] native_field = native_self->direct_alloc_arg;

  mrb_value ruby_field = TODO_mruby_box_argument_[7](mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_Arguments_direct_alloc_arg_FIELD_WRITER
/* set_direct_alloc_arg
 *
 * Parameters:
 * - value: argument [7]
 */
mrb_value
mrb_GLib_Arguments_set_direct_alloc_arg(mrb_state* mrb, mrb_value self) {
  arguments * native_self = mruby_unbox_arguments(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_argument_[7](ruby_field);

  argument [7] native_field = TODO_mruby_unbox_argument_[7](ruby_field);

  native_self->direct_alloc_arg = native_field;

  return ruby_field;
}
#endif


void mrb_GLib_Arguments_init(mrb_state* mrb) {
  struct RClass* Arguments_class = mrb_define_class_under(mrb, GLib_module(mrb), "Arguments", mrb->object_class);
  MRB_SET_INSTANCE_TT(Arguments_class, MRB_TT_DATA);

#if BIND_Arguments_INITIALIZE
  mrb_define_method(mrb, Arguments_class, "initialize", mrb_GLib_Arguments_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Arguments_class, "disown", mrb_GLib_Arguments_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Arguments_class, "belongs_to_ruby?", mrb_GLib_Arguments_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_Arguments_count_FIELD_READER
  mrb_define_method(mrb, Arguments_class, "count", mrb_GLib_Arguments_get_count, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Arguments_count_FIELD_WRITER
  mrb_define_method(mrb, Arguments_class, "count=", mrb_GLib_Arguments_set_count, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Arguments_arg_FIELD_READER
  mrb_define_method(mrb, Arguments_class, "arg", mrb_GLib_Arguments_get_arg, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Arguments_arg_FIELD_WRITER
  mrb_define_method(mrb, Arguments_class, "arg=", mrb_GLib_Arguments_set_arg, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Arguments_direct_alloc_arg_FIELD_READER
  mrb_define_method(mrb, Arguments_class, "direct_alloc_arg", mrb_GLib_Arguments_get_direct_alloc_arg, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Arguments_direct_alloc_arg_FIELD_WRITER
  mrb_define_method(mrb, Arguments_class, "direct_alloc_arg=", mrb_GLib_Arguments_set_direct_alloc_arg, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
