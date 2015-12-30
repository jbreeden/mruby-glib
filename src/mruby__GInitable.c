/*
 * struct _GInitable
 * Defined in file giotypes.h @ line 108
 */

#include "mruby_GLib.h"

#if BIND_GInitable_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GInitable::initialize */
/* sha: b6d3feea6529818e9db9b7c5b7c565094d54918dbd40f04b0c8e14542ea65d6c */
#if BIND_GInitable_INITIALIZE
mrb_value
mrb_GLib_GInitable_initialize(mrb_state* mrb, mrb_value self) {
  struct _GInitable* native_object = (struct _GInitable*)calloc(1, sizeof(struct _GInitable));
  mruby_giftwrap__GInitable_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInitable::initialize */
/* sha: ba010d1ebe902e9758edac97fe3ace15d079b8a5c684006719088119df77d2de */
mrb_value
mrb_GLib_GInitable_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GInitable.disown only accepts objects of type GLib::GInitable");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInitable::belongs_to_ruby */
/* sha: 6b642696fd9314bb1e9fbf50877b8ceef7e34988572f30e66237e0254a01b2a6 */
mrb_value
mrb_GLib_GInitable_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GInitable.belongs_to_ruby only accepts objects of type GLib::GInitable");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GInitable_init(mrb_state* mrb) {
  struct RClass* GInitable_class = mrb_define_class_under(mrb, GLib_module(mrb), "GInitable", mrb->object_class);
  MRB_SET_INSTANCE_TT(GInitable_class, MRB_TT_DATA);

#if BIND_GInitable_INITIALIZE
  mrb_define_method(mrb, GInitable_class, "initialize", mrb_GLib_GInitable_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GInitable_class, "disown", mrb_GLib_GInitable_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GInitable_class, "belongs_to_ruby?", mrb_GLib_GInitable_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
