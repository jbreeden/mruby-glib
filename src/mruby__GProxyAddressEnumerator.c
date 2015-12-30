/*
 * struct _GProxyAddressEnumerator
 * Defined in file giotypes.h @ line 246
 */

#include "mruby_GLib.h"

#if BIND_GProxyAddressEnumerator_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GProxyAddressEnumerator::initialize */
/* sha: c32960b847374e07e3e31557e1c4c591876e5f62aaa5dcf194ac20f9a350ddeb */
#if BIND_GProxyAddressEnumerator_INITIALIZE
mrb_value
mrb_GLib_GProxyAddressEnumerator_initialize(mrb_state* mrb, mrb_value self) {
  struct _GProxyAddressEnumerator* native_object = (struct _GProxyAddressEnumerator*)calloc(1, sizeof(struct _GProxyAddressEnumerator));
  mruby_giftwrap__GProxyAddressEnumerator_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GProxyAddressEnumerator::initialize */
/* sha: 6dddcc26291d0c0dc40da0df2bc9bb2ea2d36a760c27b53dbe4438cbcbd43e54 */
mrb_value
mrb_GLib_GProxyAddressEnumerator_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GProxyAddressEnumerator.disown only accepts objects of type GLib::GProxyAddressEnumerator");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GProxyAddressEnumerator::belongs_to_ruby */
/* sha: d66f19f6eba302b97869c6d3e12f5ffaf005a53f533e9ae8f606d547e5328c0a */
mrb_value
mrb_GLib_GProxyAddressEnumerator_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GProxyAddressEnumerator.belongs_to_ruby only accepts objects of type GLib::GProxyAddressEnumerator");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GProxyAddressEnumerator_init(mrb_state* mrb) {
  struct RClass* GProxyAddressEnumerator_class = mrb_define_class_under(mrb, GLib_module(mrb), "GProxyAddressEnumerator", mrb->object_class);
  MRB_SET_INSTANCE_TT(GProxyAddressEnumerator_class, MRB_TT_DATA);

#if BIND_GProxyAddressEnumerator_INITIALIZE
  mrb_define_method(mrb, GProxyAddressEnumerator_class, "initialize", mrb_GLib_GProxyAddressEnumerator_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GProxyAddressEnumerator_class, "disown", mrb_GLib_GProxyAddressEnumerator_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GProxyAddressEnumerator_class, "belongs_to_ruby?", mrb_GLib_GProxyAddressEnumerator_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
