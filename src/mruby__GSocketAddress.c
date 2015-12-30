/*
 * struct _GSocketAddress
 * Defined in file giotypes.h @ line 202
 */

#include "mruby_GLib.h"

#if BIND_GSocketAddress_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GSocketAddress::initialize */
/* sha: 805e389b7d280c3b2c53e6d4642fb717805bfcb2131cc35309f3837765fa0c88 */
#if BIND_GSocketAddress_INITIALIZE
mrb_value
mrb_GLib_GSocketAddress_initialize(mrb_state* mrb, mrb_value self) {
  struct _GSocketAddress* native_object = (struct _GSocketAddress*)calloc(1, sizeof(struct _GSocketAddress));
  mruby_giftwrap__GSocketAddress_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketAddress::initialize */
/* sha: 881fda1ede0abc4fa5260c5ad69ec9b6c4bdd3b8b548d9425211f9eea8dbd098 */
mrb_value
mrb_GLib_GSocketAddress_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSocketAddress.disown only accepts objects of type GLib::GSocketAddress");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketAddress::belongs_to_ruby */
/* sha: 25ad86af6b10788d6bbfc2989c547370a3071988b068e4298de5adffdcf8d7aa */
mrb_value
mrb_GLib_GSocketAddress_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSocketAddress.belongs_to_ruby only accepts objects of type GLib::GSocketAddress");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GSocketAddress_init(mrb_state* mrb) {
  struct RClass* GSocketAddress_class = mrb_define_class_under(mrb, GLib_module(mrb), "GSocketAddress", mrb->object_class);
  MRB_SET_INSTANCE_TT(GSocketAddress_class, MRB_TT_DATA);

#if BIND_GSocketAddress_INITIALIZE
  mrb_define_method(mrb, GSocketAddress_class, "initialize", mrb_GLib_GSocketAddress_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GSocketAddress_class, "disown", mrb_GLib_GSocketAddress_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GSocketAddress_class, "belongs_to_ruby?", mrb_GLib_GSocketAddress_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
