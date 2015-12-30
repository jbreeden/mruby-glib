/*
 * struct _GAction
 * Defined in file giotypes.h @ line 55
 */

#include "mruby_GLib.h"

#if BIND_GAction_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GAction::initialize */
/* sha: ee939f229c35632eb0b15456e30adb14bf548905bb0bb3e597857cceccbe1fe1 */
#if BIND_GAction_INITIALIZE
mrb_value
mrb_GLib_GAction_initialize(mrb_state* mrb, mrb_value self) {
  struct _GAction* native_object = (struct _GAction*)calloc(1, sizeof(struct _GAction));
  mruby_giftwrap__GAction_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GAction::initialize */
/* sha: b6b355d17ee05c9639dad29ecfd02d6fa8eb1c262ed0495e4aaeb664b09814f4 */
mrb_value
mrb_GLib_GAction_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GAction.disown only accepts objects of type GLib::GAction");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GAction::belongs_to_ruby */
/* sha: 55d356c401b851372f848e90f1dffd330b66602628af07033c41c84e188d2a67 */
mrb_value
mrb_GLib_GAction_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GAction.belongs_to_ruby only accepts objects of type GLib::GAction");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GAction_init(mrb_state* mrb) {
  struct RClass* GAction_class = mrb_define_class_under(mrb, GLib_module(mrb), "GAction", mrb->object_class);
  MRB_SET_INSTANCE_TT(GAction_class, MRB_TT_DATA);

#if BIND_GAction_INITIALIZE
  mrb_define_method(mrb, GAction_class, "initialize", mrb_GLib_GAction_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GAction_class, "disown", mrb_GLib_GAction_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GAction_class, "belongs_to_ruby?", mrb_GLib_GAction_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
