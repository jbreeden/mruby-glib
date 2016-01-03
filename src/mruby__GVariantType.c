/*
 * struct _GVariantType
 * Defined in file gvarianttype.h @ line 42
 */

#include "mruby_GLib.h"

#if BIND_GVariantType_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GVariantType::initialize */
/* sha: 409238ee6accebdf7e51a56419c225dfd29162adce14863dcdba68016f09ab7b */
#if BIND_GVariantType_INITIALIZE
mrb_value
mrb_GLib_GVariantType_initialize(mrb_state* mrb, mrb_value self) {
  struct _GVariantType* native_object = (struct _GVariantType*)calloc(1, sizeof(struct _GVariantType));
  mruby_giftwrap__GVariantType_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GVariantType::initialize */
/* sha: 4efcf21f156ccfa470c30ccff798b40af68f343e6a8508aba8d3427a84c56e86 */
mrb_value
mrb_GLib_GVariantType_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GVariantType.disown only accepts objects of type GLib::GVariantType");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GVariantType::belongs_to_ruby */
/* sha: 6faa2ea0270933853c1b2136ae44e6ac9898a04771697b92c5ccbf5c5f1ded67 */
mrb_value
mrb_GLib_GVariantType_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GVariantType.belongs_to_ruby only accepts objects of type GLib::GVariantType");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GVariantType_init(mrb_state* mrb) {
/* MRUBY_BINDING: GVariantType::class_definition */
/* sha: 1e56729af33aaa5f13e8efe64c1308a58fde603fda5c0b644ff047d52023eb53 */
  struct RClass* GVariantType_class = mrb_define_class_under(mrb, GLib_module(mrb), "GVariantType", mrb->object_class);
  MRB_SET_INSTANCE_TT(GVariantType_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GVariantType::class_method_definitions */
/* sha: 303935803da605b05e832944a25574e3a90022f251d3658220de5ff241a798d9 */
#if BIND_GVariantType_INITIALIZE
  mrb_define_method(mrb, GVariantType_class, "initialize", mrb_GLib_GVariantType_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GVariantType_class, "disown", mrb_GLib_GVariantType_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GVariantType_class, "belongs_to_ruby?", mrb_GLib_GVariantType_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GVariantType::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GVariantType::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
