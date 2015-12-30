/*
 * struct _GProxyAddress
 * Defined in file giotypes.h @ line 245
 */

#include "mruby_GLib.h"

#if BIND_GProxyAddress_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GProxyAddress::initialize */
/* sha: 05b33ff53156db304db5ed887a546fb0bf3dc571b88668b8c0c595e92b89de8f */
#if BIND_GProxyAddress_INITIALIZE
mrb_value
mrb_GLib_GProxyAddress_initialize(mrb_state* mrb, mrb_value self) {
  struct _GProxyAddress* native_object = (struct _GProxyAddress*)calloc(1, sizeof(struct _GProxyAddress));
  mruby_giftwrap__GProxyAddress_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GProxyAddress::initialize */
/* sha: 8a9519d728ea862e6d3d7cd661de36ec5cd03d8f7432982c75aa6fb2a8b472bd */
mrb_value
mrb_GLib_GProxyAddress_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GProxyAddress.disown only accepts objects of type GLib::GProxyAddress");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GProxyAddress::belongs_to_ruby */
/* sha: 6de214bdb2205fb08e809df1c8c2c102937e6cf1bd2529bf73316ce2fb0dab59 */
mrb_value
mrb_GLib_GProxyAddress_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GProxyAddress.belongs_to_ruby only accepts objects of type GLib::GProxyAddress");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GProxyAddress_init(mrb_state* mrb) {
  struct RClass* GProxyAddress_class = mrb_define_class_under(mrb, GLib_module(mrb), "GProxyAddress", mrb->object_class);
  MRB_SET_INSTANCE_TT(GProxyAddress_class, MRB_TT_DATA);

#if BIND_GProxyAddress_INITIALIZE
  mrb_define_method(mrb, GProxyAddress_class, "initialize", mrb_GLib_GProxyAddress_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GProxyAddress_class, "disown", mrb_GLib_GProxyAddress_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GProxyAddress_class, "belongs_to_ruby?", mrb_GLib_GProxyAddress_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
