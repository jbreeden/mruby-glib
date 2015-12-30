/*
 * struct _GDBusObject
 * Defined in file giotypes.h @ line 518
 */

#include "mruby_GLib.h"

#if BIND_GDBusObject_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GDBusObject::initialize */
/* sha: c221edc6f8a7cc3239ff2966a21079ccd28fec620b9d8dadec8c18cef63ef11a */
#if BIND_GDBusObject_INITIALIZE
mrb_value
mrb_GLib_GDBusObject_initialize(mrb_state* mrb, mrb_value self) {
  struct _GDBusObject* native_object = (struct _GDBusObject*)calloc(1, sizeof(struct _GDBusObject));
  mruby_giftwrap__GDBusObject_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusObject::initialize */
/* sha: d1c268052e5aa5199945b2028eb55ea1640387b7a2b723e3b0f6f8fc474cf453 */
mrb_value
mrb_GLib_GDBusObject_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusObject.disown only accepts objects of type GLib::GDBusObject");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusObject::belongs_to_ruby */
/* sha: ce04a4a5e78413a79604f7915314377fb373b5a8cab5caf8eb6b11206dbf5ffd */
mrb_value
mrb_GLib_GDBusObject_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusObject.belongs_to_ruby only accepts objects of type GLib::GDBusObject");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GDBusObject_init(mrb_state* mrb) {
  struct RClass* GDBusObject_class = mrb_define_class_under(mrb, GLib_module(mrb), "GDBusObject", mrb->object_class);
  MRB_SET_INSTANCE_TT(GDBusObject_class, MRB_TT_DATA);

#if BIND_GDBusObject_INITIALIZE
  mrb_define_method(mrb, GDBusObject_class, "initialize", mrb_GLib_GDBusObject_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GDBusObject_class, "disown", mrb_GLib_GDBusObject_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GDBusObject_class, "belongs_to_ruby?", mrb_GLib_GDBusObject_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
