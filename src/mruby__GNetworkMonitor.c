/*
 * struct _GNetworkMonitor
 * Defined in file giotypes.h @ line 133
 */

#include "mruby_GLib.h"

#if BIND_GNetworkMonitor_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GNetworkMonitor::initialize */
/* sha: 2e8c1cdb0573a3fc1b6f68635587b42227b17377fee39123485950016989316c */
#if BIND_GNetworkMonitor_INITIALIZE
mrb_value
mrb_GLib_GNetworkMonitor_initialize(mrb_state* mrb, mrb_value self) {
  struct _GNetworkMonitor* native_object = (struct _GNetworkMonitor*)calloc(1, sizeof(struct _GNetworkMonitor));
  mruby_giftwrap__GNetworkMonitor_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GNetworkMonitor::initialize */
/* sha: 9476d34e1473494618ba1404b635546fc48ac3809289a36dcc0b0443ddcaa1cf */
mrb_value
mrb_GLib_GNetworkMonitor_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GNetworkMonitor.disown only accepts objects of type GLib::GNetworkMonitor");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GNetworkMonitor::belongs_to_ruby */
/* sha: f9726e5b627e479f49ef52ffd7b9ef34384f37f0417728feb0ce65eafda57459 */
mrb_value
mrb_GLib_GNetworkMonitor_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GNetworkMonitor.belongs_to_ruby only accepts objects of type GLib::GNetworkMonitor");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GNetworkMonitor_init(mrb_state* mrb) {
  struct RClass* GNetworkMonitor_class = mrb_define_class_under(mrb, GLib_module(mrb), "GNetworkMonitor", mrb->object_class);
  MRB_SET_INSTANCE_TT(GNetworkMonitor_class, MRB_TT_DATA);

#if BIND_GNetworkMonitor_INITIALIZE
  mrb_define_method(mrb, GNetworkMonitor_class, "initialize", mrb_GLib_GNetworkMonitor_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GNetworkMonitor_class, "disown", mrb_GLib_GNetworkMonitor_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GNetworkMonitor_class, "belongs_to_ruby?", mrb_GLib_GNetworkMonitor_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
