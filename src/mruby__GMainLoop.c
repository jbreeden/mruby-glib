/*
 * struct _GMainLoop
 * Defined in file gmain.h @ line 56
 */

#include "mruby_GLib.h"

#if BIND_GMainLoop_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

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
/* MRUBY_BINDING: GMainLoop::class_definition */
/* sha: 397e285898d1cde45682f36f101881678a82dcdf6ee7c9f8dfae343c307ee62c */
  struct RClass* GMainLoop_class = mrb_define_class_under(mrb, GLib_module(mrb), "GMainLoop", mrb->object_class);
  MRB_SET_INSTANCE_TT(GMainLoop_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMainLoop::class_method_definitions */
/* sha: a329fd78832fe3bca4ccc38e49468bf05e38265a7b28c5e5b3ef841795fcdee9 */
#if BIND_GMainLoop_INITIALIZE
  mrb_define_method(mrb, GMainLoop_class, "initialize", mrb_GLib_GMainLoop_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GMainLoop_class, "disown", mrb_GLib_GMainLoop_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GMainLoop_class, "belongs_to_ruby?", mrb_GLib_GMainLoop_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMainLoop::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMainLoop::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
