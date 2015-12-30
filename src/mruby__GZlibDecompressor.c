/*
 * struct _GZlibDecompressor
 * Defined in file giotypes.h @ line 46
 */

#include "mruby_GLib.h"

#if BIND_GZlibDecompressor_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GZlibDecompressor::initialize */
/* sha: 9d6de42b155109089b65b145f135f3d1ef9d722a918dca184493ebd7414bac0d */
#if BIND_GZlibDecompressor_INITIALIZE
mrb_value
mrb_GLib_GZlibDecompressor_initialize(mrb_state* mrb, mrb_value self) {
  struct _GZlibDecompressor* native_object = (struct _GZlibDecompressor*)calloc(1, sizeof(struct _GZlibDecompressor));
  mruby_giftwrap__GZlibDecompressor_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GZlibDecompressor::initialize */
/* sha: 00a210fa56b72e7e8d02f6a0ae6d72415642feedb7cfcce27ad672f2194d7029 */
mrb_value
mrb_GLib_GZlibDecompressor_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GZlibDecompressor.disown only accepts objects of type GLib::GZlibDecompressor");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GZlibDecompressor::belongs_to_ruby */
/* sha: c498b390d314d31c2b39d690d8f4902fb5d96654f42e79802777c018d0ac2400 */
mrb_value
mrb_GLib_GZlibDecompressor_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GZlibDecompressor.belongs_to_ruby only accepts objects of type GLib::GZlibDecompressor");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GZlibDecompressor_init(mrb_state* mrb) {
  struct RClass* GZlibDecompressor_class = mrb_define_class_under(mrb, GLib_module(mrb), "GZlibDecompressor", mrb->object_class);
  MRB_SET_INSTANCE_TT(GZlibDecompressor_class, MRB_TT_DATA);

#if BIND_GZlibDecompressor_INITIALIZE
  mrb_define_method(mrb, GZlibDecompressor_class, "initialize", mrb_GLib_GZlibDecompressor_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GZlibDecompressor_class, "disown", mrb_GLib_GZlibDecompressor_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GZlibDecompressor_class, "belongs_to_ruby?", mrb_GLib_GZlibDecompressor_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
