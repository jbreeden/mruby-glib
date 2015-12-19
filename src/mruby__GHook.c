/*
 * struct _GHook
 * Defined in file ghook.h @ line 38
 */

#include "mruby_GLib.h"

#if BIND_GHook_TYPE

/*
 * Class Methods
 */

#if BIND_GHook_INITIALIZE
mrb_value
mrb_GLib_GHook_initialize(mrb_state* mrb, mrb_value self) {
  struct _GHook* native_object = (struct _GHook*)calloc(1, sizeof(struct _GHook));
  mruby_gift_struct _GHook_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_GHook_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GHook.disown only accepts objects of type GLib::GHook");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_GHook_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GHook.belongs_to_ruby only accepts objects of type GLib::GHook");
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

#if BIND_GHook_data_FIELD_READER
/* get_data
 *
 * Return Type: gpointer
 */
mrb_value
mrb_GLib_GHook_get_data(mrb_state* mrb, mrb_value self) {
  struct _GHook * native_self = mruby_unbox__GHook(self);

  gpointer native_data = native_self->data;

  mrb_value data = TODO_mruby_box_gpointer(mrb, native_data);

  return data;
}
#endif

#if BIND_GHook_data_FIELD_WRITER
/* set_data
 *
 * Parameters:
 * - value: gpointer
 */
