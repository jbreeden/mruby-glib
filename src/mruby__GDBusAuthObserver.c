/*
 * struct _GDBusAuthObserver
 * Defined in file giotypes.h @ line 473
 */

#include "mruby_GLib.h"

#if BIND_GDBusAuthObserver_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GDBusAuthObserver::initialize */
/* sha: 3bb18833b2cb6ebff540cd24faf42353b7cca0268695566c480bd589af36a117 */
#if BIND_GDBusAuthObserver_INITIALIZE
mrb_value
mrb_GLib_GDBusAuthObserver_initialize(mrb_state* mrb, mrb_value self) {
  struct _GDBusAuthObserver* native_object = (struct _GDBusAuthObserver*)calloc(1, sizeof(struct _GDBusAuthObserver));
  mruby_giftwrap__GDBusAuthObserver_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusAuthObserver::initialize */
/* sha: 22e3337f646629ddf6eb5da6ced7fc885e1b8bcb9887d85bf8f70325f8cfb039 */
mrb_value
mrb_GLib_GDBusAuthObserver_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusAuthObserver.disown only accepts objects of type GLib::GDBusAuthObserver");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusAuthObserver::belongs_to_ruby */
/* sha: a6c477dcae96ad9676a704e70c1b5cb99994c992699079ee5271d7f9f0f82885 */
mrb_value
mrb_GLib_GDBusAuthObserver_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusAuthObserver.belongs_to_ruby only accepts objects of type GLib::GDBusAuthObserver");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GDBusAuthObserver_init(mrb_state* mrb) {
  struct RClass* GDBusAuthObserver_class = mrb_define_class_under(mrb, GLib_module(mrb), "GDBusAuthObserver", mrb->object_class);
  MRB_SET_INSTANCE_TT(GDBusAuthObserver_class, MRB_TT_DATA);

#if BIND_GDBusAuthObserver_INITIALIZE
  mrb_define_method(mrb, GDBusAuthObserver_class, "initialize", mrb_GLib_GDBusAuthObserver_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GDBusAuthObserver_class, "disown", mrb_GLib_GDBusAuthObserver_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GDBusAuthObserver_class, "belongs_to_ruby?", mrb_GLib_GDBusAuthObserver_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
