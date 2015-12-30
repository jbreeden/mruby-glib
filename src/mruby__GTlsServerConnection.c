/*
 * struct _GTlsServerConnection
 * Defined in file giotypes.h @ line 233
 */

#include "mruby_GLib.h"

#if BIND_GTlsServerConnection_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GTlsServerConnection::initialize */
/* sha: 5f1bd2478a9541f375310714158a6862fe1582e68781dfe636bee681a57b1247 */
#if BIND_GTlsServerConnection_INITIALIZE
mrb_value
mrb_GLib_GTlsServerConnection_initialize(mrb_state* mrb, mrb_value self) {
  struct _GTlsServerConnection* native_object = (struct _GTlsServerConnection*)calloc(1, sizeof(struct _GTlsServerConnection));
  mruby_giftwrap__GTlsServerConnection_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTlsServerConnection::initialize */
/* sha: 2468c78410dfe443ee9944f998a344f62fcaa05eccffd2b82c85c88481fe8b4e */
mrb_value
mrb_GLib_GTlsServerConnection_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTlsServerConnection.disown only accepts objects of type GLib::GTlsServerConnection");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTlsServerConnection::belongs_to_ruby */
/* sha: 7ba99e4a80669dde4a859c0ba2de599dc72825a0c598fc224070325320f83286 */
mrb_value
mrb_GLib_GTlsServerConnection_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTlsServerConnection.belongs_to_ruby only accepts objects of type GLib::GTlsServerConnection");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GTlsServerConnection_init(mrb_state* mrb) {
  struct RClass* GTlsServerConnection_class = mrb_define_class_under(mrb, GLib_module(mrb), "GTlsServerConnection", mrb->object_class);
  MRB_SET_INSTANCE_TT(GTlsServerConnection_class, MRB_TT_DATA);

#if BIND_GTlsServerConnection_INITIALIZE
  mrb_define_method(mrb, GTlsServerConnection_class, "initialize", mrb_GLib_GTlsServerConnection_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GTlsServerConnection_class, "disown", mrb_GLib_GTlsServerConnection_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GTlsServerConnection_class, "belongs_to_ruby?", mrb_GLib_GTlsServerConnection_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
