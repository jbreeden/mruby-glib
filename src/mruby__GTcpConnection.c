/*
 * struct _GTcpConnection
 * Defined in file giotypes.h @ line 214
 */

#include "mruby_GLib.h"

#if BIND_GTcpConnection_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GTcpConnection::initialize */
/* sha: a2cb13c7dec345988b146c6b735435f0cc774bb602e9c1bd92655d334fc704a2 */
#if BIND_GTcpConnection_INITIALIZE
mrb_value
mrb_GLib_GTcpConnection_initialize(mrb_state* mrb, mrb_value self) {
  struct _GTcpConnection* native_object = (struct _GTcpConnection*)calloc(1, sizeof(struct _GTcpConnection));
  mruby_giftwrap__GTcpConnection_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTcpConnection::initialize */
/* sha: e2eb2dc9bac87305b0a887d120c6959c38df386f13ceaa40669fff8cdd8769c5 */
mrb_value
mrb_GLib_GTcpConnection_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTcpConnection.disown only accepts objects of type GLib::GTcpConnection");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTcpConnection::belongs_to_ruby */
/* sha: 182b8918de968106f52394251f66d7ee310d1d6b59fa66603c0347b545fac8c2 */
mrb_value
mrb_GLib_GTcpConnection_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTcpConnection.belongs_to_ruby only accepts objects of type GLib::GTcpConnection");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GTcpConnection_init(mrb_state* mrb) {
  struct RClass* GTcpConnection_class = mrb_define_class_under(mrb, GLib_module(mrb), "GTcpConnection", mrb->object_class);
  MRB_SET_INSTANCE_TT(GTcpConnection_class, MRB_TT_DATA);

#if BIND_GTcpConnection_INITIALIZE
  mrb_define_method(mrb, GTcpConnection_class, "initialize", mrb_GLib_GTcpConnection_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GTcpConnection_class, "disown", mrb_GLib_GTcpConnection_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GTcpConnection_class, "belongs_to_ruby?", mrb_GLib_GTcpConnection_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
