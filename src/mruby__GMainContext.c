/*
 * struct _GMainContext
 * Defined in file gmain.h @ line 48
 */

#include "mruby_GLib.h"

#if BIND_GMainContext_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GMainContext::initialize */
/* sha: 0b8ab6326d43673529a928a326d2da02615df6e72525f099d285b462858a038e */
#if BIND_GMainContext_INITIALIZE
mrb_value
mrb_GLib_GMainContext_initialize(mrb_state* mrb, mrb_value self) {
  struct _GMainContext* native_object = (struct _GMainContext*)calloc(1, sizeof(struct _GMainContext));
  mruby_giftwrap__GMainContext_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMainContext::initialize */
/* sha: c5e3bf093fedcd994188e7e4f37b5e55ed7298841ef53bfc0befd10c382c6006 */
mrb_value
mrb_GLib_GMainContext_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GMainContext.disown only accepts objects of type GLib::GMainContext");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMainContext::belongs_to_ruby */
/* sha: 1b7db01ca5bf4d9a99e61cc9b2b8b4adee56e731e69e70112d1bb444fe9c498f */
mrb_value
mrb_GLib_GMainContext_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GMainContext.belongs_to_ruby only accepts objects of type GLib::GMainContext");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GMainContext_init(mrb_state* mrb) {
/* MRUBY_BINDING: GMainContext::class_definition */
/* sha: 176638938ba47aa0f8fd65d0efdfd12be1e613729174e889474554c2713f6533 */
  struct RClass* GMainContext_class = mrb_define_class_under(mrb, GLib_module(mrb), "GMainContext", mrb->object_class);
  MRB_SET_INSTANCE_TT(GMainContext_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMainContext::class_method_definitions */
/* sha: f9d7ffdb333aff857ce3b5f8e191b201b1ddaa07c3627eded44d45d3794a848e */
#if BIND_GMainContext_INITIALIZE
  mrb_define_method(mrb, GMainContext_class, "initialize", mrb_GLib_GMainContext_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GMainContext_class, "disown", mrb_GLib_GMainContext_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GMainContext_class, "belongs_to_ruby?", mrb_GLib_GMainContext_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMainContext::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMainContext::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
