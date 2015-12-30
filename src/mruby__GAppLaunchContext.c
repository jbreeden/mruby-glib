/*
 * struct _GAppLaunchContext
 * Defined in file giotypes.h @ line 32
 */

#include "mruby_GLib.h"

#if BIND_GAppLaunchContext_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GAppLaunchContext::initialize */
/* sha: 9ff0e53060a63097410e4673b3e4ee6b819464278f93e9d1f2363eac24be3ed0 */
#if BIND_GAppLaunchContext_INITIALIZE
mrb_value
mrb_GLib_GAppLaunchContext_initialize(mrb_state* mrb, mrb_value self) {
  struct _GAppLaunchContext* native_object = (struct _GAppLaunchContext*)calloc(1, sizeof(struct _GAppLaunchContext));
  mruby_giftwrap__GAppLaunchContext_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GAppLaunchContext::initialize */
/* sha: 8cf82aa9b942de4367186adfb9660af901a9f776e29c2cc0c5b7f80519d8c47b */
mrb_value
mrb_GLib_GAppLaunchContext_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GAppLaunchContext.disown only accepts objects of type GLib::GAppLaunchContext");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GAppLaunchContext::belongs_to_ruby */
/* sha: cda3b61e2f9cc191556e4df0d0b88124debdf48c438a79438a0cd4fc9dc66d80 */
mrb_value
mrb_GLib_GAppLaunchContext_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GAppLaunchContext.belongs_to_ruby only accepts objects of type GLib::GAppLaunchContext");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GAppLaunchContext_init(mrb_state* mrb) {
  struct RClass* GAppLaunchContext_class = mrb_define_class_under(mrb, GLib_module(mrb), "GAppLaunchContext", mrb->object_class);
  MRB_SET_INSTANCE_TT(GAppLaunchContext_class, MRB_TT_DATA);

#if BIND_GAppLaunchContext_INITIALIZE
  mrb_define_method(mrb, GAppLaunchContext_class, "initialize", mrb_GLib_GAppLaunchContext_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GAppLaunchContext_class, "disown", mrb_GLib_GAppLaunchContext_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GAppLaunchContext_class, "belongs_to_ruby?", mrb_GLib_GAppLaunchContext_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
