/*
 * struct _GIOExtension
 * Defined in file giotypes.h @ line 111
 */

#include "mruby_GLib.h"

#if BIND_GIOExtension_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GIOExtension::initialize */
/* sha: f125cf6018b4032e95bb948726d507ad05ef8ef1daa8945a6c3c1c261e368dcc */
#if BIND_GIOExtension_INITIALIZE
mrb_value
mrb_GLib_GIOExtension_initialize(mrb_state* mrb, mrb_value self) {
  struct _GIOExtension* native_object = (struct _GIOExtension*)calloc(1, sizeof(struct _GIOExtension));
  mruby_giftwrap__GIOExtension_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOExtension::initialize */
/* sha: 7e2bc06b5686cc6d8a8fe800897892f7814544f2e887f8c48995d0e12f9e2627 */
mrb_value
mrb_GLib_GIOExtension_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GIOExtension.disown only accepts objects of type GLib::GIOExtension");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOExtension::belongs_to_ruby */
/* sha: f6428c8e5cd4719ad2e39f5ad5a655f87678318c417e1442b5d055dede1b0fb8 */
mrb_value
mrb_GLib_GIOExtension_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GIOExtension.belongs_to_ruby only accepts objects of type GLib::GIOExtension");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GIOExtension_init(mrb_state* mrb) {
  struct RClass* GIOExtension_class = mrb_define_class_under(mrb, GLib_module(mrb), "GIOExtension", mrb->object_class);
  MRB_SET_INSTANCE_TT(GIOExtension_class, MRB_TT_DATA);

#if BIND_GIOExtension_INITIALIZE
  mrb_define_method(mrb, GIOExtension_class, "initialize", mrb_GLib_GIOExtension_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GIOExtension_class, "disown", mrb_GLib_GIOExtension_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GIOExtension_class, "belongs_to_ruby?", mrb_GLib_GIOExtension_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
