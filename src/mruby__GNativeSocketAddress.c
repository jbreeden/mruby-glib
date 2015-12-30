/*
 * struct _GNativeSocketAddress
 * Defined in file giotypes.h @ line 106
 */

#include "mruby_GLib.h"

#if BIND_GNativeSocketAddress_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GNativeSocketAddress::initialize */
/* sha: 1b470e96f5741be3785148798e885057a34ad3614f3877038635c087d29864db */
#if BIND_GNativeSocketAddress_INITIALIZE
mrb_value
mrb_GLib_GNativeSocketAddress_initialize(mrb_state* mrb, mrb_value self) {
  struct _GNativeSocketAddress* native_object = (struct _GNativeSocketAddress*)calloc(1, sizeof(struct _GNativeSocketAddress));
  mruby_giftwrap__GNativeSocketAddress_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GNativeSocketAddress::initialize */
/* sha: c0b9d8b69cdf69e38b8a4fec44855627e91a888f6fc77c387a13f6ca23c9ee1b */
mrb_value
mrb_GLib_GNativeSocketAddress_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GNativeSocketAddress.disown only accepts objects of type GLib::GNativeSocketAddress");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GNativeSocketAddress::belongs_to_ruby */
/* sha: 2bbaa26758db1ba589e7ec8d03055dc585ca2a990fc51db8288df1c422a705e3 */
mrb_value
mrb_GLib_GNativeSocketAddress_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GNativeSocketAddress.belongs_to_ruby only accepts objects of type GLib::GNativeSocketAddress");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GNativeSocketAddress_init(mrb_state* mrb) {
  struct RClass* GNativeSocketAddress_class = mrb_define_class_under(mrb, GLib_module(mrb), "GNativeSocketAddress", mrb->object_class);
  MRB_SET_INSTANCE_TT(GNativeSocketAddress_class, MRB_TT_DATA);

#if BIND_GNativeSocketAddress_INITIALIZE
  mrb_define_method(mrb, GNativeSocketAddress_class, "initialize", mrb_GLib_GNativeSocketAddress_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GNativeSocketAddress_class, "disown", mrb_GLib_GNativeSocketAddress_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GNativeSocketAddress_class, "belongs_to_ruby?", mrb_GLib_GNativeSocketAddress_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
