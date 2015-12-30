/*
 * struct _GDBusArgInfo
 * Defined in file giotypes.h @ line 478
 */

#include "mruby_GLib.h"

#if BIND_GDBusArgInfo_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GDBusArgInfo::initialize */
/* sha: f5e4a11dca51d3c02d98cbf6c32d6579587b7aa878bbecb63a3ce563a89fbed8 */
#if BIND_GDBusArgInfo_INITIALIZE
mrb_value
mrb_GLib_GDBusArgInfo_initialize(mrb_state* mrb, mrb_value self) {
  struct _GDBusArgInfo* native_object = (struct _GDBusArgInfo*)calloc(1, sizeof(struct _GDBusArgInfo));
  mruby_giftwrap__GDBusArgInfo_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusArgInfo::initialize */
/* sha: b14a03913766f1b9fde26fd303c02165f75421392637c21febdd475ba6143a01 */
mrb_value
mrb_GLib_GDBusArgInfo_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusArgInfo.disown only accepts objects of type GLib::GDBusArgInfo");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusArgInfo::belongs_to_ruby */
/* sha: faaf0acd0e6e3717bba56382c45ef22c4e373c1abf5dbea2814d489760bfde58 */
mrb_value
mrb_GLib_GDBusArgInfo_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusArgInfo.belongs_to_ruby only accepts objects of type GLib::GDBusArgInfo");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GDBusArgInfo_init(mrb_state* mrb) {
  struct RClass* GDBusArgInfo_class = mrb_define_class_under(mrb, GLib_module(mrb), "GDBusArgInfo", mrb->object_class);
  MRB_SET_INSTANCE_TT(GDBusArgInfo_class, MRB_TT_DATA);

#if BIND_GDBusArgInfo_INITIALIZE
  mrb_define_method(mrb, GDBusArgInfo_class, "initialize", mrb_GLib_GDBusArgInfo_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GDBusArgInfo_class, "disown", mrb_GLib_GDBusArgInfo_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GDBusArgInfo_class, "belongs_to_ruby?", mrb_GLib_GDBusArgInfo_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
