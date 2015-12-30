/*
 * struct _GMemoryInputStream
 * Defined in file giotypes.h @ line 122
 */

#include "mruby_GLib.h"

#if BIND_GMemoryInputStream_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GMemoryInputStream::initialize */
/* sha: 84f7163d2463ad13df236193e76a1aec6703b7354336fe6e04448c7e51e6cf94 */
#if BIND_GMemoryInputStream_INITIALIZE
mrb_value
mrb_GLib_GMemoryInputStream_initialize(mrb_state* mrb, mrb_value self) {
  struct _GMemoryInputStream* native_object = (struct _GMemoryInputStream*)calloc(1, sizeof(struct _GMemoryInputStream));
  mruby_giftwrap__GMemoryInputStream_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMemoryInputStream::initialize */
/* sha: 8892b63431060719a95b7dfe1a279eee002178858144109c103ae6aa1dd724d5 */
mrb_value
mrb_GLib_GMemoryInputStream_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GMemoryInputStream.disown only accepts objects of type GLib::GMemoryInputStream");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMemoryInputStream::belongs_to_ruby */
/* sha: 74745e21b49285c3e5288f9a78048a2e225a9f4a84b0775ede55c559f36f806a */
mrb_value
mrb_GLib_GMemoryInputStream_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GMemoryInputStream.belongs_to_ruby only accepts objects of type GLib::GMemoryInputStream");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GMemoryInputStream_init(mrb_state* mrb) {
  struct RClass* GMemoryInputStream_class = mrb_define_class_under(mrb, GLib_module(mrb), "GMemoryInputStream", mrb->object_class);
  MRB_SET_INSTANCE_TT(GMemoryInputStream_class, MRB_TT_DATA);

#if BIND_GMemoryInputStream_INITIALIZE
  mrb_define_method(mrb, GMemoryInputStream_class, "initialize", mrb_GLib_GMemoryInputStream_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GMemoryInputStream_class, "disown", mrb_GLib_GMemoryInputStream_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GMemoryInputStream_class, "belongs_to_ruby?", mrb_GLib_GMemoryInputStream_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
