/*
 * struct _GAppInfo
 * Defined in file giotypes.h @ line 33
 */

#include "mruby_GLib.h"

#if BIND_GAppInfo_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GAppInfo::initialize */
/* sha: b3253718f04efe5d33e5f725d8fc487dffb4bbd636b72e03021be3e51532770d */
#if BIND_GAppInfo_INITIALIZE
mrb_value
mrb_GLib_GAppInfo_initialize(mrb_state* mrb, mrb_value self) {
  struct _GAppInfo* native_object = (struct _GAppInfo*)calloc(1, sizeof(struct _GAppInfo));
  mruby_giftwrap__GAppInfo_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GAppInfo::initialize */
/* sha: f3de15cc10c97426f53725228b8d7799787af1802a6704746623f730ab722aa1 */
mrb_value
mrb_GLib_GAppInfo_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GAppInfo.disown only accepts objects of type GLib::GAppInfo");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GAppInfo::belongs_to_ruby */
/* sha: bc84b50fca9e44f598c0d72293a80610d6a8212d577efe257d9f02818be46aee */
mrb_value
mrb_GLib_GAppInfo_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GAppInfo.belongs_to_ruby only accepts objects of type GLib::GAppInfo");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GAppInfo_init(mrb_state* mrb) {
  struct RClass* GAppInfo_class = mrb_define_class_under(mrb, GLib_module(mrb), "GAppInfo", mrb->object_class);
  MRB_SET_INSTANCE_TT(GAppInfo_class, MRB_TT_DATA);

#if BIND_GAppInfo_INITIALIZE
  mrb_define_method(mrb, GAppInfo_class, "initialize", mrb_GLib_GAppInfo_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GAppInfo_class, "disown", mrb_GLib_GAppInfo_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GAppInfo_class, "belongs_to_ruby?", mrb_GLib_GAppInfo_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
