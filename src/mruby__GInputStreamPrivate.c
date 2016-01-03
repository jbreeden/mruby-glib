/*
 * struct _GInputStreamPrivate
 * Defined in file ginputstream.h @ line 45
 */

#include "mruby_GLib.h"

#if BIND_GInputStreamPrivate_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GInputStreamPrivate::initialize */
/* sha: 1220cecc122c250784e9081a9fd1fd998d64e3ca9995299101a2a8a2ff1b457c */
#if BIND_GInputStreamPrivate_INITIALIZE
mrb_value
mrb_GLib_GInputStreamPrivate_initialize(mrb_state* mrb, mrb_value self) {
  struct _GInputStreamPrivate* native_object = (struct _GInputStreamPrivate*)calloc(1, sizeof(struct _GInputStreamPrivate));
  mruby_giftwrap__GInputStreamPrivate_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStreamPrivate::initialize */
/* sha: a8b6225d7569a15b547f3698efdd3bf4ac52a4a3f4de2e7335136baa75a7edf7 */
mrb_value
mrb_GLib_GInputStreamPrivate_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GInputStreamPrivate.disown only accepts objects of type GLib::GInputStreamPrivate");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStreamPrivate::belongs_to_ruby */
/* sha: 21f99b03191db943f700a94a6b5198e39ed75278c3b92f67e46e74e4115d6dc7 */
mrb_value
mrb_GLib_GInputStreamPrivate_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GInputStreamPrivate.belongs_to_ruby only accepts objects of type GLib::GInputStreamPrivate");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GInputStreamPrivate_init(mrb_state* mrb) {
/* MRUBY_BINDING: GInputStreamPrivate::class_definition */
/* sha: 2f238841106d88cb4c66f502eb24b080ac8d8f3c5a1f3aa39ce50212b4ca516c */
  struct RClass* GInputStreamPrivate_class = mrb_define_class_under(mrb, GLib_module(mrb), "GInputStreamPrivate", mrb->object_class);
  MRB_SET_INSTANCE_TT(GInputStreamPrivate_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStreamPrivate::class_method_definitions */
/* sha: 0ac924fb3adf282ac3c35c757a682ead919532a3b1b8720fca380e4dcb3a63f1 */
#if BIND_GInputStreamPrivate_INITIALIZE
  mrb_define_method(mrb, GInputStreamPrivate_class, "initialize", mrb_GLib_GInputStreamPrivate_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GInputStreamPrivate_class, "disown", mrb_GLib_GInputStreamPrivate_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GInputStreamPrivate_class, "belongs_to_ruby?", mrb_GLib_GInputStreamPrivate_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStreamPrivate::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStreamPrivate::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
