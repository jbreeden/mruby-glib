/*
 * struct _GDBusMethodInvocation
 * Defined in file giotypes.h @ line 471
 */

#include "mruby_GLib.h"

#if BIND_GDBusMethodInvocation_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GDBusMethodInvocation::initialize */
/* sha: bfbd98ac74bf482a691ad83db10a7f9557168b23e7884d8d64348518c5c3c0ab */
#if BIND_GDBusMethodInvocation_INITIALIZE
mrb_value
mrb_GLib_GDBusMethodInvocation_initialize(mrb_state* mrb, mrb_value self) {
  struct _GDBusMethodInvocation* native_object = (struct _GDBusMethodInvocation*)calloc(1, sizeof(struct _GDBusMethodInvocation));
  mruby_giftwrap__GDBusMethodInvocation_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusMethodInvocation::initialize */
/* sha: 9c8b35ff86311e35555e468bd1e590a2b2d3d7f47a14c2f612a0942a14fd9b4d */
mrb_value
mrb_GLib_GDBusMethodInvocation_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusMethodInvocation.disown only accepts objects of type GLib::GDBusMethodInvocation");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusMethodInvocation::belongs_to_ruby */
/* sha: 77b14f7347c36c0fc937d38cedd91d28e0020f796a04b7084e4ba27829533269 */
mrb_value
mrb_GLib_GDBusMethodInvocation_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusMethodInvocation.belongs_to_ruby only accepts objects of type GLib::GDBusMethodInvocation");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GDBusMethodInvocation_init(mrb_state* mrb) {
  struct RClass* GDBusMethodInvocation_class = mrb_define_class_under(mrb, GLib_module(mrb), "GDBusMethodInvocation", mrb->object_class);
  MRB_SET_INSTANCE_TT(GDBusMethodInvocation_class, MRB_TT_DATA);

#if BIND_GDBusMethodInvocation_INITIALIZE
  mrb_define_method(mrb, GDBusMethodInvocation_class, "initialize", mrb_GLib_GDBusMethodInvocation_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GDBusMethodInvocation_class, "disown", mrb_GLib_GDBusMethodInvocation_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GDBusMethodInvocation_class, "belongs_to_ruby?", mrb_GLib_GDBusMethodInvocation_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
