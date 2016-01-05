/*
 * struct _GThreadPool
 * Defined in file gthreadpool.h @ line 36
 */

#include "mruby_GLib.h"

#if BIND_GThreadPool_TYPE

/*
 * Class Methods
 */

#if BIND_GThreadPool_INITIALIZE
mrb_value
mrb_GLib_GThreadPool_initialize(mrb_state* mrb, mrb_value self) {
  struct _GThreadPool* native_object = (struct _GThreadPool*)calloc(1, sizeof(struct _GThreadPool));
  mruby_giftwrap__GThreadPool_data_ptr(self, native_object);
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
  struct _GThreadPool * native_self = mruby_unbox__GThreadPool(self);

  GFunc native_func = native_self->func;

  mrb_value func = TODO_mruby_box_GFunc(mrb, native_func);

  return func;
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
  struct _GThreadPool * native_self = mruby_unbox__GThreadPool(self);
  mrb_value func;

  mrb_get_args(mrb, "o", &func);

  /* type checking */
  TODO_type_check_GFunc(func);

  GFunc native_func = TODO_mruby_unbox_GFunc(func);

  native_self->func = native_func;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GThreadPool_user_data_FIELD_READER
/* get_user_data
 *
 * Return Type: gpointer
 */
mrb_value
mrb_GLib_GThreadPool_get_user_data(mrb_state* mrb, mrb_value self) {
  struct _GThreadPool * native_self = mruby_unbox__GThreadPool(self);

  gpointer native_user_data = native_self->user_data;

  mrb_value user_data = TODO_mruby_box_gpointer(mrb, native_user_data);

  return user_data;
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
  struct _GThreadPool * native_self = mruby_unbox__GThreadPool(self);
  mrb_value user_data;

  mrb_get_args(mrb, "o", &user_data);

  /* type checking */
  TODO_type_check_gpointer(user_data);

  gpointer native_user_data = TODO_mruby_unbox_gpointer(user_data);

  native_self->user_data = native_user_data;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GThreadPool_exclusive_FIELD_READER
/* get_exclusive
 *
 * Return Type: gboolean
 */
mrb_value
mrb_GLib_GThreadPool_get_exclusive(mrb_state* mrb, mrb_value self) {
  struct _GThreadPool * native_self = mruby_unbox__GThreadPool(self);

  gboolean native_exclusive = native_self->exclusive;

  mrb_value exclusive = mrb_bool_value(native_exclusive);

  return exclusive;
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
  struct _GThreadPool * native_self = mruby_unbox__GThreadPool(self);
  mrb_bool native_exclusive;

  mrb_get_args(mrb, "b", &native_exclusive);

  native_self->exclusive = native_exclusive;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
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
