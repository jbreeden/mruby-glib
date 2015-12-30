/*
 * struct _GFileAttributeMatcher
 * Defined in file giotypes.h @ line 91
 */

#include "mruby_GLib.h"

#if BIND_GFileAttributeMatcher_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GFileAttributeMatcher::initialize */
/* sha: dd8e56e9acaa2c1f427be5d30547799ed61a786f642ac9f4d95a09cf968cdd68 */
#if BIND_GFileAttributeMatcher_INITIALIZE
mrb_value
mrb_GLib_GFileAttributeMatcher_initialize(mrb_state* mrb, mrb_value self) {
  struct _GFileAttributeMatcher* native_object = (struct _GFileAttributeMatcher*)calloc(1, sizeof(struct _GFileAttributeMatcher));
  mruby_giftwrap__GFileAttributeMatcher_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileAttributeMatcher::initialize */
/* sha: 11d854301a4d78cd6a0c9f780cf3eb58ee17af51e762f17689673ec2db1c5dac */
mrb_value
mrb_GLib_GFileAttributeMatcher_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GFileAttributeMatcher.disown only accepts objects of type GLib::GFileAttributeMatcher");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileAttributeMatcher::belongs_to_ruby */
/* sha: fc0060d89917eeb4959f92a7ed1b0178c3c0aebab0db2878d62a93689a4bb7a3 */
mrb_value
mrb_GLib_GFileAttributeMatcher_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GFileAttributeMatcher.belongs_to_ruby only accepts objects of type GLib::GFileAttributeMatcher");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GFileAttributeMatcher_init(mrb_state* mrb) {
  struct RClass* GFileAttributeMatcher_class = mrb_define_class_under(mrb, GLib_module(mrb), "GFileAttributeMatcher", mrb->object_class);
  MRB_SET_INSTANCE_TT(GFileAttributeMatcher_class, MRB_TT_DATA);

#if BIND_GFileAttributeMatcher_INITIALIZE
  mrb_define_method(mrb, GFileAttributeMatcher_class, "initialize", mrb_GLib_GFileAttributeMatcher_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GFileAttributeMatcher_class, "disown", mrb_GLib_GFileAttributeMatcher_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GFileAttributeMatcher_class, "belongs_to_ruby?", mrb_GLib_GFileAttributeMatcher_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
