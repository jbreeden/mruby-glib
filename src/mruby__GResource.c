/*
 * struct _GResource
 * Defined in file giotypes.h @ line 149
 */

#include "mruby_GLib.h"

#if BIND_GResource_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GResource::initialize */
/* sha: 402d735b70d812b4c17a09a887bf7e4ae897e761944fb6b304bcecd6603f1482 */
#if BIND_GResource_INITIALIZE
mrb_value
mrb_GLib_GResource_initialize(mrb_state* mrb, mrb_value self) {
  struct _GResource* native_object = (struct _GResource*)calloc(1, sizeof(struct _GResource));
  mruby_giftwrap__GResource_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GResource::initialize */
/* sha: 1c5cbb3d0cb5fe7d81ed7b0f3fb727734e2a5f17a98555a488724036337fd666 */
mrb_value
mrb_GLib_GResource_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GResource.disown only accepts objects of type GLib::GResource");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GResource::belongs_to_ruby */
/* sha: 8d1a105dd3ec63c75990f5d305cbf2ed4f24fc899103b10b678cf79551bf2a71 */
mrb_value
mrb_GLib_GResource_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GResource.belongs_to_ruby only accepts objects of type GLib::GResource");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GResource_init(mrb_state* mrb) {
  struct RClass* GResource_class = mrb_define_class_under(mrb, GLib_module(mrb), "GResource", mrb->object_class);
  MRB_SET_INSTANCE_TT(GResource_class, MRB_TT_DATA);

#if BIND_GResource_INITIALIZE
  mrb_define_method(mrb, GResource_class, "initialize", mrb_GLib_GResource_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GResource_class, "disown", mrb_GLib_GResource_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GResource_class, "belongs_to_ruby?", mrb_GLib_GResource_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
