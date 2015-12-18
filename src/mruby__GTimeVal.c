/*
 * struct _GTimeVal
 * Defined in file gtypes.h @ line 449
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_GLib.h"

#if BIND_GTimeVal_TYPE

/*
 * Class Methods
 */

#if BIND_GTimeVal_INITIALIZE
mrb_value
mrb_GLib_GTimeVal_initialize(mrb_state* mrb, mrb_value self) {
  struct _GTimeVal* native_object = (struct _GTimeVal*)malloc(sizeof(struct _GTimeVal));
  mruby_gift_struct _GTimeVal_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_GTimeVal_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTimeVal.disown only accepts objects of type GLib::GTimeVal");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_GTimeVal_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTimeVal.belongs_to_ruby only accepts objects of type GLib::GTimeVal");
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

#if BIND_GTimeVal_tv_sec_FIELD_READER
/* get_tv_sec
 *
 * Return Type: glong
 */
mrb_value
mrb_GLib_GTimeVal_get_tv_sec(mrb_state* mrb, mrb_value self) {
  struct _GTimeVal * native_self = mruby_unbox_struct _GTimeVal(self);

  glong native_field = native_self->tv_sec;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GTimeVal_tv_sec_FIELD_WRITER
/* set_tv_sec
 *
 * Parameters:
 * - value: glong
 */
mrb_value
mrb_GLib_GTimeVal_set_tv_sec(mrb_state* mrb, mrb_value self) {
  struct _GTimeVal * native_self = mruby_unbox_struct _GTimeVal(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  long native_field = (long)ruby_field;

  native_self->tv_sec = native_field;

  return ruby_field;
}
#endif

#if BIND_GTimeVal_tv_usec_FIELD_READER
/* get_tv_usec
 *
 * Return Type: glong
 */
mrb_value
mrb_GLib_GTimeVal_get_tv_usec(mrb_state* mrb, mrb_value self) {
  struct _GTimeVal * native_self = mruby_unbox_struct _GTimeVal(self);

  glong native_field = native_self->tv_usec;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GTimeVal_tv_usec_FIELD_WRITER
/* set_tv_usec
 *
 * Parameters:
 * - value: glong
 */
mrb_value
mrb_GLib_GTimeVal_set_tv_usec(mrb_state* mrb, mrb_value self) {
  struct _GTimeVal * native_self = mruby_unbox_struct _GTimeVal(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  long native_field = (long)ruby_field;

  native_self->tv_usec = native_field;

  return ruby_field;
}
#endif


void mrb_GLib_GTimeVal_init(mrb_state* mrb) {
  struct RClass* GTimeVal_class = mrb_define_class_under(mrb, GLib_module(mrb), "GTimeVal", mrb->object_class);
  MRB_SET_INSTANCE_TT(GTimeVal_class, MRB_TT_DATA);

#if BIND_GTimeVal_INITIALIZE
  mrb_define_method(mrb, GTimeVal_class, "initialize", mrb_GLib_GTimeVal_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GTimeVal_class, "disown", mrb_GLib_GTimeVal_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GTimeVal_class, "belongs_to_ruby?", mrb_GLib_GTimeVal_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GTimeVal_tv_sec_FIELD_READER
  mrb_define_method(mrb, GTimeVal_class, "tv_sec", mrb_GLib_GTimeVal_get_tv_sec, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GTimeVal_tv_sec_FIELD_WRITER
  mrb_define_method(mrb, GTimeVal_class, "tv_sec=", mrb_GLib_GTimeVal_set_tv_sec, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GTimeVal_tv_usec_FIELD_READER
  mrb_define_method(mrb, GTimeVal_class, "tv_usec", mrb_GLib_GTimeVal_get_tv_usec, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GTimeVal_tv_usec_FIELD_WRITER
  mrb_define_method(mrb, GTimeVal_class, "tv_usec=", mrb_GLib_GTimeVal_set_tv_usec, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
