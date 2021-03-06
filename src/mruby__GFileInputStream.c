/*
 * struct _GFileInputStream
 * Defined in file dummy_decls.h @ line 8
 */

#include "mruby_GLib.h"

#if BIND_GFileInputStream_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GFileInputStream::initialize */
/* sha: e93b498d22b4961b86fe017c73bdbd481617022a4e0c94bb57b33fd6a73760da */
#if BIND_GFileInputStream_INITIALIZE
mrb_value
mrb_GLib_GFileInputStream_initialize(mrb_state* mrb, mrb_value self) {
  struct _GFileInputStream* native_object = (struct _GFileInputStream*)calloc(1, sizeof(struct _GFileInputStream));
  mruby_giftwrap__GFileInputStream_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileInputStream::initialize */
/* sha: 988991c272578e185404b0fe9765a1255ecb47cd1059846d59ee4d3e0e0e9b0e */
mrb_value
mrb_GLib_GFileInputStream_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GFileInputStream.disown only accepts objects of type GLib::GFileInputStream");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileInputStream::belongs_to_ruby */
/* sha: 78264ff5d8e5a5f3b3a628a50b5e465c6e3620e298f961ea1763f9707cb8e1f9 */
mrb_value
mrb_GLib_GFileInputStream_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GFileInputStream.belongs_to_ruby only accepts objects of type GLib::GFileInputStream");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GFileInputStream_init(mrb_state* mrb) {
/* MRUBY_BINDING: GFileInputStream::class_definition */
/* sha: 98afc05c20043328086a5f8342494dca7a74bdab4b75c890ba0770770c07b938 */
  struct RClass* GFileInputStream_class = mrb_define_class_under(mrb, GLib_module(mrb), "GFileInputStream", mrb->object_class);
  MRB_SET_INSTANCE_TT(GFileInputStream_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileInputStream::class_method_definitions */
/* sha: ae7bb42ebf0446b1fff588247b73703db991264f7f011f3f1bcc067dc76930c1 */
#if BIND_GFileInputStream_INITIALIZE
  mrb_define_method(mrb, GFileInputStream_class, "initialize", mrb_GLib_GFileInputStream_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GFileInputStream_class, "disown", mrb_GLib_GFileInputStream_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GFileInputStream_class, "belongs_to_ruby?", mrb_GLib_GFileInputStream_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileInputStream::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileInputStream::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
