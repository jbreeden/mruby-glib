/*
 * struct _GSequence
 * Defined in file gsequence.h @ line 30
 */

#include "mruby_GLib.h"

#if BIND_GSequence_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GSequence::initialize */
/* sha: 5d811cfd0121f39d8cd3c9f9aa33fc83557cd3831b2eff2537549c31dc87fbbd */
#if BIND_GSequence_INITIALIZE
mrb_value
mrb_GLib_GSequence_initialize(mrb_state* mrb, mrb_value self) {
  struct _GSequence* native_object = (struct _GSequence*)calloc(1, sizeof(struct _GSequence));
  mruby_giftwrap__GSequence_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSequence::initialize */
/* sha: c6f231e8042503e9d9454569c744548cc416ead90ef136c2c57d6c4155b317a2 */
mrb_value
mrb_GLib_GSequence_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSequence.disown only accepts objects of type GLib::GSequence");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSequence::belongs_to_ruby */
/* sha: fa21a9930c21534d82007f8b688289a6731cebf721c762c94027ac02e0702835 */
mrb_value
mrb_GLib_GSequence_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSequence.belongs_to_ruby only accepts objects of type GLib::GSequence");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GSequence_init(mrb_state* mrb) {
  struct RClass* GSequence_class = mrb_define_class_under(mrb, GLib_module(mrb), "GSequence", mrb->object_class);
  MRB_SET_INSTANCE_TT(GSequence_class, MRB_TT_DATA);

#if BIND_GSequence_INITIALIZE
  mrb_define_method(mrb, GSequence_class, "initialize", mrb_GLib_GSequence_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GSequence_class, "disown", mrb_GLib_GSequence_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GSequence_class, "belongs_to_ruby?", mrb_GLib_GSequence_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
