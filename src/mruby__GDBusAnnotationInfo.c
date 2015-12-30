/*
 * struct _GDBusAnnotationInfo
 * Defined in file giotypes.h @ line 477
 */

#include "mruby_GLib.h"

#if BIND_GDBusAnnotationInfo_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GDBusAnnotationInfo::initialize */
/* sha: 6ba641d64d0afea118630a2ef916ab317d5912a923c6b258c1e992d815b85ca6 */
#if BIND_GDBusAnnotationInfo_INITIALIZE
mrb_value
mrb_GLib_GDBusAnnotationInfo_initialize(mrb_state* mrb, mrb_value self) {
  struct _GDBusAnnotationInfo* native_object = (struct _GDBusAnnotationInfo*)calloc(1, sizeof(struct _GDBusAnnotationInfo));
  mruby_giftwrap__GDBusAnnotationInfo_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusAnnotationInfo::initialize */
/* sha: a2de9b233784f9d2c9aad192c0cc205d469eb02ec01e979250087c02c3e7a3c2 */
mrb_value
mrb_GLib_GDBusAnnotationInfo_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusAnnotationInfo.disown only accepts objects of type GLib::GDBusAnnotationInfo");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusAnnotationInfo::belongs_to_ruby */
/* sha: 1da4158cb209420eb4095cbaf53353543db208328e479470e01e17d893ab4abc */
mrb_value
mrb_GLib_GDBusAnnotationInfo_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusAnnotationInfo.belongs_to_ruby only accepts objects of type GLib::GDBusAnnotationInfo");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GDBusAnnotationInfo_init(mrb_state* mrb) {
  struct RClass* GDBusAnnotationInfo_class = mrb_define_class_under(mrb, GLib_module(mrb), "GDBusAnnotationInfo", mrb->object_class);
  MRB_SET_INSTANCE_TT(GDBusAnnotationInfo_class, MRB_TT_DATA);

#if BIND_GDBusAnnotationInfo_INITIALIZE
  mrb_define_method(mrb, GDBusAnnotationInfo_class, "initialize", mrb_GLib_GDBusAnnotationInfo_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GDBusAnnotationInfo_class, "disown", mrb_GLib_GDBusAnnotationInfo_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GDBusAnnotationInfo_class, "belongs_to_ruby?", mrb_GLib_GDBusAnnotationInfo_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
