/*
 * struct _GActionGroup
 * Defined in file giotypes.h @ line 52
 */

#include "mruby_GLib.h"

#if BIND_GActionGroup_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GActionGroup::initialize */
/* sha: 1ff3b3243ecead336e4fe5ea188607e89f44bb1b3d79fc8433e16001640e3ee8 */
#if BIND_GActionGroup_INITIALIZE
mrb_value
mrb_GLib_GActionGroup_initialize(mrb_state* mrb, mrb_value self) {
  struct _GActionGroup* native_object = (struct _GActionGroup*)calloc(1, sizeof(struct _GActionGroup));
  mruby_giftwrap__GActionGroup_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GActionGroup::initialize */
/* sha: 610c6fd593ae134614c42cdfcf2dd241c8c2df97fd11ba67ac13c07a290b35aa */
mrb_value
mrb_GLib_GActionGroup_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GActionGroup.disown only accepts objects of type GLib::GActionGroup");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GActionGroup::belongs_to_ruby */
/* sha: 78a62e83981839eff66324f28abac020de17d00781f9281cc7174ce1b645b293 */
mrb_value
mrb_GLib_GActionGroup_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GActionGroup.belongs_to_ruby only accepts objects of type GLib::GActionGroup");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GActionGroup_init(mrb_state* mrb) {
  struct RClass* GActionGroup_class = mrb_define_class_under(mrb, GLib_module(mrb), "GActionGroup", mrb->object_class);
  MRB_SET_INSTANCE_TT(GActionGroup_class, MRB_TT_DATA);

#if BIND_GActionGroup_INITIALIZE
  mrb_define_method(mrb, GActionGroup_class, "initialize", mrb_GLib_GActionGroup_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GActionGroup_class, "disown", mrb_GLib_GActionGroup_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GActionGroup_class, "belongs_to_ruby?", mrb_GLib_GActionGroup_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
