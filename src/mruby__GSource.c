/*
 * struct _GSource
 * Defined in file gmain.h @ line 64
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_GLib.h"

#if BIND_GSource_TYPE

/*
 * Class Methods
 */

#if BIND_GSource_INITIALIZE
mrb_value
mrb_GLib_GSource_initialize(mrb_state* mrb, mrb_value self) {
  struct _GSource* native_object = (struct _GSource*)malloc(sizeof(struct _GSource));
  mruby_gift_struct _GSource_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_GSource_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSource.disown only accepts objects of type GLib::GSource");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_GSource_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSource.belongs_to_ruby only accepts objects of type GLib::GSource");
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

#if BIND_GSource_callback_data_FIELD_READER
/* get_callback_data
 *
 * Return Type: gpointer
 */
mrb_value
mrb_GLib_GSource_get_callback_data(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox_struct _GSource(self);

  gpointer native_field = native_self->callback_data;

  mrb_value ruby_field = TODO_mruby_box_gpointer(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GSource_callback_data_FIELD_WRITER
/* set_callback_data
 *
 * Parameters:
 * - value: gpointer
 */
mrb_value
mrb_GLib_GSource_set_callback_data(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox_struct _GSource(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_gpointer(ruby_field);

  gpointer native_field = TODO_mruby_unbox_gpointer(ruby_field);

  native_self->callback_data = native_field;

  return ruby_field;
}
#endif

#if BIND_GSource_callback_funcs_FIELD_READER
/* get_callback_funcs
 *
 * Return Type: GSourceCallbackFuncs *
 */
mrb_value
mrb_GLib_GSource_get_callback_funcs(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox_struct _GSource(self);

  GSourceCallbackFuncs * native_field = native_self->callback_funcs;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box__GSourceCallbackFuncs(mrb, native_field));

  return ruby_field;
}
#endif

#if BIND_GSource_callback_funcs_FIELD_WRITER
/* set_callback_funcs
 *
 * Parameters:
 * - value: GSourceCallbackFuncs *
 */
mrb_value
mrb_GLib_GSource_set_callback_funcs(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox_struct _GSource(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, GSourceCallbackFuncs_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GSourceCallbackFuncs expected");
    return mrb_nil_value();
  }

  GSourceCallbackFuncs * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox__GSourceCallbackFuncs(ruby_field));

  native_self->callback_funcs = native_field;

  return ruby_field;
}
#endif

#if BIND_GSource_source_funcs_FIELD_READER
/* get_source_funcs
 *
 * Return Type: const GSourceFuncs *
 */
mrb_value
mrb_GLib_GSource_get_source_funcs(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox_struct _GSource(self);

  const GSourceFuncs * native_field = native_self->source_funcs;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box__GSourceFuncs(mrb, native_field));

  return ruby_field;
}
#endif

#if BIND_GSource_source_funcs_FIELD_WRITER
/* set_source_funcs
 *
 * Parameters:
 * - value: const GSourceFuncs *
 */
mrb_value
mrb_GLib_GSource_set_source_funcs(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox_struct _GSource(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, GSourceFuncs_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GSourceFuncs expected");
    return mrb_nil_value();
  }

  const GSourceFuncs * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox__GSourceFuncs(ruby_field));

  native_self->source_funcs = native_field;

  return ruby_field;
}
#endif

#if BIND_GSource_ref_count_FIELD_READER
/* get_ref_count
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GSource_get_ref_count(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox_struct _GSource(self);

  guint native_field = native_self->ref_count;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GSource_ref_count_FIELD_WRITER
/* set_ref_count
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GSource_set_ref_count(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox_struct _GSource(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->ref_count = native_field;

  return ruby_field;
}
#endif

#if BIND_GSource_context_FIELD_READER
/* get_context
 *
 * Return Type: GMainContext *
 */
mrb_value
mrb_GLib_GSource_get_context(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox_struct _GSource(self);

  GMainContext * native_field = native_self->context;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box__GMainContext(mrb, native_field));

  return ruby_field;
}
#endif

#if BIND_GSource_context_FIELD_WRITER
/* set_context
 *
 * Parameters:
 * - value: GMainContext *
 */
mrb_value
mrb_GLib_GSource_set_context(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox_struct _GSource(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, GMainContext_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GMainContext expected");
    return mrb_nil_value();
  }

  GMainContext * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox__GMainContext(ruby_field));

  native_self->context = native_field;

  return ruby_field;
}
#endif

#if BIND_GSource_priority_FIELD_READER
/* get_priority
 *
 * Return Type: gint
 */
