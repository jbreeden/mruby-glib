/*
 * struct _GBookmarkFile
 * Defined in file gbookmarkfile.h @ line 78
 */

#include "mruby_GLib.h"

#if BIND_GBookmarkFile_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GBookmarkFile::initialize */
/* sha: 5a9724387bd94fe97974b5dd612713657df341434af14c01605098dd972b54a1 */
#if BIND_GBookmarkFile_INITIALIZE
mrb_value
mrb_GLib_GBookmarkFile_initialize(mrb_state* mrb, mrb_value self) {
  struct _GBookmarkFile* native_object = (struct _GBookmarkFile*)calloc(1, sizeof(struct _GBookmarkFile));
  mruby_giftwrap__GBookmarkFile_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GBookmarkFile::initialize */
/* sha: 3a63e6ddd6c641f648988dcbcbf1b6b644a1a39e55bb23b36ec311117ce7fae0 */
mrb_value
mrb_GLib_GBookmarkFile_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GBookmarkFile.disown only accepts objects of type GLib::GBookmarkFile");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GBookmarkFile::belongs_to_ruby */
/* sha: 3cf707d7fef09c2eba023e7e50154ce2c6ce90ab9c88fa80adf372427c5ae865 */
mrb_value
mrb_GLib_GBookmarkFile_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GBookmarkFile.belongs_to_ruby only accepts objects of type GLib::GBookmarkFile");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GBookmarkFile_init(mrb_state* mrb) {
/* MRUBY_BINDING: GBookmarkFile::class_definition */
/* sha: 4387f743964c9009e2e74efaaff1822051bb5546996394df5340e44fdaeb71b6 */
  struct RClass* GBookmarkFile_class = mrb_define_class_under(mrb, GLib_module(mrb), "GBookmarkFile", mrb->object_class);
  MRB_SET_INSTANCE_TT(GBookmarkFile_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GBookmarkFile::class_method_definitions */
/* sha: 9f827795f3413cec53f13792f9a8dc86a9ea6c4fa14ef0ce803d4b80ac6b0fc2 */
#if BIND_GBookmarkFile_INITIALIZE
  mrb_define_method(mrb, GBookmarkFile_class, "initialize", mrb_GLib_GBookmarkFile_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GBookmarkFile_class, "disown", mrb_GLib_GBookmarkFile_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GBookmarkFile_class, "belongs_to_ruby?", mrb_GLib_GBookmarkFile_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GBookmarkFile::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GBookmarkFile::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
