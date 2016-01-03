/*
 * struct _GKeyFile
 * Defined in file gkeyfile.h @ line 48
 */

#include "mruby_GLib.h"

#if BIND_GKeyFile_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GKeyFile::initialize */
/* sha: e6721cd8dcb993bd790af9383191401c51a782a0b7c6a05b49f46a174d5c1f52 */
#if BIND_GKeyFile_INITIALIZE
mrb_value
mrb_GLib_GKeyFile_initialize(mrb_state* mrb, mrb_value self) {
  struct _GKeyFile* native_object = (struct _GKeyFile*)calloc(1, sizeof(struct _GKeyFile));
  mruby_giftwrap__GKeyFile_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GKeyFile::initialize */
/* sha: 45efd5584e66f3feb895a280833667c5cda2a0f059f399a382f43ff5c8cbb99c */
mrb_value
mrb_GLib_GKeyFile_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GKeyFile.disown only accepts objects of type GLib::GKeyFile");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GKeyFile::belongs_to_ruby */
/* sha: 01ce50b98167ba8146010137d2df16cd6c1593048ad4d115fc8da22f88f6d447 */
mrb_value
mrb_GLib_GKeyFile_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GKeyFile.belongs_to_ruby only accepts objects of type GLib::GKeyFile");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GKeyFile_init(mrb_state* mrb) {
/* MRUBY_BINDING: GKeyFile::class_definition */
/* sha: 5f81e43f1e5036cd43a80be6a69e8e804c69f71c21d83af258049f9543774f1c */
  struct RClass* GKeyFile_class = mrb_define_class_under(mrb, GLib_module(mrb), "GKeyFile", mrb->object_class);
  MRB_SET_INSTANCE_TT(GKeyFile_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GKeyFile::class_method_definitions */
/* sha: 205ea1e17880db663455b9e15df71e72220c249a8e8ba2ae0ed732e0a1128e59 */
#if BIND_GKeyFile_INITIALIZE
  mrb_define_method(mrb, GKeyFile_class, "initialize", mrb_GLib_GKeyFile_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GKeyFile_class, "disown", mrb_GLib_GKeyFile_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GKeyFile_class, "belongs_to_ruby?", mrb_GLib_GKeyFile_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GKeyFile::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GKeyFile::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
