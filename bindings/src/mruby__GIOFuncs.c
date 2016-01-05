/*
 * struct _GIOFuncs
 * Defined in file giochannel.h @ line 42
 */

#include "mruby_GLib.h"

#if BIND_GIOFuncs_TYPE

/*
 * Class Methods
 */

#if BIND_GIOFuncs_INITIALIZE
mrb_value
mrb_GLib_GIOFuncs_initialize(mrb_state* mrb, mrb_value self) {
  struct _GIOFuncs* native_object = (struct _GIOFuncs*)calloc(1, sizeof(struct _GIOFuncs));
  mruby_giftwrap__GIOFuncs_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_GIOFuncs_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GIOFuncs.disown only accepts objects of type GLib::GIOFuncs");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_GIOFuncs_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GIOFuncs.belongs_to_ruby only accepts objects of type GLib::GIOFuncs");
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

#if BIND_GIOFuncs_io_read_FIELD_READER
/* get_io_read
 *
 * Return Type: GIOStatus (*)(GIOChannel *, gchar *, gsize, gsize *, GError **)
 */
mrb_value
mrb_GLib_GIOFuncs_get_io_read(mrb_state* mrb, mrb_value self) {
  struct _GIOFuncs * native_self = mruby_unbox__GIOFuncs(self);

  GIOStatus (*)(GIOChannel *, gchar *, gsize, gsize *, GError **) native_io_read = native_self->io_read;

  mrb_value io_read = TODO_mruby_box_GIOStatus_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_COMMA_gchar_PTR_COMMA_gsizeCOMMA_gsize_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_io_read);

  return io_read;
}
#endif

#if BIND_GIOFuncs_io_read_FIELD_WRITER
/* set_io_read
 *
 * Parameters:
 * - value: GIOStatus (*)(GIOChannel *, gchar *, gsize, gsize *, GError **)
 */
mrb_value
mrb_GLib_GIOFuncs_set_io_read(mrb_state* mrb, mrb_value self) {
  struct _GIOFuncs * native_self = mruby_unbox__GIOFuncs(self);
  mrb_value io_read;

  mrb_get_args(mrb, "o", &io_read);

  /* type checking */
  TODO_type_check_GIOStatus_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_COMMA_gchar_PTR_COMMA_gsizeCOMMA_gsize_PTR_COMMA_GError_PTR_PTR_RPAREN(io_read);

  GIOStatus (*native_io_read)(GIOChannel *, gchar *, gsize, gsize *, GError **) = TODO_mruby_unbox_GIOStatus_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_COMMA_gchar_PTR_COMMA_gsizeCOMMA_gsize_PTR_COMMA_GError_PTR_PTR_RPAREN(io_read);

  native_self->io_read = native_io_read;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GIOFuncs_io_write_FIELD_READER
/* get_io_write
 *
 * Return Type: GIOStatus (*)(GIOChannel *, const gchar *, gsize, gsize *, GError **)
 */
mrb_value
mrb_GLib_GIOFuncs_get_io_write(mrb_state* mrb, mrb_value self) {
  struct _GIOFuncs * native_self = mruby_unbox__GIOFuncs(self);

  GIOStatus (*)(GIOChannel *, const gchar *, gsize, gsize *, GError **) native_io_write = native_self->io_write;

  mrb_value io_write = TODO_mruby_box_GIOStatus_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_COMMAgchar_PTR_COMMA_gsizeCOMMA_gsize_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_io_write);

  return io_write;
}
#endif

#if BIND_GIOFuncs_io_write_FIELD_WRITER
/* set_io_write
 *
 * Parameters:
 * - value: GIOStatus (*)(GIOChannel *, const gchar *, gsize, gsize *, GError **)
 */
