/*
 * struct _GPermission
 * Defined in file giotypes.h @ line 60
 */

#include "mruby_GLib.h"

#if BIND_GPermission_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GPermission::initialize */
/* sha: 9ffe5b1d8ed586b065759a2c10bb64640ed7235c89bc03fdb142677535c58e98 */
#if BIND_GPermission_INITIALIZE
mrb_value
mrb_GLib_GPermission_initialize(mrb_state* mrb, mrb_value self) {
  struct _GPermission* native_object = (struct _GPermission*)calloc(1, sizeof(struct _GPermission));
  mruby_giftwrap__GPermission_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GPermission::initialize */
/* sha: e1a1d392646b8e3fb9650edcdae333f66c2e4845fbfdcadb41a02f6d768df41b */
mrb_value
mrb_GLib_GPermission_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GPermission.disown only accepts objects of type GLib::GPermission");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GPermission::belongs_to_ruby */
/* sha: d2491399cbac6431f1c94894e849b9210d586b81ed447ccca2d73ea25d88fb79 */
mrb_value
mrb_GLib_GPermission_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GPermission.belongs_to_ruby only accepts objects of type GLib::GPermission");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GPermission_init(mrb_state* mrb) {
  struct RClass* GPermission_class = mrb_define_class_under(mrb, GLib_module(mrb), "GPermission", mrb->object_class);
  MRB_SET_INSTANCE_TT(GPermission_class, MRB_TT_DATA);

#if BIND_GPermission_INITIALIZE
  mrb_define_method(mrb, GPermission_class, "initialize", mrb_GLib_GPermission_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GPermission_class, "disown", mrb_GLib_GPermission_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GPermission_class, "belongs_to_ruby?", mrb_GLib_GPermission_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
