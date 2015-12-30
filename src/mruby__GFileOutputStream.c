/*
 * struct _GFileOutputStream
 * Defined in file giotypes.h @ line 96
 */

#include "mruby_GLib.h"

#if BIND_GFileOutputStream_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GFileOutputStream::initialize */
/* sha: 227c580479852a87141caa82b0a860ebed9f38a9a5b6e7928ee3a9f4bf76c287 */
#if BIND_GFileOutputStream_INITIALIZE
mrb_value
mrb_GLib_GFileOutputStream_initialize(mrb_state* mrb, mrb_value self) {
  struct _GFileOutputStream* native_object = (struct _GFileOutputStream*)calloc(1, sizeof(struct _GFileOutputStream));
  mruby_giftwrap__GFileOutputStream_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileOutputStream::initialize */
/* sha: 62d47e8e95d45da3b91893e7e88e82d0371c40b6ba5202dec29b89be55a497c9 */
mrb_value
mrb_GLib_GFileOutputStream_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GFileOutputStream.disown only accepts objects of type GLib::GFileOutputStream");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileOutputStream::belongs_to_ruby */
/* sha: 282defcacc88adad03b5e4ed6f358500c5721cbc05b3122500adfce2a7e20415 */
mrb_value
mrb_GLib_GFileOutputStream_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GFileOutputStream.belongs_to_ruby only accepts objects of type GLib::GFileOutputStream");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GFileOutputStream_init(mrb_state* mrb) {
  struct RClass* GFileOutputStream_class = mrb_define_class_under(mrb, GLib_module(mrb), "GFileOutputStream", mrb->object_class);
  MRB_SET_INSTANCE_TT(GFileOutputStream_class, MRB_TT_DATA);

#if BIND_GFileOutputStream_INITIALIZE
  mrb_define_method(mrb, GFileOutputStream_class, "initialize", mrb_GLib_GFileOutputStream_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GFileOutputStream_class, "disown", mrb_GLib_GFileOutputStream_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GFileOutputStream_class, "belongs_to_ruby?", mrb_GLib_GFileOutputStream_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
