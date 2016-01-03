/*
 * struct _GChecksum
 * Defined in file gchecksum.h @ line 62
 */

#include "mruby_GLib.h"

#if BIND_GChecksum_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GChecksum::initialize */
/* sha: 65402e75b897ada54f0574fb3d9b0c2ceb4155b06b2492a0eac344d3eeaac494 */
#if BIND_GChecksum_INITIALIZE
mrb_value
mrb_GLib_GChecksum_initialize(mrb_state* mrb, mrb_value self) {
  struct _GChecksum* native_object = (struct _GChecksum*)calloc(1, sizeof(struct _GChecksum));
  mruby_giftwrap__GChecksum_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GChecksum::initialize */
/* sha: fb67ec1a8b4c7e67247aed7128cbc1558da2265c25fe225d531cb17100db7de2 */
mrb_value
mrb_GLib_GChecksum_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GChecksum.disown only accepts objects of type GLib::GChecksum");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GChecksum::belongs_to_ruby */
/* sha: ec6cf22e46476dfb5ccc44d29142735af6ce6f470be7c2a6d357f4118005c4d4 */
mrb_value
mrb_GLib_GChecksum_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GChecksum.belongs_to_ruby only accepts objects of type GLib::GChecksum");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GChecksum_init(mrb_state* mrb) {
/* MRUBY_BINDING: GChecksum::class_definition */
/* sha: 0b8bb034f5165ad8c5982c8099d2410010c94c12a49bf7ccdae5b685cd5b1d8d */
  struct RClass* GChecksum_class = mrb_define_class_under(mrb, GLib_module(mrb), "GChecksum", mrb->object_class);
  MRB_SET_INSTANCE_TT(GChecksum_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GChecksum::class_method_definitions */
/* sha: 526df16f6d2363c38e4fbeb2d8b7f1f8e5096ae6c8e01eacb00dc6d5c74cb3a0 */
#if BIND_GChecksum_INITIALIZE
  mrb_define_method(mrb, GChecksum_class, "initialize", mrb_GLib_GChecksum_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GChecksum_class, "disown", mrb_GLib_GChecksum_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GChecksum_class, "belongs_to_ruby?", mrb_GLib_GChecksum_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GChecksum::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GChecksum::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
