/*
 * struct _GVolumeMonitor
 * Defined in file giotypes.h @ line 254
 */

#include "mruby_GLib.h"

#if BIND_GVolumeMonitor_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GVolumeMonitor::initialize */
/* sha: 913c1b396a1045b5a7850bb817fd625d5207526ac6fd4ea88b3847a5510d7a33 */
#if BIND_GVolumeMonitor_INITIALIZE
mrb_value
mrb_GLib_GVolumeMonitor_initialize(mrb_state* mrb, mrb_value self) {
  struct _GVolumeMonitor* native_object = (struct _GVolumeMonitor*)calloc(1, sizeof(struct _GVolumeMonitor));
  mruby_giftwrap__GVolumeMonitor_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GVolumeMonitor::initialize */
/* sha: 468e62cb68d84525ac3e1aecce146f16da3c666316b08320e095b1a9f4b165d7 */
mrb_value
mrb_GLib_GVolumeMonitor_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GVolumeMonitor.disown only accepts objects of type GLib::GVolumeMonitor");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GVolumeMonitor::belongs_to_ruby */
/* sha: fe24f363e12d6a4ac8f77437b967611a84d68a2969f51e3037e74a082534ca97 */
mrb_value
mrb_GLib_GVolumeMonitor_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GVolumeMonitor.belongs_to_ruby only accepts objects of type GLib::GVolumeMonitor");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GVolumeMonitor_init(mrb_state* mrb) {
  struct RClass* GVolumeMonitor_class = mrb_define_class_under(mrb, GLib_module(mrb), "GVolumeMonitor", mrb->object_class);
  MRB_SET_INSTANCE_TT(GVolumeMonitor_class, MRB_TT_DATA);

#if BIND_GVolumeMonitor_INITIALIZE
  mrb_define_method(mrb, GVolumeMonitor_class, "initialize", mrb_GLib_GVolumeMonitor_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GVolumeMonitor_class, "disown", mrb_GLib_GVolumeMonitor_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GVolumeMonitor_class, "belongs_to_ruby?", mrb_GLib_GVolumeMonitor_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
