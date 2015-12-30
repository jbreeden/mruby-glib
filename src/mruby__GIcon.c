/*
 * struct _GIcon
 * Defined in file giotypes.h @ line 102
 */

#include "mruby_GLib.h"

#if BIND_GIcon_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GIcon::initialize */
/* sha: d9d382d36c38a10da3a580e1c4d98edbb76e7ad3f5b0696f1f7827330098c656 */
#if BIND_GIcon_INITIALIZE
mrb_value
mrb_GLib_GIcon_initialize(mrb_state* mrb, mrb_value self) {
  struct _GIcon* native_object = (struct _GIcon*)calloc(1, sizeof(struct _GIcon));
  mruby_giftwrap__GIcon_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIcon::initialize */
/* sha: 1e4df2784da28ffd2dba1df06f34a376105a2b75ab8323841df90480ba074644 */
mrb_value
mrb_GLib_GIcon_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GIcon.disown only accepts objects of type GLib::GIcon");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIcon::belongs_to_ruby */
/* sha: 7cb14b83999485006bd77534bbbe36e133ceace1b601ed0c07c54b9e9c852019 */
mrb_value
mrb_GLib_GIcon_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GIcon.belongs_to_ruby only accepts objects of type GLib::GIcon");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GIcon_init(mrb_state* mrb) {
  struct RClass* GIcon_class = mrb_define_class_under(mrb, GLib_module(mrb), "GIcon", mrb->object_class);
  MRB_SET_INSTANCE_TT(GIcon_class, MRB_TT_DATA);

#if BIND_GIcon_INITIALIZE
  mrb_define_method(mrb, GIcon_class, "initialize", mrb_GLib_GIcon_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GIcon_class, "disown", mrb_GLib_GIcon_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GIcon_class, "belongs_to_ruby?", mrb_GLib_GIcon_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
