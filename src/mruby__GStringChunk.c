/*
 * struct _GStringChunk
 * Defined in file gstringchunk.h @ line 36
 */

#include "mruby_GLib.h"

#if BIND_GStringChunk_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GStringChunk::initialize */
/* sha: 0072d128930013af3d69f7beca8cf30f28be9ddb724f301e6a1a96b7e1fceb99 */
#if BIND_GStringChunk_INITIALIZE
mrb_value
mrb_GLib_GStringChunk_initialize(mrb_state* mrb, mrb_value self) {
  struct _GStringChunk* native_object = (struct _GStringChunk*)calloc(1, sizeof(struct _GStringChunk));
  mruby_giftwrap__GStringChunk_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GStringChunk::initialize */
/* sha: b7b54cb4ba73590b9ed718ed8e7bc974c091c3fdc15c2e93cbf0f0428364e108 */
mrb_value
mrb_GLib_GStringChunk_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GStringChunk.disown only accepts objects of type GLib::GStringChunk");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GStringChunk::belongs_to_ruby */
/* sha: bd41b7c0be8fd05de6e88bf85abb2b2e0b03a7dd259460535f0e25d77dea40a2 */
mrb_value
mrb_GLib_GStringChunk_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GStringChunk.belongs_to_ruby only accepts objects of type GLib::GStringChunk");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GStringChunk_init(mrb_state* mrb) {
/* MRUBY_BINDING: GStringChunk::class_definition */
/* sha: 048ea9dcb65b83c98ed96f5f03e5bd25201e676afcc323889e3ce1700ea9c4c8 */
  struct RClass* GStringChunk_class = mrb_define_class_under(mrb, GLib_module(mrb), "GStringChunk", mrb->object_class);
  MRB_SET_INSTANCE_TT(GStringChunk_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GStringChunk::class_method_definitions */
/* sha: 204ae80e8972aceeba77013ce70c871814a481ebaf8f344d9d3b1fef0cbd89f4 */
#if BIND_GStringChunk_INITIALIZE
  mrb_define_method(mrb, GStringChunk_class, "initialize", mrb_GLib_GStringChunk_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GStringChunk_class, "disown", mrb_GLib_GStringChunk_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GStringChunk_class, "belongs_to_ruby?", mrb_GLib_GStringChunk_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GStringChunk::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GStringChunk::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
