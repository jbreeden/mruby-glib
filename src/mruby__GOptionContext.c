/*
 * struct _GOptionContext
 * Defined in file goption.h @ line 38
 */

#include "mruby_GLib.h"

#if BIND_GOptionContext_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GOptionContext::initialize */
/* sha: 36a0c7effcff83488fb230520bcd8aedb6946f805d7fba6f8fe865a9aa914292 */
#if BIND_GOptionContext_INITIALIZE
mrb_value
mrb_GLib_GOptionContext_initialize(mrb_state* mrb, mrb_value self) {
  struct _GOptionContext* native_object = (struct _GOptionContext*)calloc(1, sizeof(struct _GOptionContext));
  mruby_giftwrap__GOptionContext_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOptionContext::initialize */
/* sha: 9be79735b67f3a525bf8a0a32079eb422a489a6bdceba971b6f95d0c27414e59 */
mrb_value
mrb_GLib_GOptionContext_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GOptionContext.disown only accepts objects of type GLib::GOptionContext");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOptionContext::belongs_to_ruby */
/* sha: 2902facf514e0a627ea2a9aa084cba15c9d8ff3af1d4a612e6db9116657d4ea0 */
mrb_value
mrb_GLib_GOptionContext_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GOptionContext.belongs_to_ruby only accepts objects of type GLib::GOptionContext");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GOptionContext_init(mrb_state* mrb) {
  struct RClass* GOptionContext_class = mrb_define_class_under(mrb, GLib_module(mrb), "GOptionContext", mrb->object_class);
  MRB_SET_INSTANCE_TT(GOptionContext_class, MRB_TT_DATA);

#if BIND_GOptionContext_INITIALIZE
  mrb_define_method(mrb, GOptionContext_class, "initialize", mrb_GLib_GOptionContext_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GOptionContext_class, "disown", mrb_GLib_GOptionContext_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GOptionContext_class, "belongs_to_ruby?", mrb_GLib_GOptionContext_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
