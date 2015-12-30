/*
 * struct _GFileMonitor
 * Defined in file giotypes.h @ line 72
 */

#include "mruby_GLib.h"

#if BIND_GFileMonitor_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GFileMonitor::initialize */
/* sha: c1ca0a2bc824b0096a404940d43817db4bfd076849989f473aa0e8e55a1eb3cc */
#if BIND_GFileMonitor_INITIALIZE
mrb_value
mrb_GLib_GFileMonitor_initialize(mrb_state* mrb, mrb_value self) {
  struct _GFileMonitor* native_object = (struct _GFileMonitor*)calloc(1, sizeof(struct _GFileMonitor));
  mruby_giftwrap__GFileMonitor_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileMonitor::initialize */
/* sha: 3b0fe30d0cf333fd01d020c7aa147f55a55345e45138fc829fe762dad72ee661 */
mrb_value
mrb_GLib_GFileMonitor_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GFileMonitor.disown only accepts objects of type GLib::GFileMonitor");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileMonitor::belongs_to_ruby */
/* sha: c934107f9842c7b72c9c07894a3534b540b458815d667297d2956e9eddba7878 */
mrb_value
mrb_GLib_GFileMonitor_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GFileMonitor.belongs_to_ruby only accepts objects of type GLib::GFileMonitor");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GFileMonitor_init(mrb_state* mrb) {
  struct RClass* GFileMonitor_class = mrb_define_class_under(mrb, GLib_module(mrb), "GFileMonitor", mrb->object_class);
  MRB_SET_INSTANCE_TT(GFileMonitor_class, MRB_TT_DATA);

#if BIND_GFileMonitor_INITIALIZE
  mrb_define_method(mrb, GFileMonitor_class, "initialize", mrb_GLib_GFileMonitor_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GFileMonitor_class, "disown", mrb_GLib_GFileMonitor_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GFileMonitor_class, "belongs_to_ruby?", mrb_GLib_GFileMonitor_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
