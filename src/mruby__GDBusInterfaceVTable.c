/*
 * struct _GDBusInterfaceVTable
 * Defined in file giotypes.h @ line 475
 */

#include "mruby_GLib.h"

#if BIND_GDBusInterfaceVTable_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GDBusInterfaceVTable::initialize */
/* sha: e3c6a3200ef95eaa1a4265683610e92f5fa87e157a1af4faca5a162c7e979e43 */
#if BIND_GDBusInterfaceVTable_INITIALIZE
mrb_value
mrb_GLib_GDBusInterfaceVTable_initialize(mrb_state* mrb, mrb_value self) {
  struct _GDBusInterfaceVTable* native_object = (struct _GDBusInterfaceVTable*)calloc(1, sizeof(struct _GDBusInterfaceVTable));
  mruby_giftwrap__GDBusInterfaceVTable_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusInterfaceVTable::initialize */
/* sha: de80844dcb00e5208d91c7cc44466f48b986d1e397c695e09e35dcf41899e752 */
mrb_value
mrb_GLib_GDBusInterfaceVTable_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusInterfaceVTable.disown only accepts objects of type GLib::GDBusInterfaceVTable");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusInterfaceVTable::belongs_to_ruby */
/* sha: b5f8e16f51dd000548abb790484febf51ba642a1db6f6362eb014b13f2d33298 */
mrb_value
mrb_GLib_GDBusInterfaceVTable_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusInterfaceVTable.belongs_to_ruby only accepts objects of type GLib::GDBusInterfaceVTable");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GDBusInterfaceVTable_init(mrb_state* mrb) {
  struct RClass* GDBusInterfaceVTable_class = mrb_define_class_under(mrb, GLib_module(mrb), "GDBusInterfaceVTable", mrb->object_class);
  MRB_SET_INSTANCE_TT(GDBusInterfaceVTable_class, MRB_TT_DATA);

#if BIND_GDBusInterfaceVTable_INITIALIZE
  mrb_define_method(mrb, GDBusInterfaceVTable_class, "initialize", mrb_GLib_GDBusInterfaceVTable_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GDBusInterfaceVTable_class, "disown", mrb_GLib_GDBusInterfaceVTable_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GDBusInterfaceVTable_class, "belongs_to_ruby?", mrb_GLib_GDBusInterfaceVTable_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
