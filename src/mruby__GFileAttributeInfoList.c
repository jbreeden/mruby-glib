/*
 * struct _GFileAttributeInfoList
 * Defined in file giotypes.h @ line 93
 */

#include "mruby_GLib.h"

#if BIND_GFileAttributeInfoList_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GFileAttributeInfoList::initialize */
/* sha: f0648d1f745957c613b55f5145b908c5407e50807412cae302709f8b7bb2230e */
#if BIND_GFileAttributeInfoList_INITIALIZE
mrb_value
mrb_GLib_GFileAttributeInfoList_initialize(mrb_state* mrb, mrb_value self) {
  struct _GFileAttributeInfoList* native_object = (struct _GFileAttributeInfoList*)calloc(1, sizeof(struct _GFileAttributeInfoList));
  mruby_giftwrap__GFileAttributeInfoList_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileAttributeInfoList::initialize */
/* sha: c721e330ee8e8794e730adc9182dd870f9a7b8ab2f46d7b076b874804df37e7a */
mrb_value
mrb_GLib_GFileAttributeInfoList_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GFileAttributeInfoList.disown only accepts objects of type GLib::GFileAttributeInfoList");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileAttributeInfoList::belongs_to_ruby */
/* sha: c9f514e471590288223bb7582bb7c209b521788067abd5484c3dbb530aee8be2 */
mrb_value
mrb_GLib_GFileAttributeInfoList_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GFileAttributeInfoList.belongs_to_ruby only accepts objects of type GLib::GFileAttributeInfoList");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GFileAttributeInfoList_init(mrb_state* mrb) {
  struct RClass* GFileAttributeInfoList_class = mrb_define_class_under(mrb, GLib_module(mrb), "GFileAttributeInfoList", mrb->object_class);
  MRB_SET_INSTANCE_TT(GFileAttributeInfoList_class, MRB_TT_DATA);

#if BIND_GFileAttributeInfoList_INITIALIZE
  mrb_define_method(mrb, GFileAttributeInfoList_class, "initialize", mrb_GLib_GFileAttributeInfoList_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GFileAttributeInfoList_class, "disown", mrb_GLib_GFileAttributeInfoList_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GFileAttributeInfoList_class, "belongs_to_ruby?", mrb_GLib_GFileAttributeInfoList_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
