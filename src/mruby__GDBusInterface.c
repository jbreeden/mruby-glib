/*
 * struct _GDBusInterface
 * Defined in file giotypes.h @ line 516
 */

#include "mruby_GLib.h"

#if BIND_GDBusInterface_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GDBusInterface::initialize */
/* sha: 9d6cc3f704bfdded788124141049aeae70099ed011bbb47ecb46ac66bdd8aadb */
#if BIND_GDBusInterface_INITIALIZE
mrb_value
mrb_GLib_GDBusInterface_initialize(mrb_state* mrb, mrb_value self) {
  struct _GDBusInterface* native_object = (struct _GDBusInterface*)calloc(1, sizeof(struct _GDBusInterface));
  mruby_giftwrap__GDBusInterface_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusInterface::initialize */
/* sha: 378364d3ec310e09bf2368e96cce2b1cda383fb83358caa192be5f20f49c42f6 */
mrb_value
mrb_GLib_GDBusInterface_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusInterface.disown only accepts objects of type GLib::GDBusInterface");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusInterface::belongs_to_ruby */
/* sha: 8103fccb13fb8868d10ebf0b990225db6c1575239f455397e763ba267936bf59 */
mrb_value
mrb_GLib_GDBusInterface_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusInterface.belongs_to_ruby only accepts objects of type GLib::GDBusInterface");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GDBusInterface_init(mrb_state* mrb) {
  struct RClass* GDBusInterface_class = mrb_define_class_under(mrb, GLib_module(mrb), "GDBusInterface", mrb->object_class);
  MRB_SET_INSTANCE_TT(GDBusInterface_class, MRB_TT_DATA);

#if BIND_GDBusInterface_INITIALIZE
  mrb_define_method(mrb, GDBusInterface_class, "initialize", mrb_GLib_GDBusInterface_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GDBusInterface_class, "disown", mrb_GLib_GDBusInterface_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GDBusInterface_class, "belongs_to_ruby?", mrb_GLib_GDBusInterface_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
