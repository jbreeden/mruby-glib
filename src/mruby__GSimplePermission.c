/*
 * struct _GSimplePermission
 * Defined in file giotypes.h @ line 44
 */

#include "mruby_GLib.h"

#if BIND_GSimplePermission_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GSimplePermission::initialize */
/* sha: 39576cde5154565a1dc6509d56c892604899bf524edaf3de029cabe8cb68fab4 */
#if BIND_GSimplePermission_INITIALIZE
mrb_value
mrb_GLib_GSimplePermission_initialize(mrb_state* mrb, mrb_value self) {
  struct _GSimplePermission* native_object = (struct _GSimplePermission*)calloc(1, sizeof(struct _GSimplePermission));
  mruby_giftwrap__GSimplePermission_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSimplePermission::initialize */
/* sha: 3c519532f30ab98e720f62cd488be9dad5743ec903b2a30cec5f054fe4092bb8 */
mrb_value
mrb_GLib_GSimplePermission_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSimplePermission.disown only accepts objects of type GLib::GSimplePermission");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSimplePermission::belongs_to_ruby */
/* sha: b1a050def138f81ff5b91a87d9927103c00cd9ab7cfb2d756021118d7bc153e3 */
mrb_value
mrb_GLib_GSimplePermission_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSimplePermission.belongs_to_ruby only accepts objects of type GLib::GSimplePermission");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GSimplePermission_init(mrb_state* mrb) {
  struct RClass* GSimplePermission_class = mrb_define_class_under(mrb, GLib_module(mrb), "GSimplePermission", mrb->object_class);
  MRB_SET_INSTANCE_TT(GSimplePermission_class, MRB_TT_DATA);

#if BIND_GSimplePermission_INITIALIZE
  mrb_define_method(mrb, GSimplePermission_class, "initialize", mrb_GLib_GSimplePermission_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GSimplePermission_class, "disown", mrb_GLib_GSimplePermission_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GSimplePermission_class, "belongs_to_ruby?", mrb_GLib_GSimplePermission_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
