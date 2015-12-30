/*
 * struct _GSocketAddressEnumerator
 * Defined in file giotypes.h @ line 203
 */

#include "mruby_GLib.h"

#if BIND_GSocketAddressEnumerator_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GSocketAddressEnumerator::initialize */
/* sha: e82fa8aaf65636cf8165a8d244215f95cd0f9396383b67528e3b19c85348f469 */
#if BIND_GSocketAddressEnumerator_INITIALIZE
mrb_value
mrb_GLib_GSocketAddressEnumerator_initialize(mrb_state* mrb, mrb_value self) {
  struct _GSocketAddressEnumerator* native_object = (struct _GSocketAddressEnumerator*)calloc(1, sizeof(struct _GSocketAddressEnumerator));
  mruby_giftwrap__GSocketAddressEnumerator_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketAddressEnumerator::initialize */
/* sha: 9fbe3796a0afa1a9af704b11ab758cf4b7b054105a3df8d9c9f75f110de7be1d */
mrb_value
mrb_GLib_GSocketAddressEnumerator_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSocketAddressEnumerator.disown only accepts objects of type GLib::GSocketAddressEnumerator");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketAddressEnumerator::belongs_to_ruby */
/* sha: 904953fb5ec9c2199f69e842ce7d2985742a950d2c8f4caa85f5683a878dfe63 */
mrb_value
mrb_GLib_GSocketAddressEnumerator_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSocketAddressEnumerator.belongs_to_ruby only accepts objects of type GLib::GSocketAddressEnumerator");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GSocketAddressEnumerator_init(mrb_state* mrb) {
  struct RClass* GSocketAddressEnumerator_class = mrb_define_class_under(mrb, GLib_module(mrb), "GSocketAddressEnumerator", mrb->object_class);
  MRB_SET_INSTANCE_TT(GSocketAddressEnumerator_class, MRB_TT_DATA);

#if BIND_GSocketAddressEnumerator_INITIALIZE
  mrb_define_method(mrb, GSocketAddressEnumerator_class, "initialize", mrb_GLib_GSocketAddressEnumerator_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GSocketAddressEnumerator_class, "disown", mrb_GLib_GSocketAddressEnumerator_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GSocketAddressEnumerator_class, "belongs_to_ruby?", mrb_GLib_GSocketAddressEnumerator_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
