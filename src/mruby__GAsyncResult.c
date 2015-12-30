/*
 * struct _GAsyncResult
 * Defined in file giotypes.h @ line 34
 */

#include "mruby_GLib.h"

#if BIND_GAsyncResult_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GAsyncResult::initialize */
/* sha: 5f3179a40f03f300bdfa844380b1cb1a0102652848ee745f1bbaa7f074ec5f98 */
#if BIND_GAsyncResult_INITIALIZE
mrb_value
mrb_GLib_GAsyncResult_initialize(mrb_state* mrb, mrb_value self) {
  struct _GAsyncResult* native_object = (struct _GAsyncResult*)calloc(1, sizeof(struct _GAsyncResult));
  mruby_giftwrap__GAsyncResult_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GAsyncResult::initialize */
/* sha: 962fd73a8a9b8d2a599b94caf7aaccf57621e9c649c54bacacdd53d77d168e50 */
mrb_value
mrb_GLib_GAsyncResult_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GAsyncResult.disown only accepts objects of type GLib::GAsyncResult");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GAsyncResult::belongs_to_ruby */
/* sha: 316878a21123ca06f556f4aaf702d7b868e7459b30a074d90e3e5200e362fc90 */
mrb_value
mrb_GLib_GAsyncResult_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GAsyncResult.belongs_to_ruby only accepts objects of type GLib::GAsyncResult");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GAsyncResult_init(mrb_state* mrb) {
  struct RClass* GAsyncResult_class = mrb_define_class_under(mrb, GLib_module(mrb), "GAsyncResult", mrb->object_class);
  MRB_SET_INSTANCE_TT(GAsyncResult_class, MRB_TT_DATA);

#if BIND_GAsyncResult_INITIALIZE
  mrb_define_method(mrb, GAsyncResult_class, "initialize", mrb_GLib_GAsyncResult_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GAsyncResult_class, "disown", mrb_GLib_GAsyncResult_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GAsyncResult_class, "belongs_to_ruby?", mrb_GLib_GAsyncResult_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
