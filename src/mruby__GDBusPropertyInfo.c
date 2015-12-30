/*
 * struct _GDBusPropertyInfo
 * Defined in file giotypes.h @ line 481
 */

#include "mruby_GLib.h"

#if BIND_GDBusPropertyInfo_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GDBusPropertyInfo::initialize */
/* sha: 3a3d9bcefaaae56dac515fe4b88ccd4de0db537ede1b356634245eef0dca20ce */
#if BIND_GDBusPropertyInfo_INITIALIZE
mrb_value
mrb_GLib_GDBusPropertyInfo_initialize(mrb_state* mrb, mrb_value self) {
  struct _GDBusPropertyInfo* native_object = (struct _GDBusPropertyInfo*)calloc(1, sizeof(struct _GDBusPropertyInfo));
  mruby_giftwrap__GDBusPropertyInfo_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusPropertyInfo::initialize */
/* sha: 53ee530a7f3e43be896fa9eb0ff6505e750ead1fbc12769e1da7aad95e5dc4cf */
mrb_value
mrb_GLib_GDBusPropertyInfo_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusPropertyInfo.disown only accepts objects of type GLib::GDBusPropertyInfo");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusPropertyInfo::belongs_to_ruby */
/* sha: c08d5656179e632de29833ef19bef505ddbdffcc21ba62df7f2c96bef4dab0f1 */
mrb_value
mrb_GLib_GDBusPropertyInfo_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusPropertyInfo.belongs_to_ruby only accepts objects of type GLib::GDBusPropertyInfo");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GDBusPropertyInfo_init(mrb_state* mrb) {
  struct RClass* GDBusPropertyInfo_class = mrb_define_class_under(mrb, GLib_module(mrb), "GDBusPropertyInfo", mrb->object_class);
  MRB_SET_INSTANCE_TT(GDBusPropertyInfo_class, MRB_TT_DATA);

#if BIND_GDBusPropertyInfo_INITIALIZE
  mrb_define_method(mrb, GDBusPropertyInfo_class, "initialize", mrb_GLib_GDBusPropertyInfo_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GDBusPropertyInfo_class, "disown", mrb_GLib_GDBusPropertyInfo_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GDBusPropertyInfo_class, "belongs_to_ruby?", mrb_GLib_GDBusPropertyInfo_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
