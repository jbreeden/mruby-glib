/*
 * struct _GSettingsBackend
 * Defined in file giotypes.h @ line 58
 */

#include "mruby_GLib.h"

#if BIND_GSettingsBackend_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GSettingsBackend::initialize */
/* sha: ab8c551599fd4192b5c5da604fd9e9a37a8dbb86cb0dcca48c56b78ea7f35d02 */
#if BIND_GSettingsBackend_INITIALIZE
mrb_value
mrb_GLib_GSettingsBackend_initialize(mrb_state* mrb, mrb_value self) {
  struct _GSettingsBackend* native_object = (struct _GSettingsBackend*)calloc(1, sizeof(struct _GSettingsBackend));
  mruby_giftwrap__GSettingsBackend_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSettingsBackend::initialize */
/* sha: 818026935981b361d5bf7ae34a60ab3200337a9753283832f48a4fcc37a0eff0 */
mrb_value
mrb_GLib_GSettingsBackend_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSettingsBackend.disown only accepts objects of type GLib::GSettingsBackend");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSettingsBackend::belongs_to_ruby */
/* sha: 65aa07cae4a964f6becb9538648b7889d472b363a17ef609544a3ac24961e196 */
mrb_value
mrb_GLib_GSettingsBackend_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSettingsBackend.belongs_to_ruby only accepts objects of type GLib::GSettingsBackend");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GSettingsBackend_init(mrb_state* mrb) {
  struct RClass* GSettingsBackend_class = mrb_define_class_under(mrb, GLib_module(mrb), "GSettingsBackend", mrb->object_class);
  MRB_SET_INSTANCE_TT(GSettingsBackend_class, MRB_TT_DATA);

#if BIND_GSettingsBackend_INITIALIZE
  mrb_define_method(mrb, GSettingsBackend_class, "initialize", mrb_GLib_GSettingsBackend_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GSettingsBackend_class, "disown", mrb_GLib_GSettingsBackend_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GSettingsBackend_class, "belongs_to_ruby?", mrb_GLib_GSettingsBackend_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
