/*
 * struct _GHookList
 * Defined in file ghook.h @ line 39
 */

#include "mruby_GLib.h"

#if BIND_GHookList_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GHookList::initialize */
/* sha: 3339c2cdde30c0d9990cebc0653f93e342c11e3c897d93b771bbdc19fe68ea1f */
#if BIND_GHookList_INITIALIZE
mrb_value
mrb_GLib_GHookList_initialize(mrb_state* mrb, mrb_value self) {
  struct _GHookList* native_object = (struct _GHookList*)calloc(1, sizeof(struct _GHookList));
  mruby_giftwrap__GHookList_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHookList::initialize */
/* sha: 36b16035ff9b5802228d69ed51b4f4c037a92ffba448e170c2d4607972042a12 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHookList::belongs_to_ruby */
/* sha: d43354a5a3e75eb2b0750b4b2497dd39f5459c80e9ca1252a51b85a7547efe27 */
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
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: GHookList::seq_id_reader */
/* sha: 96038dc008bc0cac1f5746d59576a7f709861fab25ed23e369d52d21566ceabf */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHookList::seq_id_writer */
/* sha: 58ddc025aee1cd92aad9a4b36343dbc90e846a038ec46e6f4b612eaca2278ddf */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHookList::hook_size_reader */
/* sha: 01fdd796cc405b1d33cb97582fa61d8e4dbc122a010ed8f531f120c7ee4559c2 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHookList::hook_size_writer */
/* sha: 250c766ac4ba3eebe4ed798ce130cc67bf17595fc19a180bd903c41363b7a0b7 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHookList::is_setup_reader */
/* sha: 3a9367952b8f001aa1801682d708bb17216a50775de7af851f8614cd11be6f8e */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHookList::is_setup_writer */
/* sha: fa5fc35d05cd3803279845b8f69144f60a532d2ca6867bb7cde786671de69657 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHookList::hooks_reader */
/* sha: a267127e4f7925c7eea58a61255595b3bb99bbbe374f8216dd99f36f484af499 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHookList::hooks_writer */
/* sha: ce5b21ce447504737de6d6a054a684de6a617a9681149f7717a597d116f8b8eb */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHookList::dummy3_reader */
/* sha: 8f7975feb10b697416a998aa8435cd71bb44dfb312aab670cc59763a2c401054 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHookList::dummy3_writer */
/* sha: 0f8134d11cb424021ab4d0f6a908f8b7598058c61480190b9ba0a1f29fa626cd */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHookList::finalize_hook_reader */
/* sha: 884429c2d6c3286033d9e114e92cb93a2559a8f62a79ce49265d4cc75adb2eb5 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHookList::finalize_hook_writer */
/* sha: 2adba6c917a519e94e6a2daab33f88e3bfb693dbdd0ec1ebb2b71c526b8e91d7 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHookList::dummy_reader */
/* sha: 232f522511d4cc3de7d368e1c7f3eef9844b17eaf07a2d33c3c270496bee32a0 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHookList::dummy_writer */
/* sha: 3a0865dbdccfa13a4df9adce7155a2f67098e02ca3e0070041340482a1fc3918 */
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
/* MRUBY_BINDING_END */


void mrb_GLib_GHookList_init(mrb_state* mrb) {
/* MRUBY_BINDING: GHookList::class_definition */
/* sha: ff3aec611f932866fc7eee07c89fbd9f1e7bac612bdd3356e9d95eba0894300d */
  struct RClass* GHookList_class = mrb_define_class_under(mrb, GLib_module(mrb), "GHookList", mrb->object_class);
  MRB_SET_INSTANCE_TT(GHookList_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHookList::class_method_definitions */
/* sha: 0cd61bb17871712eef3710d387a915ec6d6cd04f9b191eca894af296984ff37c */
#if BIND_GHookList_INITIALIZE
  mrb_define_method(mrb, GHookList_class, "initialize", mrb_GLib_GHookList_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GHookList_class, "disown", mrb_GLib_GHookList_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GHookList_class, "belongs_to_ruby?", mrb_GLib_GHookList_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHookList::attr_definitions */
/* sha: 67dbeea6169532c913d322e61164e60515898f39531779428e701672c27eac22 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHookList::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
