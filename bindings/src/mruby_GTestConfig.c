/*
 * GTestConfig
 * Defined in file gtestutils.h @ line 345
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_GLib.h"

#if BIND_GTestConfig_TYPE

/*
 * Class Methods
 */

#if BIND_GTestConfig_INITIALIZE
mrb_value
mrb_GLib_GTestConfig_initialize(mrb_state* mrb, mrb_value self) {
  GTestConfig* native_object = (GTestConfig*)malloc(sizeof(GTestConfig));
  mruby_gift_GTestConfig_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_GTestConfig_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTestConfig.disown only accepts objects of type GLib::GTestConfig");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_GTestConfig_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTestConfig.belongs_to_ruby only accepts objects of type GLib::GTestConfig");
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

#if BIND_GTestConfig_test_initialized_FIELD_READER
/* get_test_initialized
 *
 * Return Type: gboolean
 */
mrb_value
mrb_GLib_GTestConfig_get_test_initialized(mrb_state* mrb, mrb_value self) {
  GTestConfig * native_self = mruby_unbox_GTestConfig(self);

  gboolean native_field = native_self->test_initialized;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GTestConfig_test_initialized_FIELD_WRITER
/* set_test_initialized
 *
 * Parameters:
 * - value: gboolean
 */
mrb_value
mrb_GLib_GTestConfig_set_test_initialized(mrb_state* mrb, mrb_value self) {
  GTestConfig * native_self = mruby_unbox_GTestConfig(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->test_initialized = native_field;

  return ruby_field;
}
#endif

#if BIND_GTestConfig_test_quick_FIELD_READER
/* get_test_quick
 *
 * Return Type: gboolean
 */
mrb_value
mrb_GLib_GTestConfig_get_test_quick(mrb_state* mrb, mrb_value self) {
  GTestConfig * native_self = mruby_unbox_GTestConfig(self);

  gboolean native_field = native_self->test_quick;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GTestConfig_test_quick_FIELD_WRITER
/* set_test_quick
 *
 * Parameters:
 * - value: gboolean
 */
mrb_value
mrb_GLib_GTestConfig_set_test_quick(mrb_state* mrb, mrb_value self) {
  GTestConfig * native_self = mruby_unbox_GTestConfig(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->test_quick = native_field;

  return ruby_field;
}
#endif

#if BIND_GTestConfig_test_perf_FIELD_READER
/* get_test_perf
 *
 * Return Type: gboolean
 */
mrb_value
mrb_GLib_GTestConfig_get_test_perf(mrb_state* mrb, mrb_value self) {
  GTestConfig * native_self = mruby_unbox_GTestConfig(self);

  gboolean native_field = native_self->test_perf;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GTestConfig_test_perf_FIELD_WRITER
/* set_test_perf
 *
 * Parameters:
 * - value: gboolean
 */
mrb_value
mrb_GLib_GTestConfig_set_test_perf(mrb_state* mrb, mrb_value self) {
  GTestConfig * native_self = mruby_unbox_GTestConfig(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->test_perf = native_field;

  return ruby_field;
}
#endif

#if BIND_GTestConfig_test_verbose_FIELD_READER
/* get_test_verbose
 *
 * Return Type: gboolean
 */
mrb_value
mrb_GLib_GTestConfig_get_test_verbose(mrb_state* mrb, mrb_value self) {
  GTestConfig * native_self = mruby_unbox_GTestConfig(self);

  gboolean native_field = native_self->test_verbose;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GTestConfig_test_verbose_FIELD_WRITER
/* set_test_verbose
 *
 * Parameters:
 * - value: gboolean
 */
mrb_value
mrb_GLib_GTestConfig_set_test_verbose(mrb_state* mrb, mrb_value self) {
  GTestConfig * native_self = mruby_unbox_GTestConfig(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->test_verbose = native_field;

  return ruby_field;
}
#endif

#if BIND_GTestConfig_test_quiet_FIELD_READER
/* get_test_quiet
 *
 * Return Type: gboolean
 */
mrb_value
mrb_GLib_GTestConfig_get_test_quiet(mrb_state* mrb, mrb_value self) {
  GTestConfig * native_self = mruby_unbox_GTestConfig(self);

  gboolean native_field = native_self->test_quiet;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GTestConfig_test_quiet_FIELD_WRITER
/* set_test_quiet
 *
 * Parameters:
 * - value: gboolean
 */
mrb_value
mrb_GLib_GTestConfig_set_test_quiet(mrb_state* mrb, mrb_value self) {
  GTestConfig * native_self = mruby_unbox_GTestConfig(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->test_quiet = native_field;

  return ruby_field;
}
#endif

#if BIND_GTestConfig_test_undefined_FIELD_READER
/* get_test_undefined
 *
 * Return Type: gboolean
 */
mrb_value
mrb_GLib_GTestConfig_get_test_undefined(mrb_state* mrb, mrb_value self) {
  GTestConfig * native_self = mruby_unbox_GTestConfig(self);

  gboolean native_field = native_self->test_undefined;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GTestConfig_test_undefined_FIELD_WRITER
/* set_test_undefined
 *
 * Parameters:
 * - value: gboolean
 */
mrb_value
mrb_GLib_GTestConfig_set_test_undefined(mrb_state* mrb, mrb_value self) {
  GTestConfig * native_self = mruby_unbox_GTestConfig(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->test_undefined = native_field;

  return ruby_field;
}
#endif


void mrb_GLib_GTestConfig_init(mrb_state* mrb) {
  struct RClass* GTestConfig_class = mrb_define_class_under(mrb, GLib_module(mrb), "GTestConfig", mrb->object_class);
  MRB_SET_INSTANCE_TT(GTestConfig_class, MRB_TT_DATA);

#if BIND_GTestConfig_INITIALIZE
  mrb_define_method(mrb, GTestConfig_class, "initialize", mrb_GLib_GTestConfig_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GTestConfig_class, "disown", mrb_GLib_GTestConfig_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GTestConfig_class, "belongs_to_ruby?", mrb_GLib_GTestConfig_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GTestConfig_test_initialized_FIELD_READER
  mrb_define_method(mrb, GTestConfig_class, "test_initialized", mrb_GLib_GTestConfig_get_test_initialized, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GTestConfig_test_initialized_FIELD_WRITER
  mrb_define_method(mrb, GTestConfig_class, "test_initialized=", mrb_GLib_GTestConfig_set_test_initialized, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GTestConfig_test_quick_FIELD_READER
  mrb_define_method(mrb, GTestConfig_class, "test_quick", mrb_GLib_GTestConfig_get_test_quick, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GTestConfig_test_quick_FIELD_WRITER
  mrb_define_method(mrb, GTestConfig_class, "test_quick=", mrb_GLib_GTestConfig_set_test_quick, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GTestConfig_test_perf_FIELD_READER
  mrb_define_method(mrb, GTestConfig_class, "test_perf", mrb_GLib_GTestConfig_get_test_perf, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GTestConfig_test_perf_FIELD_WRITER
  mrb_define_method(mrb, GTestConfig_class, "test_perf=", mrb_GLib_GTestConfig_set_test_perf, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GTestConfig_test_verbose_FIELD_READER
  mrb_define_method(mrb, GTestConfig_class, "test_verbose", mrb_GLib_GTestConfig_get_test_verbose, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GTestConfig_test_verbose_FIELD_WRITER
  mrb_define_method(mrb, GTestConfig_class, "test_verbose=", mrb_GLib_GTestConfig_set_test_verbose, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GTestConfig_test_quiet_FIELD_READER
  mrb_define_method(mrb, GTestConfig_class, "test_quiet", mrb_GLib_GTestConfig_get_test_quiet, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GTestConfig_test_quiet_FIELD_WRITER
  mrb_define_method(mrb, GTestConfig_class, "test_quiet=", mrb_GLib_GTestConfig_set_test_quiet, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GTestConfig_test_undefined_FIELD_READER
  mrb_define_method(mrb, GTestConfig_class, "test_undefined", mrb_GLib_GTestConfig_get_test_undefined, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GTestConfig_test_undefined_FIELD_WRITER
  mrb_define_method(mrb, GTestConfig_class, "test_undefined=", mrb_GLib_GTestConfig_set_test_undefined, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
