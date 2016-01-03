/*
 * struct _GFile
 * Defined in file dummy_decls.h @ line 3
 */

#include "mruby_GLib.h"

#if BIND_GFile_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GFile::initialize */
/* sha: d6ba8a58b8aa1153e88f2d9c9c97de5531561b29f42e672f8a2f368440d38d97 */
#if BIND_GFile_INITIALIZE
mrb_value
mrb_GLib_GFile_initialize(mrb_state* mrb, mrb_value self) {
  struct _GFile* native_object = (struct _GFile*)calloc(1, sizeof(struct _GFile));
  mruby_giftwrap__GFile_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFile::initialize */
/* sha: 2898d6631b84ddc7d41a32712bfdb699a5e7b87a1b2f74ce02b1058cd2315bba */
mrb_value
mrb_GLib_GFile_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GFile.disown only accepts objects of type GLib::GFile");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFile::belongs_to_ruby */
/* sha: 28878d5023cc1d168640819defd85947b48b9ac6af31b27f1fa401ab75be7c95 */
mrb_value
mrb_GLib_GFile_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GFile.belongs_to_ruby only accepts objects of type GLib::GFile");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GFile_init(mrb_state* mrb) {
/* MRUBY_BINDING: GFile::class_definition */
/* sha: 8c284708d2b6b2cba84cd7e74120124b07fb9646cef8b264c0a60c5638350451 */
  struct RClass* GFile_class = mrb_define_class_under(mrb, GLib_module(mrb), "GFile", mrb->object_class);
  MRB_SET_INSTANCE_TT(GFile_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFile::class_method_definitions */
/* sha: 3ff984b598bc4200a030a62ed6b887212abe2b99c533209176e6d1f019155b3b */
#if BIND_GFile_INITIALIZE
  mrb_define_method(mrb, GFile_class, "initialize", mrb_GLib_GFile_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GFile_class, "disown", mrb_GLib_GFile_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GFile_class, "belongs_to_ruby?", mrb_GLib_GFile_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFile::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFile::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
