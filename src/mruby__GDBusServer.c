/*
 * struct _GDBusServer
 * Defined in file giotypes.h @ line 472
 */

#include "mruby_GLib.h"

#if BIND_GDBusServer_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GDBusServer::initialize */
/* sha: 17a118df9e17200ce2687090c410206ffd354a768c2ded3c84ee36de34c01efb */
#if BIND_GDBusServer_INITIALIZE
mrb_value
mrb_GLib_GDBusServer_initialize(mrb_state* mrb, mrb_value self) {
  struct _GDBusServer* native_object = (struct _GDBusServer*)calloc(1, sizeof(struct _GDBusServer));
  mruby_giftwrap__GDBusServer_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusServer::initialize */
/* sha: a5e96b36f1b6bf5eebee0ae34769b846e983c8fc5cf462c9e108cac8be274ca3 */
mrb_value
mrb_GLib_GDBusServer_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusServer.disown only accepts objects of type GLib::GDBusServer");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusServer::belongs_to_ruby */
/* sha: 06edad6e6703dddc668e1c1b71f25c2eead5a693b818a98cb866a750b6dddee1 */
mrb_value
mrb_GLib_GDBusServer_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusServer.belongs_to_ruby only accepts objects of type GLib::GDBusServer");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GDBusServer_init(mrb_state* mrb) {
  struct RClass* GDBusServer_class = mrb_define_class_under(mrb, GLib_module(mrb), "GDBusServer", mrb->object_class);
  MRB_SET_INSTANCE_TT(GDBusServer_class, MRB_TT_DATA);

#if BIND_GDBusServer_INITIALIZE
  mrb_define_method(mrb, GDBusServer_class, "initialize", mrb_GLib_GDBusServer_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GDBusServer_class, "disown", mrb_GLib_GDBusServer_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GDBusServer_class, "belongs_to_ruby?", mrb_GLib_GDBusServer_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
