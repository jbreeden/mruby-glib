/*
 * struct _GPatternSpec
 * Defined in file gpattern.h @ line 30
 */

#include "mruby_GLib.h"

#if BIND_GPatternSpec_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GPatternSpec::initialize */
/* sha: 9cbc3e5406973fa0462958d09a86a8de5269bc4706d2d5c9b9a37d57fbdfe81e */
#if BIND_GPatternSpec_INITIALIZE
mrb_value
mrb_GLib_GPatternSpec_initialize(mrb_state* mrb, mrb_value self) {
  struct _GPatternSpec* native_object = (struct _GPatternSpec*)calloc(1, sizeof(struct _GPatternSpec));
  mruby_giftwrap__GPatternSpec_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GPatternSpec::initialize */
/* sha: ba76475134eb79d225d85465a28ea57865743a04605e3cbfcd430f0a5f31a1c2 */
mrb_value
mrb_GLib_GPatternSpec_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GPatternSpec.disown only accepts objects of type GLib::GPatternSpec");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GPatternSpec::belongs_to_ruby */
/* sha: 0c054a28a5d85f6a1bdd867145790277cd2ef5edc61af4fc1b51fb3ca2ad90e2 */
mrb_value
mrb_GLib_GPatternSpec_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GPatternSpec.belongs_to_ruby only accepts objects of type GLib::GPatternSpec");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GPatternSpec_init(mrb_state* mrb) {
  struct RClass* GPatternSpec_class = mrb_define_class_under(mrb, GLib_module(mrb), "GPatternSpec", mrb->object_class);
  MRB_SET_INSTANCE_TT(GPatternSpec_class, MRB_TT_DATA);

#if BIND_GPatternSpec_INITIALIZE
  mrb_define_method(mrb, GPatternSpec_class, "initialize", mrb_GLib_GPatternSpec_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GPatternSpec_class, "disown", mrb_GLib_GPatternSpec_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GPatternSpec_class, "belongs_to_ruby?", mrb_GLib_GPatternSpec_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
