/*
 * struct _GDBusObjectManagerServer
 * Defined in file giotypes.h @ line 523
 */

#include "mruby_GLib.h"

#if BIND_GDBusObjectManagerServer_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GDBusObjectManagerServer::initialize */
/* sha: 340ab0d331d965ec1ef425b65774f99d9f449fb661ff1bfe1a9c70770dab27c1 */
#if BIND_GDBusObjectManagerServer_INITIALIZE
mrb_value
mrb_GLib_GDBusObjectManagerServer_initialize(mrb_state* mrb, mrb_value self) {
  struct _GDBusObjectManagerServer* native_object = (struct _GDBusObjectManagerServer*)calloc(1, sizeof(struct _GDBusObjectManagerServer));
  mruby_giftwrap__GDBusObjectManagerServer_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusObjectManagerServer::initialize */
/* sha: 0a4e3ab728a374990dcf789a2f970e6041dc953509e348adf77f15af260f8c5e */
mrb_value
mrb_GLib_GDBusObjectManagerServer_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusObjectManagerServer.disown only accepts objects of type GLib::GDBusObjectManagerServer");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusObjectManagerServer::belongs_to_ruby */
/* sha: d03d8044ad2e3be802cf4c7991e8bfba1adc6d947b3ceec02ca69a921a9b8f92 */
mrb_value
mrb_GLib_GDBusObjectManagerServer_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusObjectManagerServer.belongs_to_ruby only accepts objects of type GLib::GDBusObjectManagerServer");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GDBusObjectManagerServer_init(mrb_state* mrb) {
  struct RClass* GDBusObjectManagerServer_class = mrb_define_class_under(mrb, GLib_module(mrb), "GDBusObjectManagerServer", mrb->object_class);
  MRB_SET_INSTANCE_TT(GDBusObjectManagerServer_class, MRB_TT_DATA);

#if BIND_GDBusObjectManagerServer_INITIALIZE
  mrb_define_method(mrb, GDBusObjectManagerServer_class, "initialize", mrb_GLib_GDBusObjectManagerServer_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GDBusObjectManagerServer_class, "disown", mrb_GLib_GDBusObjectManagerServer_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GDBusObjectManagerServer_class, "belongs_to_ruby?", mrb_GLib_GDBusObjectManagerServer_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
