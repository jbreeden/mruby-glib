/*
 * struct _GProxy
 * Defined in file giotypes.h @ line 244
 */

#include "mruby_GLib.h"

#if BIND_GProxy_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GProxy::initialize */
/* sha: e1c9ec548bbf0dabfde41efe61fdf4e1817e910eb14abf8ea262bd449898a82b */
#if BIND_GProxy_INITIALIZE
mrb_value
mrb_GLib_GProxy_initialize(mrb_state* mrb, mrb_value self) {
  struct _GProxy* native_object = (struct _GProxy*)calloc(1, sizeof(struct _GProxy));
  mruby_giftwrap__GProxy_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GProxy::initialize */
/* sha: 16ae9f851be4e32b6be53d1686e065f55c359a0e4910e57cf4b71019202d2243 */
mrb_value
mrb_GLib_GProxy_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GProxy.disown only accepts objects of type GLib::GProxy");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GProxy::belongs_to_ruby */
/* sha: 657737cee6e01c19b8f19878707cfbcc6f930b19ba297ef7f9c1066e9889ff0c */
mrb_value
mrb_GLib_GProxy_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GProxy.belongs_to_ruby only accepts objects of type GLib::GProxy");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GProxy_init(mrb_state* mrb) {
  struct RClass* GProxy_class = mrb_define_class_under(mrb, GLib_module(mrb), "GProxy", mrb->object_class);
  MRB_SET_INSTANCE_TT(GProxy_class, MRB_TT_DATA);

#if BIND_GProxy_INITIALIZE
  mrb_define_method(mrb, GProxy_class, "initialize", mrb_GLib_GProxy_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GProxy_class, "disown", mrb_GLib_GProxy_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GProxy_class, "belongs_to_ruby?", mrb_GLib_GProxy_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
