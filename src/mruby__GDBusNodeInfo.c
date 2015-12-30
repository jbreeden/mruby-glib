/*
 * struct _GDBusNodeInfo
 * Defined in file giotypes.h @ line 483
 */

#include "mruby_GLib.h"

#if BIND_GDBusNodeInfo_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GDBusNodeInfo::initialize */
/* sha: d1011f4f9459ad118bc9e24bfc08266bebf3a8db6f3fbff7d7aa98185cd9b5ad */
#if BIND_GDBusNodeInfo_INITIALIZE
mrb_value
mrb_GLib_GDBusNodeInfo_initialize(mrb_state* mrb, mrb_value self) {
  struct _GDBusNodeInfo* native_object = (struct _GDBusNodeInfo*)calloc(1, sizeof(struct _GDBusNodeInfo));
  mruby_giftwrap__GDBusNodeInfo_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusNodeInfo::initialize */
/* sha: e8192f5db2622ba8d1df1ca71da404170396621b7742f19b438d82874f7c3409 */
mrb_value
mrb_GLib_GDBusNodeInfo_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusNodeInfo.disown only accepts objects of type GLib::GDBusNodeInfo");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusNodeInfo::belongs_to_ruby */
/* sha: 67d847035ab64a019f434fba5aa05b4b8648f8dbc3bd5cf3692c16da370d13ca */
mrb_value
mrb_GLib_GDBusNodeInfo_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusNodeInfo.belongs_to_ruby only accepts objects of type GLib::GDBusNodeInfo");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GDBusNodeInfo_init(mrb_state* mrb) {
  struct RClass* GDBusNodeInfo_class = mrb_define_class_under(mrb, GLib_module(mrb), "GDBusNodeInfo", mrb->object_class);
  MRB_SET_INSTANCE_TT(GDBusNodeInfo_class, MRB_TT_DATA);

#if BIND_GDBusNodeInfo_INITIALIZE
  mrb_define_method(mrb, GDBusNodeInfo_class, "initialize", mrb_GLib_GDBusNodeInfo_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GDBusNodeInfo_class, "disown", mrb_GLib_GDBusNodeInfo_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GDBusNodeInfo_class, "belongs_to_ruby?", mrb_GLib_GDBusNodeInfo_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
