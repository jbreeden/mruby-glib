/*
 * struct _GCond
 * Defined in file gthread.h @ line 54
 */

#include "mruby_GLib.h"

#if BIND_GCond_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GCond::initialize */
/* sha: d28d28498babc0cc0b0f30f3fa6a5bf74037472890b5dff95f775e0f2792143e */
#if BIND_GCond_INITIALIZE
mrb_value
mrb_GLib_GCond_initialize(mrb_state* mrb, mrb_value self) {
  struct _GCond* native_object = (struct _GCond*)calloc(1, sizeof(struct _GCond));
  mruby_giftwrap__GCond_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GCond::initialize */
/* sha: 301c4898979ea11946261cc856828e191857acb1141728dc37b4bf0f38f72538 */
mrb_value
mrb_GLib_GCond_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GCond.disown only accepts objects of type GLib::GCond");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GCond::belongs_to_ruby */
/* sha: 48d3ade6d45d4130d3712387a5c4a93d39d6f3e93ebdba90d8ec583d38f4b181 */
mrb_value
mrb_GLib_GCond_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GCond.belongs_to_ruby only accepts objects of type GLib::GCond");
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

/* MRUBY_BINDING: GCond::p_reader */
/* sha: 5208d006fca2f6be4313c3523c2e5066de81309b174f886459519d760375e779 */
#if BIND_GCond_p_FIELD_READER
/* get_p
 *
 * Return Type: gpointer
 */
mrb_value
mrb_GLib_GCond_get_p(mrb_state* mrb, mrb_value self) {
  struct _GCond * native_self = mruby_unbox__GCond(self);

  gpointer native_p = native_self->p;

  mrb_value p = TODO_mruby_box_gpointer(mrb, native_p);

  return p;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GCond::p_writer */
/* sha: cdd89ea1f038fa07f0f76c31118c8144f6b6b85d9c6cd3f34d69330db77133fb */
#if BIND_GCond_p_FIELD_WRITER
/* set_p
 *
 * Parameters:
 * - value: gpointer
 */
mrb_value
mrb_GLib_GCond_set_p(mrb_state* mrb, mrb_value self) {
  struct _GCond * native_self = mruby_unbox__GCond(self);
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

/* MRUBY_BINDING: GCond::i_reader */
/* sha: b19158a02141ed1478a45fa37d6540f474324683219415404ac53df9139eb14a */
#if BIND_GCond_i_FIELD_READER
/* get_i
 *
 * Return Type: guint [2]
 */
mrb_value
mrb_GLib_GCond_get_i(mrb_state* mrb, mrb_value self) {
  struct _GCond * native_self = mruby_unbox__GCond(self);

  guint [2] native_i = native_self->i;

  mrb_value i = TODO_mruby_box_guint_[2](mrb, native_i);

  return i;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GCond::i_writer */
/* sha: c04cda325397ba3356619bb07108ea3af388ea6ba3faec9eb9cba2273c161738 */
#if BIND_GCond_i_FIELD_WRITER
/* set_i
 *
 * Parameters:
 * - value: guint [2]
 */
mrb_value
mrb_GLib_GCond_set_i(mrb_state* mrb, mrb_value self) {
  struct _GCond * native_self = mruby_unbox__GCond(self);
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


void mrb_GLib_GCond_init(mrb_state* mrb) {
/* MRUBY_BINDING: GCond::class_definition */
/* sha: 686805035c404875409acfbf2e6963a16e5fa65d909510bcc006abb49b41041d */
  struct RClass* GCond_class = mrb_define_class_under(mrb, GLib_module(mrb), "GCond", mrb->object_class);
  MRB_SET_INSTANCE_TT(GCond_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GCond::class_method_definitions */
/* sha: 0c9809d363bd101bcfd668a694bc03cea268acbe6e6f9512e433c64e06dc09d8 */
#if BIND_GCond_INITIALIZE
  mrb_define_method(mrb, GCond_class, "initialize", mrb_GLib_GCond_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GCond_class, "disown", mrb_GLib_GCond_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GCond_class, "belongs_to_ruby?", mrb_GLib_GCond_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GCond::attr_definitions */
/* sha: 698e68342594b4f8a554c4a77fdf0204daff54ff87b2cd8319ea79a610b70c06 */
  /*
   * Fields
   */
#if BIND_GCond_p_FIELD_READER
  mrb_define_method(mrb, GCond_class, "p", mrb_GLib_GCond_get_p, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GCond_p_FIELD_WRITER
  mrb_define_method(mrb, GCond_class, "p=", mrb_GLib_GCond_set_p, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GCond_i_FIELD_READER
  mrb_define_method(mrb, GCond_class, "i", mrb_GLib_GCond_get_i, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GCond_i_FIELD_WRITER
  mrb_define_method(mrb, GCond_class, "i=", mrb_GLib_GCond_set_i, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GCond::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
