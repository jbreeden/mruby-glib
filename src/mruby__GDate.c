/*
 * struct _GDate
 * Defined in file gdate.h @ line 51
 */

#include "mruby_GLib.h"

#if BIND_GDate_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GDate::initialize */
/* sha: d392586156c14d97171984f7066c094b6ff6c24df5cb37e51785b572c22af4a9 */
#if BIND_GDate_INITIALIZE
mrb_value
mrb_GLib_GDate_initialize(mrb_state* mrb, mrb_value self) {
  struct _GDate* native_object = (struct _GDate*)calloc(1, sizeof(struct _GDate));
  mruby_giftwrap__GDate_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDate::initialize */
/* sha: 23fc5449a67b405ba7ce718676a6649631390653c17e12f85f78f7df8ff39197 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDate::belongs_to_ruby */
/* sha: 7ec22d71053e8510fd8081852c54c418ac2d3dd85d847da73450c8a497ed0b70 */
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
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: GDate::julian_days_reader */
/* sha: 23ee83977898dc6a6dbf6721ca0ae639441062e065db451e65941accd4ff9ebf */
#if BIND_GDate_julian_days_FIELD_READER
/* get_julian_days
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GDate_get_julian_days(mrb_state* mrb, mrb_value self) {
  struct _GDate * native_self = mruby_unbox__GDate(self);

  guint native_julian_days = native_self->julian_days;

  mrb_value julian_days = mrb_fixnum_value(native_julian_days);

  return julian_days;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDate::julian_days_writer */
/* sha: 52ec7e4a79a61a34c9fe094d3e823011e885be6758afa1108cb3fa4e81996c27 */
#if BIND_GDate_julian_days_FIELD_WRITER
/* set_julian_days
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GDate_set_julian_days(mrb_state* mrb, mrb_value self) {
  struct _GDate * native_self = mruby_unbox__GDate(self);
  mrb_int native_julian_days;

  mrb_get_args(mrb, "i", &native_julian_days);

  native_self->julian_days = native_julian_days;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDate::julian_reader */
/* sha: 53a7f15fb53e99dabcd194c02dc0b5c7270e2156eb98926ddedfff99484ead5a */
#if BIND_GDate_julian_FIELD_READER
/* get_julian
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GDate_get_julian(mrb_state* mrb, mrb_value self) {
  struct _GDate * native_self = mruby_unbox__GDate(self);

  guint native_julian = native_self->julian;

  mrb_value julian = mrb_fixnum_value(native_julian);

  return julian;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDate::julian_writer */
/* sha: 949553d891c6b33d4b652bfdf1e7704ec9a674d9cb9025ea841d33c7f9fc23f1 */
#if BIND_GDate_julian_FIELD_WRITER
/* set_julian
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GDate_set_julian(mrb_state* mrb, mrb_value self) {
  struct _GDate * native_self = mruby_unbox__GDate(self);
  mrb_int native_julian;

  mrb_get_args(mrb, "i", &native_julian);

  native_self->julian = native_julian;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDate::dmy_reader */
/* sha: c4dc16aacf09dd23ce1977ca97574a0c9b80d7bb1206b5d66e743abc550bfb6d */
#if BIND_GDate_dmy_FIELD_READER
/* get_dmy
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GDate_get_dmy(mrb_state* mrb, mrb_value self) {
  struct _GDate * native_self = mruby_unbox__GDate(self);

  guint native_dmy = native_self->dmy;

  mrb_value dmy = mrb_fixnum_value(native_dmy);

  return dmy;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDate::dmy_writer */
/* sha: 0767c8c39b4c487b7feb94fd8f7daf74591c5d5b5018eb1cde814031ea92474b */
#if BIND_GDate_dmy_FIELD_WRITER
/* set_dmy
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GDate_set_dmy(mrb_state* mrb, mrb_value self) {
  struct _GDate * native_self = mruby_unbox__GDate(self);
  mrb_int native_dmy;

  mrb_get_args(mrb, "i", &native_dmy);

  native_self->dmy = native_dmy;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDate::day_reader */
/* sha: e9720af561202fb46379672df8f948e1a9b4bdbfad0a34d42a9f20a65a56f24c */
#if BIND_GDate_day_FIELD_READER
/* get_day
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GDate_get_day(mrb_state* mrb, mrb_value self) {
  struct _GDate * native_self = mruby_unbox__GDate(self);

  guint native_day = native_self->day;

  mrb_value day = mrb_fixnum_value(native_day);

  return day;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDate::day_writer */
/* sha: af86ccac7b000ae74c52a59474ef7046fe11e56f2fd4a87eb835fc175707bfec */
#if BIND_GDate_day_FIELD_WRITER
/* set_day
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GDate_set_day(mrb_state* mrb, mrb_value self) {
  struct _GDate * native_self = mruby_unbox__GDate(self);
  mrb_int native_day;

  mrb_get_args(mrb, "i", &native_day);

  native_self->day = native_day;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDate::month_reader */
/* sha: 9f03b2b6a2fced9f2788f6cd92e8fddcad372b565a2af6ce16b6198c2b48b8ab */
#if BIND_GDate_month_FIELD_READER
/* get_month
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GDate_get_month(mrb_state* mrb, mrb_value self) {
  struct _GDate * native_self = mruby_unbox__GDate(self);

  guint native_month = native_self->month;

  mrb_value month = mrb_fixnum_value(native_month);

  return month;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDate::month_writer */
/* sha: e63b9042a01d0ecd53316f72c66b93dbe15b61064e272056b8ec885221b6ddba */
#if BIND_GDate_month_FIELD_WRITER
/* set_month
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GDate_set_month(mrb_state* mrb, mrb_value self) {
  struct _GDate * native_self = mruby_unbox__GDate(self);
  mrb_int native_month;

  mrb_get_args(mrb, "i", &native_month);

  native_self->month = native_month;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDate::year_reader */
/* sha: d8ffcf6dc9127f7017fd23b3529aa33c5ccc4e2374bfc8dbfc56aa1523bf4c1c */
#if BIND_GDate_year_FIELD_READER
/* get_year
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GDate_get_year(mrb_state* mrb, mrb_value self) {
  struct _GDate * native_self = mruby_unbox__GDate(self);

  guint native_year = native_self->year;

  mrb_value year = mrb_fixnum_value(native_year);

  return year;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDate::year_writer */
/* sha: 04a1139b77d7a7c2332dea101f131c715ee669a0e9b23010ade06ac052a82e9d */
#if BIND_GDate_year_FIELD_WRITER
/* set_year
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GDate_set_year(mrb_state* mrb, mrb_value self) {
  struct _GDate * native_self = mruby_unbox__GDate(self);
  mrb_int native_year;

  mrb_get_args(mrb, "i", &native_year);

  native_self->year = native_year;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


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
