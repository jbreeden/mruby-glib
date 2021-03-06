/*
 * struct _GSubprocess
 * Defined in file dummy_decls.h @ line 12
 */

#include "mruby_GLib.h"

#if BIND_GSubprocess_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GSubprocess::initialize */
/* sha: 854bede46c30bc4656daef3754916bdfa17aeaf21776a9b7973c5b34526dcef0 */
#if BIND_GSubprocess_INITIALIZE
mrb_value
mrb_GLib_GSubprocess_initialize(mrb_state* mrb, mrb_value self) {
  struct _GSubprocess* native_object = (struct _GSubprocess*)calloc(1, sizeof(struct _GSubprocess));
  mruby_giftwrap__GSubprocess_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSubprocess::initialize */
/* sha: 7eaee490e83feda17a352cd1167a2ad4f241c01b19465481f5ff4f33baebe60c */
mrb_value
mrb_GLib_GSubprocess_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSubprocess.disown only accepts objects of type GLib::GSubprocess");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSubprocess::belongs_to_ruby */
/* sha: 608e7f21f5f3902d22fbd7bb7fce0ae841dc87a9811ea01eb092331aeb1eccf8 */
mrb_value
mrb_GLib_GSubprocess_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSubprocess.belongs_to_ruby only accepts objects of type GLib::GSubprocess");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GSubprocess_init(mrb_state* mrb) {
/* MRUBY_BINDING: GSubprocess::class_definition */
/* sha: 729295fd3a0b4b433815456aef0f8155be8f80948769ce853484d5f67579d7fb */
  struct RClass* GSubprocess_class = mrb_define_class_under(mrb, GLib_module(mrb), "GSubprocess", mrb->object_class);
  MRB_SET_INSTANCE_TT(GSubprocess_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSubprocess::class_method_definitions */
/* sha: 603c88dd8f777cdcbf1cd700c6a568fe39d5c100d77abbed3bbd84c79418c3b4 */
#if BIND_GSubprocess_INITIALIZE
  mrb_define_method(mrb, GSubprocess_class, "initialize", mrb_GLib_GSubprocess_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GSubprocess_class, "disown", mrb_GLib_GSubprocess_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GSubprocess_class, "belongs_to_ruby?", mrb_GLib_GSubprocess_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSubprocess::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSubprocess::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
