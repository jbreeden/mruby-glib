/*
 * GTestConfig
 * Defined in file gtestutils.h @ line 342
 */

#include "mruby_GLib.h"

#if BIND_GTestConfig_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GTestConfig::initialize */
/* sha: d22f0dbdfb789d4802c67226990898098ab4e86aaeacb1ee1980f5efc92403f0 */
#if BIND_GTestConfig_INITIALIZE
mrb_value
mrb_GLib_GTestConfig_initialize(mrb_state* mrb, mrb_value self) {
  GTestConfig* native_object = (GTestConfig*)calloc(1, sizeof(GTestConfig));
  mruby_giftwrap_GTestConfig_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestConfig::initialize */
/* sha: 6e51185e3336e0908b395bff26fe54b0a52d18ddfb5d152a0c245b22d5433297 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestConfig::belongs_to_ruby */
/* sha: bd701b1227cf57d84c7eaee22c3b12a32cf10139e602f2765067b70d8c4ebbb4 */
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
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: GTestConfig::test_initialized_reader */
/* sha: d261bd62b69efd8223dff2deabab5d58622667813e6b090407800894c4f6728b */
#if BIND_GTestConfig_test_initialized_FIELD_READER
/* get_test_initialized
 *
 * Return Type: gboolean
 */
mrb_value
mrb_GLib_GTestConfig_get_test_initialized(mrb_state* mrb, mrb_value self) {
  GTestConfig * native_self = mruby_unbox_GTestConfig(self);

  gboolean native_test_initialized = native_self->test_initialized;

  mrb_value test_initialized = mrb_bool_value(native_test_initialized);

  return test_initialized;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestConfig::test_initialized_writer */
/* sha: 1b522efc6e2422918d482c90608e983653f4cc310a6f06c2143aecf80012594c */
#if BIND_GTestConfig_test_initialized_FIELD_WRITER
/* set_test_initialized
 *
 * Parameters:
 * - value: gboolean
 */
mrb_value
mrb_GLib_GTestConfig_set_test_initialized(mrb_state* mrb, mrb_value self) {
  GTestConfig * native_self = mruby_unbox_GTestConfig(self);
  mrb_bool native_test_initialized;

  mrb_get_args(mrb, "b", &native_test_initialized);

  native_self->test_initialized = native_test_initialized;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestConfig::test_quick_reader */
/* sha: c6ffbcedc68711748c370deb308c567837d976726aee2c20a99b39c236c8614a */
#if BIND_GTestConfig_test_quick_FIELD_READER
/* get_test_quick
 *
 * Return Type: gboolean
 */
mrb_value
mrb_GLib_GTestConfig_get_test_quick(mrb_state* mrb, mrb_value self) {
  GTestConfig * native_self = mruby_unbox_GTestConfig(self);

  gboolean native_test_quick = native_self->test_quick;

  mrb_value test_quick = mrb_bool_value(native_test_quick);

  return test_quick;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestConfig::test_quick_writer */
/* sha: a14fa0e22c65e9e90472c88530fffe8c292c512b9d53f2749dde0bec168aa3a4 */
#if BIND_GTestConfig_test_quick_FIELD_WRITER
/* set_test_quick
 *
 * Parameters:
 * - value: gboolean
 */
mrb_value
mrb_GLib_GTestConfig_set_test_quick(mrb_state* mrb, mrb_value self) {
  GTestConfig * native_self = mruby_unbox_GTestConfig(self);
  mrb_bool native_test_quick;

  mrb_get_args(mrb, "b", &native_test_quick);

  native_self->test_quick = native_test_quick;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestConfig::test_perf_reader */
/* sha: 72ef2492d7407acfbaeae48dba3bc881b82d5f6f586e1b9bdddd419fd0ac891e */
#if BIND_GTestConfig_test_perf_FIELD_READER
/* get_test_perf
 *
 * Return Type: gboolean
 */
mrb_value
mrb_GLib_GTestConfig_get_test_perf(mrb_state* mrb, mrb_value self) {
  GTestConfig * native_self = mruby_unbox_GTestConfig(self);

  gboolean native_test_perf = native_self->test_perf;

  mrb_value test_perf = mrb_bool_value(native_test_perf);

  return test_perf;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestConfig::test_perf_writer */
/* sha: af5e5174211ea21feec5a4c7de5b551225c4a497ee5e6ca5858d42a142995170 */
#if BIND_GTestConfig_test_perf_FIELD_WRITER
/* set_test_perf
 *
 * Parameters:
 * - value: gboolean
 */
mrb_value
mrb_GLib_GTestConfig_set_test_perf(mrb_state* mrb, mrb_value self) {
  GTestConfig * native_self = mruby_unbox_GTestConfig(self);
  mrb_bool native_test_perf;

  mrb_get_args(mrb, "b", &native_test_perf);

  native_self->test_perf = native_test_perf;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestConfig::test_verbose_reader */
/* sha: c1cdb22e8889001f2e35f55746853581638f687aeecbe558913829870085a148 */
#if BIND_GTestConfig_test_verbose_FIELD_READER
/* get_test_verbose
 *
 * Return Type: gboolean
 */
mrb_value
mrb_GLib_GTestConfig_get_test_verbose(mrb_state* mrb, mrb_value self) {
  GTestConfig * native_self = mruby_unbox_GTestConfig(self);

  gboolean native_test_verbose = native_self->test_verbose;

  mrb_value test_verbose = mrb_bool_value(native_test_verbose);

  return test_verbose;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestConfig::test_verbose_writer */
/* sha: f0c212901cb298e014b5d2380956c4e0e258c60f34a740530b115d333f6722de */
#if BIND_GTestConfig_test_verbose_FIELD_WRITER
/* set_test_verbose
 *
 * Parameters:
 * - value: gboolean
 */
mrb_value
mrb_GLib_GTestConfig_set_test_verbose(mrb_state* mrb, mrb_value self) {
  GTestConfig * native_self = mruby_unbox_GTestConfig(self);
  mrb_bool native_test_verbose;

  mrb_get_args(mrb, "b", &native_test_verbose);

  native_self->test_verbose = native_test_verbose;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestConfig::test_quiet_reader */
/* sha: 3f298c7c66e9e7eab6f5eaf06f9c5a83aeefaadb286f58205e3f289b6d07618f */
#if BIND_GTestConfig_test_quiet_FIELD_READER
/* get_test_quiet
 *
 * Return Type: gboolean
 */
mrb_value
mrb_GLib_GTestConfig_get_test_quiet(mrb_state* mrb, mrb_value self) {
  GTestConfig * native_self = mruby_unbox_GTestConfig(self);

  gboolean native_test_quiet = native_self->test_quiet;

  mrb_value test_quiet = mrb_bool_value(native_test_quiet);

  return test_quiet;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestConfig::test_quiet_writer */
/* sha: 222374a03af0a966343569929b2fb8dfdb1f4094da866da40cc2c5ceb66ddaf5 */
#if BIND_GTestConfig_test_quiet_FIELD_WRITER
/* set_test_quiet
 *
 * Parameters:
 * - value: gboolean
 */
mrb_value
mrb_GLib_GTestConfig_set_test_quiet(mrb_state* mrb, mrb_value self) {
  GTestConfig * native_self = mruby_unbox_GTestConfig(self);
  mrb_bool native_test_quiet;

  mrb_get_args(mrb, "b", &native_test_quiet);

  native_self->test_quiet = native_test_quiet;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestConfig::test_undefined_reader */
/* sha: cf499d1001976a96c1f974d9f6034bd4ae39944b9630ea0760e7d1f9e3431980 */
#if BIND_GTestConfig_test_undefined_FIELD_READER
/* get_test_undefined
 *
 * Return Type: gboolean
 */
mrb_value
mrb_GLib_GTestConfig_get_test_undefined(mrb_state* mrb, mrb_value self) {
  GTestConfig * native_self = mruby_unbox_GTestConfig(self);

  gboolean native_test_undefined = native_self->test_undefined;

  mrb_value test_undefined = mrb_bool_value(native_test_undefined);

  return test_undefined;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestConfig::test_undefined_writer */
/* sha: 825abd0842019f82d2c74e9f67470ad8b8ce900808c113fdebc1be000aacae86 */
#if BIND_GTestConfig_test_undefined_FIELD_WRITER
/* set_test_undefined
 *
 * Parameters:
 * - value: gboolean
 */
mrb_value
mrb_GLib_GTestConfig_set_test_undefined(mrb_state* mrb, mrb_value self) {
  GTestConfig * native_self = mruby_unbox_GTestConfig(self);
  mrb_bool native_test_undefined;

  mrb_get_args(mrb, "b", &native_test_undefined);

  native_self->test_undefined = native_test_undefined;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_GLib_GTestConfig_init(mrb_state* mrb) {
/* MRUBY_BINDING: GTestConfig::class_definition */
/* sha: ce2426fe7c5e31c2d917c61c6ee2a954fce79e7c550eb800b59b17f5f31bbb16 */
  struct RClass* GTestConfig_class = mrb_define_class_under(mrb, GLib_module(mrb), "GTestConfig", mrb->object_class);
  MRB_SET_INSTANCE_TT(GTestConfig_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestConfig::class_method_definitions */
/* sha: fd729f49f90f578b1bbab621365ae959c0e40dde59b39e4c3af8a74d51bd780a */
#if BIND_GTestConfig_INITIALIZE
  mrb_define_method(mrb, GTestConfig_class, "initialize", mrb_GLib_GTestConfig_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GTestConfig_class, "disown", mrb_GLib_GTestConfig_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GTestConfig_class, "belongs_to_ruby?", mrb_GLib_GTestConfig_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestConfig::attr_definitions */
/* sha: d10d55d3ac50958080cdc9330876ffc110648aa89b1ddbac3999d51adbc256e0 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestConfig::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
