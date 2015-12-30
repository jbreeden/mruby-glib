/*
 * struct _GCancellable
 * Defined in file giotypes.h @ line 38
 */

#include "mruby_GLib.h"

#if BIND_GCancellable_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GCancellable::initialize */
/* sha: 0eef14bc68170605f5767f194fc11ef070e4fe99ad71c08c349e2fecdc97d858 */
#if BIND_GCancellable_INITIALIZE
mrb_value
mrb_GLib_GCancellable_initialize(mrb_state* mrb, mrb_value self) {
  struct _GCancellable* native_object = (struct _GCancellable*)calloc(1, sizeof(struct _GCancellable));
  mruby_giftwrap__GCancellable_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GCancellable::initialize */
/* sha: c0d2fb9c5c9c01860e2bc9aec9a3bad2eeb656b11b10ce3ffb9e668163a438a6 */
mrb_value
mrb_GLib_GCancellable_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GCancellable.disown only accepts objects of type GLib::GCancellable");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GCancellable::belongs_to_ruby */
/* sha: 50b91e1fa37a56b054291f3fc45ff0b35e63c1d61b70f29b82e66e76a05ad6ba */
mrb_value
mrb_GLib_GCancellable_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GCancellable.belongs_to_ruby only accepts objects of type GLib::GCancellable");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GCancellable_init(mrb_state* mrb) {
  struct RClass* GCancellable_class = mrb_define_class_under(mrb, GLib_module(mrb), "GCancellable", mrb->object_class);
  MRB_SET_INSTANCE_TT(GCancellable_class, MRB_TT_DATA);

#if BIND_GCancellable_INITIALIZE
  mrb_define_method(mrb, GCancellable_class, "initialize", mrb_GLib_GCancellable_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GCancellable_class, "disown", mrb_GLib_GCancellable_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GCancellable_class, "belongs_to_ruby?", mrb_GLib_GCancellable_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
