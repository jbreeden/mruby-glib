/*
 * struct _GBufferedOutputStream
 * Defined in file giotypes.h @ line 37
 */

#include "mruby_GLib.h"

#if BIND_GBufferedOutputStream_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GBufferedOutputStream::initialize */
/* sha: 2f8a63088fed4f74090dc2a099f147c7c468bd8263200deaa744c430df143031 */
#if BIND_GBufferedOutputStream_INITIALIZE
mrb_value
mrb_GLib_GBufferedOutputStream_initialize(mrb_state* mrb, mrb_value self) {
  struct _GBufferedOutputStream* native_object = (struct _GBufferedOutputStream*)calloc(1, sizeof(struct _GBufferedOutputStream));
  mruby_giftwrap__GBufferedOutputStream_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GBufferedOutputStream::initialize */
/* sha: 78a2a6b56ec9d54a668dddcfe8c778a6f1037ba58512be40ad1f17a4d6daf2f2 */
mrb_value
mrb_GLib_GBufferedOutputStream_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GBufferedOutputStream.disown only accepts objects of type GLib::GBufferedOutputStream");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GBufferedOutputStream::belongs_to_ruby */
/* sha: e42008eb22084787bc8320c2de3c6e9791677f000aaea85662ab83eeb7b2a4ae */
mrb_value
mrb_GLib_GBufferedOutputStream_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GBufferedOutputStream.belongs_to_ruby only accepts objects of type GLib::GBufferedOutputStream");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GBufferedOutputStream_init(mrb_state* mrb) {
  struct RClass* GBufferedOutputStream_class = mrb_define_class_under(mrb, GLib_module(mrb), "GBufferedOutputStream", mrb->object_class);
  MRB_SET_INSTANCE_TT(GBufferedOutputStream_class, MRB_TT_DATA);

#if BIND_GBufferedOutputStream_INITIALIZE
  mrb_define_method(mrb, GBufferedOutputStream_class, "initialize", mrb_GLib_GBufferedOutputStream_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GBufferedOutputStream_class, "disown", mrb_GLib_GBufferedOutputStream_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GBufferedOutputStream_class, "belongs_to_ruby?", mrb_GLib_GBufferedOutputStream_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
