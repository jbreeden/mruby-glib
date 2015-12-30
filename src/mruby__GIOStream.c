/*
 * struct _GIOStream
 * Defined in file giotypes.h @ line 136
 */

#include "mruby_GLib.h"

#if BIND_GIOStream_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GIOStream::initialize */
/* sha: ecb6bc4f01206e81f773705e380f3a3225347207db980154c48a4f4f4bb8f993 */
#if BIND_GIOStream_INITIALIZE
mrb_value
mrb_GLib_GIOStream_initialize(mrb_state* mrb, mrb_value self) {
  struct _GIOStream* native_object = (struct _GIOStream*)calloc(1, sizeof(struct _GIOStream));
  mruby_giftwrap__GIOStream_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStream::initialize */
/* sha: 73f6074d07c9a085eb54d45884586cee0ef40259f484a28f12b22564e6c57cc0 */
mrb_value
mrb_GLib_GIOStream_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GIOStream.disown only accepts objects of type GLib::GIOStream");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStream::belongs_to_ruby */
/* sha: 01eee1217dabf81ca3a348eba565da57990416ec52713ce38f3756f0d6d6bb25 */
mrb_value
mrb_GLib_GIOStream_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GIOStream.belongs_to_ruby only accepts objects of type GLib::GIOStream");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GIOStream_init(mrb_state* mrb) {
  struct RClass* GIOStream_class = mrb_define_class_under(mrb, GLib_module(mrb), "GIOStream", mrb->object_class);
  MRB_SET_INSTANCE_TT(GIOStream_class, MRB_TT_DATA);

#if BIND_GIOStream_INITIALIZE
  mrb_define_method(mrb, GIOStream_class, "initialize", mrb_GLib_GIOStream_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GIOStream_class, "disown", mrb_GLib_GIOStream_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GIOStream_class, "belongs_to_ruby?", mrb_GLib_GIOStream_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
