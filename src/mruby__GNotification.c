/*
 * struct _GNotification
 * Defined in file giotypes.h @ line 63
 */

#include "mruby_GLib.h"

#if BIND_GNotification_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GNotification::initialize */
/* sha: 6c8b889a66e9c875fee2367bef466a733970116ba990f54d466758dde00b0e47 */
#if BIND_GNotification_INITIALIZE
mrb_value
mrb_GLib_GNotification_initialize(mrb_state* mrb, mrb_value self) {
  struct _GNotification* native_object = (struct _GNotification*)calloc(1, sizeof(struct _GNotification));
  mruby_giftwrap__GNotification_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GNotification::initialize */
/* sha: 260a06c1463991a4cf104fcdef3e49fdd96896fc384fff275b8a9980ecda6993 */
mrb_value
mrb_GLib_GNotification_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GNotification.disown only accepts objects of type GLib::GNotification");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GNotification::belongs_to_ruby */
/* sha: c5a21d248f557b4688ece8fb88726b95ee5859ad524de7d539192d77191d90c4 */
mrb_value
mrb_GLib_GNotification_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GNotification.belongs_to_ruby only accepts objects of type GLib::GNotification");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GNotification_init(mrb_state* mrb) {
  struct RClass* GNotification_class = mrb_define_class_under(mrb, GLib_module(mrb), "GNotification", mrb->object_class);
  MRB_SET_INSTANCE_TT(GNotification_class, MRB_TT_DATA);

#if BIND_GNotification_INITIALIZE
  mrb_define_method(mrb, GNotification_class, "initialize", mrb_GLib_GNotification_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GNotification_class, "disown", mrb_GLib_GNotification_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GNotification_class, "belongs_to_ruby?", mrb_GLib_GNotification_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
