/*
 * struct _GDBusMethodInfo
 * Defined in file giotypes.h @ line 479
 */

#include "mruby_GLib.h"

#if BIND_GDBusMethodInfo_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GDBusMethodInfo::initialize */
/* sha: 6471602a271fa6ae7ba22b4072914a3aeecaff7c4352ea2772ed4acc96a2e5b7 */
#if BIND_GDBusMethodInfo_INITIALIZE
mrb_value
mrb_GLib_GDBusMethodInfo_initialize(mrb_state* mrb, mrb_value self) {
  struct _GDBusMethodInfo* native_object = (struct _GDBusMethodInfo*)calloc(1, sizeof(struct _GDBusMethodInfo));
  mruby_giftwrap__GDBusMethodInfo_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusMethodInfo::initialize */
/* sha: 98e8c601282cca9e042e231ee077943f037998e8738414d8792f5e7aa9f74d02 */
mrb_value
mrb_GLib_GDBusMethodInfo_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusMethodInfo.disown only accepts objects of type GLib::GDBusMethodInfo");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusMethodInfo::belongs_to_ruby */
/* sha: 1e7794f4020a97a8cbf23ec7ad2571499809c35eb7d1f345c557a3cd8817309e */
mrb_value
mrb_GLib_GDBusMethodInfo_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusMethodInfo.belongs_to_ruby only accepts objects of type GLib::GDBusMethodInfo");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GDBusMethodInfo_init(mrb_state* mrb) {
  struct RClass* GDBusMethodInfo_class = mrb_define_class_under(mrb, GLib_module(mrb), "GDBusMethodInfo", mrb->object_class);
  MRB_SET_INSTANCE_TT(GDBusMethodInfo_class, MRB_TT_DATA);

#if BIND_GDBusMethodInfo_INITIALIZE
  mrb_define_method(mrb, GDBusMethodInfo_class, "initialize", mrb_GLib_GDBusMethodInfo_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GDBusMethodInfo_class, "disown", mrb_GLib_GDBusMethodInfo_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GDBusMethodInfo_class, "belongs_to_ruby?", mrb_GLib_GDBusMethodInfo_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
