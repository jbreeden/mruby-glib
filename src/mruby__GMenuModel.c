/*
 * struct _GMenuModel
 * Defined in file giotypes.h @ line 62
 */

#include "mruby_GLib.h"

#if BIND_GMenuModel_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GMenuModel::initialize */
/* sha: c69255cd482c131199fd7a56f691a44790ba94d229d5ad7b637b14284f9d5059 */
#if BIND_GMenuModel_INITIALIZE
mrb_value
mrb_GLib_GMenuModel_initialize(mrb_state* mrb, mrb_value self) {
  struct _GMenuModel* native_object = (struct _GMenuModel*)calloc(1, sizeof(struct _GMenuModel));
  mruby_giftwrap__GMenuModel_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMenuModel::initialize */
/* sha: 1753eed6dad06083de36090cda93dba53eac8c5884e2007f4787ac51ccd6bb6a */
mrb_value
mrb_GLib_GMenuModel_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GMenuModel.disown only accepts objects of type GLib::GMenuModel");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMenuModel::belongs_to_ruby */
/* sha: e245447c1068de16d4c4523e709f4c967b449b0163f1a3ffe25540d17715f2d7 */
mrb_value
mrb_GLib_GMenuModel_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GMenuModel.belongs_to_ruby only accepts objects of type GLib::GMenuModel");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GMenuModel_init(mrb_state* mrb) {
  struct RClass* GMenuModel_class = mrb_define_class_under(mrb, GLib_module(mrb), "GMenuModel", mrb->object_class);
  MRB_SET_INSTANCE_TT(GMenuModel_class, MRB_TT_DATA);

#if BIND_GMenuModel_INITIALIZE
  mrb_define_method(mrb, GMenuModel_class, "initialize", mrb_GLib_GMenuModel_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GMenuModel_class, "disown", mrb_GLib_GMenuModel_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GMenuModel_class, "belongs_to_ruby?", mrb_GLib_GMenuModel_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
