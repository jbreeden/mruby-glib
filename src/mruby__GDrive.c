/*
 * struct _GDrive
 * Defined in file giotypes.h @ line 70
 */

#include "mruby_GLib.h"

#if BIND_GDrive_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GDrive::initialize */
/* sha: 07d7561359a5aafa83f40625c14f7350086e0f8610fcf1e9dc504858d401efd7 */
#if BIND_GDrive_INITIALIZE
mrb_value
mrb_GLib_GDrive_initialize(mrb_state* mrb, mrb_value self) {
  struct _GDrive* native_object = (struct _GDrive*)calloc(1, sizeof(struct _GDrive));
  mruby_giftwrap__GDrive_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDrive::initialize */
/* sha: d1d13de9850895204c8f849c08eabcea6a7574ad911d946b18a01c5ab1f64da1 */
mrb_value
mrb_GLib_GDrive_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDrive.disown only accepts objects of type GLib::GDrive");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDrive::belongs_to_ruby */
/* sha: f8797f90eeccbfaa5950c4b6ac9a5c4c5e2eebf0a310c2ca466e56a04f6e81b1 */
mrb_value
mrb_GLib_GDrive_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDrive.belongs_to_ruby only accepts objects of type GLib::GDrive");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GDrive_init(mrb_state* mrb) {
  struct RClass* GDrive_class = mrb_define_class_under(mrb, GLib_module(mrb), "GDrive", mrb->object_class);
  MRB_SET_INSTANCE_TT(GDrive_class, MRB_TT_DATA);

#if BIND_GDrive_INITIALIZE
  mrb_define_method(mrb, GDrive_class, "initialize", mrb_GLib_GDrive_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GDrive_class, "disown", mrb_GLib_GDrive_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GDrive_class, "belongs_to_ruby?", mrb_GLib_GDrive_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