mrb_value
mrb_GLib_GIOFuncs_set_io_write(mrb_state* mrb, mrb_value self) {
  struct _GIOFuncs * native_self = mruby_unbox__GIOFuncs(self);
  mrb_value io_write;

  mrb_get_args(mrb, "o", &io_write);

  /* type checking */
  TODO_type_check_GIOStatus_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_COMMAgchar_PTR_COMMA_gsizeCOMMA_gsize_PTR_COMMA_GError_PTR_PTR_RPAREN(io_write);

  GIOStatus (*native_io_write)(GIOChannel *, const gchar *, gsize, gsize *, GError **) = TODO_mruby_unbox_GIOStatus_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_COMMAgchar_PTR_COMMA_gsizeCOMMA_gsize_PTR_COMMA_GError_PTR_PTR_RPAREN(io_write);

  native_self->io_write = native_io_write;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GIOFuncs_io_seek_FIELD_READER
/* get_io_seek
 *
 * Return Type: GIOStatus (*)(GIOChannel *, gint64, GSeekType, GError **)
 */
mrb_value
mrb_GLib_GIOFuncs_get_io_seek(mrb_state* mrb, mrb_value self) {
  struct _GIOFuncs * native_self = mruby_unbox__GIOFuncs(self);

  GIOStatus (*)(GIOChannel *, gint64, GSeekType, GError **) native_io_seek = native_self->io_seek;

  mrb_value io_seek = TODO_mruby_box_GIOStatus_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_COMMA_gint64COMMA_GSeekTypeCOMMA_GError_PTR_PTR_RPAREN(mrb, native_io_seek);

  return io_seek;
}
#endif

#if BIND_GIOFuncs_io_seek_FIELD_WRITER
/* set_io_seek
 *
 * Parameters:
 * - value: GIOStatus (*)(GIOChannel *, gint64, GSeekType, GError **)
 */
mrb_value
mrb_GLib_GIOFuncs_set_io_seek(mrb_state* mrb, mrb_value self) {
  struct _GIOFuncs * native_self = mruby_unbox__GIOFuncs(self);
  mrb_value io_seek;

  mrb_get_args(mrb, "o", &io_seek);

  /* type checking */
  TODO_type_check_GIOStatus_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_COMMA_gint64COMMA_GSeekTypeCOMMA_GError_PTR_PTR_RPAREN(io_seek);

  GIOStatus (*native_io_seek)(GIOChannel *, gint64, GSeekType, GError **) = TODO_mruby_unbox_GIOStatus_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_COMMA_gint64COMMA_GSeekTypeCOMMA_GError_PTR_PTR_RPAREN(io_seek);

  native_self->io_seek = native_io_seek;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GIOFuncs_io_close_FIELD_READER
/* get_io_close
 *
 * Return Type: GIOStatus (*)(GIOChannel *, GError **)
 */
mrb_value
mrb_GLib_GIOFuncs_get_io_close(mrb_state* mrb, mrb_value self) {
  struct _GIOFuncs * native_self = mruby_unbox__GIOFuncs(self);

  GIOStatus (*)(GIOChannel *, GError **) native_io_close = native_self->io_close;

  mrb_value io_close = TODO_mruby_box_GIOStatus_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_io_close);

  return io_close;
}
#endif

#if BIND_GIOFuncs_io_close_FIELD_WRITER
/* set_io_close
 *
 * Parameters:
 * - value: GIOStatus (*)(GIOChannel *, GError **)
 */
mrb_value
mrb_GLib_GIOFuncs_set_io_close(mrb_state* mrb, mrb_value self) {
  struct _GIOFuncs * native_self = mruby_unbox__GIOFuncs(self);
  mrb_value io_close;

  mrb_get_args(mrb, "o", &io_close);

  /* type checking */
  TODO_type_check_GIOStatus_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_COMMA_GError_PTR_PTR_RPAREN(io_close);

  GIOStatus (*native_io_close)(GIOChannel *, GError **) = TODO_mruby_unbox_GIOStatus_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_COMMA_GError_PTR_PTR_RPAREN(io_close);

  native_self->io_close = native_io_close;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GIOFuncs_io_create_watch_FIELD_READER
/* get_io_create_watch
 *
 * Return Type: GSource *(*)(GIOChannel *, GIOCondition)
 */
mrb_value
mrb_GLib_GIOFuncs_get_io_create_watch(mrb_state* mrb, mrb_value self) {
  struct _GIOFuncs * native_self = mruby_unbox__GIOFuncs(self);

  GSource *(*)(GIOChannel *, GIOCondition) native_io_create_watch = native_self->io_create_watch;

  mrb_value io_create_watch = TODO_mruby_box_GSource_PTR_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_COMMA_GIOCondition_RPAREN(mrb, native_io_create_watch);

  return io_create_watch;
}
#endif

#if BIND_GIOFuncs_io_create_watch_FIELD_WRITER
/* set_io_create_watch
 *
 * Parameters:
 * - value: GSource *(*)(GIOChannel *, GIOCondition)
 */
mrb_value
mrb_GLib_GIOFuncs_set_io_create_watch(mrb_state* mrb, mrb_value self) {
  struct _GIOFuncs * native_self = mruby_unbox__GIOFuncs(self);
  mrb_value io_create_watch;

  mrb_get_args(mrb, "o", &io_create_watch);

  /* type checking */
  TODO_type_check_GSource_PTR_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_COMMA_GIOCondition_RPAREN(io_create_watch);

  GSource *(*native_io_create_watch)(GIOChannel *, GIOCondition) = TODO_mruby_unbox_GSource_PTR_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_COMMA_GIOCondition_RPAREN(io_create_watch);

  native_self->io_create_watch = native_io_create_watch;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GIOFuncs_io_free_FIELD_READER
/* get_io_free
 *
 * Return Type: void (*)(GIOChannel *)
 */
mrb_value
mrb_GLib_GIOFuncs_get_io_free(mrb_state* mrb, mrb_value self) {
  struct _GIOFuncs * native_self = mruby_unbox__GIOFuncs(self);

  void (*)(GIOChannel *) native_io_free = native_self->io_free;

  mrb_value io_free = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_RPAREN(mrb, native_io_free);

  return io_free;
}
#endif

#if BIND_GIOFuncs_io_free_FIELD_WRITER
/* set_io_free
 *
 * Parameters:
 * - value: void (*)(GIOChannel *)
 */
mrb_value
mrb_GLib_GIOFuncs_set_io_free(mrb_state* mrb, mrb_value self) {
  struct _GIOFuncs * native_self = mruby_unbox__GIOFuncs(self);
  mrb_value io_free;

  mrb_get_args(mrb, "o", &io_free);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_RPAREN(io_free);

  void (*native_io_free)(GIOChannel *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_RPAREN(io_free);

  native_self->io_free = native_io_free;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GIOFuncs_io_set_flags_FIELD_READER
/* get_io_set_flags
 *
 * Return Type: GIOStatus (*)(GIOChannel *, GIOFlags, GError **)
 */
mrb_value
mrb_GLib_GIOFuncs_get_io_set_flags(mrb_state* mrb, mrb_value self) {
  struct _GIOFuncs * native_self = mruby_unbox__GIOFuncs(self);

  GIOStatus (*)(GIOChannel *, GIOFlags, GError **) native_io_set_flags = native_self->io_set_flags;

  mrb_value io_set_flags = TODO_mruby_box_GIOStatus_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_COMMA_GIOFlagsCOMMA_GError_PTR_PTR_RPAREN(mrb, native_io_set_flags);

  return io_set_flags;
}
#endif

#if BIND_GIOFuncs_io_set_flags_FIELD_WRITER
/* set_io_set_flags
 *
 * Parameters:
 * - value: GIOStatus (*)(GIOChannel *, GIOFlags, GError **)
 */
mrb_value
mrb_GLib_GIOFuncs_set_io_set_flags(mrb_state* mrb, mrb_value self) {
  struct _GIOFuncs * native_self = mruby_unbox__GIOFuncs(self);
  mrb_value io_set_flags;

  mrb_get_args(mrb, "o", &io_set_flags);

  /* type checking */
  TODO_type_check_GIOStatus_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_COMMA_GIOFlagsCOMMA_GError_PTR_PTR_RPAREN(io_set_flags);

  GIOStatus (*native_io_set_flags)(GIOChannel *, GIOFlags, GError **) = TODO_mruby_unbox_GIOStatus_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_COMMA_GIOFlagsCOMMA_GError_PTR_PTR_RPAREN(io_set_flags);

  native_self->io_set_flags = native_io_set_flags;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GIOFuncs_io_get_flags_FIELD_READER
/* get_io_get_flags
 *
 * Return Type: GIOFlags (*)(GIOChannel *)
 */
mrb_value
mrb_GLib_GIOFuncs_get_io_get_flags(mrb_state* mrb, mrb_value self) {
  struct _GIOFuncs * native_self = mruby_unbox__GIOFuncs(self);

  GIOFlags (*)(GIOChannel *) native_io_get_flags = native_self->io_get_flags;

  mrb_value io_get_flags = TODO_mruby_box_GIOFlags_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_RPAREN(mrb, native_io_get_flags);

  return io_get_flags;
}
#endif

#if BIND_GIOFuncs_io_get_flags_FIELD_WRITER
/* set_io_get_flags
 *
 * Parameters:
 * - value: GIOFlags (*)(GIOChannel *)
 */
mrb_value
mrb_GLib_GIOFuncs_set_io_get_flags(mrb_state* mrb, mrb_value self) {
  struct _GIOFuncs * native_self = mruby_unbox__GIOFuncs(self);
  mrb_value io_get_flags;

  mrb_get_args(mrb, "o", &io_get_flags);

  /* type checking */
  TODO_type_check_GIOFlags_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_RPAREN(io_get_flags);

  GIOFlags (*native_io_get_flags)(GIOChannel *) = TODO_mruby_unbox_GIOFlags_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_RPAREN(io_get_flags);

  native_self->io_get_flags = native_io_get_flags;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif


void mrb_GLib_GIOFuncs_init(mrb_state* mrb) {
  struct RClass* GIOFuncs_class = mrb_define_class_under(mrb, GLib_module(mrb), "GIOFuncs", mrb->object_class);
  MRB_SET_INSTANCE_TT(GIOFuncs_class, MRB_TT_DATA);

#if BIND_GIOFuncs_INITIALIZE
  mrb_define_method(mrb, GIOFuncs_class, "initialize", mrb_GLib_GIOFuncs_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GIOFuncs_class, "disown", mrb_GLib_GIOFuncs_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GIOFuncs_class, "belongs_to_ruby?", mrb_GLib_GIOFuncs_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GIOFuncs_io_read_FIELD_READER
  mrb_define_method(mrb, GIOFuncs_class, "io_read", mrb_GLib_GIOFuncs_get_io_read, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOFuncs_io_read_FIELD_WRITER
  mrb_define_method(mrb, GIOFuncs_class, "io_read=", mrb_GLib_GIOFuncs_set_io_read, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOFuncs_io_write_FIELD_READER
  mrb_define_method(mrb, GIOFuncs_class, "io_write", mrb_GLib_GIOFuncs_get_io_write, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOFuncs_io_write_FIELD_WRITER
  mrb_define_method(mrb, GIOFuncs_class, "io_write=", mrb_GLib_GIOFuncs_set_io_write, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOFuncs_io_seek_FIELD_READER
  mrb_define_method(mrb, GIOFuncs_class, "io_seek", mrb_GLib_GIOFuncs_get_io_seek, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOFuncs_io_seek_FIELD_WRITER
  mrb_define_method(mrb, GIOFuncs_class, "io_seek=", mrb_GLib_GIOFuncs_set_io_seek, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOFuncs_io_close_FIELD_READER
  mrb_define_method(mrb, GIOFuncs_class, "io_close", mrb_GLib_GIOFuncs_get_io_close, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOFuncs_io_close_FIELD_WRITER
  mrb_define_method(mrb, GIOFuncs_class, "io_close=", mrb_GLib_GIOFuncs_set_io_close, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOFuncs_io_create_watch_FIELD_READER
  mrb_define_method(mrb, GIOFuncs_class, "io_create_watch", mrb_GLib_GIOFuncs_get_io_create_watch, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOFuncs_io_create_watch_FIELD_WRITER
  mrb_define_method(mrb, GIOFuncs_class, "io_create_watch=", mrb_GLib_GIOFuncs_set_io_create_watch, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOFuncs_io_free_FIELD_READER
  mrb_define_method(mrb, GIOFuncs_class, "io_free", mrb_GLib_GIOFuncs_get_io_free, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOFuncs_io_free_FIELD_WRITER
  mrb_define_method(mrb, GIOFuncs_class, "io_free=", mrb_GLib_GIOFuncs_set_io_free, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOFuncs_io_set_flags_FIELD_READER
  mrb_define_method(mrb, GIOFuncs_class, "io_set_flags", mrb_GLib_GIOFuncs_get_io_set_flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOFuncs_io_set_flags_FIELD_WRITER
  mrb_define_method(mrb, GIOFuncs_class, "io_set_flags=", mrb_GLib_GIOFuncs_set_io_set_flags, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOFuncs_io_get_flags_FIELD_READER
  mrb_define_method(mrb, GIOFuncs_class, "io_get_flags", mrb_GLib_GIOFuncs_get_io_get_flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOFuncs_io_get_flags_FIELD_WRITER
  mrb_define_method(mrb, GIOFuncs_class, "io_get_flags=", mrb_GLib_GIOFuncs_set_io_get_flags, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
