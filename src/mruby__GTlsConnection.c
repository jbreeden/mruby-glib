/*
 * struct _GTlsConnection
 * Defined in file giotypes.h @ line 228
 */

#include "mruby_GLib.h"

#if BIND_GTlsConnection_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GTlsConnection::initialize */
/* sha: 1d1655b22eb6ca0b92c441f188708af3bfd64516b9a590ead20e7673567440e3 */
#if BIND_GTlsConnection_INITIALIZE
mrb_value
mrb_GLib_GTlsConnection_initialize(mrb_state* mrb, mrb_value self) {
  struct _GTlsConnection* native_object = (struct _GTlsConnection*)calloc(1, sizeof(struct _GTlsConnection));
  mruby_giftwrap__GTlsConnection_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTlsConnection::initialize */
/* sha: 1551e22eb95873b7bdc952f1cb4e09d1644a4a6453cb99a87455af9ade3a00ad */
mrb_value
mrb_GLib_GTlsConnection_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTlsConnection.disown only accepts objects of type GLib::GTlsConnection");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTlsConnection::belongs_to_ruby */
/* sha: ae604f557b4ba6526cd5360012531d2c8ee30e0bcb6e577ebc9713020dc921cd */
mrb_value
mrb_GLib_GTlsConnection_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTlsConnection.belongs_to_ruby only accepts objects of type GLib::GTlsConnection");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GTlsConnection_init(mrb_state* mrb) {
  struct RClass* GTlsConnection_class = mrb_define_class_under(mrb, GLib_module(mrb), "GTlsConnection", mrb->object_class);
  MRB_SET_INSTANCE_TT(GTlsConnection_class, MRB_TT_DATA);

#if BIND_GTlsConnection_INITIALIZE
  mrb_define_method(mrb, GTlsConnection_class, "initialize", mrb_GLib_GTlsConnection_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GTlsConnection_class, "disown", mrb_GLib_GTlsConnection_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GTlsConnection_class, "belongs_to_ruby?", mrb_GLib_GTlsConnection_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
