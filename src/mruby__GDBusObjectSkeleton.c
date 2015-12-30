/*
 * struct _GDBusObjectSkeleton
 * Defined in file giotypes.h @ line 519
 */

#include "mruby_GLib.h"

#if BIND_GDBusObjectSkeleton_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GDBusObjectSkeleton::initialize */
/* sha: 31aef80134f54a791675b5e892bad223c76921f00a3a8fda7a977defaeb557eb */
#if BIND_GDBusObjectSkeleton_INITIALIZE
mrb_value
mrb_GLib_GDBusObjectSkeleton_initialize(mrb_state* mrb, mrb_value self) {
  struct _GDBusObjectSkeleton* native_object = (struct _GDBusObjectSkeleton*)calloc(1, sizeof(struct _GDBusObjectSkeleton));
  mruby_giftwrap__GDBusObjectSkeleton_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusObjectSkeleton::initialize */
/* sha: ec8506c34e88da3b4a955ad8bed5a5bc5494d9397a3fa021bf4c1ba6624690d4 */
mrb_value
mrb_GLib_GDBusObjectSkeleton_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusObjectSkeleton.disown only accepts objects of type GLib::GDBusObjectSkeleton");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusObjectSkeleton::belongs_to_ruby */
/* sha: 7eb086803f45c3b00d01bcedc90b22d92782be461fb8992f9155b81f11373a01 */
mrb_value
mrb_GLib_GDBusObjectSkeleton_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusObjectSkeleton.belongs_to_ruby only accepts objects of type GLib::GDBusObjectSkeleton");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GDBusObjectSkeleton_init(mrb_state* mrb) {
  struct RClass* GDBusObjectSkeleton_class = mrb_define_class_under(mrb, GLib_module(mrb), "GDBusObjectSkeleton", mrb->object_class);
  MRB_SET_INSTANCE_TT(GDBusObjectSkeleton_class, MRB_TT_DATA);

#if BIND_GDBusObjectSkeleton_INITIALIZE
  mrb_define_method(mrb, GDBusObjectSkeleton_class, "initialize", mrb_GLib_GDBusObjectSkeleton_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GDBusObjectSkeleton_class, "disown", mrb_GLib_GDBusObjectSkeleton_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GDBusObjectSkeleton_class, "belongs_to_ruby?", mrb_GLib_GDBusObjectSkeleton_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
