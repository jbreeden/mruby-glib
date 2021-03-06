/*
 * struct _GDir
 * Defined in file gdir.h @ line 37
 */

#include "mruby_GLib.h"

#if BIND_GDir_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GDir::initialize */
/* sha: d0ce7b51f24244d8d60297971803124095529a85794462a15a1a90d4794634b6 */
#if BIND_GDir_INITIALIZE
mrb_value
mrb_GLib_GDir_initialize(mrb_state* mrb, mrb_value self) {
  struct _GDir* native_object = (struct _GDir*)calloc(1, sizeof(struct _GDir));
  mruby_giftwrap__GDir_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDir::initialize */
/* sha: 221e906ae6c391d95ecab0e6f8e3fd431449ed65f74cf7cd9f6c585ce135bd0b */
mrb_value
mrb_GLib_GDir_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDir.disown only accepts objects of type GLib::GDir");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDir::belongs_to_ruby */
/* sha: df838b7c2bcb9444451985c3a313b157490ccd1cad5a5dde479e78eb4a0af5e2 */
mrb_value
mrb_GLib_GDir_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDir.belongs_to_ruby only accepts objects of type GLib::GDir");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GDir_init(mrb_state* mrb) {
/* MRUBY_BINDING: GDir::class_definition */
/* sha: 697098ee69140746fe84ef7c9019bd506fb52377d7d3d48bc2233531d89042f7 */
  struct RClass* GDir_class = mrb_define_class_under(mrb, GLib_module(mrb), "GDir", mrb->object_class);
  MRB_SET_INSTANCE_TT(GDir_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDir::class_method_definitions */
/* sha: 411f34843800787ac058ae3e77770bbf8676f580b49d590ec3f9326a87a01495 */
#if BIND_GDir_INITIALIZE
  mrb_define_method(mrb, GDir_class, "initialize", mrb_GLib_GDir_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GDir_class, "disown", mrb_GLib_GDir_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GDir_class, "belongs_to_ruby?", mrb_GLib_GDir_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDir::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDir::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
