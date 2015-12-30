/*
 * struct _GFileIcon
 * Defined in file giotypes.h @ line 98
 */

#include "mruby_GLib.h"

#if BIND_GFileIcon_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GFileIcon::initialize */
/* sha: 50dfe6752d2a6ec7a7ec3ac7c27ede5dc6c8cd0aeec7616fe92430fd6eeda9da */
#if BIND_GFileIcon_INITIALIZE
mrb_value
mrb_GLib_GFileIcon_initialize(mrb_state* mrb, mrb_value self) {
  struct _GFileIcon* native_object = (struct _GFileIcon*)calloc(1, sizeof(struct _GFileIcon));
  mruby_giftwrap__GFileIcon_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIcon::initialize */
/* sha: 32ea3331532119ee26bed6f25ef58c379a8417d26c089eb6968fffac335f7456 */
mrb_value
mrb_GLib_GFileIcon_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GFileIcon.disown only accepts objects of type GLib::GFileIcon");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIcon::belongs_to_ruby */
/* sha: dda1757b5fb6238db7a2e23a9aa125b9fa298c2e4979797420c7780a75ede52c */
mrb_value
mrb_GLib_GFileIcon_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GFileIcon.belongs_to_ruby only accepts objects of type GLib::GFileIcon");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GFileIcon_init(mrb_state* mrb) {
  struct RClass* GFileIcon_class = mrb_define_class_under(mrb, GLib_module(mrb), "GFileIcon", mrb->object_class);
  MRB_SET_INSTANCE_TT(GFileIcon_class, MRB_TT_DATA);

#if BIND_GFileIcon_INITIALIZE
  mrb_define_method(mrb, GFileIcon_class, "initialize", mrb_GLib_GFileIcon_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GFileIcon_class, "disown", mrb_GLib_GFileIcon_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GFileIcon_class, "belongs_to_ruby?", mrb_GLib_GFileIcon_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
