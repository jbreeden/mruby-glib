/*
 * struct _GHook
 * Defined in file ghook.h @ line 38
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_GLib.h"

#if BIND_GHook_TYPE

/*
 * Class Methods
 */

#if BIND_GHook_INITIALIZE
mrb_value
mrb_GLib_GHook_initialize(mrb_state* mrb, mrb_value self) {
  struct _GHook* native_object = (struct _GHook*)malloc(sizeof(struct _GHook));
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
  struct _GHook * native_self = mruby_unbox_struct _GHook(self);

  gpointer native_field = native_self->data;

  mrb_value ruby_field = TODO_mruby_box_gpointer(mrb, native_field);

  return ruby_field;
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
  struct _GHook * native_self = mruby_unbox_struct _GHook(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_gpointer(ruby_field);

  gpointer native_field = TODO_mruby_unbox_gpointer(ruby_field);

  native_self->data = native_field;

  return ruby_field;
}
#endif

#if BIND_GHook_next_FIELD_READER
/* get_next
 *
 * Return Type: GHook *
 */
mrb_value
mrb_GLib_GHook_get_next(mrb_state* mrb, mrb_value self) {
  struct _GHook * native_self = mruby_unbox_struct _GHook(self);

  GHook * native_field = native_self->next;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box__GHook(mrb, native_field));

  return ruby_field;
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
  struct _GHook * native_self = mruby_unbox_struct _GHook(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, GHook_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GHook expected");
    return mrb_nil_value();
  }

  GHook * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox__GHook(ruby_field));

  native_self->next = native_field;

  return ruby_field;
}
#endif

#if BIND_GHook_prev_FIELD_READER
/* get_prev
 *
 * Return Type: GHook *
 */
mrb_value
mrb_GLib_GHook_get_prev(mrb_state* mrb, mrb_value self) {
  struct _GHook * native_self = mruby_unbox_struct _GHook(self);

  GHook * native_field = native_self->prev;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box__GHook(mrb, native_field));

  return ruby_field;
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
  struct _GHook * native_self = mruby_unbox_struct _GHook(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, GHook_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GHook expected");
    return mrb_nil_value();
  }

  GHook * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox__GHook(ruby_field));

  native_self->prev = native_field;

  return ruby_field;
}
#endif

#if BIND_GHook_ref_count_FIELD_READER
/* get_ref_count
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GHook_get_ref_count(mrb_state* mrb, mrb_value self) {
  struct _GHook * native_self = mruby_unbox_struct _GHook(self);

  guint native_field = native_self->ref_count;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
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
  struct _GHook * native_self = mruby_unbox_struct _GHook(self);
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

#if BIND_GHook_hook_id_FIELD_READER
/* get_hook_id
 *
 * Return Type: gulong
 */
mrb_value
mrb_GLib_GHook_get_hook_id(mrb_state* mrb, mrb_value self) {
  struct _GHook * native_self = mruby_unbox_struct _GHook(self);

  gulong native_field = native_self->hook_id;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
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
  struct _GHook * native_self = mruby_unbox_struct _GHook(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned long native_field = (unsigned long)ruby_field;

  native_self->hook_id = native_field;

  return ruby_field;
}
#endif

#if BIND_GHook_flags_FIELD_READER
/* get_flags
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GHook_get_flags(mrb_state* mrb, mrb_value self) {
  struct _GHook * native_self = mruby_unbox_struct _GHook(self);

  guint native_field = native_self->flags;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
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
  struct _GHook * native_self = mruby_unbox_struct _GHook(self);
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

#if BIND_GHook_func_FIELD_READER
/* get_func
 *
 * Return Type: gpointer
 */
mrb_value
mrb_GLib_GHook_get_func(mrb_state* mrb, mrb_value self) {
  struct _GHook * native_self = mruby_unbox_struct _GHook(self);

  gpointer native_field = native_self->func;

  mrb_value ruby_field = TODO_mruby_box_gpointer(mrb, native_field);

  return ruby_field;
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
  struct _GHook * native_self = mruby_unbox_struct _GHook(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_gpointer(ruby_field);

  gpointer native_field = TODO_mruby_unbox_gpointer(ruby_field);

  native_self->func = native_field;

  return ruby_field;
}
#endif

#if BIND_GHook_destroy_FIELD_READER
/* get_destroy
 *
 * Return Type: GDestroyNotify
 */
mrb_value
mrb_GLib_GHook_get_destroy(mrb_state* mrb, mrb_value self) {
  struct _GHook * native_self = mruby_unbox_struct _GHook(self);

  GDestroyNotify native_field = native_self->destroy;

  mrb_value ruby_field = TODO_mruby_box_GDestroyNotify(mrb, native_field);

  return ruby_field;
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
  struct _GHook * native_self = mruby_unbox_struct _GHook(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_GDestroyNotify(ruby_field);

  GDestroyNotify native_field = TODO_mruby_unbox_GDestroyNotify(ruby_field);

  native_self->destroy = native_field;

  return ruby_field;
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
