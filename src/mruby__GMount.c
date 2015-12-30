/*
 * struct _GMount
 * Defined in file giotypes.h @ line 130
 */

#include "mruby_GLib.h"

#if BIND_GMount_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GMount::initialize */
/* sha: 40f2cf6a1a9474e119e4683e9f62f9c817d05bd07c62d4a5cffeec5d6f183724 */
#if BIND_GMount_INITIALIZE
mrb_value
mrb_GLib_GMount_initialize(mrb_state* mrb, mrb_value self) {
  struct _GMount* native_object = (struct _GMount*)calloc(1, sizeof(struct _GMount));
  mruby_giftwrap__GMount_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMount::initialize */
/* sha: 1420b20c819a4a214aefa9bdac6e7e0506806529a9003934c8340cd80caeb536 */
mrb_value
mrb_GLib_GMount_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GMount.disown only accepts objects of type GLib::GMount");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMount::belongs_to_ruby */
/* sha: e7d6100c9e9651cead21367e687f47e89a5c25f7377d28fa4c1a3215cf8c6d34 */
mrb_value
mrb_GLib_GMount_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GMount.belongs_to_ruby only accepts objects of type GLib::GMount");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GMount_init(mrb_state* mrb) {
  struct RClass* GMount_class = mrb_define_class_under(mrb, GLib_module(mrb), "GMount", mrb->object_class);
  MRB_SET_INSTANCE_TT(GMount_class, MRB_TT_DATA);

#if BIND_GMount_INITIALIZE
  mrb_define_method(mrb, GMount_class, "initialize", mrb_GLib_GMount_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GMount_class, "disown", mrb_GLib_GMount_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GMount_class, "belongs_to_ruby?", mrb_GLib_GMount_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
