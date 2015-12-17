/*
 * struct _GPrivate
 * Defined in file gthread.h @ line 55
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_GLib.h"

#if BIND_GPrivate_TYPE

/*
 * Class Methods
 */

#if BIND_GPrivate_INITIALIZE
mrb_value
mrb_GLib_GPrivate_initialize(mrb_state* mrb, mrb_value self) {
  struct _GPrivate* native_object = (struct _GPrivate*)malloc(sizeof(struct _GPrivate));
  mruby_gift_struct _GPrivate_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_GPrivate_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GPrivate.disown only accepts objects of type GLib::GPrivate");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_GPrivate_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GPrivate.belongs_to_ruby only accepts objects of type GLib::GPrivate");
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

#if BIND_GPrivate_p_FIELD_READER
/* get_p
 *
 * Return Type: gpointer
 */
mrb_value
mrb_GLib_GPrivate_get_p(mrb_state* mrb, mrb_value self) {
  struct _GPrivate * native_self = mruby_unbox_struct _GPrivate(self);

  gpointer native_field = native_self->p;

  mrb_value ruby_field = TODO_mruby_box_gpointer(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GPrivate_p_FIELD_WRITER
/* set_p
 *
 * Parameters:
 * - value: gpointer
 */
mrb_value
mrb_GLib_GPrivate_set_p(mrb_state* mrb, mrb_value self) {
  struct _GPrivate * native_self = mruby_unbox_struct _GPrivate(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_gpointer(ruby_field);

  gpointer native_field = TODO_mruby_unbox_gpointer(ruby_field);

  native_self->p = native_field;

  return ruby_field;
}
#endif

#if BIND_GPrivate_notify_FIELD_READER
/* get_notify
 *
 * Return Type: GDestroyNotify
 */
mrb_value
mrb_GLib_GPrivate_get_notify(mrb_state* mrb, mrb_value self) {
  struct _GPrivate * native_self = mruby_unbox_struct _GPrivate(self);

  GDestroyNotify native_field = native_self->notify;

  mrb_value ruby_field = TODO_mruby_box_GDestroyNotify(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GPrivate_notify_FIELD_WRITER
/* set_notify
 *
 * Parameters:
 * - value: GDestroyNotify
 */
mrb_value
mrb_GLib_GPrivate_set_notify(mrb_state* mrb, mrb_value self) {
  struct _GPrivate * native_self = mruby_unbox_struct _GPrivate(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_GDestroyNotify(ruby_field);

  GDestroyNotify native_field = TODO_mruby_unbox_GDestroyNotify(ruby_field);

  native_self->notify = native_field;

  return ruby_field;
}
#endif

#if BIND_GPrivate_future_FIELD_READER
/* get_future
 *
 * Return Type: gpointer [2]
 */
mrb_value
mrb_GLib_GPrivate_get_future(mrb_state* mrb, mrb_value self) {
  struct _GPrivate * native_self = mruby_unbox_struct _GPrivate(self);

  gpointer [2] native_field = native_self->future;

  mrb_value ruby_field = TODO_mruby_box_gpointer_[2](mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GPrivate_future_FIELD_WRITER
/* set_future
 *
 * Parameters:
 * - value: gpointer [2]
 */
mrb_value
mrb_GLib_GPrivate_set_future(mrb_state* mrb, mrb_value self) {
  struct _GPrivate * native_self = mruby_unbox_struct _GPrivate(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_gpointer_[2](ruby_field);

  gpointer [2] native_field = TODO_mruby_unbox_gpointer_[2](ruby_field);

  native_self->future = native_field;

  return ruby_field;
}
#endif


void mrb_GLib_GPrivate_init(mrb_state* mrb) {
  struct RClass* GPrivate_class = mrb_define_class_under(mrb, GLib_module(mrb), "GPrivate", mrb->object_class);
  MRB_SET_INSTANCE_TT(GPrivate_class, MRB_TT_DATA);

#if BIND_GPrivate_INITIALIZE
  mrb_define_method(mrb, GPrivate_class, "initialize", mrb_GLib_GPrivate_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GPrivate_class, "disown", mrb_GLib_GPrivate_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GPrivate_class, "belongs_to_ruby?", mrb_GLib_GPrivate_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GPrivate_p_FIELD_READER
  mrb_define_method(mrb, GPrivate_class, "p", mrb_GLib_GPrivate_get_p, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GPrivate_p_FIELD_WRITER
  mrb_define_method(mrb, GPrivate_class, "p=", mrb_GLib_GPrivate_set_p, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GPrivate_notify_FIELD_READER
  mrb_define_method(mrb, GPrivate_class, "notify", mrb_GLib_GPrivate_get_notify, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GPrivate_notify_FIELD_WRITER
  mrb_define_method(mrb, GPrivate_class, "notify=", mrb_GLib_GPrivate_set_notify, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GPrivate_future_FIELD_READER
  mrb_define_method(mrb, GPrivate_class, "future", mrb_GLib_GPrivate_get_future, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GPrivate_future_FIELD_WRITER
  mrb_define_method(mrb, GPrivate_class, "future=", mrb_GLib_GPrivate_set_future, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
