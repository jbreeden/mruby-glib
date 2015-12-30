/*
 * struct _GLoadableIcon
 * Defined in file giotypes.h @ line 120
 */

#include "mruby_GLib.h"

#if BIND_GLoadableIcon_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GLoadableIcon::initialize */
/* sha: deaccc9c7ebe7be89118ac117c352e4136a02653b22094e1675fd5f7f27898f0 */
#if BIND_GLoadableIcon_INITIALIZE
mrb_value
mrb_GLib_GLoadableIcon_initialize(mrb_state* mrb, mrb_value self) {
  struct _GLoadableIcon* native_object = (struct _GLoadableIcon*)calloc(1, sizeof(struct _GLoadableIcon));
  mruby_giftwrap__GLoadableIcon_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GLoadableIcon::initialize */
/* sha: 25a3831f6206844b5bc0eee480d0ed58d94b6a6a3f3fc552839ceea9d8aa409f */
mrb_value
mrb_GLib_GLoadableIcon_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GLoadableIcon.disown only accepts objects of type GLib::GLoadableIcon");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GLoadableIcon::belongs_to_ruby */
/* sha: dc5d6fcbb9ab7e867b235a8b53fd0bdbc17a72304f15810c69651b03c4205ec8 */
mrb_value
mrb_GLib_GLoadableIcon_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GLoadableIcon.belongs_to_ruby only accepts objects of type GLib::GLoadableIcon");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GLoadableIcon_init(mrb_state* mrb) {
  struct RClass* GLoadableIcon_class = mrb_define_class_under(mrb, GLib_module(mrb), "GLoadableIcon", mrb->object_class);
  MRB_SET_INSTANCE_TT(GLoadableIcon_class, MRB_TT_DATA);

#if BIND_GLoadableIcon_INITIALIZE
  mrb_define_method(mrb, GLoadableIcon_class, "initialize", mrb_GLib_GLoadableIcon_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GLoadableIcon_class, "disown", mrb_GLib_GLoadableIcon_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GLoadableIcon_class, "belongs_to_ruby?", mrb_GLib_GLoadableIcon_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
