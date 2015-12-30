/*
 * struct _GSocketConnectable
 * Defined in file giotypes.h @ line 204
 */

#include "mruby_GLib.h"

#if BIND_GSocketConnectable_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GSocketConnectable::initialize */
/* sha: e4969b94be9b33592505dfa7216a963e048b5c3681e0f406b6f0594aa3cb1500 */
#if BIND_GSocketConnectable_INITIALIZE
mrb_value
mrb_GLib_GSocketConnectable_initialize(mrb_state* mrb, mrb_value self) {
  struct _GSocketConnectable* native_object = (struct _GSocketConnectable*)calloc(1, sizeof(struct _GSocketConnectable));
  mruby_giftwrap__GSocketConnectable_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketConnectable::initialize */
/* sha: f1f62bdd5a6bcd323f3faa93c9df62aba99364494caa5f1c399762978a3115e4 */
mrb_value
mrb_GLib_GSocketConnectable_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSocketConnectable.disown only accepts objects of type GLib::GSocketConnectable");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketConnectable::belongs_to_ruby */
/* sha: 1565085145bd271feb68d6adaaad8c116da84408234a88bbdac2a6c760dc7bd2 */
mrb_value
mrb_GLib_GSocketConnectable_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSocketConnectable.belongs_to_ruby only accepts objects of type GLib::GSocketConnectable");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GSocketConnectable_init(mrb_state* mrb) {
  struct RClass* GSocketConnectable_class = mrb_define_class_under(mrb, GLib_module(mrb), "GSocketConnectable", mrb->object_class);
  MRB_SET_INSTANCE_TT(GSocketConnectable_class, MRB_TT_DATA);

#if BIND_GSocketConnectable_INITIALIZE
  mrb_define_method(mrb, GSocketConnectable_class, "initialize", mrb_GLib_GSocketConnectable_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GSocketConnectable_class, "disown", mrb_GLib_GSocketConnectable_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GSocketConnectable_class, "belongs_to_ruby?", mrb_GLib_GSocketConnectable_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