mrb_value
mrb_GLib_GSource_get_priority(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox_struct _GSource(self);

  gint native_field = native_self->priority;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GSource_priority_FIELD_WRITER
/* set_priority
 *
 * Parameters:
 * - value: gint
 */
mrb_value
mrb_GLib_GSource_set_priority(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox_struct _GSource(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = (int)ruby_field;

  native_self->priority = native_field;

  return ruby_field;
}
#endif

#if BIND_GSource_flags_FIELD_READER
/* get_flags
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GSource_get_flags(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox_struct _GSource(self);

  guint native_field = native_self->flags;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GSource_flags_FIELD_WRITER
/* set_flags
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GSource_set_flags(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox_struct _GSource(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->flags = native_field;

  return ruby_field;
}
#endif

#if BIND_GSource_source_id_FIELD_READER
/* get_source_id
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GSource_get_source_id(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox_struct _GSource(self);

  guint native_field = native_self->source_id;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GSource_source_id_FIELD_WRITER
/* set_source_id
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GSource_set_source_id(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox_struct _GSource(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->source_id = native_field;

  return ruby_field;
}
#endif

#if BIND_GSource_poll_fds_FIELD_READER
/* get_poll_fds
 *
 * Return Type: GSList *
 */
mrb_value
mrb_GLib_GSource_get_poll_fds(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox_struct _GSource(self);

  GSList * native_field = native_self->poll_fds;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box__GSList(mrb, native_field));

  return ruby_field;
}
#endif

#if BIND_GSource_poll_fds_FIELD_WRITER
/* set_poll_fds
 *
 * Parameters:
 * - value: GSList *
 */
mrb_value
mrb_GLib_GSource_set_poll_fds(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox_struct _GSource(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, GSList_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GSList expected");
    return mrb_nil_value();
  }

  GSList * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox__GSList(ruby_field));

  native_self->poll_fds = native_field;

  return ruby_field;
}
#endif

#if BIND_GSource_prev_FIELD_READER
/* get_prev
 *
 * Return Type: GSource *
 */
mrb_value
mrb_GLib_GSource_get_prev(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox_struct _GSource(self);

  GSource * native_field = native_self->prev;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box__GSource(mrb, native_field));

  return ruby_field;
}
#endif

#if BIND_GSource_prev_FIELD_WRITER
/* set_prev
 *
 * Parameters:
 * - value: GSource *
 */
mrb_value
mrb_GLib_GSource_set_prev(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox_struct _GSource(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, GSource_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GSource expected");
    return mrb_nil_value();
  }

  GSource * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox__GSource(ruby_field));

  native_self->prev = native_field;

  return ruby_field;
}
#endif

#if BIND_GSource_next_FIELD_READER
/* get_next
 *
 * Return Type: GSource *
 */
mrb_value
mrb_GLib_GSource_get_next(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox_struct _GSource(self);

  GSource * native_field = native_self->next;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box__GSource(mrb, native_field));

  return ruby_field;
}
#endif

#if BIND_GSource_next_FIELD_WRITER
/* set_next
 *
 * Parameters:
 * - value: GSource *
 */
mrb_value
mrb_GLib_GSource_set_next(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox_struct _GSource(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, GSource_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GSource expected");
    return mrb_nil_value();
  }

  GSource * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox__GSource(ruby_field));

  native_self->next = native_field;

  return ruby_field;
}
#endif

#if BIND_GSource_name_FIELD_READER
/* get_name
 *
 * Return Type: char *
 */
mrb_value
mrb_GLib_GSource_get_name(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox_struct _GSource(self);

  char * native_field = native_self->name;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GSource_name_FIELD_WRITER
/* set_name
 *
 * Parameters:
 * - value: char *
 */
mrb_value
mrb_GLib_GSource_set_name(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox_struct _GSource(self);
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
  char * native_field = strdup(ruby_field);

  native_self->name = native_field;

  return ruby_field;
}
#endif

#if BIND_GSource_priv_FIELD_READER
/* get_priv
 *
 * Return Type: GSourcePrivate *
 */
mrb_value
mrb_GLib_GSource_get_priv(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox_struct _GSource(self);

  GSourcePrivate * native_field = native_self->priv;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box__GSourcePrivate(mrb, native_field));

  return ruby_field;
}
#endif

#if BIND_GSource_priv_FIELD_WRITER
/* set_priv
 *
 * Parameters:
 * - value: GSourcePrivate *
 */
