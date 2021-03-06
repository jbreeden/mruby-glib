/*
 * struct _GSimpleAction
 * Defined in file giotypes.h @ line 54
 */

#include "mruby_GLib.h"

#if BIND_GSimpleAction_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GSimpleAction::initialize */
/* sha: c9e971df9c51320e5346422b733ea0e4562280415b79db976d6bddd0ca13537a */
#if BIND_GSimpleAction_INITIALIZE
mrb_value
mrb_GLib_GSimpleAction_initialize(mrb_state* mrb, mrb_value self) {
  struct _GSimpleAction* native_object = (struct _GSimpleAction*)calloc(1, sizeof(struct _GSimpleAction));
  mruby_giftwrap__GSimpleAction_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSimpleAction::initialize */
/* sha: d44d1779557d01f7d9b463d145b2e0c57ce598f669c0f3bc1d1cfcce5d114122 */
mrb_value
mrb_GLib_GSimpleAction_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSimpleAction.disown only accepts objects of type GLib::GSimpleAction");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSimpleAction::belongs_to_ruby */
/* sha: 2a36b25a50ac3a186041bca419775a2d515f78e17942148458cd4c827e56a8d6 */
mrb_value
mrb_GLib_GSimpleAction_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSimpleAction.belongs_to_ruby only accepts objects of type GLib::GSimpleAction");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GSimpleAction_init(mrb_state* mrb) {
  struct RClass* GSimpleAction_class = mrb_define_class_under(mrb, GLib_module(mrb), "GSimpleAction", mrb->object_class);
  MRB_SET_INSTANCE_TT(GSimpleAction_class, MRB_TT_DATA);

#if BIND_GSimpleAction_INITIALIZE
  mrb_define_method(mrb, GSimpleAction_class, "initialize", mrb_GLib_GSimpleAction_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GSimpleAction_class, "disown", mrb_GLib_GSimpleAction_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GSimpleAction_class, "belongs_to_ruby?", mrb_GLib_GSimpleAction_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
