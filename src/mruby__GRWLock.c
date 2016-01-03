/*
 * struct _GRWLock
 * Defined in file gthread.h @ line 53
 */

#include "mruby_GLib.h"

#if BIND_GRWLock_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GRWLock::initialize */
/* sha: d641b9f6559c91fc402f71a2735ad6d72b6db66d4a2e8b1e12dc082a5a745abf */
#if BIND_GRWLock_INITIALIZE
mrb_value
mrb_GLib_GRWLock_initialize(mrb_state* mrb, mrb_value self) {
  struct _GRWLock* native_object = (struct _GRWLock*)calloc(1, sizeof(struct _GRWLock));
  mruby_giftwrap__GRWLock_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GRWLock::initialize */
/* sha: 3ede2f09756f369656a20b85ecd8cfc2ab3a959a471f58dd6912ec4e248037bd */
mrb_value
mrb_GLib_GRWLock_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GRWLock.disown only accepts objects of type GLib::GRWLock");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GRWLock::belongs_to_ruby */
/* sha: 2f137c87325a8e8dda944d127bd19f7b0d7d9d327f631682d50f5617d185e9d4 */
mrb_value
mrb_GLib_GRWLock_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GRWLock.belongs_to_ruby only accepts objects of type GLib::GRWLock");
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

/* MRUBY_BINDING: GRWLock::p_reader */
/* sha: 1c13887a32fcab3f06e547b6583e9db75285e7d2646e4ee33c44b9aa8b03aab3 */
#if BIND_GRWLock_p_FIELD_READER
/* get_p
 *
 * Return Type: gpointer
 */
mrb_value
mrb_GLib_GRWLock_get_p(mrb_state* mrb, mrb_value self) {
  struct _GRWLock * native_self = mruby_unbox__GRWLock(self);

  gpointer native_p = native_self->p;

  mrb_value p = TODO_mruby_box_gpointer(mrb, native_p);

  return p;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GRWLock::p_writer */
/* sha: 00f7c3b03faab70bef370880bd85b8b69d3c82f15ff66e61c0c010ed1c23af55 */
#if BIND_GRWLock_p_FIELD_WRITER
/* set_p
 *
 * Parameters:
 * - value: gpointer
 */
mrb_value
mrb_GLib_GRWLock_set_p(mrb_state* mrb, mrb_value self) {
  struct _GRWLock * native_self = mruby_unbox__GRWLock(self);
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

/* MRUBY_BINDING: GRWLock::i_reader */
/* sha: e3c40de3d7a1b86f945f1aec1d1555e080d0c7510186c7e03be6fb1dd6ce54d1 */
#if BIND_GRWLock_i_FIELD_READER
/* get_i
 *
 * Return Type: guint [2]
 */
mrb_value
mrb_GLib_GRWLock_get_i(mrb_state* mrb, mrb_value self) {
  struct _GRWLock * native_self = mruby_unbox__GRWLock(self);

  guint [2] native_i = native_self->i;

  mrb_value i = TODO_mruby_box_guint_[2](mrb, native_i);

  return i;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GRWLock::i_writer */
/* sha: efc9f664f187f93d0120994c72f35bdfc4d7f57bc8420d6b72e7378cb4fc60de */
#if BIND_GRWLock_i_FIELD_WRITER
/* set_i
 *
 * Parameters:
 * - value: guint [2]
 */
mrb_value
mrb_GLib_GRWLock_set_i(mrb_state* mrb, mrb_value self) {
  struct _GRWLock * native_self = mruby_unbox__GRWLock(self);
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


void mrb_GLib_GRWLock_init(mrb_state* mrb) {
/* MRUBY_BINDING: GRWLock::class_definition */
/* sha: 0e7f790412bf1a20af29b0f08e9d7eb77122175736b74dc3b1db184ac98d43f6 */
  struct RClass* GRWLock_class = mrb_define_class_under(mrb, GLib_module(mrb), "GRWLock", mrb->object_class);
  MRB_SET_INSTANCE_TT(GRWLock_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GRWLock::class_method_definitions */
/* sha: 15e3ef65d1cbb20cb7192c12e6a1e66378baca52bbb1c47c3305adbca0c86b91 */
#if BIND_GRWLock_INITIALIZE
  mrb_define_method(mrb, GRWLock_class, "initialize", mrb_GLib_GRWLock_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GRWLock_class, "disown", mrb_GLib_GRWLock_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GRWLock_class, "belongs_to_ruby?", mrb_GLib_GRWLock_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GRWLock::attr_definitions */
/* sha: 9e4b096748d13549cd40123d3269115a85aa0222cb39b4e806af6e08502cf676 */
  /*
   * Fields
   */
#if BIND_GRWLock_p_FIELD_READER
  mrb_define_method(mrb, GRWLock_class, "p", mrb_GLib_GRWLock_get_p, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GRWLock_p_FIELD_WRITER
  mrb_define_method(mrb, GRWLock_class, "p=", mrb_GLib_GRWLock_set_p, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GRWLock_i_FIELD_READER
  mrb_define_method(mrb, GRWLock_class, "i", mrb_GLib_GRWLock_get_i, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GRWLock_i_FIELD_WRITER
  mrb_define_method(mrb, GRWLock_class, "i=", mrb_GLib_GRWLock_set_i, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GRWLock::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
