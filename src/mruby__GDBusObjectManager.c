/*
 * struct _GDBusObjectManager
 * Defined in file giotypes.h @ line 521
 */

#include "mruby_GLib.h"

#if BIND_GDBusObjectManager_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GDBusObjectManager::initialize */
/* sha: 0fae3d01ed8988fa46c536bb212bac0d227d58aba7ad241632fd87f97c8657e0 */
#if BIND_GDBusObjectManager_INITIALIZE
mrb_value
mrb_GLib_GDBusObjectManager_initialize(mrb_state* mrb, mrb_value self) {
  struct _GDBusObjectManager* native_object = (struct _GDBusObjectManager*)calloc(1, sizeof(struct _GDBusObjectManager));
  mruby_giftwrap__GDBusObjectManager_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusObjectManager::initialize */
/* sha: 1083bb8425c092e126a504d3ffcd33983b1136935661e0405439f40a99d23fa9 */
mrb_value
mrb_GLib_GDBusObjectManager_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusObjectManager.disown only accepts objects of type GLib::GDBusObjectManager");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusObjectManager::belongs_to_ruby */
/* sha: 2f33db525ee18daf2102514ee507af67ebef14817ac27810f9d033e3254b4aff */
mrb_value
mrb_GLib_GDBusObjectManager_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusObjectManager.belongs_to_ruby only accepts objects of type GLib::GDBusObjectManager");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GDBusObjectManager_init(mrb_state* mrb) {
  struct RClass* GDBusObjectManager_class = mrb_define_class_under(mrb, GLib_module(mrb), "GDBusObjectManager", mrb->object_class);
  MRB_SET_INSTANCE_TT(GDBusObjectManager_class, MRB_TT_DATA);

#if BIND_GDBusObjectManager_INITIALIZE
  mrb_define_method(mrb, GDBusObjectManager_class, "initialize", mrb_GLib_GDBusObjectManager_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GDBusObjectManager_class, "disown", mrb_GLib_GDBusObjectManager_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GDBusObjectManager_class, "belongs_to_ruby?", mrb_GLib_GDBusObjectManager_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
