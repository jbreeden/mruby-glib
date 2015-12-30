/*
 * struct _GTcpWrapperConnection
 * Defined in file giotypes.h @ line 215
 */

#include "mruby_GLib.h"

#if BIND_GTcpWrapperConnection_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GTcpWrapperConnection::initialize */
/* sha: dccc362c3f755b15b1bdff7c4f74ab7106946db611a32e4940b85936350c37d2 */
#if BIND_GTcpWrapperConnection_INITIALIZE
mrb_value
mrb_GLib_GTcpWrapperConnection_initialize(mrb_state* mrb, mrb_value self) {
  struct _GTcpWrapperConnection* native_object = (struct _GTcpWrapperConnection*)calloc(1, sizeof(struct _GTcpWrapperConnection));
  mruby_giftwrap__GTcpWrapperConnection_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTcpWrapperConnection::initialize */
/* sha: 6b9850d1b2b42d5644eefd12959852fa6b1f7742468cd6fb6088486cff6fd636 */
mrb_value
mrb_GLib_GTcpWrapperConnection_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTcpWrapperConnection.disown only accepts objects of type GLib::GTcpWrapperConnection");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTcpWrapperConnection::belongs_to_ruby */
/* sha: 7e5903e19cc3990e90e6ef5a659214fe09c3e04c6712343b650290706795fc89 */
mrb_value
mrb_GLib_GTcpWrapperConnection_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTcpWrapperConnection.belongs_to_ruby only accepts objects of type GLib::GTcpWrapperConnection");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GTcpWrapperConnection_init(mrb_state* mrb) {
  struct RClass* GTcpWrapperConnection_class = mrb_define_class_under(mrb, GLib_module(mrb), "GTcpWrapperConnection", mrb->object_class);
  MRB_SET_INSTANCE_TT(GTcpWrapperConnection_class, MRB_TT_DATA);

#if BIND_GTcpWrapperConnection_INITIALIZE
  mrb_define_method(mrb, GTcpWrapperConnection_class, "initialize", mrb_GLib_GTcpWrapperConnection_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GTcpWrapperConnection_class, "disown", mrb_GLib_GTcpWrapperConnection_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GTcpWrapperConnection_class, "belongs_to_ruby?", mrb_GLib_GTcpWrapperConnection_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
