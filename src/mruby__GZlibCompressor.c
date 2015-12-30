/*
 * struct _GZlibCompressor
 * Defined in file giotypes.h @ line 45
 */

#include "mruby_GLib.h"

#if BIND_GZlibCompressor_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GZlibCompressor::initialize */
/* sha: 77ef28654dc11d6719091d8102b5f49586e8524eabba9b86d7837be9e54e9b9d */
#if BIND_GZlibCompressor_INITIALIZE
mrb_value
mrb_GLib_GZlibCompressor_initialize(mrb_state* mrb, mrb_value self) {
  struct _GZlibCompressor* native_object = (struct _GZlibCompressor*)calloc(1, sizeof(struct _GZlibCompressor));
  mruby_giftwrap__GZlibCompressor_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GZlibCompressor::initialize */
/* sha: 505f79e654d3e935741301a53e90bcd1c03434c3c675bd6edabf09c1e74ebdd3 */
mrb_value
mrb_GLib_GZlibCompressor_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GZlibCompressor.disown only accepts objects of type GLib::GZlibCompressor");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GZlibCompressor::belongs_to_ruby */
/* sha: 5729f5e19386690a51f7bcefa680c2df859297cf194ff9525c354878cb5a8eb5 */
mrb_value
mrb_GLib_GZlibCompressor_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GZlibCompressor.belongs_to_ruby only accepts objects of type GLib::GZlibCompressor");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GZlibCompressor_init(mrb_state* mrb) {
  struct RClass* GZlibCompressor_class = mrb_define_class_under(mrb, GLib_module(mrb), "GZlibCompressor", mrb->object_class);
  MRB_SET_INSTANCE_TT(GZlibCompressor_class, MRB_TT_DATA);

#if BIND_GZlibCompressor_INITIALIZE
  mrb_define_method(mrb, GZlibCompressor_class, "initialize", mrb_GLib_GZlibCompressor_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GZlibCompressor_class, "disown", mrb_GLib_GZlibCompressor_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GZlibCompressor_class, "belongs_to_ruby?", mrb_GLib_GZlibCompressor_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