mrb_value
mrb_GLib_GSource_set_priv(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox_struct _GSource(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, GSourcePrivate_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GSourcePrivate expected");
    return mrb_nil_value();
  }

  GSourcePrivate * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox__GSourcePrivate(ruby_field));

  native_self->priv = native_field;

  return ruby_field;
}
#endif


void mrb_GLib_GSource_init(mrb_state* mrb) {
  struct RClass* GSource_class = mrb_define_class_under(mrb, GLib_module(mrb), "GSource", mrb->object_class);
  MRB_SET_INSTANCE_TT(GSource_class, MRB_TT_DATA);

#if BIND_GSource_INITIALIZE
  mrb_define_method(mrb, GSource_class, "initialize", mrb_GLib_GSource_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GSource_class, "disown", mrb_GLib_GSource_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GSource_class, "belongs_to_ruby?", mrb_GLib_GSource_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GSource_callback_data_FIELD_READER
  mrb_define_method(mrb, GSource_class, "callback_data", mrb_GLib_GSource_get_callback_data, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSource_callback_data_FIELD_WRITER
  mrb_define_method(mrb, GSource_class, "callback_data=", mrb_GLib_GSource_set_callback_data, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSource_callback_funcs_FIELD_READER
  mrb_define_method(mrb, GSource_class, "callback_funcs", mrb_GLib_GSource_get_callback_funcs, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSource_callback_funcs_FIELD_WRITER
  mrb_define_method(mrb, GSource_class, "callback_funcs=", mrb_GLib_GSource_set_callback_funcs, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSource_source_funcs_FIELD_READER
  mrb_define_method(mrb, GSource_class, "source_funcs", mrb_GLib_GSource_get_source_funcs, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSource_source_funcs_FIELD_WRITER
  mrb_define_method(mrb, GSource_class, "source_funcs=", mrb_GLib_GSource_set_source_funcs, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSource_ref_count_FIELD_READER
  mrb_define_method(mrb, GSource_class, "ref_count", mrb_GLib_GSource_get_ref_count, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSource_ref_count_FIELD_WRITER
  mrb_define_method(mrb, GSource_class, "ref_count=", mrb_GLib_GSource_set_ref_count, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSource_context_FIELD_READER
  mrb_define_method(mrb, GSource_class, "context", mrb_GLib_GSource_get_context, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSource_context_FIELD_WRITER
  mrb_define_method(mrb, GSource_class, "context=", mrb_GLib_GSource_set_context, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSource_priority_FIELD_READER
  mrb_define_method(mrb, GSource_class, "priority", mrb_GLib_GSource_get_priority, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSource_priority_FIELD_WRITER
  mrb_define_method(mrb, GSource_class, "priority=", mrb_GLib_GSource_set_priority, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSource_flags_FIELD_READER
  mrb_define_method(mrb, GSource_class, "flags", mrb_GLib_GSource_get_flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSource_flags_FIELD_WRITER
  mrb_define_method(mrb, GSource_class, "flags=", mrb_GLib_GSource_set_flags, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSource_source_id_FIELD_READER
  mrb_define_method(mrb, GSource_class, "source_id", mrb_GLib_GSource_get_source_id, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSource_source_id_FIELD_WRITER
  mrb_define_method(mrb, GSource_class, "source_id=", mrb_GLib_GSource_set_source_id, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSource_poll_fds_FIELD_READER
  mrb_define_method(mrb, GSource_class, "poll_fds", mrb_GLib_GSource_get_poll_fds, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSource_poll_fds_FIELD_WRITER
  mrb_define_method(mrb, GSource_class, "poll_fds=", mrb_GLib_GSource_set_poll_fds, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSource_prev_FIELD_READER
  mrb_define_method(mrb, GSource_class, "prev", mrb_GLib_GSource_get_prev, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSource_prev_FIELD_WRITER
  mrb_define_method(mrb, GSource_class, "prev=", mrb_GLib_GSource_set_prev, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSource_next_FIELD_READER
  mrb_define_method(mrb, GSource_class, "next", mrb_GLib_GSource_get_next, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSource_next_FIELD_WRITER
  mrb_define_method(mrb, GSource_class, "next=", mrb_GLib_GSource_set_next, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSource_name_FIELD_READER
  mrb_define_method(mrb, GSource_class, "name", mrb_GLib_GSource_get_name, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSource_name_FIELD_WRITER
  mrb_define_method(mrb, GSource_class, "name=", mrb_GLib_GSource_set_name, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSource_priv_FIELD_READER
  mrb_define_method(mrb, GSource_class, "priv", mrb_GLib_GSource_get_priv, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSource_priv_FIELD_WRITER
  mrb_define_method(mrb, GSource_class, "priv=", mrb_GLib_GSource_set_priv, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
