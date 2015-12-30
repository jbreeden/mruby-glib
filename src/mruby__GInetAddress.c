/*
 * struct _GInetAddress
 * Defined in file giotypes.h @ line 103
 */

#include "mruby_GLib.h"

#if BIND_GInetAddress_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GInetAddress::initialize */
/* sha: 736e28bf2ae862a70ec6e8270305b947f05ee9faf165dd5ca4f53b0bd1ac99d1 */
#if BIND_GInetAddress_INITIALIZE
mrb_value
mrb_GLib_GInetAddress_initialize(mrb_state* mrb, mrb_value self) {
  struct _GInetAddress* native_object = (struct _GInetAddress*)calloc(1, sizeof(struct _GInetAddress));
  mruby_giftwrap__GInetAddress_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetAddress::initialize */
/* sha: 4b351c030eca3406de0bb03e2994a24240f3a05f90ff6998a36768cb13c085fb */
mrb_value
mrb_GLib_GInetAddress_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GInetAddress.disown only accepts objects of type GLib::GInetAddress");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetAddress::belongs_to_ruby */
/* sha: 77ac848d35c2dc18e7b7e032b757d7b3af88542ef9c44d72427b59cc02f03762 */
mrb_value
mrb_GLib_GInetAddress_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GInetAddress.belongs_to_ruby only accepts objects of type GLib::GInetAddress");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GInetAddress_init(mrb_state* mrb) {
  struct RClass* GInetAddress_class = mrb_define_class_under(mrb, GLib_module(mrb), "GInetAddress", mrb->object_class);
  MRB_SET_INSTANCE_TT(GInetAddress_class, MRB_TT_DATA);

#if BIND_GInetAddress_INITIALIZE
  mrb_define_method(mrb, GInetAddress_class, "initialize", mrb_GLib_GInetAddress_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GInetAddress_class, "disown", mrb_GLib_GInetAddress_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GInetAddress_class, "belongs_to_ruby?", mrb_GLib_GInetAddress_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
