/*
 * struct _GHook
 * Defined in file ghook.h @ line 38
 */

#include "mruby_GLib.h"

#if BIND_GHook_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GHook::initialize */
/* sha: 3ab441e598913f1132bd035d05b3a5a65e31cadb0ee74129bbb556f00f972204 */
#if BIND_GHook_INITIALIZE
mrb_value
mrb_GLib_GHook_initialize(mrb_state* mrb, mrb_value self) {
  struct _GHook* native_object = (struct _GHook*)calloc(1, sizeof(struct _GHook));
  mruby_giftwrap__GHook_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHook::initialize */
/* sha: b0b9043b7c5f0b56b8bc413b990565b22a43a4cad3c92baed11c073feca3cbca */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHook::belongs_to_ruby */
/* sha: 9e1c6a4aa37579fe0ca1b1783549449e8a0041c4725ba16c0f050665a6dc4a81 */
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
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: GHook::data_reader */
/* sha: db50bf49f8b106960bebab17224acb5c2d00b5cfd1fa9654dfb89f4a8c740dd7 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHook::data_writer */
/* sha: 18ce19115108d93f5bed9275f4963f3a2a81083461919daa2228df6cba05fec3 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHook::next_reader */
/* sha: 34858b21ea98ddddf26977c093f6d61bbed2d6b716e719cee466e2649330e109 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHook::next_writer */
/* sha: bd4d4298b7de1a0af00e245c89fe0d8f2ff853c809d169d00686fb8b8cb1e3ed */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHook::prev_reader */
/* sha: 40a28667874961366e9c3343fc83796ee31b5e56a10ffbe626dc2391dc13b859 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHook::prev_writer */
/* sha: 0ae57e8b778c82ac18006e922e8df1722156d4ff8442a707682e5ca30d1ec671 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHook::ref_count_reader */
/* sha: c7f7b66541f6556b92ebe62e750062d9348a9a384dd7c8118e81e1a7326ef89e */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHook::ref_count_writer */
/* sha: dfd02913cfa086b1cf98d6e2c0f16cb186adab024cf8ff07ae2414a0bee4e5db */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHook::hook_id_reader */
/* sha: e37d982247342eb910cacf652cd8d2cf443660d6f4ac22de7e8a5603c8865093 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHook::hook_id_writer */
/* sha: 60f2ae023e5e00c744fe53f8578e0d60c629fdf35a38c75bc84b7730cc68ef74 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHook::flags_reader */
/* sha: 5ae979ce133809f5086e062faeacb0e4e12318c678d21998ebc1afbae1721cb6 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHook::flags_writer */
/* sha: a5f7b75851c16ac3353a1f469495bfed736e4317c10af9eb682456c9a1cb31f0 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHook::func_reader */
/* sha: c5a098d27bb4cf27419bc7a8c5d5de0ff6f4cbfce5af33b30b0705d013342ee5 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHook::func_writer */
/* sha: f011b07633a0b550750b22e85a9b759ec00f92a7d0cc8bd0b122fde8c229b79d */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHook::destroy_reader */
/* sha: 9613fbe99f68202c252f1bb3de8c8efdd84eb113724c1a2b1f18301510fe0baa */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHook::destroy_writer */
/* sha: 60796a99dd9b32429206fcef224f8ed0cc201b20ac29d00e138ddeb3bc1cb203 */
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
/* MRUBY_BINDING_END */


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
