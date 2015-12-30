/*
 * struct _GVfs
 * Defined in file giotypes.h @ line 234
 */

#include "mruby_GLib.h"

#if BIND_GVfs_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GVfs::initialize */
/* sha: 1897d03fc98e739eb42a82f8b413c2f469785a71a2cf6dea7d4af5e2de1dbc20 */
#if BIND_GVfs_INITIALIZE
mrb_value
mrb_GLib_GVfs_initialize(mrb_state* mrb, mrb_value self) {
  struct _GVfs* native_object = (struct _GVfs*)calloc(1, sizeof(struct _GVfs));
  mruby_giftwrap__GVfs_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GVfs::initialize */
/* sha: bbeb0cf9f47f089952a4818d6db33d96462ff28930a3dd1aeba64e8917e96606 */
mrb_value
mrb_GLib_GVfs_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GVfs.disown only accepts objects of type GLib::GVfs");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GVfs::belongs_to_ruby */
/* sha: 3f453b13da5b9caf2ddc5512ccb7b5a4227fb9289e3b357c952a14ca5a561458 */
mrb_value
mrb_GLib_GVfs_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GVfs.belongs_to_ruby only accepts objects of type GLib::GVfs");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GVfs_init(mrb_state* mrb) {
  struct RClass* GVfs_class = mrb_define_class_under(mrb, GLib_module(mrb), "GVfs", mrb->object_class);
  MRB_SET_INSTANCE_TT(GVfs_class, MRB_TT_DATA);

#if BIND_GVfs_INITIALIZE
  mrb_define_method(mrb, GVfs_class, "initialize", mrb_GLib_GVfs_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GVfs_class, "disown", mrb_GLib_GVfs_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GVfs_class, "belongs_to_ruby?", mrb_GLib_GVfs_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
