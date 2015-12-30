/*
 * struct _GSocketConnection
 * Defined in file giotypes.h @ line 184
 */

#include "mruby_GLib.h"

#if BIND_GSocketConnection_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GSocketConnection::initialize */
/* sha: e0fc5e028b4aea500c39a31cf4e453126bf5bd7596e43a791d35242b0b9d39e4 */
#if BIND_GSocketConnection_INITIALIZE
mrb_value
mrb_GLib_GSocketConnection_initialize(mrb_state* mrb, mrb_value self) {
  struct _GSocketConnection* native_object = (struct _GSocketConnection*)calloc(1, sizeof(struct _GSocketConnection));
  mruby_giftwrap__GSocketConnection_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketConnection::initialize */
/* sha: 6b3505a10cca8701830251a36bc5eadeac3f8116c86b54c39b4298fe3e317d34 */
mrb_value
mrb_GLib_GSocketConnection_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSocketConnection.disown only accepts objects of type GLib::GSocketConnection");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketConnection::belongs_to_ruby */
/* sha: 38a6300aabdf7565ff8001732e24301d943b124f1e2d342367a2e02697fe3039 */
mrb_value
mrb_GLib_GSocketConnection_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSocketConnection.belongs_to_ruby only accepts objects of type GLib::GSocketConnection");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GSocketConnection_init(mrb_state* mrb) {
  struct RClass* GSocketConnection_class = mrb_define_class_under(mrb, GLib_module(mrb), "GSocketConnection", mrb->object_class);
  MRB_SET_INSTANCE_TT(GSocketConnection_class, MRB_TT_DATA);

#if BIND_GSocketConnection_INITIALIZE
  mrb_define_method(mrb, GSocketConnection_class, "initialize", mrb_GLib_GSocketConnection_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GSocketConnection_class, "disown", mrb_GLib_GSocketConnection_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GSocketConnection_class, "belongs_to_ruby?", mrb_GLib_GSocketConnection_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
