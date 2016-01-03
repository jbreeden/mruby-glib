/*
 * struct _GOnce
 * Defined in file gthread.h @ line 56
 */

#include "mruby_GLib.h"

#if BIND_GOnce_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GOnce::initialize */
/* sha: 1c8e9ca345c69ea13c3483d4e6bc6a3ec462bea30e87244508e503a8a9a2ca12 */
#if BIND_GOnce_INITIALIZE
mrb_value
mrb_GLib_GOnce_initialize(mrb_state* mrb, mrb_value self) {
  struct _GOnce* native_object = (struct _GOnce*)calloc(1, sizeof(struct _GOnce));
  mruby_giftwrap__GOnce_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOnce::initialize */
/* sha: dcefcf4a5b4a28f75b7aaa937450cb3ad2c53f1a66b447331055fce6f60733f8 */
mrb_value
mrb_GLib_GOnce_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GOnce.disown only accepts objects of type GLib::GOnce");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOnce::belongs_to_ruby */
/* sha: ebd48607efe5603e77b9f54243c5ed36de6ec9f29855642a021a989667206daa */
mrb_value
mrb_GLib_GOnce_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GOnce.belongs_to_ruby only accepts objects of type GLib::GOnce");
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

/* MRUBY_BINDING: GOnce::status_reader */
/* sha: 7e6d8700838b08b2503de7879b2835e3704c6765459008f7c869556daedb94a6 */
#if BIND_GOnce_status_FIELD_READER
/* get_status
 *
 * Return Type: volatile GOnceStatus
 */
mrb_value
mrb_GLib_GOnce_get_status(mrb_state* mrb, mrb_value self) {
  struct _GOnce * native_self = mruby_unbox__GOnce(self);

  volatile GOnceStatus native_status = native_self->status;

  mrb_value status = TODO_mruby_box_volatile_GOnceStatus(mrb, native_status);

  return status;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOnce::status_writer */
/* sha: b47ba2be3a422425a8b2d599aeed857ed67bd54ed76f2f8e0d53b9ae00fc35f3 */
#if BIND_GOnce_status_FIELD_WRITER
/* set_status
 *
 * Parameters:
 * - value: volatile GOnceStatus
 */
mrb_value
mrb_GLib_GOnce_set_status(mrb_state* mrb, mrb_value self) {
  struct _GOnce * native_self = mruby_unbox__GOnce(self);
  mrb_value status;

  mrb_get_args(mrb, "o", &status);

  /* type checking */
  TODO_type_check_volatile_GOnceStatus(status);

  volatile GOnceStatus native_status = TODO_mruby_unbox_volatile_GOnceStatus(status);

  native_self->status = native_status;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOnce::retval_reader */
/* sha: bc7bf18043faa7f7a8fba835d593d0710dac0739ae720c772913d525bd2c4d86 */
#if BIND_GOnce_retval_FIELD_READER
/* get_retval
 *
 * Return Type: volatile gpointer
 */
mrb_value
mrb_GLib_GOnce_get_retval(mrb_state* mrb, mrb_value self) {
  struct _GOnce * native_self = mruby_unbox__GOnce(self);

  volatile gpointer native_retval = native_self->retval;

  mrb_value retval = TODO_mruby_box_volatile_gpointer(mrb, native_retval);

  return retval;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOnce::retval_writer */
/* sha: 9fa31cf584711422060e5513408980deed1b183e55d94473ae71ecbd8c963887 */
#if BIND_GOnce_retval_FIELD_WRITER
/* set_retval
 *
 * Parameters:
 * - value: volatile gpointer
 */
mrb_value
mrb_GLib_GOnce_set_retval(mrb_state* mrb, mrb_value self) {
  struct _GOnce * native_self = mruby_unbox__GOnce(self);
  mrb_value retval;

  mrb_get_args(mrb, "o", &retval);

  /* type checking */
  TODO_type_check_volatile_gpointer(retval);

  volatile gpointer native_retval = TODO_mruby_unbox_volatile_gpointer(retval);

  native_self->retval = native_retval;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_GLib_GOnce_init(mrb_state* mrb) {
/* MRUBY_BINDING: GOnce::class_definition */
/* sha: 7241906706ca67cf631ebbc2029fbbe96cc95b511b9d45856f8728408d5606b6 */
  struct RClass* GOnce_class = mrb_define_class_under(mrb, GLib_module(mrb), "GOnce", mrb->object_class);
  MRB_SET_INSTANCE_TT(GOnce_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOnce::class_method_definitions */
/* sha: 33eeaf3c1baa720f12eedd5f6a5e5594e423364992a7128c19eb1d0d83e4bfe6 */
#if BIND_GOnce_INITIALIZE
  mrb_define_method(mrb, GOnce_class, "initialize", mrb_GLib_GOnce_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GOnce_class, "disown", mrb_GLib_GOnce_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GOnce_class, "belongs_to_ruby?", mrb_GLib_GOnce_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOnce::attr_definitions */
/* sha: b8deab5bd59621098a9d71dac6f4070511ca6a8e3f29ebf8ed500d9532e3403a */
  /*
   * Fields
   */
#if BIND_GOnce_status_FIELD_READER
  mrb_define_method(mrb, GOnce_class, "status", mrb_GLib_GOnce_get_status, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GOnce_status_FIELD_WRITER
  mrb_define_method(mrb, GOnce_class, "status=", mrb_GLib_GOnce_set_status, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GOnce_retval_FIELD_READER
  mrb_define_method(mrb, GOnce_class, "retval", mrb_GLib_GOnce_get_retval, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GOnce_retval_FIELD_WRITER
  mrb_define_method(mrb, GOnce_class, "retval=", mrb_GLib_GOnce_set_retval, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOnce::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
