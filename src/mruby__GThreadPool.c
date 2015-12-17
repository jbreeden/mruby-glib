/*
 * struct _GThreadPool
 * Defined in file gthreadpool.h @ line 36
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_GLib.h"

#if BIND_GThreadPool_TYPE

/*
 * Class Methods
 */

#if BIND_GThreadPool_INITIALIZE
mrb_value
mrb_GLib_GThreadPool_initialize(mrb_state* mrb, mrb_value self) {
  struct _GThreadPool* native_object = (struct _GThreadPool*)malloc(sizeof(struct _GThreadPool));
  mruby_gift_struct _GThreadPool_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_GThreadPool_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GThreadPool.disown only accepts objects of type GLib::GThreadPool");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_GThreadPool_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GThreadPool.belongs_to_ruby only accepts objects of type GLib::GThreadPool");
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

#if BIND_GThreadPool_func_FIELD_READER
/* get_func
 *
 * Return Type: GFunc
 */
mrb_value
mrb_GLib_GThreadPool_get_func(mrb_state* mrb, mrb_value self) {
  struct _GThreadPool * native_self = mruby_unbox_struct _GThreadPool(self);

  GFunc native_field = native_self->func;

  mrb_value ruby_field = TODO_mruby_box_GFunc(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GThreadPool_func_FIELD_WRITER
/* set_func
 *
 * Parameters:
 * - value: GFunc
 */
mrb_value
mrb_GLib_GThreadPool_set_func(mrb_state* mrb, mrb_value self) {
  struct _GThreadPool * native_self = mruby_unbox_struct _GThreadPool(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_GFunc(ruby_field);

  GFunc native_field = TODO_mruby_unbox_GFunc(ruby_field);

  native_self->func = native_field;

  return ruby_field;
}
#endif

#if BIND_GThreadPool_user_data_FIELD_READER
/* get_user_data
 *
 * Return Type: gpointer
 */
mrb_value
mrb_GLib_GThreadPool_get_user_data(mrb_state* mrb, mrb_value self) {
  struct _GThreadPool * native_self = mruby_unbox_struct _GThreadPool(self);

  gpointer native_field = native_self->user_data;

  mrb_value ruby_field = TODO_mruby_box_gpointer(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GThreadPool_user_data_FIELD_WRITER
/* set_user_data
 *
 * Parameters:
 * - value: gpointer
 */
mrb_value
mrb_GLib_GThreadPool_set_user_data(mrb_state* mrb, mrb_value self) {
  struct _GThreadPool * native_self = mruby_unbox_struct _GThreadPool(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_gpointer(ruby_field);

  gpointer native_field = TODO_mruby_unbox_gpointer(ruby_field);

  native_self->user_data = native_field;

  return ruby_field;
}
#endif

#if BIND_GThreadPool_exclusive_FIELD_READER
/* get_exclusive
 *
 * Return Type: gboolean
 */
mrb_value
mrb_GLib_GThreadPool_get_exclusive(mrb_state* mrb, mrb_value self) {
  struct _GThreadPool * native_self = mruby_unbox_struct _GThreadPool(self);

  gboolean native_field = native_self->exclusive;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GThreadPool_exclusive_FIELD_WRITER
/* set_exclusive
 *
 * Parameters:
 * - value: gboolean
 */
mrb_value
mrb_GLib_GThreadPool_set_exclusive(mrb_state* mrb, mrb_value self) {
  struct _GThreadPool * native_self = mruby_unbox_struct _GThreadPool(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->exclusive = native_field;

  return ruby_field;
}
#endif


void mrb_GLib_GThreadPool_init(mrb_state* mrb) {
  struct RClass* GThreadPool_class = mrb_define_class_under(mrb, GLib_module(mrb), "GThreadPool", mrb->object_class);
  MRB_SET_INSTANCE_TT(GThreadPool_class, MRB_TT_DATA);

#if BIND_GThreadPool_INITIALIZE
  mrb_define_method(mrb, GThreadPool_class, "initialize", mrb_GLib_GThreadPool_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GThreadPool_class, "disown", mrb_GLib_GThreadPool_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GThreadPool_class, "belongs_to_ruby?", mrb_GLib_GThreadPool_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GThreadPool_func_FIELD_READER
  mrb_define_method(mrb, GThreadPool_class, "func", mrb_GLib_GThreadPool_get_func, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GThreadPool_func_FIELD_WRITER
  mrb_define_method(mrb, GThreadPool_class, "func=", mrb_GLib_GThreadPool_set_func, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GThreadPool_user_data_FIELD_READER
  mrb_define_method(mrb, GThreadPool_class, "user_data", mrb_GLib_GThreadPool_get_user_data, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GThreadPool_user_data_FIELD_WRITER
  mrb_define_method(mrb, GThreadPool_class, "user_data=", mrb_GLib_GThreadPool_set_user_data, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GThreadPool_exclusive_FIELD_READER
  mrb_define_method(mrb, GThreadPool_class, "exclusive", mrb_GLib_GThreadPool_get_exclusive, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GThreadPool_exclusive_FIELD_WRITER
  mrb_define_method(mrb, GThreadPool_class, "exclusive=", mrb_GLib_GThreadPool_set_exclusive, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
