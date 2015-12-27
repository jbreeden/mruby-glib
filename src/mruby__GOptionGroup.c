/*
 * struct _GOptionGroup
 * Defined in file goption.h @ line 51
 */

#include "mruby_GLib.h"

#if BIND_GOptionGroup_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GOptionGroup::initialize */
/* sha: 4cebd48023f44b7fa125b01255f30163adc2acaad54008c99c96b1bb8dd7e495 */
#if BIND_GOptionGroup_INITIALIZE
mrb_value
mrb_GLib_GOptionGroup_initialize(mrb_state* mrb, mrb_value self) {
  struct _GOptionGroup* native_object = (struct _GOptionGroup*)calloc(1, sizeof(struct _GOptionGroup));
  mruby_giftwrap__GOptionGroup_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOptionGroup::initialize */
/* sha: 5634ddb8903faefb0a9b4f77609f1a3332ecc0cb4cb16fbc366ac5d3210cef44 */
mrb_value
mrb_GLib_GOptionGroup_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GOptionGroup.disown only accepts objects of type GLib::GOptionGroup");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOptionGroup::belongs_to_ruby */
/* sha: a9dd0f85459d717bbdb20a8451d7696786412147e85e99a4153ddf59d2aefeac */
mrb_value
mrb_GLib_GOptionGroup_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GOptionGroup.belongs_to_ruby only accepts objects of type GLib::GOptionGroup");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GOptionGroup_init(mrb_state* mrb) {
  struct RClass* GOptionGroup_class = mrb_define_class_under(mrb, GLib_module(mrb), "GOptionGroup", mrb->object_class);
  MRB_SET_INSTANCE_TT(GOptionGroup_class, MRB_TT_DATA);

#if BIND_GOptionGroup_INITIALIZE
  mrb_define_method(mrb, GOptionGroup_class, "initialize", mrb_GLib_GOptionGroup_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GOptionGroup_class, "disown", mrb_GLib_GOptionGroup_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GOptionGroup_class, "belongs_to_ruby?", mrb_GLib_GOptionGroup_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
