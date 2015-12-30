/*
 * struct _GDBusProxy
 * Defined in file giotypes.h @ line 470
 */

#include "mruby_GLib.h"

#if BIND_GDBusProxy_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GDBusProxy::initialize */
/* sha: 9a0c265d95fa0ad76b001d1baeeb435fe8cb74755c20a78d3a46dff6ad0cf90e */
#if BIND_GDBusProxy_INITIALIZE
mrb_value
mrb_GLib_GDBusProxy_initialize(mrb_state* mrb, mrb_value self) {
  struct _GDBusProxy* native_object = (struct _GDBusProxy*)calloc(1, sizeof(struct _GDBusProxy));
  mruby_giftwrap__GDBusProxy_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusProxy::initialize */
/* sha: ed0eac1db57aaa4fd776b9faa1ad3bf5180c7a0b95280a03b0a285fe19500815 */
mrb_value
mrb_GLib_GDBusProxy_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusProxy.disown only accepts objects of type GLib::GDBusProxy");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusProxy::belongs_to_ruby */
/* sha: 19d7a5b819605516d20485d7bc86b404036b40158c22e8b3de02922f2ceb4d89 */
mrb_value
mrb_GLib_GDBusProxy_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusProxy.belongs_to_ruby only accepts objects of type GLib::GDBusProxy");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GDBusProxy_init(mrb_state* mrb) {
  struct RClass* GDBusProxy_class = mrb_define_class_under(mrb, GLib_module(mrb), "GDBusProxy", mrb->object_class);
  MRB_SET_INSTANCE_TT(GDBusProxy_class, MRB_TT_DATA);

#if BIND_GDBusProxy_INITIALIZE
  mrb_define_method(mrb, GDBusProxy_class, "initialize", mrb_GLib_GDBusProxy_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GDBusProxy_class, "disown", mrb_GLib_GDBusProxy_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GDBusProxy_class, "belongs_to_ruby?", mrb_GLib_GDBusProxy_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
