/*
 * struct _GDate
 * Defined in file gdate.h @ line 51
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_GLib.h"

#if BIND_GDate_TYPE

/*
 * Class Methods
 */

#if BIND_GDate_INITIALIZE
mrb_value
mrb_GLib_GDate_initialize(mrb_state* mrb, mrb_value self) {
  struct _GDate* native_object = (struct _GDate*)malloc(sizeof(struct _GDate));
  mruby_gift_struct _GDate_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_GDate_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDate.disown only accepts objects of type GLib::GDate");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_GDate_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDate.belongs_to_ruby only accepts objects of type GLib::GDate");
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

#if BIND_GDate_julian_days_FIELD_READER
/* get_julian_days
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GDate_get_julian_days(mrb_state* mrb, mrb_value self) {
  struct _GDate * native_self = mruby_unbox_struct _GDate(self);

  guint native_field = native_self->julian_days;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GDate_julian_days_FIELD_WRITER
/* set_julian_days
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GDate_set_julian_days(mrb_state* mrb, mrb_value self) {
  struct _GDate * native_self = mruby_unbox_struct _GDate(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->julian_days = native_field;

  return ruby_field;
}
#endif

#if BIND_GDate_julian_FIELD_READER
/* get_julian
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GDate_get_julian(mrb_state* mrb, mrb_value self) {
  struct _GDate * native_self = mruby_unbox_struct _GDate(self);

  guint native_field = native_self->julian;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GDate_julian_FIELD_WRITER
/* set_julian
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GDate_set_julian(mrb_state* mrb, mrb_value self) {
  struct _GDate * native_self = mruby_unbox_struct _GDate(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->julian = native_field;

  return ruby_field;
}
#endif

#if BIND_GDate_dmy_FIELD_READER
/* get_dmy
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GDate_get_dmy(mrb_state* mrb, mrb_value self) {
  struct _GDate * native_self = mruby_unbox_struct _GDate(self);

  guint native_field = native_self->dmy;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GDate_dmy_FIELD_WRITER
/* set_dmy
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GDate_set_dmy(mrb_state* mrb, mrb_value self) {
  struct _GDate * native_self = mruby_unbox_struct _GDate(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->dmy = native_field;

  return ruby_field;
}
#endif

#if BIND_GDate_day_FIELD_READER
/* get_day
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GDate_get_day(mrb_state* mrb, mrb_value self) {
  struct _GDate * native_self = mruby_unbox_struct _GDate(self);

  guint native_field = native_self->day;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GDate_day_FIELD_WRITER
/* set_day
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GDate_set_day(mrb_state* mrb, mrb_value self) {
  struct _GDate * native_self = mruby_unbox_struct _GDate(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->day = native_field;

  return ruby_field;
}
#endif

#if BIND_GDate_month_FIELD_READER
/* get_month
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GDate_get_month(mrb_state* mrb, mrb_value self) {
  struct _GDate * native_self = mruby_unbox_struct _GDate(self);

  guint native_field = native_self->month;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GDate_month_FIELD_WRITER
/* set_month
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GDate_set_month(mrb_state* mrb, mrb_value self) {
  struct _GDate * native_self = mruby_unbox_struct _GDate(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->month = native_field;

  return ruby_field;
}
#endif

#if BIND_GDate_year_FIELD_READER
/* get_year
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GDate_get_year(mrb_state* mrb, mrb_value self) {
  struct _GDate * native_self = mruby_unbox_struct _GDate(self);

  guint native_field = native_self->year;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GDate_year_FIELD_WRITER
/* set_year
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GDate_set_year(mrb_state* mrb, mrb_value self) {
  struct _GDate * native_self = mruby_unbox_struct _GDate(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->year = native_field;

  return ruby_field;
}
#endif


void mrb_GLib_GDate_init(mrb_state* mrb) {
  struct RClass* GDate_class = mrb_define_class_under(mrb, GLib_module(mrb), "GDate", mrb->object_class);
  MRB_SET_INSTANCE_TT(GDate_class, MRB_TT_DATA);

#if BIND_GDate_INITIALIZE
  mrb_define_method(mrb, GDate_class, "initialize", mrb_GLib_GDate_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GDate_class, "disown", mrb_GLib_GDate_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GDate_class, "belongs_to_ruby?", mrb_GLib_GDate_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GDate_julian_days_FIELD_READER
  mrb_define_method(mrb, GDate_class, "julian_days", mrb_GLib_GDate_get_julian_days, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GDate_julian_days_FIELD_WRITER
  mrb_define_method(mrb, GDate_class, "julian_days=", mrb_GLib_GDate_set_julian_days, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GDate_julian_FIELD_READER
  mrb_define_method(mrb, GDate_class, "julian", mrb_GLib_GDate_get_julian, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GDate_julian_FIELD_WRITER
  mrb_define_method(mrb, GDate_class, "julian=", mrb_GLib_GDate_set_julian, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GDate_dmy_FIELD_READER
  mrb_define_method(mrb, GDate_class, "dmy", mrb_GLib_GDate_get_dmy, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GDate_dmy_FIELD_WRITER
  mrb_define_method(mrb, GDate_class, "dmy=", mrb_GLib_GDate_set_dmy, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GDate_day_FIELD_READER
  mrb_define_method(mrb, GDate_class, "day", mrb_GLib_GDate_get_day, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GDate_day_FIELD_WRITER
  mrb_define_method(mrb, GDate_class, "day=", mrb_GLib_GDate_set_day, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GDate_month_FIELD_READER
  mrb_define_method(mrb, GDate_class, "month", mrb_GLib_GDate_get_month, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GDate_month_FIELD_WRITER
  mrb_define_method(mrb, GDate_class, "month=", mrb_GLib_GDate_set_month, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GDate_year_FIELD_READER
  mrb_define_method(mrb, GDate_class, "year", mrb_GLib_GDate_get_year, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GDate_year_FIELD_WRITER
  mrb_define_method(mrb, GDate_class, "year=", mrb_GLib_GDate_set_year, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
