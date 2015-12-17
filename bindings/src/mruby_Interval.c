/*
 * struct Interval
 * Defined in file gunichartables.h @ line 17135
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_GLib.h"

#if BIND_Interval_TYPE

/*
 * Class Methods
 */

#if BIND_Interval_INITIALIZE
mrb_value
mrb_GLib_Interval_initialize(mrb_state* mrb, mrb_value self) {
  struct Interval* native_object = (struct Interval*)malloc(sizeof(struct Interval));
  mruby_gift_struct Interval_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_Interval_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::Interval.disown only accepts objects of type GLib::Interval");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_Interval_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::Interval.belongs_to_ruby only accepts objects of type GLib::Interval");
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

#if BIND_Interval_start_FIELD_READER
/* get_start
 *
 * Return Type: int
 */
mrb_value
mrb_GLib_Interval_get_start(mrb_state* mrb, mrb_value self) {
  struct Interval * native_self = mruby_unbox_struct Interval(self);

  int native_field = native_self->start;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_Interval_start_FIELD_WRITER
/* set_start
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_GLib_Interval_set_start(mrb_state* mrb, mrb_value self) {
  struct Interval * native_self = mruby_unbox_struct Interval(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->start = native_field;

  return ruby_field;
}
#endif

#if BIND_Interval_end_FIELD_READER
/* get_end
 *
 * Return Type: int
 */
mrb_value
mrb_GLib_Interval_get_end(mrb_state* mrb, mrb_value self) {
  struct Interval * native_self = mruby_unbox_struct Interval(self);

  int native_field = native_self->end;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_Interval_end_FIELD_WRITER
/* set_end
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_GLib_Interval_set_end(mrb_state* mrb, mrb_value self) {
  struct Interval * native_self = mruby_unbox_struct Interval(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->end = native_field;

  return ruby_field;
}
#endif


void mrb_GLib_Interval_init(mrb_state* mrb) {
  struct RClass* Interval_class = mrb_define_class_under(mrb, GLib_module(mrb), "Interval", mrb->object_class);
  MRB_SET_INSTANCE_TT(Interval_class, MRB_TT_DATA);

#if BIND_Interval_INITIALIZE
  mrb_define_method(mrb, Interval_class, "initialize", mrb_GLib_Interval_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Interval_class, "disown", mrb_GLib_Interval_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Interval_class, "belongs_to_ruby?", mrb_GLib_Interval_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_Interval_start_FIELD_READER
  mrb_define_method(mrb, Interval_class, "start", mrb_GLib_Interval_get_start, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Interval_start_FIELD_WRITER
  mrb_define_method(mrb, Interval_class, "start=", mrb_GLib_Interval_set_start, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Interval_end_FIELD_READER
  mrb_define_method(mrb, Interval_class, "end", mrb_GLib_Interval_get_end, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Interval_end_FIELD_WRITER
  mrb_define_method(mrb, Interval_class, "end=", mrb_GLib_Interval_set_end, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
