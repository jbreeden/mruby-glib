/*
 * struct _GSeekable
 * Defined in file dummy_decls.h @ line 11
 */

#include "mruby_GLib.h"

#if BIND_GSeekable_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GSeekable::initialize */
/* sha: 9f0c1b2936d1f33ef69ca0def31fba4cbaa39b9042dde24bda9fa7fc44b14017 */
#if BIND_GSeekable_INITIALIZE
mrb_value
mrb_GLib_GSeekable_initialize(mrb_state* mrb, mrb_value self) {
  struct _GSeekable* native_object = (struct _GSeekable*)calloc(1, sizeof(struct _GSeekable));
  mruby_giftwrap__GSeekable_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSeekable::initialize */
/* sha: 973f32e00a5f6a97a8504d9772ff0c3678902a541c58a87ed06c810f9640a772 */
mrb_value
mrb_GLib_GSeekable_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSeekable.disown only accepts objects of type GLib::GSeekable");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSeekable::belongs_to_ruby */
/* sha: d823944740941cbe5481851a8789d2582dbf40386cd2ef88ccf0c9a9221b592e */
mrb_value
mrb_GLib_GSeekable_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSeekable.belongs_to_ruby only accepts objects of type GLib::GSeekable");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GSeekable_init(mrb_state* mrb) {
/* MRUBY_BINDING: GSeekable::class_definition */
/* sha: 70ef65e8d190b9e9768e3ab4a25aded17439186447895ebff16bf1353f185c63 */
  struct RClass* GSeekable_class = mrb_define_class_under(mrb, GLib_module(mrb), "GSeekable", mrb->object_class);
  MRB_SET_INSTANCE_TT(GSeekable_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSeekable::class_method_definitions */
/* sha: c24ed2786a9494c0327365b5d9a4975ad3d7f7b6be822247efbda674f533e714 */
#if BIND_GSeekable_INITIALIZE
  mrb_define_method(mrb, GSeekable_class, "initialize", mrb_GLib_GSeekable_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GSeekable_class, "disown", mrb_GLib_GSeekable_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GSeekable_class, "belongs_to_ruby?", mrb_GLib_GSeekable_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSeekable::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSeekable::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
