/*
 * struct _GPropertyAction
 * Defined in file giotypes.h @ line 53
 */

#include "mruby_GLib.h"

#if BIND_GPropertyAction_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GPropertyAction::initialize */
/* sha: b849353d258ac11eb7a66c8f47dad981eadbdf1f2d5e33d10dd24c9c6d9ae3c4 */
#if BIND_GPropertyAction_INITIALIZE
mrb_value
mrb_GLib_GPropertyAction_initialize(mrb_state* mrb, mrb_value self) {
  struct _GPropertyAction* native_object = (struct _GPropertyAction*)calloc(1, sizeof(struct _GPropertyAction));
  mruby_giftwrap__GPropertyAction_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GPropertyAction::initialize */
/* sha: 324966fb1179ecb49ce3f08777cd21f86646703002927dbfd5228b629dcfa99a */
mrb_value
mrb_GLib_GPropertyAction_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GPropertyAction.disown only accepts objects of type GLib::GPropertyAction");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GPropertyAction::belongs_to_ruby */
/* sha: 12bce0010a90897bcfe8bcdefbc85a290dfe91e8259761233f7dfa5e4d64be29 */
mrb_value
mrb_GLib_GPropertyAction_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GPropertyAction.belongs_to_ruby only accepts objects of type GLib::GPropertyAction");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GPropertyAction_init(mrb_state* mrb) {
  struct RClass* GPropertyAction_class = mrb_define_class_under(mrb, GLib_module(mrb), "GPropertyAction", mrb->object_class);
  MRB_SET_INSTANCE_TT(GPropertyAction_class, MRB_TT_DATA);

#if BIND_GPropertyAction_INITIALIZE
  mrb_define_method(mrb, GPropertyAction_class, "initialize", mrb_GLib_GPropertyAction_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GPropertyAction_class, "disown", mrb_GLib_GPropertyAction_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GPropertyAction_class, "belongs_to_ruby?", mrb_GLib_GPropertyAction_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
