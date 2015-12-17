/*
 * struct _GRWLock
 * Defined in file gthread.h @ line 53
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_GLib.h"

#if BIND_GRWLock_TYPE

/*
 * Class Methods
 */

#if BIND_GRWLock_INITIALIZE
mrb_value
mrb_GLib_GRWLock_initialize(mrb_state* mrb, mrb_value self) {
  struct _GRWLock* native_object = (struct _GRWLock*)malloc(sizeof(struct _GRWLock));
  mruby_gift_struct _GRWLock_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_GRWLock_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GRWLock.disown only accepts objects of type GLib::GRWLock");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_GRWLock_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GRWLock.belongs_to_ruby only accepts objects of type GLib::GRWLock");
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

#if BIND_GRWLock_p_FIELD_READER
/* get_p
 *
 * Return Type: gpointer
 */
mrb_value
mrb_GLib_GRWLock_get_p(mrb_state* mrb, mrb_value self) {
  struct _GRWLock * native_self = mruby_unbox_struct _GRWLock(self);

  gpointer native_field = native_self->p;

  mrb_value ruby_field = TODO_mruby_box_gpointer(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GRWLock_p_FIELD_WRITER
/* set_p
 *
 * Parameters:
 * - value: gpointer
 */
mrb_value
mrb_GLib_GRWLock_set_p(mrb_state* mrb, mrb_value self) {
  struct _GRWLock * native_self = mruby_unbox_struct _GRWLock(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_gpointer(ruby_field);

  gpointer native_field = TODO_mruby_unbox_gpointer(ruby_field);

  native_self->p = native_field;

  return ruby_field;
}
#endif

#if BIND_GRWLock_i_FIELD_READER
/* get_i
 *
 * Return Type: guint [2]
 */
mrb_value
mrb_GLib_GRWLock_get_i(mrb_state* mrb, mrb_value self) {
  struct _GRWLock * native_self = mruby_unbox_struct _GRWLock(self);

  guint [2] native_field = native_self->i;

  mrb_value ruby_field = TODO_mruby_box_guint_[2](mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GRWLock_i_FIELD_WRITER
/* set_i
 *
 * Parameters:
 * - value: guint [2]
 */
mrb_value
mrb_GLib_GRWLock_set_i(mrb_state* mrb, mrb_value self) {
  struct _GRWLock * native_self = mruby_unbox_struct _GRWLock(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_guint_[2](ruby_field);

  guint [2] native_field = TODO_mruby_unbox_guint_[2](ruby_field);

  native_self->i = native_field;

  return ruby_field;
}
#endif


void mrb_GLib_GRWLock_init(mrb_state* mrb) {
  struct RClass* GRWLock_class = mrb_define_class_under(mrb, GLib_module(mrb), "GRWLock", mrb->object_class);
  MRB_SET_INSTANCE_TT(GRWLock_class, MRB_TT_DATA);

#if BIND_GRWLock_INITIALIZE
  mrb_define_method(mrb, GRWLock_class, "initialize", mrb_GLib_GRWLock_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GRWLock_class, "disown", mrb_GLib_GRWLock_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GRWLock_class, "belongs_to_ruby?", mrb_GLib_GRWLock_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GRWLock_p_FIELD_READER
  mrb_define_method(mrb, GRWLock_class, "p", mrb_GLib_GRWLock_get_p, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GRWLock_p_FIELD_WRITER
  mrb_define_method(mrb, GRWLock_class, "p=", mrb_GLib_GRWLock_set_p, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GRWLock_i_FIELD_READER
  mrb_define_method(mrb, GRWLock_class, "i", mrb_GLib_GRWLock_get_i, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GRWLock_i_FIELD_WRITER
  mrb_define_method(mrb, GRWLock_class, "i=", mrb_GLib_GRWLock_set_i, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
