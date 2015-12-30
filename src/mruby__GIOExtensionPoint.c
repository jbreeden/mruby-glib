/*
 * struct _GIOExtensionPoint
 * Defined in file giotypes.h @ line 110
 */

#include "mruby_GLib.h"

#if BIND_GIOExtensionPoint_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GIOExtensionPoint::initialize */
/* sha: 7417248954f5ffa91d683e9216c6de1d161ca8a9c8a14b8c9ecff7864caf6394 */
#if BIND_GIOExtensionPoint_INITIALIZE
mrb_value
mrb_GLib_GIOExtensionPoint_initialize(mrb_state* mrb, mrb_value self) {
  struct _GIOExtensionPoint* native_object = (struct _GIOExtensionPoint*)calloc(1, sizeof(struct _GIOExtensionPoint));
  mruby_giftwrap__GIOExtensionPoint_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOExtensionPoint::initialize */
/* sha: 7c3db58dd84f3e50f6d4aaf2dcf1d97414af6b497bce62eabc9ad8496301af7c */
mrb_value
mrb_GLib_GIOExtensionPoint_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GIOExtensionPoint.disown only accepts objects of type GLib::GIOExtensionPoint");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOExtensionPoint::belongs_to_ruby */
/* sha: a8e7c9308ad259819e1815099c544ff709d25a2f79f18ce01f0d62f0794e6d94 */
mrb_value
mrb_GLib_GIOExtensionPoint_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GIOExtensionPoint.belongs_to_ruby only accepts objects of type GLib::GIOExtensionPoint");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GIOExtensionPoint_init(mrb_state* mrb) {
  struct RClass* GIOExtensionPoint_class = mrb_define_class_under(mrb, GLib_module(mrb), "GIOExtensionPoint", mrb->object_class);
  MRB_SET_INSTANCE_TT(GIOExtensionPoint_class, MRB_TT_DATA);

#if BIND_GIOExtensionPoint_INITIALIZE
  mrb_define_method(mrb, GIOExtensionPoint_class, "initialize", mrb_GLib_GIOExtensionPoint_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GIOExtensionPoint_class, "disown", mrb_GLib_GIOExtensionPoint_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GIOExtensionPoint_class, "belongs_to_ruby?", mrb_GLib_GIOExtensionPoint_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
