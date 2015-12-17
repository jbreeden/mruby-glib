/*
 * struct _GRealThread
 * Defined in file gthreadprivate.h @ line 27
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_GLib.h"

#if BIND_GRealThread_TYPE

/*
 * Class Methods
 */

#if BIND_GRealThread_INITIALIZE
mrb_value
mrb_GLib_GRealThread_initialize(mrb_state* mrb, mrb_value self) {
  struct _GRealThread* native_object = (struct _GRealThread*)malloc(sizeof(struct _GRealThread));
  mruby_gift_struct _GRealThread_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_GRealThread_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GRealThread.disown only accepts objects of type GLib::GRealThread");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_GRealThread_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GRealThread.belongs_to_ruby only accepts objects of type GLib::GRealThread");
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

#if BIND_GRealThread_thread_FIELD_READER
/* get_thread
 *
 * Return Type: GThread
 */
mrb_value
mrb_GLib_GRealThread_get_thread(mrb_state* mrb, mrb_value self) {
  struct _GRealThread * native_self = mruby_unbox_struct _GRealThread(self);

  GThread native_field = native_self->thread;

  mrb_value ruby_field = TODO_mruby_box_GThread(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GRealThread_thread_FIELD_WRITER
/* set_thread
 *
 * Parameters:
 * - value: GThread
 */
mrb_value
mrb_GLib_GRealThread_set_thread(mrb_state* mrb, mrb_value self) {
  struct _GRealThread * native_self = mruby_unbox_struct _GRealThread(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_GThread(ruby_field);

  GThread native_field = TODO_mruby_unbox_GThread(ruby_field);

  native_self->thread = native_field;

  return ruby_field;
}
#endif

#if BIND_GRealThread_ref_count_FIELD_READER
/* get_ref_count
 *
 * Return Type: gint
 */
mrb_value
mrb_GLib_GRealThread_get_ref_count(mrb_state* mrb, mrb_value self) {
  struct _GRealThread * native_self = mruby_unbox_struct _GRealThread(self);

  gint native_field = native_self->ref_count;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GRealThread_ref_count_FIELD_WRITER
/* set_ref_count
 *
 * Parameters:
 * - value: gint
 */
mrb_value
mrb_GLib_GRealThread_set_ref_count(mrb_state* mrb, mrb_value self) {
  struct _GRealThread * native_self = mruby_unbox_struct _GRealThread(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->ref_count = native_field;

  return ruby_field;
}
#endif

#if BIND_GRealThread_ours_FIELD_READER
/* get_ours
 *
 * Return Type: gboolean
 */
mrb_value
mrb_GLib_GRealThread_get_ours(mrb_state* mrb, mrb_value self) {
  struct _GRealThread * native_self = mruby_unbox_struct _GRealThread(self);

  gboolean native_field = native_self->ours;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GRealThread_ours_FIELD_WRITER
/* set_ours
 *
 * Parameters:
 * - value: gboolean
 */
mrb_value
mrb_GLib_GRealThread_set_ours(mrb_state* mrb, mrb_value self) {
  struct _GRealThread * native_self = mruby_unbox_struct _GRealThread(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->ours = native_field;

  return ruby_field;
}
#endif

#if BIND_GRealThread_name_FIELD_READER
/* get_name
 *
 * Return Type: gchar *
 */
mrb_value
mrb_GLib_GRealThread_get_name(mrb_state* mrb, mrb_value self) {
  struct _GRealThread * native_self = mruby_unbox_struct _GRealThread(self);

  gchar * native_field = native_self->name;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GRealThread_name_FIELD_WRITER
/* set_name
 *
 * Parameters:
 * - value: gchar *
 */
mrb_value
mrb_GLib_GRealThread_set_name(mrb_state* mrb, mrb_value self) {
  struct _GRealThread * native_self = mruby_unbox_struct _GRealThread(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_field = strdup(mrb_string_value_cstr(mrb, &ruby_field));

  native_self->name = native_field;

  return ruby_field;
}
#endif

#if BIND_GRealThread_retval_FIELD_READER
/* get_retval
 *
 * Return Type: gpointer
 */
mrb_value
mrb_GLib_GRealThread_get_retval(mrb_state* mrb, mrb_value self) {
  struct _GRealThread * native_self = mruby_unbox_struct _GRealThread(self);

  gpointer native_field = native_self->retval;

  mrb_value ruby_field = TODO_mruby_box_gpointer(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GRealThread_retval_FIELD_WRITER
/* set_retval
 *
 * Parameters:
 * - value: gpointer
 */
mrb_value
mrb_GLib_GRealThread_set_retval(mrb_state* mrb, mrb_value self) {
  struct _GRealThread * native_self = mruby_unbox_struct _GRealThread(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_gpointer(ruby_field);

  gpointer native_field = TODO_mruby_unbox_gpointer(ruby_field);

  native_self->retval = native_field;

  return ruby_field;
}
#endif


void mrb_GLib_GRealThread_init(mrb_state* mrb) {
  RClass* GRealThread_class = mrb_define_class_under(mrb, GLib_module(mrb), "GRealThread", mrb->object_class);
  MRB_SET_INSTANCE_TT(GRealThread_class, MRB_TT_DATA);

#if BIND_GRealThread_INITIALIZE
  mrb_define_method(mrb, GRealThread_class, "initialize", mrb_GLib_GRealThread_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GRealThread_class, "disown", mrb_GLib_GRealThread_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GRealThread_class, "belongs_to_ruby?", mrb_GLib_GRealThread_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GRealThread_thread_FIELD_READER
  mrb_define_method(mrb, GRealThread_class, "thread", mrb_GLib_GRealThread_get_thread, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GRealThread_thread_FIELD_WRITER
  mrb_define_method(mrb, GRealThread_class, "thread=", mrb_GLib_GRealThread_set_thread, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GRealThread_ref_count_FIELD_READER
  mrb_define_method(mrb, GRealThread_class, "ref_count", mrb_GLib_GRealThread_get_ref_count, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GRealThread_ref_count_FIELD_WRITER
  mrb_define_method(mrb, GRealThread_class, "ref_count=", mrb_GLib_GRealThread_set_ref_count, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GRealThread_ours_FIELD_READER
  mrb_define_method(mrb, GRealThread_class, "ours", mrb_GLib_GRealThread_get_ours, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GRealThread_ours_FIELD_WRITER
  mrb_define_method(mrb, GRealThread_class, "ours=", mrb_GLib_GRealThread_set_ours, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GRealThread_name_FIELD_READER
  mrb_define_method(mrb, GRealThread_class, "name", mrb_GLib_GRealThread_get_name, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GRealThread_name_FIELD_WRITER
  mrb_define_method(mrb, GRealThread_class, "name=", mrb_GLib_GRealThread_set_name, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GRealThread_retval_FIELD_READER
  mrb_define_method(mrb, GRealThread_class, "retval", mrb_GLib_GRealThread_get_retval, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GRealThread_retval_FIELD_WRITER
  mrb_define_method(mrb, GRealThread_class, "retval=", mrb_GLib_GRealThread_set_retval, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
