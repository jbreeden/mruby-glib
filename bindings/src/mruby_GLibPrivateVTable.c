/*
 * GLibPrivateVTable
 * Defined in file glib-private.h @ line 45
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_GLib.h"

#if BIND_GLibPrivateVTable_TYPE

/*
 * Class Methods
 */

#if BIND_GLibPrivateVTable_INITIALIZE
mrb_value
mrb_GLib_GLibPrivateVTable_initialize(mrb_state* mrb, mrb_value self) {
  GLibPrivateVTable* native_object = (GLibPrivateVTable*)malloc(sizeof(GLibPrivateVTable));
  mruby_gift_GLibPrivateVTable_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_GLibPrivateVTable_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GLibPrivateVTable.disown only accepts objects of type GLib::GLibPrivateVTable");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_GLibPrivateVTable_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GLibPrivateVTable.belongs_to_ruby only accepts objects of type GLib::GLibPrivateVTable");
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

#if BIND_GLibPrivateVTable_g_wakeup_new_FIELD_READER
/* get_g_wakeup_new
 *
 * Return Type: GWakeup *(*)(void)
 */
mrb_value
mrb_GLib_GLibPrivateVTable_get_g_wakeup_new(mrb_state* mrb, mrb_value self) {
  GLibPrivateVTable * native_self = mruby_unbox_GLibPrivateVTable(self);

  GWakeup *(*)(void) native_field = native_self->g_wakeup_new;

  mrb_value ruby_field = TODO_mruby_box_GWakeup_PTR_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GLibPrivateVTable_g_wakeup_new_FIELD_WRITER
/* set_g_wakeup_new
 *
 * Parameters:
 * - value: GWakeup *(*)(void)
 */
mrb_value
mrb_GLib_GLibPrivateVTable_set_g_wakeup_new(mrb_state* mrb, mrb_value self) {
  GLibPrivateVTable * native_self = mruby_unbox_GLibPrivateVTable(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_GWakeup_PTR_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(ruby_field);

  GWakeup *(*native_field)(void) = TODO_mruby_unbox_GWakeup_PTR_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(ruby_field);

  native_self->g_wakeup_new = native_field;

  return ruby_field;
}
#endif

#if BIND_GLibPrivateVTable_g_wakeup_free_FIELD_READER
/* get_g_wakeup_free
 *
 * Return Type: void (*)(GWakeup *)
 */
mrb_value
mrb_GLib_GLibPrivateVTable_get_g_wakeup_free(mrb_state* mrb, mrb_value self) {
  GLibPrivateVTable * native_self = mruby_unbox_GLibPrivateVTable(self);

  void (*)(GWakeup *) native_field = native_self->g_wakeup_free;

  mrb_value ruby_field = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GWakeup_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GLibPrivateVTable_g_wakeup_free_FIELD_WRITER
/* set_g_wakeup_free
 *
 * Parameters:
 * - value: void (*)(GWakeup *)
 */
mrb_value
mrb_GLib_GLibPrivateVTable_set_g_wakeup_free(mrb_state* mrb, mrb_value self) {
  GLibPrivateVTable * native_self = mruby_unbox_GLibPrivateVTable(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GWakeup_PTR_RPAREN(ruby_field);

  void (*native_field)(GWakeup *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GWakeup_PTR_RPAREN(ruby_field);

  native_self->g_wakeup_free = native_field;

  return ruby_field;
}
#endif

#if BIND_GLibPrivateVTable_g_wakeup_get_pollfd_FIELD_READER
/* get_g_wakeup_get_pollfd
 *
 * Return Type: void (*)(GWakeup *, GPollFD *)
 */
mrb_value
mrb_GLib_GLibPrivateVTable_get_g_wakeup_get_pollfd(mrb_state* mrb, mrb_value self) {
  GLibPrivateVTable * native_self = mruby_unbox_GLibPrivateVTable(self);

  void (*)(GWakeup *, GPollFD *) native_field = native_self->g_wakeup_get_pollfd;

  mrb_value ruby_field = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GWakeup_PTR_COMMA_GPollFD_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GLibPrivateVTable_g_wakeup_get_pollfd_FIELD_WRITER
/* set_g_wakeup_get_pollfd
 *
 * Parameters:
 * - value: void (*)(GWakeup *, GPollFD *)
 */
mrb_value
mrb_GLib_GLibPrivateVTable_set_g_wakeup_get_pollfd(mrb_state* mrb, mrb_value self) {
  GLibPrivateVTable * native_self = mruby_unbox_GLibPrivateVTable(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GWakeup_PTR_COMMA_GPollFD_PTR_RPAREN(ruby_field);

  void (*native_field)(GWakeup *, GPollFD *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GWakeup_PTR_COMMA_GPollFD_PTR_RPAREN(ruby_field);

  native_self->g_wakeup_get_pollfd = native_field;

  return ruby_field;
}
#endif

#if BIND_GLibPrivateVTable_g_wakeup_signal_FIELD_READER
/* get_g_wakeup_signal
 *
 * Return Type: void (*)(GWakeup *)
 */
mrb_value
mrb_GLib_GLibPrivateVTable_get_g_wakeup_signal(mrb_state* mrb, mrb_value self) {
  GLibPrivateVTable * native_self = mruby_unbox_GLibPrivateVTable(self);

  void (*)(GWakeup *) native_field = native_self->g_wakeup_signal;

  mrb_value ruby_field = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GWakeup_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GLibPrivateVTable_g_wakeup_signal_FIELD_WRITER
/* set_g_wakeup_signal
 *
 * Parameters:
 * - value: void (*)(GWakeup *)
 */
mrb_value
mrb_GLib_GLibPrivateVTable_set_g_wakeup_signal(mrb_state* mrb, mrb_value self) {
  GLibPrivateVTable * native_self = mruby_unbox_GLibPrivateVTable(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GWakeup_PTR_RPAREN(ruby_field);

  void (*native_field)(GWakeup *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GWakeup_PTR_RPAREN(ruby_field);

  native_self->g_wakeup_signal = native_field;

  return ruby_field;
}
#endif

#if BIND_GLibPrivateVTable_g_wakeup_acknowledge_FIELD_READER
/* get_g_wakeup_acknowledge
 *
 * Return Type: void (*)(GWakeup *)
 */
mrb_value
mrb_GLib_GLibPrivateVTable_get_g_wakeup_acknowledge(mrb_state* mrb, mrb_value self) {
  GLibPrivateVTable * native_self = mruby_unbox_GLibPrivateVTable(self);

  void (*)(GWakeup *) native_field = native_self->g_wakeup_acknowledge;

  mrb_value ruby_field = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GWakeup_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GLibPrivateVTable_g_wakeup_acknowledge_FIELD_WRITER
/* set_g_wakeup_acknowledge
 *
 * Parameters:
 * - value: void (*)(GWakeup *)
 */
mrb_value
mrb_GLib_GLibPrivateVTable_set_g_wakeup_acknowledge(mrb_state* mrb, mrb_value self) {
  GLibPrivateVTable * native_self = mruby_unbox_GLibPrivateVTable(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GWakeup_PTR_RPAREN(ruby_field);

  void (*native_field)(GWakeup *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GWakeup_PTR_RPAREN(ruby_field);

  native_self->g_wakeup_acknowledge = native_field;

  return ruby_field;
}
#endif

#if BIND_GLibPrivateVTable_g_get_worker_context_FIELD_READER
/* get_g_get_worker_context
 *
 * Return Type: GMainContext *(*)(void)
 */
mrb_value
mrb_GLib_GLibPrivateVTable_get_g_get_worker_context(mrb_state* mrb, mrb_value self) {
  GLibPrivateVTable * native_self = mruby_unbox_GLibPrivateVTable(self);

  GMainContext *(*)(void) native_field = native_self->g_get_worker_context;

  mrb_value ruby_field = TODO_mruby_box_GMainContext_PTR_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GLibPrivateVTable_g_get_worker_context_FIELD_WRITER
/* set_g_get_worker_context
 *
 * Parameters:
 * - value: GMainContext *(*)(void)
 */
mrb_value
mrb_GLib_GLibPrivateVTable_set_g_get_worker_context(mrb_state* mrb, mrb_value self) {
  GLibPrivateVTable * native_self = mruby_unbox_GLibPrivateVTable(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_GMainContext_PTR_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(ruby_field);

  GMainContext *(*native_field)(void) = TODO_mruby_unbox_GMainContext_PTR_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(ruby_field);

  native_self->g_get_worker_context = native_field;

  return ruby_field;
}
#endif

#if BIND_GLibPrivateVTable_g_check_setuid_FIELD_READER
/* get_g_check_setuid
 *
 * Return Type: gboolean (*)(void)
 */
mrb_value
mrb_GLib_GLibPrivateVTable_get_g_check_setuid(mrb_state* mrb, mrb_value self) {
  GLibPrivateVTable * native_self = mruby_unbox_GLibPrivateVTable(self);

  gboolean (*)(void) native_field = native_self->g_check_setuid;

  mrb_value ruby_field = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GLibPrivateVTable_g_check_setuid_FIELD_WRITER
/* set_g_check_setuid
 *
 * Parameters:
 * - value: gboolean (*)(void)
 */
mrb_value
mrb_GLib_GLibPrivateVTable_set_g_check_setuid(mrb_state* mrb, mrb_value self) {
  GLibPrivateVTable * native_self = mruby_unbox_GLibPrivateVTable(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(ruby_field);

  gboolean (*native_field)(void) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(ruby_field);

  native_self->g_check_setuid = native_field;

  return ruby_field;
}
#endif

#if BIND_GLibPrivateVTable_g_main_context_new_with_next_id_FIELD_READER
/* get_g_main_context_new_with_next_id
 *
 * Return Type: GMainContext *(*)(guint)
 */
mrb_value
mrb_GLib_GLibPrivateVTable_get_g_main_context_new_with_next_id(mrb_state* mrb, mrb_value self) {
  GLibPrivateVTable * native_self = mruby_unbox_GLibPrivateVTable(self);

  GMainContext *(*)(guint) native_field = native_self->g_main_context_new_with_next_id;

  mrb_value ruby_field = TODO_mruby_box_GMainContext_PTR_LPAREN_PTR_RPAREN_LPAREN_guint_RPAREN(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GLibPrivateVTable_g_main_context_new_with_next_id_FIELD_WRITER
/* set_g_main_context_new_with_next_id
 *
 * Parameters:
 * - value: GMainContext *(*)(guint)
 */
mrb_value
mrb_GLib_GLibPrivateVTable_set_g_main_context_new_with_next_id(mrb_state* mrb, mrb_value self) {
  GLibPrivateVTable * native_self = mruby_unbox_GLibPrivateVTable(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_GMainContext_PTR_LPAREN_PTR_RPAREN_LPAREN_guint_RPAREN(ruby_field);

  GMainContext *(*native_field)(guint) = TODO_mruby_unbox_GMainContext_PTR_LPAREN_PTR_RPAREN_LPAREN_guint_RPAREN(ruby_field);

  native_self->g_main_context_new_with_next_id = native_field;

  return ruby_field;
}
#endif

#if BIND_GLibPrivateVTable_g_dir_open_with_errno_FIELD_READER
/* get_g_dir_open_with_errno
 *
 * Return Type: GDir *(*)(const gchar *, guint)
 */
mrb_value
mrb_GLib_GLibPrivateVTable_get_g_dir_open_with_errno(mrb_state* mrb, mrb_value self) {
  GLibPrivateVTable * native_self = mruby_unbox_GLibPrivateVTable(self);

  GDir *(*)(const gchar *, guint) native_field = native_self->g_dir_open_with_errno;

  mrb_value ruby_field = TODO_mruby_box_GDir_PTR_LPAREN_PTR_RPAREN_LPAREN_gchar_PTR_COMMA_guint_RPAREN(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GLibPrivateVTable_g_dir_open_with_errno_FIELD_WRITER
/* set_g_dir_open_with_errno
 *
 * Parameters:
 * - value: GDir *(*)(const gchar *, guint)
 */
mrb_value
mrb_GLib_GLibPrivateVTable_set_g_dir_open_with_errno(mrb_state* mrb, mrb_value self) {
  GLibPrivateVTable * native_self = mruby_unbox_GLibPrivateVTable(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_GDir_PTR_LPAREN_PTR_RPAREN_LPAREN_gchar_PTR_COMMA_guint_RPAREN(ruby_field);

  GDir *(*native_field)(const gchar *, guint) = TODO_mruby_unbox_GDir_PTR_LPAREN_PTR_RPAREN_LPAREN_gchar_PTR_COMMA_guint_RPAREN(ruby_field);

  native_self->g_dir_open_with_errno = native_field;

  return ruby_field;
}
#endif

#if BIND_GLibPrivateVTable_g_dir_new_from_dirp_FIELD_READER
/* get_g_dir_new_from_dirp
 *
 * Return Type: GDir *(*)(gpointer)
 */
mrb_value
mrb_GLib_GLibPrivateVTable_get_g_dir_new_from_dirp(mrb_state* mrb, mrb_value self) {
  GLibPrivateVTable * native_self = mruby_unbox_GLibPrivateVTable(self);

  GDir *(*)(gpointer) native_field = native_self->g_dir_new_from_dirp;

  mrb_value ruby_field = TODO_mruby_box_GDir_PTR_LPAREN_PTR_RPAREN_LPAREN_gpointer_RPAREN(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GLibPrivateVTable_g_dir_new_from_dirp_FIELD_WRITER
/* set_g_dir_new_from_dirp
 *
 * Parameters:
 * - value: GDir *(*)(gpointer)
 */
mrb_value
mrb_GLib_GLibPrivateVTable_set_g_dir_new_from_dirp(mrb_state* mrb, mrb_value self) {
  GLibPrivateVTable * native_self = mruby_unbox_GLibPrivateVTable(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_GDir_PTR_LPAREN_PTR_RPAREN_LPAREN_gpointer_RPAREN(ruby_field);

  GDir *(*native_field)(gpointer) = TODO_mruby_unbox_GDir_PTR_LPAREN_PTR_RPAREN_LPAREN_gpointer_RPAREN(ruby_field);

  native_self->g_dir_new_from_dirp = native_field;

  return ruby_field;
}
#endif

#if BIND_GLibPrivateVTable_glib_init_FIELD_READER
/* get_glib_init
 *
 * Return Type: void (*)(void)
 */
mrb_value
mrb_GLib_GLibPrivateVTable_get_glib_init(mrb_state* mrb, mrb_value self) {
  GLibPrivateVTable * native_self = mruby_unbox_GLibPrivateVTable(self);

  void (*)(void) native_field = native_self->glib_init;

  mrb_value ruby_field = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GLibPrivateVTable_glib_init_FIELD_WRITER
/* set_glib_init
 *
 * Parameters:
 * - value: void (*)(void)
 */
mrb_value
mrb_GLib_GLibPrivateVTable_set_glib_init(mrb_state* mrb, mrb_value self) {
  GLibPrivateVTable * native_self = mruby_unbox_GLibPrivateVTable(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(ruby_field);

  void (*native_field)(void) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(ruby_field);

  native_self->glib_init = native_field;

  return ruby_field;
}
#endif


void mrb_GLib_GLibPrivateVTable_init(mrb_state* mrb) {
  RClass* GLibPrivateVTable_class = mrb_define_class_under(mrb, GLib_module(mrb), "GLibPrivateVTable", mrb->object_class);
  MRB_SET_INSTANCE_TT(GLibPrivateVTable_class, MRB_TT_DATA);

#if BIND_GLibPrivateVTable_INITIALIZE
  mrb_define_method(mrb, GLibPrivateVTable_class, "initialize", mrb_GLib_GLibPrivateVTable_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GLibPrivateVTable_class, "disown", mrb_GLib_GLibPrivateVTable_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GLibPrivateVTable_class, "belongs_to_ruby?", mrb_GLib_GLibPrivateVTable_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GLibPrivateVTable_g_wakeup_new_FIELD_READER
  mrb_define_method(mrb, GLibPrivateVTable_class, "g_wakeup_new", mrb_GLib_GLibPrivateVTable_get_g_wakeup_new, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GLibPrivateVTable_g_wakeup_new_FIELD_WRITER
  mrb_define_method(mrb, GLibPrivateVTable_class, "g_wakeup_new=", mrb_GLib_GLibPrivateVTable_set_g_wakeup_new, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GLibPrivateVTable_g_wakeup_free_FIELD_READER
  mrb_define_method(mrb, GLibPrivateVTable_class, "g_wakeup_free", mrb_GLib_GLibPrivateVTable_get_g_wakeup_free, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GLibPrivateVTable_g_wakeup_free_FIELD_WRITER
  mrb_define_method(mrb, GLibPrivateVTable_class, "g_wakeup_free=", mrb_GLib_GLibPrivateVTable_set_g_wakeup_free, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GLibPrivateVTable_g_wakeup_get_pollfd_FIELD_READER
  mrb_define_method(mrb, GLibPrivateVTable_class, "g_wakeup_get_pollfd", mrb_GLib_GLibPrivateVTable_get_g_wakeup_get_pollfd, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GLibPrivateVTable_g_wakeup_get_pollfd_FIELD_WRITER
  mrb_define_method(mrb, GLibPrivateVTable_class, "g_wakeup_get_pollfd=", mrb_GLib_GLibPrivateVTable_set_g_wakeup_get_pollfd, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GLibPrivateVTable_g_wakeup_signal_FIELD_READER
  mrb_define_method(mrb, GLibPrivateVTable_class, "g_wakeup_signal", mrb_GLib_GLibPrivateVTable_get_g_wakeup_signal, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GLibPrivateVTable_g_wakeup_signal_FIELD_WRITER
  mrb_define_method(mrb, GLibPrivateVTable_class, "g_wakeup_signal=", mrb_GLib_GLibPrivateVTable_set_g_wakeup_signal, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GLibPrivateVTable_g_wakeup_acknowledge_FIELD_READER
  mrb_define_method(mrb, GLibPrivateVTable_class, "g_wakeup_acknowledge", mrb_GLib_GLibPrivateVTable_get_g_wakeup_acknowledge, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GLibPrivateVTable_g_wakeup_acknowledge_FIELD_WRITER
  mrb_define_method(mrb, GLibPrivateVTable_class, "g_wakeup_acknowledge=", mrb_GLib_GLibPrivateVTable_set_g_wakeup_acknowledge, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GLibPrivateVTable_g_get_worker_context_FIELD_READER
  mrb_define_method(mrb, GLibPrivateVTable_class, "g_get_worker_context", mrb_GLib_GLibPrivateVTable_get_g_get_worker_context, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GLibPrivateVTable_g_get_worker_context_FIELD_WRITER
  mrb_define_method(mrb, GLibPrivateVTable_class, "g_get_worker_context=", mrb_GLib_GLibPrivateVTable_set_g_get_worker_context, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GLibPrivateVTable_g_check_setuid_FIELD_READER
  mrb_define_method(mrb, GLibPrivateVTable_class, "g_check_setuid", mrb_GLib_GLibPrivateVTable_get_g_check_setuid, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GLibPrivateVTable_g_check_setuid_FIELD_WRITER
  mrb_define_method(mrb, GLibPrivateVTable_class, "g_check_setuid=", mrb_GLib_GLibPrivateVTable_set_g_check_setuid, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GLibPrivateVTable_g_main_context_new_with_next_id_FIELD_READER
  mrb_define_method(mrb, GLibPrivateVTable_class, "g_main_context_new_with_next_id", mrb_GLib_GLibPrivateVTable_get_g_main_context_new_with_next_id, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GLibPrivateVTable_g_main_context_new_with_next_id_FIELD_WRITER
  mrb_define_method(mrb, GLibPrivateVTable_class, "g_main_context_new_with_next_id=", mrb_GLib_GLibPrivateVTable_set_g_main_context_new_with_next_id, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GLibPrivateVTable_g_dir_open_with_errno_FIELD_READER
  mrb_define_method(mrb, GLibPrivateVTable_class, "g_dir_open_with_errno", mrb_GLib_GLibPrivateVTable_get_g_dir_open_with_errno, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GLibPrivateVTable_g_dir_open_with_errno_FIELD_WRITER
  mrb_define_method(mrb, GLibPrivateVTable_class, "g_dir_open_with_errno=", mrb_GLib_GLibPrivateVTable_set_g_dir_open_with_errno, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GLibPrivateVTable_g_dir_new_from_dirp_FIELD_READER
  mrb_define_method(mrb, GLibPrivateVTable_class, "g_dir_new_from_dirp", mrb_GLib_GLibPrivateVTable_get_g_dir_new_from_dirp, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GLibPrivateVTable_g_dir_new_from_dirp_FIELD_WRITER
  mrb_define_method(mrb, GLibPrivateVTable_class, "g_dir_new_from_dirp=", mrb_GLib_GLibPrivateVTable_set_g_dir_new_from_dirp, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GLibPrivateVTable_glib_init_FIELD_READER
  mrb_define_method(mrb, GLibPrivateVTable_class, "glib_init", mrb_GLib_GLibPrivateVTable_get_glib_init, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GLibPrivateVTable_glib_init_FIELD_WRITER
  mrb_define_method(mrb, GLibPrivateVTable_class, "glib_init=", mrb_GLib_GLibPrivateVTable_set_glib_init, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
