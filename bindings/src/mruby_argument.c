/*
 * argument
 * Defined in file printf-args.h @ line 91
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_GLib.h"

#if BIND_Argument_TYPE

/*
 * Class Methods
 */

#if BIND_Argument_INITIALIZE
mrb_value
mrb_GLib_Argument_initialize(mrb_state* mrb, mrb_value self) {
  argument* native_object = (argument*)malloc(sizeof(argument));
  mruby_gift_argument_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_Argument_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::Argument.disown only accepts objects of type GLib::Argument");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_Argument_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::Argument.belongs_to_ruby only accepts objects of type GLib::Argument");
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

#if BIND_Argument_type_FIELD_READER
/* get_type
 *
 * Return Type: arg_type
 */
mrb_value
mrb_GLib_Argument_get_type(mrb_state* mrb, mrb_value self) {
  argument * native_self = mruby_unbox_argument(self);

  arg_type native_field = native_self->type;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_Argument_type_FIELD_WRITER
/* set_type
 *
 * Parameters:
 * - value: arg_type
 */
mrb_value
mrb_GLib_Argument_set_type(mrb_state* mrb, mrb_value self) {
  argument * native_self = mruby_unbox_argument(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->type = native_field;

  return ruby_field;
}
#endif

#if BIND_Argument_a_FIELD_READER
/* get_a
 *
 * Return Type: union (anonymous union at ../glib/glib/gnulib/printf-args.h:94:3)
 */
mrb_value
mrb_GLib_Argument_get_a(mrb_state* mrb, mrb_value self) {
  argument * native_self = mruby_unbox_argument(self);

  union (anonymous union at ../glib/glib/gnulib/printf-args.h:94:3) native_field = native_self->a;

  mrb_value ruby_field = TODO_mruby_box_union_LPAREN_anonymous_union_at_../glib/glib/gnulib/printf-args.h:94:3_RPAREN(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_Argument_a_FIELD_WRITER
/* set_a
 *
 * Parameters:
 * - value: union (anonymous union at ../glib/glib/gnulib/printf-args.h:94:3)
 */
mrb_value
mrb_GLib_Argument_set_a(mrb_state* mrb, mrb_value self) {
  argument * native_self = mruby_unbox_argument(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_union_LPAREN_anonymous_union_at_../glib/glib/gnulib/printf-args.h:94:3_RPAREN(ruby_field);

  union (anonymous union at ../glib/glib/gnulib/printf-args.h:94:3) native_field = TODO_mruby_unbox_union_LPAREN_anonymous_union_at_../glib/glib/gnulib/printf-args.h:94:3_RPAREN(ruby_field);

  native_self->a = native_field;

  return ruby_field;
}
#endif


void mrb_GLib_Argument_init(mrb_state* mrb) {
  struct RClass* Argument_class = mrb_define_class_under(mrb, GLib_module(mrb), "Argument", mrb->object_class);
  MRB_SET_INSTANCE_TT(Argument_class, MRB_TT_DATA);

#if BIND_Argument_INITIALIZE
  mrb_define_method(mrb, Argument_class, "initialize", mrb_GLib_Argument_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Argument_class, "disown", mrb_GLib_Argument_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Argument_class, "belongs_to_ruby?", mrb_GLib_Argument_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_Argument_type_FIELD_READER
  mrb_define_method(mrb, Argument_class, "type", mrb_GLib_Argument_get_type, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Argument_type_FIELD_WRITER
  mrb_define_method(mrb, Argument_class, "type=", mrb_GLib_Argument_set_type, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Argument_a_FIELD_READER
  mrb_define_method(mrb, Argument_class, "a", mrb_GLib_Argument_get_a, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Argument_a_FIELD_WRITER
  mrb_define_method(mrb, Argument_class, "a=", mrb_GLib_Argument_set_a, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
