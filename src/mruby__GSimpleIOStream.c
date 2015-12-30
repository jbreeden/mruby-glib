/*
 * struct _GSimpleIOStream
 * Defined in file giotypes.h @ line 137
 */

#include "mruby_GLib.h"

#if BIND_GSimpleIOStream_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GSimpleIOStream::initialize */
/* sha: 69230c41e4573cbd5b37150d96e81a475ad8eb2326ae75c7d05589ff57ee968f */
#if BIND_GSimpleIOStream_INITIALIZE
mrb_value
mrb_GLib_GSimpleIOStream_initialize(mrb_state* mrb, mrb_value self) {
  struct _GSimpleIOStream* native_object = (struct _GSimpleIOStream*)calloc(1, sizeof(struct _GSimpleIOStream));
  mruby_giftwrap__GSimpleIOStream_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSimpleIOStream::initialize */
/* sha: 0ded45bc155a39233c93db4221c679c883b5af92be57bb7792452f6132cc7c83 */
mrb_value
mrb_GLib_GSimpleIOStream_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSimpleIOStream.disown only accepts objects of type GLib::GSimpleIOStream");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSimpleIOStream::belongs_to_ruby */
/* sha: 997844553d996402976d742710a65c4222dad0f361508432094b648b34a8eb0c */
mrb_value
mrb_GLib_GSimpleIOStream_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSimpleIOStream.belongs_to_ruby only accepts objects of type GLib::GSimpleIOStream");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GSimpleIOStream_init(mrb_state* mrb) {
  struct RClass* GSimpleIOStream_class = mrb_define_class_under(mrb, GLib_module(mrb), "GSimpleIOStream", mrb->object_class);
  MRB_SET_INSTANCE_TT(GSimpleIOStream_class, MRB_TT_DATA);

#if BIND_GSimpleIOStream_INITIALIZE
  mrb_define_method(mrb, GSimpleIOStream_class, "initialize", mrb_GLib_GSimpleIOStream_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GSimpleIOStream_class, "disown", mrb_GLib_GSimpleIOStream_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GSimpleIOStream_class, "belongs_to_ruby?", mrb_GLib_GSimpleIOStream_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
