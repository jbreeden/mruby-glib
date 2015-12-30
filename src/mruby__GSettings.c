/*
 * struct _GSettings
 * Defined in file giotypes.h @ line 59
 */

#include "mruby_GLib.h"

#if BIND_GSettings_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GSettings::initialize */
/* sha: b72c6a2869cbf97c41aa5e107e138ee046fdd8a406b1cadfee5ee6a5ef0c534a */
#if BIND_GSettings_INITIALIZE
mrb_value
mrb_GLib_GSettings_initialize(mrb_state* mrb, mrb_value self) {
  struct _GSettings* native_object = (struct _GSettings*)calloc(1, sizeof(struct _GSettings));
  mruby_giftwrap__GSettings_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSettings::initialize */
/* sha: 3e15e0810015d33d3d3e5c2a8265af233131ff4a56a6f6211c6789c4b7524bef */
mrb_value
mrb_GLib_GSettings_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSettings.disown only accepts objects of type GLib::GSettings");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSettings::belongs_to_ruby */
/* sha: bf98ce720365affb1db8f4dd12ca4ec5e4c1cf0febafb8481fb2d500be63a40a */
mrb_value
mrb_GLib_GSettings_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSettings.belongs_to_ruby only accepts objects of type GLib::GSettings");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GSettings_init(mrb_state* mrb) {
  struct RClass* GSettings_class = mrb_define_class_under(mrb, GLib_module(mrb), "GSettings", mrb->object_class);
  MRB_SET_INSTANCE_TT(GSettings_class, MRB_TT_DATA);

#if BIND_GSettings_INITIALIZE
  mrb_define_method(mrb, GSettings_class, "initialize", mrb_GLib_GSettings_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GSettings_class, "disown", mrb_GLib_GSettings_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GSettings_class, "belongs_to_ruby?", mrb_GLib_GSettings_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
