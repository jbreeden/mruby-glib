/*
 * struct _GTlsClientConnection
 * Defined in file giotypes.h @ line 227
 */

#include "mruby_GLib.h"

#if BIND_GTlsClientConnection_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GTlsClientConnection::initialize */
/* sha: b0fcda2f9d955f71d2fd5823dc57ba9c0bc52d46b8bad41948350ffa4beae8df */
#if BIND_GTlsClientConnection_INITIALIZE
mrb_value
mrb_GLib_GTlsClientConnection_initialize(mrb_state* mrb, mrb_value self) {
  struct _GTlsClientConnection* native_object = (struct _GTlsClientConnection*)calloc(1, sizeof(struct _GTlsClientConnection));
  mruby_giftwrap__GTlsClientConnection_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTlsClientConnection::initialize */
/* sha: fd48265c17eb5083ef6cac2d22aff5fdaf144587906d8895f269e2d29b41e9b6 */
mrb_value
mrb_GLib_GTlsClientConnection_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTlsClientConnection.disown only accepts objects of type GLib::GTlsClientConnection");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTlsClientConnection::belongs_to_ruby */
/* sha: d915a3a1bc8f29539d607835b79f4a62739dd633f2e606cb1131520d76b1cd53 */
mrb_value
mrb_GLib_GTlsClientConnection_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTlsClientConnection.belongs_to_ruby only accepts objects of type GLib::GTlsClientConnection");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GTlsClientConnection_init(mrb_state* mrb) {
  struct RClass* GTlsClientConnection_class = mrb_define_class_under(mrb, GLib_module(mrb), "GTlsClientConnection", mrb->object_class);
  MRB_SET_INSTANCE_TT(GTlsClientConnection_class, MRB_TT_DATA);

#if BIND_GTlsClientConnection_INITIALIZE
  mrb_define_method(mrb, GTlsClientConnection_class, "initialize", mrb_GLib_GTlsClientConnection_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GTlsClientConnection_class, "disown", mrb_GLib_GTlsClientConnection_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GTlsClientConnection_class, "belongs_to_ruby?", mrb_GLib_GTlsClientConnection_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
