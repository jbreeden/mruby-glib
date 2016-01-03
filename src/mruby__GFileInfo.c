/*
 * struct _GFileInfo
 * Defined in file dummy_decls.h @ line 4
 */

#include "mruby_GLib.h"

#if BIND_GFileInfo_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GFileInfo::initialize */
/* sha: bfd3d2ec9fccd853401897777d46dbd88308e7cc4c46e17b79fd84cbc4c34b6f */
#if BIND_GFileInfo_INITIALIZE
mrb_value
mrb_GLib_GFileInfo_initialize(mrb_state* mrb, mrb_value self) {
  struct _GFileInfo* native_object = (struct _GFileInfo*)calloc(1, sizeof(struct _GFileInfo));
  mruby_giftwrap__GFileInfo_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileInfo::initialize */
/* sha: 25e6c53f51c3ba31c844083aa51f59b97ca9ae177dfd4a87c01d5b2d7b9de401 */
mrb_value
mrb_GLib_GFileInfo_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GFileInfo.disown only accepts objects of type GLib::GFileInfo");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileInfo::belongs_to_ruby */
/* sha: 9142062cb4414020635b91afd45de8c9d7d6a7dc1c1852607ed051c6a9fdc055 */
mrb_value
mrb_GLib_GFileInfo_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GFileInfo.belongs_to_ruby only accepts objects of type GLib::GFileInfo");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GFileInfo_init(mrb_state* mrb) {
/* MRUBY_BINDING: GFileInfo::class_definition */
/* sha: 86b2ad60ec670abcdeb454b21de21d49e1e340577663ee0f134db2b9b23eccc6 */
  struct RClass* GFileInfo_class = mrb_define_class_under(mrb, GLib_module(mrb), "GFileInfo", mrb->object_class);
  MRB_SET_INSTANCE_TT(GFileInfo_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileInfo::class_method_definitions */
/* sha: ff16cf2070e031085671d5d73884fe793e9274ae29807ba1c6a43d397c7f2d24 */
#if BIND_GFileInfo_INITIALIZE
  mrb_define_method(mrb, GFileInfo_class, "initialize", mrb_GLib_GFileInfo_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GFileInfo_class, "disown", mrb_GLib_GFileInfo_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GFileInfo_class, "belongs_to_ruby?", mrb_GLib_GFileInfo_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileInfo::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileInfo::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
