/*
 * struct _GRemoteActionGroup
 * Defined in file giotypes.h @ line 49
 */

#include "mruby_GLib.h"

#if BIND_GRemoteActionGroup_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GRemoteActionGroup::initialize */
/* sha: 84ac891f74823cdb309f78a20425fb13e0fadd89f93f45251f9baa1d56ff1e8c */
#if BIND_GRemoteActionGroup_INITIALIZE
mrb_value
mrb_GLib_GRemoteActionGroup_initialize(mrb_state* mrb, mrb_value self) {
  struct _GRemoteActionGroup* native_object = (struct _GRemoteActionGroup*)calloc(1, sizeof(struct _GRemoteActionGroup));
  mruby_giftwrap__GRemoteActionGroup_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GRemoteActionGroup::initialize */
/* sha: c6bf06740a88cfb1ebb8de55479bf3829c33a950fb582a715a30c0ff592e52d7 */
mrb_value
mrb_GLib_GRemoteActionGroup_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GRemoteActionGroup.disown only accepts objects of type GLib::GRemoteActionGroup");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GRemoteActionGroup::belongs_to_ruby */
/* sha: 00bcc2e61234c3de2d3e0d1925bba5426e78132f38d43390df01e3bb0689a309 */
mrb_value
mrb_GLib_GRemoteActionGroup_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GRemoteActionGroup.belongs_to_ruby only accepts objects of type GLib::GRemoteActionGroup");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GRemoteActionGroup_init(mrb_state* mrb) {
  struct RClass* GRemoteActionGroup_class = mrb_define_class_under(mrb, GLib_module(mrb), "GRemoteActionGroup", mrb->object_class);
  MRB_SET_INSTANCE_TT(GRemoteActionGroup_class, MRB_TT_DATA);

#if BIND_GRemoteActionGroup_INITIALIZE
  mrb_define_method(mrb, GRemoteActionGroup_class, "initialize", mrb_GLib_GRemoteActionGroup_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GRemoteActionGroup_class, "disown", mrb_GLib_GRemoteActionGroup_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GRemoteActionGroup_class, "belongs_to_ruby?", mrb_GLib_GRemoteActionGroup_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