mrb_value
mrb_GLib_GHook_set_data(mrb_state* mrb, mrb_value self) {
  struct _GHook * native_self = mruby_unbox__GHook(self);
  mrb_value data;

  mrb_get_args(mrb, "o", &data);

  /* type checking */
  TODO_type_check_gpointer(data);

  gpointer native_data = TODO_mruby_unbox_gpointer(data);

  native_self->data = native_data;
  

  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GHook_next_FIELD_READER
/* get_next
 *
 * Return Type: GHook *
 */
mrb_value
mrb_GLib_GHook_get_next(mrb_state* mrb, mrb_value self) {
  struct _GHook * native_self = mruby_unbox__GHook(self);

  GHook * native_next = native_self->next;

  mrb_value next = (native_next == NULL ? mrb_nil_value() : mruby_box__GHook(mrb, native_next));

  return next;
}
#endif

#if BIND_GHook_next_FIELD_WRITER
/* set_next
 *
 * Parameters:
 * - value: GHook *
 */
mrb_value
mrb_GLib_GHook_set_next(mrb_state* mrb, mrb_value self) {
  struct _GHook * native_self = mruby_unbox__GHook(self);
  mrb_value next;

  mrb_get_args(mrb, "o", &next);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, next, GHook_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GHook expected");
    return mrb_nil_value();
  }

  GHook * native_next = (mrb_nil_p(next) ? NULL : mruby_unbox__GHook(next));

  native_self->next = native_next;
  

  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GHook_prev_FIELD_READER
/* get_prev
 *
 * Return Type: GHook *
 */
mrb_value
mrb_GLib_GHook_get_prev(mrb_state* mrb, mrb_value self) {
  struct _GHook * native_self = mruby_unbox__GHook(self);

  GHook * native_prev = native_self->prev;

  mrb_value prev = (native_prev == NULL ? mrb_nil_value() : mruby_box__GHook(mrb, native_prev));

  return prev;
}
#endif

#if BIND_GHook_prev_FIELD_WRITER
/* set_prev
 *
 * Parameters:
 * - value: GHook *
 */
mrb_value
mrb_GLib_GHook_set_prev(mrb_state* mrb, mrb_value self) {
  struct _GHook * native_self = mruby_unbox__GHook(self);
  mrb_value prev;

  mrb_get_args(mrb, "o", &prev);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, prev, GHook_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GHook expected");
    return mrb_nil_value();
  }

  GHook * native_prev = (mrb_nil_p(prev) ? NULL : mruby_unbox__GHook(prev));

  native_self->prev = native_prev;
  

  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GHook_ref_count_FIELD_READER
/* get_ref_count
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GHook_get_ref_count(mrb_state* mrb, mrb_value self) {
  struct _GHook * native_self = mruby_unbox__GHook(self);

  guint native_ref_count = native_self->ref_count;

  mrb_value ref_count = mrb_fixnum_value(native_ref_count);

  return ref_count;
}
#endif

#if BIND_GHook_ref_count_FIELD_WRITER
/* set_ref_count
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GHook_set_ref_count(mrb_state* mrb, mrb_value self) {
  struct _GHook * native_self = mruby_unbox__GHook(self);
  mrb_int native_ref_count;

  mrb_get_args(mrb, "i", &native_ref_count);

  native_self->ref_count = native_ref_count;
  

  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GHook_hook_id_FIELD_READER
/* get_hook_id
 *
 * Return Type: gulong
 */
mrb_value
mrb_GLib_GHook_get_hook_id(mrb_state* mrb, mrb_value self) {
  struct _GHook * native_self = mruby_unbox__GHook(self);

  gulong native_hook_id = native_self->hook_id;

  mrb_value hook_id = mrb_fixnum_value(native_hook_id);

  return hook_id;
}
#endif

#if BIND_GHook_hook_id_FIELD_WRITER
/* set_hook_id
 *
 * Parameters:
 * - value: gulong
 */
mrb_value
mrb_GLib_GHook_set_hook_id(mrb_state* mrb, mrb_value self) {
  struct _GHook * native_self = mruby_unbox__GHook(self);
  mrb_int native_hook_id;

  mrb_get_args(mrb, "i", &native_hook_id);

  native_self->hook_id = native_hook_id;
  

  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GHook_flags_FIELD_READER
/* get_flags
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GHook_get_flags(mrb_state* mrb, mrb_value self) {
  struct _GHook * native_self = mruby_unbox__GHook(self);

  guint native_flags = native_self->flags;

  mrb_value flags = mrb_fixnum_value(native_flags);

  return flags;
}
#endif

#if BIND_GHook_flags_FIELD_WRITER
/* set_flags
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GHook_set_flags(mrb_state* mrb, mrb_value self) {
  struct _GHook * native_self = mruby_unbox__GHook(self);
  mrb_int native_flags;

  mrb_get_args(mrb, "i", &native_flags);

  native_self->flags = native_flags;
  

  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GHook_func_FIELD_READER
/* get_func
 *
 * Return Type: gpointer
 */
mrb_value
mrb_GLib_GHook_get_func(mrb_state* mrb, mrb_value self) {
  struct _GHook * native_self = mruby_unbox__GHook(self);

  gpointer native_func = native_self->func;

  mrb_value func = TODO_mruby_box_gpointer(mrb, native_func);

  return func;
}
#endif

#if BIND_GHook_func_FIELD_WRITER
/* set_func
 *
 * Parameters:
 * - value: gpointer
 */
mrb_value
mrb_GLib_GHook_set_func(mrb_state* mrb, mrb_value self) {
  struct _GHook * native_self = mruby_unbox__GHook(self);
  mrb_value func;

  mrb_get_args(mrb, "o", &func);

  /* type checking */
  TODO_type_check_gpointer(func);

  gpointer native_func = TODO_mruby_unbox_gpointer(func);

  native_self->func = native_func;
  

  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GHook_destroy_FIELD_READER
/* get_destroy
 *
 * Return Type: GDestroyNotify
 */
mrb_value
mrb_GLib_GHook_get_destroy(mrb_state* mrb, mrb_value self) {
  struct _GHook * native_self = mruby_unbox__GHook(self);

  GDestroyNotify native_destroy = native_self->destroy;

  mrb_value destroy = TODO_mruby_box_GDestroyNotify(mrb, native_destroy);

  return destroy;
}
#endif

#if BIND_GHook_destroy_FIELD_WRITER
/* set_destroy
 *
 * Parameters:
 * - value: GDestroyNotify
 */
mrb_value
mrb_GLib_GHook_set_destroy(mrb_state* mrb, mrb_value self) {
  struct _GHook * native_self = mruby_unbox__GHook(self);
  mrb_value destroy;

  mrb_get_args(mrb, "o", &destroy);

  /* type checking */
  TODO_type_check_GDestroyNotify(destroy);

  GDestroyNotify native_destroy = TODO_mruby_unbox_GDestroyNotify(destroy);

  native_self->destroy = native_destroy;
  

  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif


void mrb_GLib_GHook_init(mrb_state* mrb) {
  struct RClass* GHook_class = mrb_define_class_under(mrb, GLib_module(mrb), "GHook", mrb->object_class);
  MRB_SET_INSTANCE_TT(GHook_class, MRB_TT_DATA);

#if BIND_GHook_INITIALIZE
  mrb_define_method(mrb, GHook_class, "initialize", mrb_GLib_GHook_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GHook_class, "disown", mrb_GLib_GHook_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GHook_class, "belongs_to_ruby?", mrb_GLib_GHook_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GHook_data_FIELD_READER
  mrb_define_method(mrb, GHook_class, "data", mrb_GLib_GHook_get_data, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GHook_data_FIELD_WRITER
  mrb_define_method(mrb, GHook_class, "data=", mrb_GLib_GHook_set_data, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GHook_next_FIELD_READER
  mrb_define_method(mrb, GHook_class, "next", mrb_GLib_GHook_get_next, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GHook_next_FIELD_WRITER
  mrb_define_method(mrb, GHook_class, "next=", mrb_GLib_GHook_set_next, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GHook_prev_FIELD_READER
  mrb_define_method(mrb, GHook_class, "prev", mrb_GLib_GHook_get_prev, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GHook_prev_FIELD_WRITER
  mrb_define_method(mrb, GHook_class, "prev=", mrb_GLib_GHook_set_prev, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GHook_ref_count_FIELD_READER
  mrb_define_method(mrb, GHook_class, "ref_count", mrb_GLib_GHook_get_ref_count, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GHook_ref_count_FIELD_WRITER
  mrb_define_method(mrb, GHook_class, "ref_count=", mrb_GLib_GHook_set_ref_count, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GHook_hook_id_FIELD_READER
  mrb_define_method(mrb, GHook_class, "hook_id", mrb_GLib_GHook_get_hook_id, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GHook_hook_id_FIELD_WRITER
  mrb_define_method(mrb, GHook_class, "hook_id=", mrb_GLib_GHook_set_hook_id, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GHook_flags_FIELD_READER
  mrb_define_method(mrb, GHook_class, "flags", mrb_GLib_GHook_get_flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GHook_flags_FIELD_WRITER
  mrb_define_method(mrb, GHook_class, "flags=", mrb_GLib_GHook_set_flags, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GHook_func_FIELD_READER
  mrb_define_method(mrb, GHook_class, "func", mrb_GLib_GHook_get_func, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GHook_func_FIELD_WRITER
  mrb_define_method(mrb, GHook_class, "func=", mrb_GLib_GHook_set_func, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GHook_destroy_FIELD_READER
  mrb_define_method(mrb, GHook_class, "destroy", mrb_GLib_GHook_get_destroy, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GHook_destroy_FIELD_WRITER
  mrb_define_method(mrb, GHook_class, "destroy=", mrb_GLib_GHook_set_destroy, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
