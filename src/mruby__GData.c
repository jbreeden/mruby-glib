/*
 * struct _GData
 * Defined in file gdataset.h @ line 36
 */

#include "mruby_GLib.h"

#if BIND_GData_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GData::initialize */
/* sha: ef43a7b715fe1ddedca15ecf2f97eb0085a40b86e15c88bcec0a71b532beadee */
#if BIND_GData_INITIALIZE
mrb_value
mrb_GLib_GData_initialize(mrb_state* mrb, mrb_value self) {
  struct _GData* native_object = (struct _GData*)calloc(1, sizeof(struct _GData));
  mruby_giftwrap__GData_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GData::initialize */
/* sha: 96c4bb9c6cdc028b863e86fc93da719a8fe3a4275ac54e501214703cf4840d43 */
mrb_value
mrb_GLib_GData_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GData.disown only accepts objects of type GLib::GData");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GData::belongs_to_ruby */
/* sha: ad22e5d04e62760f5f4c0a1fc2f8d7bc9ad6415d13ec4e37a5eb9670ec0c29d0 */
mrb_value
mrb_GLib_GData_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GData.belongs_to_ruby only accepts objects of type GLib::GData");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GData_init(mrb_state* mrb) {
/* MRUBY_BINDING: GData::class_definition */
/* sha: 70628c22298982a862d079ddaaca71abda9d0d9a346e49d3b8ad56020bd8654c */
  struct RClass* GData_class = mrb_define_class_under(mrb, GLib_module(mrb), "GData", mrb->object_class);
  MRB_SET_INSTANCE_TT(GData_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GData::class_method_definitions */
/* sha: 1c35e30d6ea7f13227f17c0306b554dc4fc9f557736857755a310baaeb0642fc */
#if BIND_GData_INITIALIZE
  mrb_define_method(mrb, GData_class, "initialize", mrb_GLib_GData_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GData_class, "disown", mrb_GLib_GData_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GData_class, "belongs_to_ruby?", mrb_GLib_GData_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GData::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GData::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
