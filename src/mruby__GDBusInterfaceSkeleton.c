/*
 * struct _GDBusInterfaceSkeleton
 * Defined in file giotypes.h @ line 517
 */

#include "mruby_GLib.h"

#if BIND_GDBusInterfaceSkeleton_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GDBusInterfaceSkeleton::initialize */
/* sha: f5eb88a7212880c8894b9439295d6a07e7499a61820ea8379aff95cd5e23b2f8 */
#if BIND_GDBusInterfaceSkeleton_INITIALIZE
mrb_value
mrb_GLib_GDBusInterfaceSkeleton_initialize(mrb_state* mrb, mrb_value self) {
  struct _GDBusInterfaceSkeleton* native_object = (struct _GDBusInterfaceSkeleton*)calloc(1, sizeof(struct _GDBusInterfaceSkeleton));
  mruby_giftwrap__GDBusInterfaceSkeleton_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusInterfaceSkeleton::initialize */
/* sha: db8e830b03874b95f346a142d425371ca25f1e253b0d0a2783cec1c3a3974230 */
mrb_value
mrb_GLib_GDBusInterfaceSkeleton_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusInterfaceSkeleton.disown only accepts objects of type GLib::GDBusInterfaceSkeleton");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusInterfaceSkeleton::belongs_to_ruby */
/* sha: 5bdc992980f4efad68c35f830b3b7c973b28e22cbf692f8a84156f8afe46c906 */
mrb_value
mrb_GLib_GDBusInterfaceSkeleton_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusInterfaceSkeleton.belongs_to_ruby only accepts objects of type GLib::GDBusInterfaceSkeleton");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GDBusInterfaceSkeleton_init(mrb_state* mrb) {
  struct RClass* GDBusInterfaceSkeleton_class = mrb_define_class_under(mrb, GLib_module(mrb), "GDBusInterfaceSkeleton", mrb->object_class);
  MRB_SET_INSTANCE_TT(GDBusInterfaceSkeleton_class, MRB_TT_DATA);

#if BIND_GDBusInterfaceSkeleton_INITIALIZE
  mrb_define_method(mrb, GDBusInterfaceSkeleton_class, "initialize", mrb_GLib_GDBusInterfaceSkeleton_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GDBusInterfaceSkeleton_class, "disown", mrb_GLib_GDBusInterfaceSkeleton_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GDBusInterfaceSkeleton_class, "belongs_to_ruby?", mrb_GLib_GDBusInterfaceSkeleton_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
