/*
 * struct _GStringChunk
 * Defined in file gstringchunk.h @ line 36
 */

#include "mruby_GLib.h"

#if BIND_GStringChunk_TYPE

/*
 * Class Methods
 */

#if BIND_GStringChunk_INITIALIZE
mrb_value
mrb_GLib_GStringChunk_initialize(mrb_state* mrb, mrb_value self) {
  struct _GStringChunk* native_object = (struct _GStringChunk*)calloc(1, sizeof(struct _GStringChunk));
  mruby_giftwrap__GStringChunk_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_GStringChunk_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GStringChunk.disown only accepts objects of type GLib::GStringChunk");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_GStringChunk_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GStringChunk.belongs_to_ruby only accepts objects of type GLib::GStringChunk");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}


void mrb_GLib_GStringChunk_init(mrb_state* mrb) {
  struct RClass* GStringChunk_class = mrb_define_class_under(mrb, GLib_module(mrb), "GStringChunk", mrb->object_class);
  MRB_SET_INSTANCE_TT(GStringChunk_class, MRB_TT_DATA);

#if BIND_GStringChunk_INITIALIZE
  mrb_define_method(mrb, GStringChunk_class, "initialize", mrb_GLib_GStringChunk_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GStringChunk_class, "disown", mrb_GLib_GStringChunk_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GStringChunk_class, "belongs_to_ruby?", mrb_GLib_GStringChunk_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
