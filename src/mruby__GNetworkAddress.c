/*
 * struct _GNetworkAddress
 * Defined in file giotypes.h @ line 132
 */

#include "mruby_GLib.h"

#if BIND_GNetworkAddress_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GNetworkAddress::initialize */
/* sha: 6175fc5b95bd5045cae3b4d56e06e838dfe1ed2c0517c184a52e126fba096316 */
#if BIND_GNetworkAddress_INITIALIZE
mrb_value
mrb_GLib_GNetworkAddress_initialize(mrb_state* mrb, mrb_value self) {
  struct _GNetworkAddress* native_object = (struct _GNetworkAddress*)calloc(1, sizeof(struct _GNetworkAddress));
  mruby_giftwrap__GNetworkAddress_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GNetworkAddress::initialize */
/* sha: 7ed319c20ba2c8da886251153739953fa0e0f3f9ddc8dc905b94086f8a9bcc89 */
mrb_value
mrb_GLib_GNetworkAddress_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GNetworkAddress.disown only accepts objects of type GLib::GNetworkAddress");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GNetworkAddress::belongs_to_ruby */
/* sha: 50f191a7af12c2d072e1a141b1d6ab17540d8620796b727ccf20c4835bbb162b */
mrb_value
mrb_GLib_GNetworkAddress_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GNetworkAddress.belongs_to_ruby only accepts objects of type GLib::GNetworkAddress");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GNetworkAddress_init(mrb_state* mrb) {
  struct RClass* GNetworkAddress_class = mrb_define_class_under(mrb, GLib_module(mrb), "GNetworkAddress", mrb->object_class);
  MRB_SET_INSTANCE_TT(GNetworkAddress_class, MRB_TT_DATA);

#if BIND_GNetworkAddress_INITIALIZE
  mrb_define_method(mrb, GNetworkAddress_class, "initialize", mrb_GLib_GNetworkAddress_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GNetworkAddress_class, "disown", mrb_GLib_GNetworkAddress_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GNetworkAddress_class, "belongs_to_ruby?", mrb_GLib_GNetworkAddress_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
