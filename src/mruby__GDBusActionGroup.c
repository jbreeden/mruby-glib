/*
 * struct _GDBusActionGroup
 * Defined in file giotypes.h @ line 50
 */

#include "mruby_GLib.h"

#if BIND_GDBusActionGroup_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GDBusActionGroup::initialize */
/* sha: 360b8a8c3f55ed5899e18e9601e086bc303909c3eeaab6e57be325b40a2bf5cd */
#if BIND_GDBusActionGroup_INITIALIZE
mrb_value
mrb_GLib_GDBusActionGroup_initialize(mrb_state* mrb, mrb_value self) {
  struct _GDBusActionGroup* native_object = (struct _GDBusActionGroup*)calloc(1, sizeof(struct _GDBusActionGroup));
  mruby_giftwrap__GDBusActionGroup_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusActionGroup::initialize */
/* sha: f644d5008bfa79ed862f96e9b628b30675babf2cd381c1b501ddae15b062e22e */
mrb_value
mrb_GLib_GDBusActionGroup_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusActionGroup.disown only accepts objects of type GLib::GDBusActionGroup");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusActionGroup::belongs_to_ruby */
/* sha: 144a0b00e37a2ecba140b795512413a28dd7b33ad1f407d737c099c4624a0e99 */
mrb_value
mrb_GLib_GDBusActionGroup_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusActionGroup.belongs_to_ruby only accepts objects of type GLib::GDBusActionGroup");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GDBusActionGroup_init(mrb_state* mrb) {
  struct RClass* GDBusActionGroup_class = mrb_define_class_under(mrb, GLib_module(mrb), "GDBusActionGroup", mrb->object_class);
  MRB_SET_INSTANCE_TT(GDBusActionGroup_class, MRB_TT_DATA);

#if BIND_GDBusActionGroup_INITIALIZE
  mrb_define_method(mrb, GDBusActionGroup_class, "initialize", mrb_GLib_GDBusActionGroup_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GDBusActionGroup_class, "disown", mrb_GLib_GDBusActionGroup_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GDBusActionGroup_class, "belongs_to_ruby?", mrb_GLib_GDBusActionGroup_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
