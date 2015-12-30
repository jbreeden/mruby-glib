/*
 * struct _GInputStream
 * Defined in file giotypes.h @ line 107
 */

#include "mruby_GLib.h"

#if BIND_GInputStream_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GInputStream::initialize */
/* sha: 1704c2de7887035b30970a124536e709042cb104e06c156d2a3d89594e21fc6a */
#if BIND_GInputStream_INITIALIZE
mrb_value
mrb_GLib_GInputStream_initialize(mrb_state* mrb, mrb_value self) {
  struct _GInputStream* native_object = (struct _GInputStream*)calloc(1, sizeof(struct _GInputStream));
  mruby_giftwrap__GInputStream_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStream::initialize */
/* sha: d72ca4cc769f236d44a4c5d0cbce950b1b202e4404af47b719ceb0c661dd7af9 */
mrb_value
mrb_GLib_GInputStream_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GInputStream.disown only accepts objects of type GLib::GInputStream");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStream::belongs_to_ruby */
/* sha: c587bc21fbc9afadaa8ddb58fafef6a0d3eeaf44b05fa7745f8b3316195ab409 */
mrb_value
mrb_GLib_GInputStream_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GInputStream.belongs_to_ruby only accepts objects of type GLib::GInputStream");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GInputStream_init(mrb_state* mrb) {
  struct RClass* GInputStream_class = mrb_define_class_under(mrb, GLib_module(mrb), "GInputStream", mrb->object_class);
  MRB_SET_INSTANCE_TT(GInputStream_class, MRB_TT_DATA);

#if BIND_GInputStream_INITIALIZE
  mrb_define_method(mrb, GInputStream_class, "initialize", mrb_GLib_GInputStream_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GInputStream_class, "disown", mrb_GLib_GInputStream_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GInputStream_class, "belongs_to_ruby?", mrb_GLib_GInputStream_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
