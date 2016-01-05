/*
 * struct _GHookList
 * Defined in file ghook.h @ line 39
 */

#include "mruby_GLib.h"

#if BIND_GHookList_TYPE

/*
 * Class Methods
 */

#if BIND_GHookList_INITIALIZE
mrb_value
mrb_GLib_GHookList_initialize(mrb_state* mrb, mrb_value self) {
  struct _GHookList* native_object = (struct _GHookList*)calloc(1, sizeof(struct _GHookList));
  mruby_giftwrap__GHookList_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_GHookList_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GHookList.disown only accepts objects of type GLib::GHookList");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_GHookList_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GHookList.belongs_to_ruby only accepts objects of type GLib::GHookList");
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

#if BIND_GHookList_seq_id_FIELD_READER
/* get_seq_id
 *
 * Return Type: gulong
 */
mrb_value
mrb_GLib_GHookList_get_seq_id(mrb_state* mrb, mrb_value self) {
  struct _GHookList * native_self = mruby_unbox__GHookList(self);

  gulong native_seq_id = native_self->seq_id;

  mrb_value seq_id = mrb_fixnum_value(native_seq_id);

  return seq_id;
}
#endif

#if BIND_GHookList_seq_id_FIELD_WRITER
/* set_seq_id
 *
 * Parameters:
 * - value: gulong
 */
