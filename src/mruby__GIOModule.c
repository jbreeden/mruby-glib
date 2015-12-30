/*
 * struct _GIOModule
 * Defined in file giotypes.h @ line 109
 */

#include "mruby_GLib.h"

#if BIND_GIOModule_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GIOModule::initialize */
/* sha: d9f3b828126eca8d976883e26d7c09f8ad07b63f4ec9f068668930b3507a95b5 */
#if BIND_GIOModule_INITIALIZE
mrb_value
mrb_GLib_GIOModule_initialize(mrb_state* mrb, mrb_value self) {
  struct _GIOModule* native_object = (struct _GIOModule*)calloc(1, sizeof(struct _GIOModule));
  mruby_giftwrap__GIOModule_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOModule::initialize */
/* sha: 61a5a0577d3a24cd61981e7bd56c6281ae87069375b0898319418d87d6463bdb */
mrb_value
mrb_GLib_GIOModule_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GIOModule.disown only accepts objects of type GLib::GIOModule");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOModule::belongs_to_ruby */
/* sha: 4cab68c7e41491e30143b3ad897dfb25f46d4b7d6026e716732a7ed44fd9d7f0 */
mrb_value
mrb_GLib_GIOModule_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GIOModule.belongs_to_ruby only accepts objects of type GLib::GIOModule");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GIOModule_init(mrb_state* mrb) {
  struct RClass* GIOModule_class = mrb_define_class_under(mrb, GLib_module(mrb), "GIOModule", mrb->object_class);
  MRB_SET_INSTANCE_TT(GIOModule_class, MRB_TT_DATA);

#if BIND_GIOModule_INITIALIZE
  mrb_define_method(mrb, GIOModule_class, "initialize", mrb_GLib_GIOModule_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GIOModule_class, "disown", mrb_GLib_GIOModule_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GIOModule_class, "belongs_to_ruby?", mrb_GLib_GIOModule_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
