/*
 * struct _GThemedIcon
 * Defined in file giotypes.h @ line 225
 */

#include "mruby_GLib.h"

#if BIND_GThemedIcon_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GThemedIcon::initialize */
/* sha: ec5b392a94b1d9667b921664187a699822d215d0a98cd03db509cdb675826d3d */
#if BIND_GThemedIcon_INITIALIZE
mrb_value
mrb_GLib_GThemedIcon_initialize(mrb_state* mrb, mrb_value self) {
  struct _GThemedIcon* native_object = (struct _GThemedIcon*)calloc(1, sizeof(struct _GThemedIcon));
  mruby_giftwrap__GThemedIcon_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GThemedIcon::initialize */
/* sha: d6b85c7869dc9af1e90873b1b15104cc2fcf4dc452de1c266a666b844b2b0092 */
mrb_value
mrb_GLib_GThemedIcon_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GThemedIcon.disown only accepts objects of type GLib::GThemedIcon");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GThemedIcon::belongs_to_ruby */
/* sha: 52884eeb1c5612b2498cedba88c4f99397c1777f56736293c4c2137aef8f9c9f */
mrb_value
mrb_GLib_GThemedIcon_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GThemedIcon.belongs_to_ruby only accepts objects of type GLib::GThemedIcon");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GThemedIcon_init(mrb_state* mrb) {
  struct RClass* GThemedIcon_class = mrb_define_class_under(mrb, GLib_module(mrb), "GThemedIcon", mrb->object_class);
  MRB_SET_INSTANCE_TT(GThemedIcon_class, MRB_TT_DATA);

#if BIND_GThemedIcon_INITIALIZE
  mrb_define_method(mrb, GThemedIcon_class, "initialize", mrb_GLib_GThemedIcon_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GThemedIcon_class, "disown", mrb_GLib_GThemedIcon_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GThemedIcon_class, "belongs_to_ruby?", mrb_GLib_GThemedIcon_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
