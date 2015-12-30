/*
 * struct _GBytesIcon
 * Defined in file giotypes.h @ line 121
 */

#include "mruby_GLib.h"

#if BIND_GBytesIcon_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GBytesIcon::initialize */
/* sha: 90e2255aab18b7da9f13d7a708606b0bcfb586d74a8706777e3204ef9ca01804 */
#if BIND_GBytesIcon_INITIALIZE
mrb_value
mrb_GLib_GBytesIcon_initialize(mrb_state* mrb, mrb_value self) {
  struct _GBytesIcon* native_object = (struct _GBytesIcon*)calloc(1, sizeof(struct _GBytesIcon));
  mruby_giftwrap__GBytesIcon_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GBytesIcon::initialize */
/* sha: 020485079324ffa9a35dfb7116b2c8bbff911f945fe22a6a5b0f5a73ff2cac80 */
mrb_value
mrb_GLib_GBytesIcon_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GBytesIcon.disown only accepts objects of type GLib::GBytesIcon");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GBytesIcon::belongs_to_ruby */
/* sha: d8358d5c73a32917d0d4a24aab7a5a37955510bd708751037dfd4b8b7e91f497 */
mrb_value
mrb_GLib_GBytesIcon_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GBytesIcon.belongs_to_ruby only accepts objects of type GLib::GBytesIcon");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GBytesIcon_init(mrb_state* mrb) {
  struct RClass* GBytesIcon_class = mrb_define_class_under(mrb, GLib_module(mrb), "GBytesIcon", mrb->object_class);
  MRB_SET_INSTANCE_TT(GBytesIcon_class, MRB_TT_DATA);

#if BIND_GBytesIcon_INITIALIZE
  mrb_define_method(mrb, GBytesIcon_class, "initialize", mrb_GLib_GBytesIcon_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GBytesIcon_class, "disown", mrb_GLib_GBytesIcon_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GBytesIcon_class, "belongs_to_ruby?", mrb_GLib_GBytesIcon_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
