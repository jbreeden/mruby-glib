/*
 * struct _GOutputStream
 * Defined in file giotypes.h @ line 135
 */

#include "mruby_GLib.h"

#if BIND_GOutputStream_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GOutputStream::initialize */
/* sha: 0617f0ab79c0ad96d832ac686ea02745a97bde9d85a51bab74c8b40d629c95ab */
#if BIND_GOutputStream_INITIALIZE
mrb_value
mrb_GLib_GOutputStream_initialize(mrb_state* mrb, mrb_value self) {
  struct _GOutputStream* native_object = (struct _GOutputStream*)calloc(1, sizeof(struct _GOutputStream));
  mruby_giftwrap__GOutputStream_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStream::initialize */
/* sha: 5676427f91d4e7e150fa7ac4ad5c6e704ac847a27c6c364ea6d1f063270859e4 */
mrb_value
mrb_GLib_GOutputStream_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GOutputStream.disown only accepts objects of type GLib::GOutputStream");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStream::belongs_to_ruby */
/* sha: 061c491dc81a81ab5118a5aa3d2d498a0b4c76000fc33d08a9ede2f5ea5aabe0 */
mrb_value
mrb_GLib_GOutputStream_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GOutputStream.belongs_to_ruby only accepts objects of type GLib::GOutputStream");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GOutputStream_init(mrb_state* mrb) {
  struct RClass* GOutputStream_class = mrb_define_class_under(mrb, GLib_module(mrb), "GOutputStream", mrb->object_class);
  MRB_SET_INSTANCE_TT(GOutputStream_class, MRB_TT_DATA);

#if BIND_GOutputStream_INITIALIZE
  mrb_define_method(mrb, GOutputStream_class, "initialize", mrb_GLib_GOutputStream_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GOutputStream_class, "disown", mrb_GLib_GOutputStream_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GOutputStream_class, "belongs_to_ruby?", mrb_GLib_GOutputStream_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
