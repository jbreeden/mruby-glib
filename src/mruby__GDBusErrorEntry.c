/*
 * struct _GDBusErrorEntry
 * Defined in file giotypes.h @ line 474
 */

#include "mruby_GLib.h"

#if BIND_GDBusErrorEntry_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GDBusErrorEntry::initialize */
/* sha: 298e02929b2437e10432e7be3e8497e06921c40678d1fc3c85d3984a8e3210d7 */
#if BIND_GDBusErrorEntry_INITIALIZE
mrb_value
mrb_GLib_GDBusErrorEntry_initialize(mrb_state* mrb, mrb_value self) {
  struct _GDBusErrorEntry* native_object = (struct _GDBusErrorEntry*)calloc(1, sizeof(struct _GDBusErrorEntry));
  mruby_giftwrap__GDBusErrorEntry_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusErrorEntry::initialize */
/* sha: 507fec249d3cacabd3d4aca5ca72bff26f4ea389f516cb455fc90598b0e9dba9 */
mrb_value
mrb_GLib_GDBusErrorEntry_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusErrorEntry.disown only accepts objects of type GLib::GDBusErrorEntry");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusErrorEntry::belongs_to_ruby */
/* sha: 9158e81d6a7793468b6c3d6154f88ab3d282ac8be7058a4ee38eaad450c6480e */
mrb_value
mrb_GLib_GDBusErrorEntry_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusErrorEntry.belongs_to_ruby only accepts objects of type GLib::GDBusErrorEntry");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GDBusErrorEntry_init(mrb_state* mrb) {
  struct RClass* GDBusErrorEntry_class = mrb_define_class_under(mrb, GLib_module(mrb), "GDBusErrorEntry", mrb->object_class);
  MRB_SET_INSTANCE_TT(GDBusErrorEntry_class, MRB_TT_DATA);

#if BIND_GDBusErrorEntry_INITIALIZE
  mrb_define_method(mrb, GDBusErrorEntry_class, "initialize", mrb_GLib_GDBusErrorEntry_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GDBusErrorEntry_class, "disown", mrb_GLib_GDBusErrorEntry_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GDBusErrorEntry_class, "belongs_to_ruby?", mrb_GLib_GDBusErrorEntry_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
