/*
 * struct _GSource
 * Defined in file gmain.h @ line 64
 */

#include "mruby_GLib.h"

#if BIND_GSource_TYPE

/*
 * Class Methods
 */

#if BIND_GSource_INITIALIZE
mrb_value
mrb_GLib_GSource_initialize(mrb_state* mrb, mrb_value self) {
  struct _GSource* native_object = (struct _GSource*)calloc(1, sizeof(struct _GSource));
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
  struct _GSource * native_self = mruby_unbox__GSource(self);

  gpointer native_callback_data = native_self->callback_data;

  mrb_value callback_data = TODO_mruby_box_gpointer(mrb, native_callback_data);

  return callback_data;
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
  struct _GSource * native_self = mruby_unbox__GSource(self);
  mrb_value callback_data;

  mrb_get_args(mrb, "o", &callback_data);

  /* type checking */
  TODO_type_check_gpointer(callback_data);

  gpointer native_callback_data = TODO_mruby_unbox_gpointer(callback_data);

  native_self->callback_data = native_callback_data;
  

  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GSource_callback_funcs_FIELD_READER
/* get_callback_funcs
 *
 * Return Type: GSourceCallbackFuncs *
 */
mrb_value
mrb_GLib_GSource_get_callback_funcs(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox__GSource(self);

  GSourceCallbackFuncs * native_callback_funcs = native_self->callback_funcs;

  mrb_value callback_funcs = (native_callback_funcs == NULL ? mrb_nil_value() : mruby_box__GSourceCallbackFuncs(mrb, native_callback_funcs));

  return callback_funcs;
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
  struct _GSource * native_self = mruby_unbox__GSource(self);
  mrb_value callback_funcs;

  mrb_get_args(mrb, "o", &callback_funcs);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, callback_funcs, GSourceCallbackFuncs_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GSourceCallbackFuncs expected");
    return mrb_nil_value();
  }

  GSourceCallbackFuncs * native_callback_funcs = (mrb_nil_p(callback_funcs) ? NULL : mruby_unbox__GSourceCallbackFuncs(callback_funcs));

  native_self->callback_funcs = native_callback_funcs;
  

  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GSource_source_funcs_FIELD_READER
/* get_source_funcs
 *
 * Return Type: const GSourceFuncs *
 */
mrb_value
mrb_GLib_GSource_get_source_funcs(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox__GSource(self);

  const GSourceFuncs * native_source_funcs = native_self->source_funcs;

  mrb_value source_funcs = (native_source_funcs == NULL ? mrb_nil_value() : mruby_box__GSourceFuncs(mrb, native_source_funcs));

  return source_funcs;
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
  struct _GSource * native_self = mruby_unbox__GSource(self);
  mrb_value source_funcs;

  mrb_get_args(mrb, "o", &source_funcs);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, source_funcs, GSourceFuncs_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GSourceFuncs expected");
    return mrb_nil_value();
  }

  const GSourceFuncs * native_source_funcs = (mrb_nil_p(source_funcs) ? NULL : mruby_unbox__GSourceFuncs(source_funcs));

  native_self->source_funcs = native_source_funcs;
  

  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GSource_ref_count_FIELD_READER
/* get_ref_count
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GSource_get_ref_count(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox__GSource(self);

  guint native_ref_count = native_self->ref_count;

  mrb_value ref_count = mrb_fixnum_value(native_ref_count);

  return ref_count;
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
  struct _GSource * native_self = mruby_unbox__GSource(self);
  mrb_int native_ref_count;

  mrb_get_args(mrb, "i", &native_ref_count);

  native_self->ref_count = native_ref_count;
  

  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GSource_context_FIELD_READER
/* get_context
 *
 * Return Type: GMainContext *
 */
mrb_value
mrb_GLib_GSource_get_context(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox__GSource(self);

  GMainContext * native_context = native_self->context;

  mrb_value context = (native_context == NULL ? mrb_nil_value() : mruby_box__GMainContext(mrb, native_context));

  return context;
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
  struct _GSource * native_self = mruby_unbox__GSource(self);
  mrb_value context;

  mrb_get_args(mrb, "o", &context);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, context, GMainContext_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GMainContext expected");
    return mrb_nil_value();
  }

  GMainContext * native_context = (mrb_nil_p(context) ? NULL : mruby_unbox__GMainContext(context));

  native_self->context = native_context;
  

  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GSource_priority_FIELD_READER
/* get_priority
 *
 * Return Type: gint
 */
mrb_value
mrb_GLib_GSource_get_priority(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox__GSource(self);

  gint native_priority = native_self->priority;

  mrb_value priority = mrb_fixnum_value(native_priority);

  return priority;
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
  struct _GSource * native_self = mruby_unbox__GSource(self);
  mrb_int native_priority;

  mrb_get_args(mrb, "i", &native_priority);

  native_self->priority = native_priority;
  

  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GSource_flags_FIELD_READER
/* get_flags
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GSource_get_flags(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox__GSource(self);

  guint native_flags = native_self->flags;

  mrb_value flags = mrb_fixnum_value(native_flags);

  return flags;
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
  struct _GSource * native_self = mruby_unbox__GSource(self);
  mrb_int native_flags;

  mrb_get_args(mrb, "i", &native_flags);

  native_self->flags = native_flags;
  

  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GSource_source_id_FIELD_READER
/* get_source_id
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GSource_get_source_id(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox__GSource(self);

  guint native_source_id = native_self->source_id;

  mrb_value source_id = mrb_fixnum_value(native_source_id);

  return source_id;
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
  struct _GSource * native_self = mruby_unbox__GSource(self);
  mrb_int native_source_id;

  mrb_get_args(mrb, "i", &native_source_id);

  native_self->source_id = native_source_id;
  

  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GSource_poll_fds_FIELD_READER
/* get_poll_fds
 *
 * Return Type: GSList *
 */
mrb_value
mrb_GLib_GSource_get_poll_fds(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox__GSource(self);

  GSList * native_poll_fds = native_self->poll_fds;

  mrb_value poll_fds = (native_poll_fds == NULL ? mrb_nil_value() : mruby_box__GSList(mrb, native_poll_fds));

  return poll_fds;
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
  struct _GSource * native_self = mruby_unbox__GSource(self);
  mrb_value poll_fds;

  mrb_get_args(mrb, "o", &poll_fds);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, poll_fds, GSList_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GSList expected");
    return mrb_nil_value();
  }

  GSList * native_poll_fds = (mrb_nil_p(poll_fds) ? NULL : mruby_unbox__GSList(poll_fds));

  native_self->poll_fds = native_poll_fds;
  

  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GSource_prev_FIELD_READER
/* get_prev
 *
 * Return Type: GSource *
 */
mrb_value
mrb_GLib_GSource_get_prev(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox__GSource(self);

  GSource * native_prev = native_self->prev;

  mrb_value prev = (native_prev == NULL ? mrb_nil_value() : mruby_box__GSource(mrb, native_prev));

  return prev;
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
  struct _GSource * native_self = mruby_unbox__GSource(self);
  mrb_value prev;

  mrb_get_args(mrb, "o", &prev);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, prev, GSource_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GSource expected");
    return mrb_nil_value();
  }

  GSource * native_prev = (mrb_nil_p(prev) ? NULL : mruby_unbox__GSource(prev));

  native_self->prev = native_prev;
  

  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GSource_next_FIELD_READER
/* get_next
 *
 * Return Type: GSource *
 */
mrb_value
mrb_GLib_GSource_get_next(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox__GSource(self);

  GSource * native_next = native_self->next;

  mrb_value next = (native_next == NULL ? mrb_nil_value() : mruby_box__GSource(mrb, native_next));

  return next;
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
  struct _GSource * native_self = mruby_unbox__GSource(self);
  mrb_value next;

  mrb_get_args(mrb, "o", &next);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, next, GSource_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GSource expected");
    return mrb_nil_value();
  }

  GSource * native_next = (mrb_nil_p(next) ? NULL : mruby_unbox__GSource(next));

  native_self->next = native_next;
  

  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GSource_name_FIELD_READER
/* get_name
 *
 * Return Type: char *
 */
mrb_value
mrb_GLib_GSource_get_name(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox__GSource(self);

  char * native_name = native_self->name;

  mrb_value name = mrb_str_new_cstr(mrb, native_name);

  return name;
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
  struct _GSource * native_self = mruby_unbox__GSource(self);
  char * name = NULL;

  mrb_get_args(mrb, "z!", &name);

  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_name = strdup(name);

  native_self->name = native_name;
  

  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GSource_priv_FIELD_READER
/* get_priv
 *
 * Return Type: GSourcePrivate *
 */
mrb_value
mrb_GLib_GSource_get_priv(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox__GSource(self);

  GSourcePrivate * native_priv = native_self->priv;

  mrb_value priv = (native_priv == NULL ? mrb_nil_value() : mruby_box__GSourcePrivate(mrb, native_priv));

  return priv;
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
  struct _GSource * native_self = mruby_unbox__GSource(self);
  mrb_value priv;

  mrb_get_args(mrb, "o", &priv);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, priv, GSourcePrivate_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GSourcePrivate expected");
    return mrb_nil_value();
  }

  GSourcePrivate * native_priv = (mrb_nil_p(priv) ? NULL : mruby_unbox__GSourcePrivate(priv));

  native_self->priv = native_priv;
  

  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
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
