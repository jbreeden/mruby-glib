/*
 * struct _GMainLoop
 * Defined in file gmain.h @ line 56
 */

#include "mruby_GLib.h"

#if BIND_GMainLoop_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GMainLoop::initialize */
/* sha: adc179f16f2961a15e67dc361c9242581699e17f6b00b37d60074abff0156f98 */
#if BIND_GMainLoop_INITIALIZE
mrb_value
mrb_GLib_GMainLoop_initialize(mrb_state* mrb, mrb_value self) {
  struct _GMainLoop* native_object = (struct _GMainLoop*)calloc(1, sizeof(struct _GMainLoop));
  mruby_giftwrap__GMainLoop_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMainLoop::initialize */
/* sha: 8a4be76e8707571dd3eb7d0cc0b4fd7527ee4bba7fd9bb9d3a907bf575aea082 */
mrb_value
mrb_GLib_GMainLoop_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GMainLoop.disown only accepts objects of type GLib::GMainLoop");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMainLoop::belongs_to_ruby */
/* sha: cac3f8b74dbbbecd39d7c23aa98b6d7ebd610677655450360d758a5ae67b0375 */
mrb_value
mrb_GLib_GMainLoop_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GMainLoop.belongs_to_ruby only accepts objects of type GLib::GMainLoop");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GMainLoop_init(mrb_state* mrb) {
  struct RClass* GMainLoop_class = mrb_define_class_under(mrb, GLib_module(mrb), "GMainLoop", mrb->object_class);
  MRB_SET_INSTANCE_TT(GMainLoop_class, MRB_TT_DATA);

#if BIND_GMainLoop_INITIALIZE
  mrb_define_method(mrb, GMainLoop_class, "initialize", mrb_GLib_GMainLoop_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GMainLoop_class, "disown", mrb_GLib_GMainLoop_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GMainLoop_class, "belongs_to_ruby?", mrb_GLib_GMainLoop_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