mrb_value
mrb_GLib_GHookList_set_seq_id(mrb_state* mrb, mrb_value self) {
  struct _GHookList * native_self = mruby_unbox__GHookList(self);
  mrb_int native_seq_id;

  mrb_get_args(mrb, "i", &native_seq_id);

  native_self->seq_id = native_seq_id;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GHookList_hook_size_FIELD_READER
/* get_hook_size
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GHookList_get_hook_size(mrb_state* mrb, mrb_value self) {
  struct _GHookList * native_self = mruby_unbox__GHookList(self);

  guint native_hook_size = native_self->hook_size;

  mrb_value hook_size = mrb_fixnum_value(native_hook_size);

  return hook_size;
}
#endif

#if BIND_GHookList_hook_size_FIELD_WRITER
/* set_hook_size
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GHookList_set_hook_size(mrb_state* mrb, mrb_value self) {
  struct _GHookList * native_self = mruby_unbox__GHookList(self);
  mrb_int native_hook_size;

  mrb_get_args(mrb, "i", &native_hook_size);

  native_self->hook_size = native_hook_size;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GHookList_is_setup_FIELD_READER
/* get_is_setup
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GHookList_get_is_setup(mrb_state* mrb, mrb_value self) {
  struct _GHookList * native_self = mruby_unbox__GHookList(self);

  guint native_is_setup = native_self->is_setup;

  mrb_value is_setup = mrb_fixnum_value(native_is_setup);

  return is_setup;
}
#endif

#if BIND_GHookList_is_setup_FIELD_WRITER
/* set_is_setup
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GHookList_set_is_setup(mrb_state* mrb, mrb_value self) {
  struct _GHookList * native_self = mruby_unbox__GHookList(self);
  mrb_int native_is_setup;

  mrb_get_args(mrb, "i", &native_is_setup);

  native_self->is_setup = native_is_setup;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GHookList_hooks_FIELD_READER
/* get_hooks
 *
 * Return Type: GHook *
 */
mrb_value
mrb_GLib_GHookList_get_hooks(mrb_state* mrb, mrb_value self) {
  struct _GHookList * native_self = mruby_unbox__GHookList(self);

  GHook * native_hooks = native_self->hooks;

  mrb_value hooks = (native_hooks == NULL ? mrb_nil_value() : mruby_box__GHook(mrb, native_hooks));

  return hooks;
}
#endif

#if BIND_GHookList_hooks_FIELD_WRITER
/* set_hooks
 *
 * Parameters:
 * - value: GHook *
 */
mrb_value
mrb_GLib_GHookList_set_hooks(mrb_state* mrb, mrb_value self) {
  struct _GHookList * native_self = mruby_unbox__GHookList(self);
  mrb_value hooks;

  mrb_get_args(mrb, "o", &hooks);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, hooks, GHook_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GHook expected");
    return mrb_nil_value();
  }

  GHook * native_hooks = (mrb_nil_p(hooks) ? NULL : mruby_unbox__GHook(hooks));

  native_self->hooks = native_hooks;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GHookList_dummy3_FIELD_READER
/* get_dummy3
 *
 * Return Type: gpointer
 */
mrb_value
mrb_GLib_GHookList_get_dummy3(mrb_state* mrb, mrb_value self) {
  struct _GHookList * native_self = mruby_unbox__GHookList(self);

  gpointer native_dummy3 = native_self->dummy3;

  mrb_value dummy3 = TODO_mruby_box_gpointer(mrb, native_dummy3);

  return dummy3;
}
#endif

#if BIND_GHookList_dummy3_FIELD_WRITER
/* set_dummy3
 *
 * Parameters:
 * - value: gpointer
 */
mrb_value
mrb_GLib_GHookList_set_dummy3(mrb_state* mrb, mrb_value self) {
  struct _GHookList * native_self = mruby_unbox__GHookList(self);
  mrb_value dummy3;

  mrb_get_args(mrb, "o", &dummy3);

  /* type checking */
  TODO_type_check_gpointer(dummy3);

  gpointer native_dummy3 = TODO_mruby_unbox_gpointer(dummy3);

  native_self->dummy3 = native_dummy3;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GHookList_finalize_hook_FIELD_READER
/* get_finalize_hook
 *
 * Return Type: GHookFinalizeFunc
 */
mrb_value
mrb_GLib_GHookList_get_finalize_hook(mrb_state* mrb, mrb_value self) {
  struct _GHookList * native_self = mruby_unbox__GHookList(self);

  GHookFinalizeFunc native_finalize_hook = native_self->finalize_hook;

  mrb_value finalize_hook = TODO_mruby_box_GHookFinalizeFunc(mrb, native_finalize_hook);

  return finalize_hook;
}
#endif

#if BIND_GHookList_finalize_hook_FIELD_WRITER
/* set_finalize_hook
 *
 * Parameters:
 * - value: GHookFinalizeFunc
 */
mrb_value
mrb_GLib_GHookList_set_finalize_hook(mrb_state* mrb, mrb_value self) {
  struct _GHookList * native_self = mruby_unbox__GHookList(self);
  mrb_value finalize_hook;

  mrb_get_args(mrb, "o", &finalize_hook);

  /* type checking */
  TODO_type_check_GHookFinalizeFunc(finalize_hook);

  GHookFinalizeFunc native_finalize_hook = TODO_mruby_unbox_GHookFinalizeFunc(finalize_hook);

  native_self->finalize_hook = native_finalize_hook;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GHookList_dummy_FIELD_READER
/* get_dummy
 *
 * Return Type: gpointer [2]
 */
mrb_value
mrb_GLib_GHookList_get_dummy(mrb_state* mrb, mrb_value self) {
  struct _GHookList * native_self = mruby_unbox__GHookList(self);

  gpointer [2] native_dummy = native_self->dummy;

  mrb_value dummy = TODO_mruby_box_gpointer_[2](mrb, native_dummy);

  return dummy;
}
#endif

#if BIND_GHookList_dummy_FIELD_WRITER
/* set_dummy
 *
 * Parameters:
 * - value: gpointer [2]
 */
mrb_value
mrb_GLib_GHookList_set_dummy(mrb_state* mrb, mrb_value self) {
  struct _GHookList * native_self = mruby_unbox__GHookList(self);
  mrb_value dummy;

  mrb_get_args(mrb, "o", &dummy);

  /* type checking */
  TODO_type_check_gpointer_[2](dummy);

  gpointer [2] native_dummy = TODO_mruby_unbox_gpointer_[2](dummy);

  native_self->dummy = native_dummy;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif


void mrb_GLib_GHookList_init(mrb_state* mrb) {
  struct RClass* GHookList_class = mrb_define_class_under(mrb, GLib_module(mrb), "GHookList", mrb->object_class);
  MRB_SET_INSTANCE_TT(GHookList_class, MRB_TT_DATA);

#if BIND_GHookList_INITIALIZE
  mrb_define_method(mrb, GHookList_class, "initialize", mrb_GLib_GHookList_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GHookList_class, "disown", mrb_GLib_GHookList_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GHookList_class, "belongs_to_ruby?", mrb_GLib_GHookList_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GHookList_seq_id_FIELD_READER
  mrb_define_method(mrb, GHookList_class, "seq_id", mrb_GLib_GHookList_get_seq_id, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GHookList_seq_id_FIELD_WRITER
  mrb_define_method(mrb, GHookList_class, "seq_id=", mrb_GLib_GHookList_set_seq_id, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GHookList_hook_size_FIELD_READER
  mrb_define_method(mrb, GHookList_class, "hook_size", mrb_GLib_GHookList_get_hook_size, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GHookList_hook_size_FIELD_WRITER
  mrb_define_method(mrb, GHookList_class, "hook_size=", mrb_GLib_GHookList_set_hook_size, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GHookList_is_setup_FIELD_READER
  mrb_define_method(mrb, GHookList_class, "is_setup", mrb_GLib_GHookList_get_is_setup, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GHookList_is_setup_FIELD_WRITER
  mrb_define_method(mrb, GHookList_class, "is_setup=", mrb_GLib_GHookList_set_is_setup, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GHookList_hooks_FIELD_READER
  mrb_define_method(mrb, GHookList_class, "hooks", mrb_GLib_GHookList_get_hooks, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GHookList_hooks_FIELD_WRITER
  mrb_define_method(mrb, GHookList_class, "hooks=", mrb_GLib_GHookList_set_hooks, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GHookList_dummy3_FIELD_READER
  mrb_define_method(mrb, GHookList_class, "dummy3", mrb_GLib_GHookList_get_dummy3, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GHookList_dummy3_FIELD_WRITER
  mrb_define_method(mrb, GHookList_class, "dummy3=", mrb_GLib_GHookList_set_dummy3, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GHookList_finalize_hook_FIELD_READER
  mrb_define_method(mrb, GHookList_class, "finalize_hook", mrb_GLib_GHookList_get_finalize_hook, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GHookList_finalize_hook_FIELD_WRITER
  mrb_define_method(mrb, GHookList_class, "finalize_hook=", mrb_GLib_GHookList_set_finalize_hook, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GHookList_dummy_FIELD_READER
  mrb_define_method(mrb, GHookList_class, "dummy", mrb_GLib_GHookList_get_dummy, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GHookList_dummy_FIELD_WRITER
  mrb_define_method(mrb, GHookList_class, "dummy=", mrb_GLib_GHookList_set_dummy, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
