/*
 * struct _GThreadPool
 * Defined in file gthreadpool.h @ line 36
 */

#include "mruby_GLib.h"

#if BIND_GThreadPool_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GThreadPool::initialize */
/* sha: 9d90cd25384e31d06d3e04e7dcd805883c7a3b454fcfb47ad6caf1eb08af61f9 */
#if BIND_GThreadPool_INITIALIZE
mrb_value
mrb_GLib_GThreadPool_initialize(mrb_state* mrb, mrb_value self) {
  struct _GThreadPool* native_object = (struct _GThreadPool*)calloc(1, sizeof(struct _GThreadPool));
  mruby_giftwrap__GThreadPool_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GThreadPool::initialize */
/* sha: a6255ed884c7c38a61d7431bc27ba2962ef2aaa03705fcc7591b365316678c55 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GThreadPool::belongs_to_ruby */
/* sha: a0d460e13d34b35745da6439ab6698ab0bd6665d09e628a8ff550d882d9f4bc8 */
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
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: GThreadPool::func_reader */
/* sha: ba02f4daa0337caf66aee7aa3a8df71247c0bcb155879a3e12464e8cf52820fb */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GThreadPool::func_writer */
/* sha: 22eae6254a9fc6670d018d37110c01ee8a91d747a722f1515001407ed16f4991 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GThreadPool::user_data_reader */
/* sha: 34b9dd34c94eb117d7a228d1c7f8d3cdaf63d89ffbb62fcf7268a7e973f3bf0b */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GThreadPool::user_data_writer */
/* sha: 6289d523507f0357294200e49e84922505552fbfe3246a20190e2a28c29c66e0 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GThreadPool::exclusive_reader */
/* sha: c820bdc80d4be5a51cbfc9d9527e44a1df04deca677af543cc1cc578b6a586e4 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GThreadPool::exclusive_writer */
/* sha: 7220d1fd699f75ef806b01e8c3384f45c3603c65ad502da8c2e9e488bc38da98 */
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
/* MRUBY_BINDING_END */


void mrb_GLib_GThreadPool_init(mrb_state* mrb) {
/* MRUBY_BINDING: GThreadPool::class_definition */
/* sha: eea686544a8a11b31cf6fb4603761b1443079f5b4056093d3e00cfac2f48135d */
  struct RClass* GThreadPool_class = mrb_define_class_under(mrb, GLib_module(mrb), "GThreadPool", mrb->object_class);
  MRB_SET_INSTANCE_TT(GThreadPool_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GThreadPool::class_method_definitions */
/* sha: 3103e1d6ef8ce5699462dd2eb59523a663c595ed7acdba1332f6d558091dbff8 */
#if BIND_GThreadPool_INITIALIZE
  mrb_define_method(mrb, GThreadPool_class, "initialize", mrb_GLib_GThreadPool_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GThreadPool_class, "disown", mrb_GLib_GThreadPool_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GThreadPool_class, "belongs_to_ruby?", mrb_GLib_GThreadPool_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GThreadPool::attr_definitions */
/* sha: 7a3f2809b2006add2e80beaf6695aabf080f7eb5822049a2860b882d8d5e899e */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GThreadPool::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
