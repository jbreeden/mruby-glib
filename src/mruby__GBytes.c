/*
 * struct _GBytes
 * Defined in file garray.h @ line 36
 */

#include "mruby_GLib.h"

#if BIND_GBytes_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GBytes::initialize */
/* sha: 4882be9b8b7995bd2441719c0e7347698418a9cc3006b3adba4b56cf58ddda82 */
#if BIND_GBytes_INITIALIZE
mrb_value
mrb_GLib_GBytes_initialize(mrb_state* mrb, mrb_value self) {
  struct _GBytes* native_object = (struct _GBytes*)calloc(1, sizeof(struct _GBytes));
  mruby_giftwrap__GBytes_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GBytes::initialize */
/* sha: ec61031ac9c7f52564927f47c2ac80cdce7877170a102000b12e5bc52f088c64 */
mrb_value
mrb_GLib_GBytes_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GBytes.disown only accepts objects of type GLib::GBytes");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GBytes::belongs_to_ruby */
/* sha: 020a42c42264393d2ee6dc540a7669a461339817d2e3c99100694157d5556b76 */
mrb_value
mrb_GLib_GBytes_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GBytes.belongs_to_ruby only accepts objects of type GLib::GBytes");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GBytes_init(mrb_state* mrb) {
/* MRUBY_BINDING: GBytes::class_definition */
/* sha: 6f4909ec8342d40f9b9f1ec2d123ce16fd909660b3f27d6c99aa457d3280a523 */
  struct RClass* GBytes_class = mrb_define_class_under(mrb, GLib_module(mrb), "GBytes", mrb->object_class);
  MRB_SET_INSTANCE_TT(GBytes_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GBytes::class_method_definitions */
/* sha: 14c317cb04a8280ed5de2bf9b3e5e37c30cd2ee7c7e70f4e10fb8ccccc389e97 */
#if BIND_GBytes_INITIALIZE
  mrb_define_method(mrb, GBytes_class, "initialize", mrb_GLib_GBytes_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GBytes_class, "disown", mrb_GLib_GBytes_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GBytes_class, "belongs_to_ruby?", mrb_GLib_GBytes_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GBytes::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GBytes::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
