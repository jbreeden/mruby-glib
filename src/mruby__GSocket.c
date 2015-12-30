/*
 * struct _GSocket
 * Defined in file giotypes.h @ line 160
 */

#include "mruby_GLib.h"

#if BIND_GSocket_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GSocket::initialize */
/* sha: 677c7f39de51e3b96085f3331e25d8764dcd92fda455b3aec42b26df72784180 */
#if BIND_GSocket_INITIALIZE
mrb_value
mrb_GLib_GSocket_initialize(mrb_state* mrb, mrb_value self) {
  struct _GSocket* native_object = (struct _GSocket*)calloc(1, sizeof(struct _GSocket));
  mruby_giftwrap__GSocket_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocket::initialize */
/* sha: d83aa93f3f35e50d66745c6876cdb368347d97c55d36b18187d1894b8022a00e */
mrb_value
mrb_GLib_GSocket_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSocket.disown only accepts objects of type GLib::GSocket");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocket::belongs_to_ruby */
/* sha: 4c1a486454fba14c86f4404cfd62a6000e83541b2d6dc32373887fba6b38b770 */
mrb_value
mrb_GLib_GSocket_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSocket.belongs_to_ruby only accepts objects of type GLib::GSocket");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GSocket_init(mrb_state* mrb) {
  struct RClass* GSocket_class = mrb_define_class_under(mrb, GLib_module(mrb), "GSocket", mrb->object_class);
  MRB_SET_INSTANCE_TT(GSocket_class, MRB_TT_DATA);

#if BIND_GSocket_INITIALIZE
  mrb_define_method(mrb, GSocket_class, "initialize", mrb_GLib_GSocket_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GSocket_class, "disown", mrb_GLib_GSocket_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GSocket_class, "belongs_to_ruby?", mrb_GLib_GSocket_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
