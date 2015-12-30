/*
 * struct _GDBusObjectProxy
 * Defined in file giotypes.h @ line 520
 */

#include "mruby_GLib.h"

#if BIND_GDBusObjectProxy_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GDBusObjectProxy::initialize */
/* sha: 64ad1042093f1cfe0039e0c4191db52e2c7562b7e0122b1e93f14bc5e6f492c0 */
#if BIND_GDBusObjectProxy_INITIALIZE
mrb_value
mrb_GLib_GDBusObjectProxy_initialize(mrb_state* mrb, mrb_value self) {
  struct _GDBusObjectProxy* native_object = (struct _GDBusObjectProxy*)calloc(1, sizeof(struct _GDBusObjectProxy));
  mruby_giftwrap__GDBusObjectProxy_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusObjectProxy::initialize */
/* sha: 52ad38ab126c795b4031b681a19fddffa3e324a924515c236a7bda538547ad1f */
mrb_value
mrb_GLib_GDBusObjectProxy_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusObjectProxy.disown only accepts objects of type GLib::GDBusObjectProxy");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusObjectProxy::belongs_to_ruby */
/* sha: 02530f57b6b4a2c883d45e82f97dd5cdfdf82b9225e6e01f1b7db52a88cdf6b5 */
mrb_value
mrb_GLib_GDBusObjectProxy_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusObjectProxy.belongs_to_ruby only accepts objects of type GLib::GDBusObjectProxy");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GDBusObjectProxy_init(mrb_state* mrb) {
  struct RClass* GDBusObjectProxy_class = mrb_define_class_under(mrb, GLib_module(mrb), "GDBusObjectProxy", mrb->object_class);
  MRB_SET_INSTANCE_TT(GDBusObjectProxy_class, MRB_TT_DATA);

#if BIND_GDBusObjectProxy_INITIALIZE
  mrb_define_method(mrb, GDBusObjectProxy_class, "initialize", mrb_GLib_GDBusObjectProxy_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GDBusObjectProxy_class, "disown", mrb_GLib_GDBusObjectProxy_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GDBusObjectProxy_class, "belongs_to_ruby?", mrb_GLib_GDBusObjectProxy_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
