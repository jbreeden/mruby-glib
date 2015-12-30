/*
 * struct _GInetSocketAddress
 * Defined in file giotypes.h @ line 105
 */

#include "mruby_GLib.h"

#if BIND_GInetSocketAddress_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GInetSocketAddress::initialize */
/* sha: 3c1f471425c751b98a370852972ba448b9fa1e0c153d3a54c7db947b4e0c1c02 */
#if BIND_GInetSocketAddress_INITIALIZE
mrb_value
mrb_GLib_GInetSocketAddress_initialize(mrb_state* mrb, mrb_value self) {
  struct _GInetSocketAddress* native_object = (struct _GInetSocketAddress*)calloc(1, sizeof(struct _GInetSocketAddress));
  mruby_giftwrap__GInetSocketAddress_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetSocketAddress::initialize */
/* sha: af47d0778c8772745e40eeb494443cfb264ac98a16ddcf8f4bf72653297954ea */
mrb_value
mrb_GLib_GInetSocketAddress_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GInetSocketAddress.disown only accepts objects of type GLib::GInetSocketAddress");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetSocketAddress::belongs_to_ruby */
/* sha: 110c97e8db21ff28c59439f8688b6395efa5ac08f13821f2c4a9d1ffa7e9d202 */
mrb_value
mrb_GLib_GInetSocketAddress_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GInetSocketAddress.belongs_to_ruby only accepts objects of type GLib::GInetSocketAddress");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GInetSocketAddress_init(mrb_state* mrb) {
  struct RClass* GInetSocketAddress_class = mrb_define_class_under(mrb, GLib_module(mrb), "GInetSocketAddress", mrb->object_class);
  MRB_SET_INSTANCE_TT(GInetSocketAddress_class, MRB_TT_DATA);

#if BIND_GInetSocketAddress_INITIALIZE
  mrb_define_method(mrb, GInetSocketAddress_class, "initialize", mrb_GLib_GInetSocketAddress_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GInetSocketAddress_class, "disown", mrb_GLib_GInetSocketAddress_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GInetSocketAddress_class, "belongs_to_ruby?", mrb_GLib_GInetSocketAddress_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
