/*
 * struct _GTree
 * Defined in file gtree.h @ line 36
 */

#include "mruby_GLib.h"

#if BIND_GTree_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GTree::initialize */
/* sha: 3046d5eb166c1a6b7e60257534d9a799a956a462ff2027d9766a31e0f495cc6b */
#if BIND_GTree_INITIALIZE
mrb_value
mrb_GLib_GTree_initialize(mrb_state* mrb, mrb_value self) {
  struct _GTree* native_object = (struct _GTree*)calloc(1, sizeof(struct _GTree));
  mruby_giftwrap__GTree_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTree::initialize */
/* sha: 927121b4b0f8d4ac20c8b26ca6adafe5cbbc7b4cea71859e86d336ae82bcdbe9 */
mrb_value
mrb_GLib_GTree_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTree.disown only accepts objects of type GLib::GTree");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTree::belongs_to_ruby */
/* sha: 296c3d294fd7cbd5f6b3f035bf458050c0e2d670b72fdfc48c69dd21a9aed119 */
mrb_value
mrb_GLib_GTree_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTree.belongs_to_ruby only accepts objects of type GLib::GTree");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GTree_init(mrb_state* mrb) {
/* MRUBY_BINDING: GTree::class_definition */
/* sha: 12fe174fb078053d9c5768e6e38fbfc3f69fa093c5f993f3504846854443b3f5 */
  struct RClass* GTree_class = mrb_define_class_under(mrb, GLib_module(mrb), "GTree", mrb->object_class);
  MRB_SET_INSTANCE_TT(GTree_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTree::class_method_definitions */
/* sha: 3eecf9836c6e3f7cc74ca2f8c62aac4ab27e177eec57a783ad73ee12bf43d01d */
#if BIND_GTree_INITIALIZE
  mrb_define_method(mrb, GTree_class, "initialize", mrb_GLib_GTree_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GTree_class, "disown", mrb_GLib_GTree_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GTree_class, "belongs_to_ruby?", mrb_GLib_GTree_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTree::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTree::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
