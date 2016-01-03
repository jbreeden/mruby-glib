/*
 * struct _GCredentialsClass
 * Defined in file gcredentials.h @ line 45
 */

#include "mruby_GLib.h"

#if BIND_GCredentialsClass_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GCredentialsClass::initialize */
/* sha: d7621a0b0f603c0c8c6013c05ff98d0dc89aad6bfdb5e495d477f6d5828007bf */
#if BIND_GCredentialsClass_INITIALIZE
mrb_value
mrb_GLib_GCredentialsClass_initialize(mrb_state* mrb, mrb_value self) {
  struct _GCredentialsClass* native_object = (struct _GCredentialsClass*)calloc(1, sizeof(struct _GCredentialsClass));
  mruby_giftwrap__GCredentialsClass_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GCredentialsClass::initialize */
/* sha: b5b6e7f262009182308a5be54ae4fd03f816978987445e75adbe64555cd9b151 */
mrb_value
mrb_GLib_GCredentialsClass_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GCredentialsClass.disown only accepts objects of type GLib::GCredentialsClass");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GCredentialsClass::belongs_to_ruby */
/* sha: b5ca9c11710a43981d27c90dee1bfb10612dda4d92bcbef180829df5dadb08f2 */
mrb_value
mrb_GLib_GCredentialsClass_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GCredentialsClass.belongs_to_ruby only accepts objects of type GLib::GCredentialsClass");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GCredentialsClass_init(mrb_state* mrb) {
  struct RClass* GCredentialsClass_class = mrb_define_class_under(mrb, GLib_module(mrb), "GCredentialsClass", mrb->object_class);
  MRB_SET_INSTANCE_TT(GCredentialsClass_class, MRB_TT_DATA);

#if BIND_GCredentialsClass_INITIALIZE
  mrb_define_method(mrb, GCredentialsClass_class, "initialize", mrb_GLib_GCredentialsClass_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GCredentialsClass_class, "disown", mrb_GLib_GCredentialsClass_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GCredentialsClass_class, "belongs_to_ruby?", mrb_GLib_GCredentialsClass_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
