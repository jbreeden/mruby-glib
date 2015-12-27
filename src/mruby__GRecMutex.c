/*
 * struct _GRecMutex
 * Defined in file gthread.h @ line 52
 */

#include "mruby_GLib.h"

#if BIND_GRecMutex_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GRecMutex::initialize */
/* sha: defea6bb7d9eedfc13e9125e2022e8cfac2b18d57cf193c57825d53adfcd5884 */
#if BIND_GRecMutex_INITIALIZE
mrb_value
mrb_GLib_GRecMutex_initialize(mrb_state* mrb, mrb_value self) {
  struct _GRecMutex* native_object = (struct _GRecMutex*)calloc(1, sizeof(struct _GRecMutex));
  mruby_giftwrap__GRecMutex_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GRecMutex::initialize */
/* sha: fd6622d68847f5b63051bd4058d185d8d227e829af27bc076d44bc07f44b4f86 */
mrb_value
mrb_GLib_GRecMutex_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GRecMutex.disown only accepts objects of type GLib::GRecMutex");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GRecMutex::belongs_to_ruby */
/* sha: 7f3c5830fcd131b8fc1dcf021b0bdb4026b78baa2acec41cfd0b701cba5888ea */
mrb_value
mrb_GLib_GRecMutex_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GRecMutex.belongs_to_ruby only accepts objects of type GLib::GRecMutex");
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

/* MRUBY_BINDING: GRecMutex::p_reader */
/* sha: f76dc6eb8dc6b81d602e38caddde9a38d2200d8c5032a1842cc196e8a6d65b02 */
#if BIND_GRecMutex_p_FIELD_READER
/* get_p
 *
 * Return Type: gpointer
 */
mrb_value
mrb_GLib_GRecMutex_get_p(mrb_state* mrb, mrb_value self) {
  struct _GRecMutex * native_self = mruby_unbox__GRecMutex(self);

  gpointer native_p = native_self->p;

  mrb_value p = TODO_mruby_box_gpointer(mrb, native_p);

  return p;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GRecMutex::p_writer */
/* sha: 327a4515ed2a1548c8d92bd969c5ad77d74f09c41a1ad223f8bc3e118c7d6635 */
#if BIND_GRecMutex_p_FIELD_WRITER
/* set_p
 *
 * Parameters:
 * - value: gpointer
 */
mrb_value
mrb_GLib_GRecMutex_set_p(mrb_state* mrb, mrb_value self) {
  struct _GRecMutex * native_self = mruby_unbox__GRecMutex(self);
  mrb_value p;

  mrb_get_args(mrb, "o", &p);

  /* type checking */
  TODO_type_check_gpointer(p);

  gpointer native_p = TODO_mruby_unbox_gpointer(p);

  native_self->p = native_p;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GRecMutex::i_reader */
/* sha: 11161ae5fc15d02c8f6318220c42096b1ef11700a7f4263a89cdff01e086320b */
#if BIND_GRecMutex_i_FIELD_READER
/* get_i
 *
 * Return Type: guint [2]
 */
mrb_value
mrb_GLib_GRecMutex_get_i(mrb_state* mrb, mrb_value self) {
  struct _GRecMutex * native_self = mruby_unbox__GRecMutex(self);

  guint [2] native_i = native_self->i;

  mrb_value i = TODO_mruby_box_guint_[2](mrb, native_i);

  return i;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GRecMutex::i_writer */
/* sha: 47f292256648d45e0f992147fb2a61cfa168b93b273c665f1357b489dc925f78 */
#if BIND_GRecMutex_i_FIELD_WRITER
/* set_i
 *
 * Parameters:
 * - value: guint [2]
 */
mrb_value
mrb_GLib_GRecMutex_set_i(mrb_state* mrb, mrb_value self) {
  struct _GRecMutex * native_self = mruby_unbox__GRecMutex(self);
  mrb_value i;

  mrb_get_args(mrb, "o", &i);

  /* type checking */
  TODO_type_check_guint_[2](i);

  guint [2] native_i = TODO_mruby_unbox_guint_[2](i);

  native_self->i = native_i;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_GLib_GRecMutex_init(mrb_state* mrb) {
  struct RClass* GRecMutex_class = mrb_define_class_under(mrb, GLib_module(mrb), "GRecMutex", mrb->object_class);
  MRB_SET_INSTANCE_TT(GRecMutex_class, MRB_TT_DATA);

#if BIND_GRecMutex_INITIALIZE
  mrb_define_method(mrb, GRecMutex_class, "initialize", mrb_GLib_GRecMutex_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GRecMutex_class, "disown", mrb_GLib_GRecMutex_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GRecMutex_class, "belongs_to_ruby?", mrb_GLib_GRecMutex_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GRecMutex_p_FIELD_READER
  mrb_define_method(mrb, GRecMutex_class, "p", mrb_GLib_GRecMutex_get_p, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GRecMutex_p_FIELD_WRITER
  mrb_define_method(mrb, GRecMutex_class, "p=", mrb_GLib_GRecMutex_set_p, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GRecMutex_i_FIELD_READER
  mrb_define_method(mrb, GRecMutex_class, "i", mrb_GLib_GRecMutex_get_i, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GRecMutex_i_FIELD_WRITER
  mrb_define_method(mrb, GRecMutex_class, "i=", mrb_GLib_GRecMutex_set_i, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
