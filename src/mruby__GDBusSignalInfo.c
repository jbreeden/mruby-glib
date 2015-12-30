/*
 * struct _GDBusSignalInfo
 * Defined in file giotypes.h @ line 480
 */

#include "mruby_GLib.h"

#if BIND_GDBusSignalInfo_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GDBusSignalInfo::initialize */
/* sha: 3697f9f5d68da585dc9529290ab3056a974f4797f1f884436a9a16716fdaca3d */
#if BIND_GDBusSignalInfo_INITIALIZE
mrb_value
mrb_GLib_GDBusSignalInfo_initialize(mrb_state* mrb, mrb_value self) {
  struct _GDBusSignalInfo* native_object = (struct _GDBusSignalInfo*)calloc(1, sizeof(struct _GDBusSignalInfo));
  mruby_giftwrap__GDBusSignalInfo_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusSignalInfo::initialize */
/* sha: b5165b6247e0d89f1fb098773fedb17294d312f9c8b8bdbf49dc5c0558d4ef77 */
mrb_value
mrb_GLib_GDBusSignalInfo_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusSignalInfo.disown only accepts objects of type GLib::GDBusSignalInfo");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusSignalInfo::belongs_to_ruby */
/* sha: 72832dfb9937df8d0a7bb863f9fa7d4f7b7fa8926160700a05d2d7fecf9a602a */
mrb_value
mrb_GLib_GDBusSignalInfo_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusSignalInfo.belongs_to_ruby only accepts objects of type GLib::GDBusSignalInfo");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GDBusSignalInfo_init(mrb_state* mrb) {
  struct RClass* GDBusSignalInfo_class = mrb_define_class_under(mrb, GLib_module(mrb), "GDBusSignalInfo", mrb->object_class);
  MRB_SET_INSTANCE_TT(GDBusSignalInfo_class, MRB_TT_DATA);

#if BIND_GDBusSignalInfo_INITIALIZE
  mrb_define_method(mrb, GDBusSignalInfo_class, "initialize", mrb_GLib_GDBusSignalInfo_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GDBusSignalInfo_class, "disown", mrb_GLib_GDBusSignalInfo_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GDBusSignalInfo_class, "belongs_to_ruby?", mrb_GLib_GDBusSignalInfo_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
