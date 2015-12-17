/*
 * decomposition_step
 * Defined in file gunidecomp.h @ line 11621
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_GLib.h"

#if BIND_DecompositionStep_TYPE

/*
 * Class Methods
 */

#if BIND_DecompositionStep_INITIALIZE
mrb_value
mrb_GLib_DecompositionStep_initialize(mrb_state* mrb, mrb_value self) {
  decomposition_step* native_object = (decomposition_step*)malloc(sizeof(decomposition_step));
  mruby_gift_decomposition_step_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_DecompositionStep_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::DecompositionStep.disown only accepts objects of type GLib::DecompositionStep");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_DecompositionStep_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::DecompositionStep.belongs_to_ruby only accepts objects of type GLib::DecompositionStep");
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

#if BIND_DecompositionStep_ch_FIELD_READER
/* get_ch
 *
 * Return Type: int
 */
mrb_value
mrb_GLib_DecompositionStep_get_ch(mrb_state* mrb, mrb_value self) {
  decomposition_step * native_self = mruby_unbox_decomposition_step(self);

  int native_field = native_self->ch;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_DecompositionStep_ch_FIELD_WRITER
/* set_ch
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_GLib_DecompositionStep_set_ch(mrb_state* mrb, mrb_value self) {
  decomposition_step * native_self = mruby_unbox_decomposition_step(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->ch = native_field;

  return ruby_field;
}
#endif

#if BIND_DecompositionStep_a_FIELD_READER
/* get_a
 *
 * Return Type: int
 */
mrb_value
mrb_GLib_DecompositionStep_get_a(mrb_state* mrb, mrb_value self) {
  decomposition_step * native_self = mruby_unbox_decomposition_step(self);

  int native_field = native_self->a;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_DecompositionStep_a_FIELD_WRITER
/* set_a
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_GLib_DecompositionStep_set_a(mrb_state* mrb, mrb_value self) {
  decomposition_step * native_self = mruby_unbox_decomposition_step(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->a = native_field;

  return ruby_field;
}
#endif

#if BIND_DecompositionStep_b_FIELD_READER
/* get_b
 *
 * Return Type: int
 */
mrb_value
mrb_GLib_DecompositionStep_get_b(mrb_state* mrb, mrb_value self) {
  decomposition_step * native_self = mruby_unbox_decomposition_step(self);

  int native_field = native_self->b;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_DecompositionStep_b_FIELD_WRITER
/* set_b
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_GLib_DecompositionStep_set_b(mrb_state* mrb, mrb_value self) {
  decomposition_step * native_self = mruby_unbox_decomposition_step(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->b = native_field;

  return ruby_field;
}
#endif


void mrb_GLib_DecompositionStep_init(mrb_state* mrb) {
  struct RClass* DecompositionStep_class = mrb_define_class_under(mrb, GLib_module(mrb), "DecompositionStep", mrb->object_class);
  MRB_SET_INSTANCE_TT(DecompositionStep_class, MRB_TT_DATA);

#if BIND_DecompositionStep_INITIALIZE
  mrb_define_method(mrb, DecompositionStep_class, "initialize", mrb_GLib_DecompositionStep_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, DecompositionStep_class, "disown", mrb_GLib_DecompositionStep_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, DecompositionStep_class, "belongs_to_ruby?", mrb_GLib_DecompositionStep_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_DecompositionStep_ch_FIELD_READER
  mrb_define_method(mrb, DecompositionStep_class, "ch", mrb_GLib_DecompositionStep_get_ch, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DecompositionStep_ch_FIELD_WRITER
  mrb_define_method(mrb, DecompositionStep_class, "ch=", mrb_GLib_DecompositionStep_set_ch, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DecompositionStep_a_FIELD_READER
  mrb_define_method(mrb, DecompositionStep_class, "a", mrb_GLib_DecompositionStep_get_a, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DecompositionStep_a_FIELD_WRITER
  mrb_define_method(mrb, DecompositionStep_class, "a=", mrb_GLib_DecompositionStep_set_a, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DecompositionStep_b_FIELD_READER
  mrb_define_method(mrb, DecompositionStep_class, "b", mrb_GLib_DecompositionStep_get_b, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DecompositionStep_b_FIELD_WRITER
  mrb_define_method(mrb, DecompositionStep_class, "b=", mrb_GLib_DecompositionStep_set_b, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
