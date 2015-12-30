/*
 * struct _GDBusConnection
 * Defined in file giotypes.h @ line 469
 */

#include "mruby_GLib.h"

#if BIND_GDBusConnection_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GDBusConnection::initialize */
/* sha: 606b637482949d808e7d562de645adbb25bf2a237b959b02fd5ab8404cbada12 */
#if BIND_GDBusConnection_INITIALIZE
mrb_value
mrb_GLib_GDBusConnection_initialize(mrb_state* mrb, mrb_value self) {
  struct _GDBusConnection* native_object = (struct _GDBusConnection*)calloc(1, sizeof(struct _GDBusConnection));
  mruby_giftwrap__GDBusConnection_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusConnection::initialize */
/* sha: ac28c5ecd44bb651f9fb5eac16044f5b8d2afa54748282d2933aa2ea410fdd67 */
mrb_value
mrb_GLib_GDBusConnection_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusConnection.disown only accepts objects of type GLib::GDBusConnection");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusConnection::belongs_to_ruby */
/* sha: 1e499ffec3f4e2729c62ace5b26875bbdfad6ac48857d9745fac5ee4ea43c0d1 */
mrb_value
mrb_GLib_GDBusConnection_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusConnection.belongs_to_ruby only accepts objects of type GLib::GDBusConnection");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GDBusConnection_init(mrb_state* mrb) {
  struct RClass* GDBusConnection_class = mrb_define_class_under(mrb, GLib_module(mrb), "GDBusConnection", mrb->object_class);
  MRB_SET_INSTANCE_TT(GDBusConnection_class, MRB_TT_DATA);

#if BIND_GDBusConnection_INITIALIZE
  mrb_define_method(mrb, GDBusConnection_class, "initialize", mrb_GLib_GDBusConnection_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GDBusConnection_class, "disown", mrb_GLib_GDBusConnection_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GDBusConnection_class, "belongs_to_ruby?", mrb_GLib_GDBusConnection_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
