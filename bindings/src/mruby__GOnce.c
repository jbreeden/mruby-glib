/*
 * struct _GOnce
 * Defined in file gthread.h @ line 56
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_GLib.h"

#if BIND_GOnce_TYPE

/*
 * Class Methods
 */

#if BIND_GOnce_INITIALIZE
mrb_value
mrb_GLib_GOnce_initialize(mrb_state* mrb, mrb_value self) {
  struct _GOnce* native_object = (struct _GOnce*)malloc(sizeof(struct _GOnce));
  mruby_gift_struct _GOnce_data_ptr(self, native_object);
  return self;
}
#endif

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

/*
 * Fields
 */

#if BIND_GOnce_status_FIELD_READER
/* get_status
 *
 * Return Type: volatile GOnceStatus
 */
mrb_value
mrb_GLib_GOnce_get_status(mrb_state* mrb, mrb_value self) {
  struct _GOnce * native_self = mruby_unbox_struct _GOnce(self);

  volatile GOnceStatus native_field = native_self->status;

  mrb_value ruby_field = TODO_mruby_box_volatile_GOnceStatus(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GOnce_status_FIELD_WRITER
/* set_status
 *
 * Parameters:
 * - value: volatile GOnceStatus
 */
mrb_value
mrb_GLib_GOnce_set_status(mrb_state* mrb, mrb_value self) {
  struct _GOnce * native_self = mruby_unbox_struct _GOnce(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_volatile_GOnceStatus(ruby_field);

  volatile GOnceStatus native_field = TODO_mruby_unbox_volatile_GOnceStatus(ruby_field);

  native_self->status = native_field;

  return ruby_field;
}
#endif

#if BIND_GOnce_retval_FIELD_READER
/* get_retval
 *
 * Return Type: volatile gpointer
 */
mrb_value
mrb_GLib_GOnce_get_retval(mrb_state* mrb, mrb_value self) {
  struct _GOnce * native_self = mruby_unbox_struct _GOnce(self);

  volatile gpointer native_field = native_self->retval;

  mrb_value ruby_field = TODO_mruby_box_volatile_gpointer(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GOnce_retval_FIELD_WRITER
/* set_retval
 *
 * Parameters:
 * - value: volatile gpointer
 */
mrb_value
mrb_GLib_GOnce_set_retval(mrb_state* mrb, mrb_value self) {
  struct _GOnce * native_self = mruby_unbox_struct _GOnce(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_volatile_gpointer(ruby_field);

  volatile gpointer native_field = TODO_mruby_unbox_volatile_gpointer(ruby_field);

  native_self->retval = native_field;

  return ruby_field;
}
#endif


void mrb_GLib_GOnce_init(mrb_state* mrb) {
  struct RClass* GOnce_class = mrb_define_class_under(mrb, GLib_module(mrb), "GOnce", mrb->object_class);
  MRB_SET_INSTANCE_TT(GOnce_class, MRB_TT_DATA);

#if BIND_GOnce_INITIALIZE
  mrb_define_method(mrb, GOnce_class, "initialize", mrb_GLib_GOnce_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GOnce_class, "disown", mrb_GLib_GOnce_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GOnce_class, "belongs_to_ruby?", mrb_GLib_GOnce_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

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

}

#endif
