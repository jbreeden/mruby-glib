/*
 * struct _GFileEnumerator
 * Defined in file giotypes.h @ line 71
 */

#include "mruby_GLib.h"

#if BIND_GFileEnumerator_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GFileEnumerator::initialize */
/* sha: ceae1026f8fde10e1d176d59b5243f6fa472653cc45340aa745a2e745907f157 */
#if BIND_GFileEnumerator_INITIALIZE
mrb_value
mrb_GLib_GFileEnumerator_initialize(mrb_state* mrb, mrb_value self) {
  struct _GFileEnumerator* native_object = (struct _GFileEnumerator*)calloc(1, sizeof(struct _GFileEnumerator));
  mruby_giftwrap__GFileEnumerator_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileEnumerator::initialize */
/* sha: e625110acfcc9b839f25d725a09d4f90e3147755aea9d38937385875f45594ce */
mrb_value
mrb_GLib_GFileEnumerator_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GFileEnumerator.disown only accepts objects of type GLib::GFileEnumerator");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileEnumerator::belongs_to_ruby */
/* sha: 0e5633dcfeddb1368d4d749098cfe25151d5a19467c2b116e7476cb4e46a13c5 */
mrb_value
mrb_GLib_GFileEnumerator_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GFileEnumerator.belongs_to_ruby only accepts objects of type GLib::GFileEnumerator");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GFileEnumerator_init(mrb_state* mrb) {
  struct RClass* GFileEnumerator_class = mrb_define_class_under(mrb, GLib_module(mrb), "GFileEnumerator", mrb->object_class);
  MRB_SET_INSTANCE_TT(GFileEnumerator_class, MRB_TT_DATA);

#if BIND_GFileEnumerator_INITIALIZE
  mrb_define_method(mrb, GFileEnumerator_class, "initialize", mrb_GLib_GFileEnumerator_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GFileEnumerator_class, "disown", mrb_GLib_GFileEnumerator_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GFileEnumerator_class, "belongs_to_ruby?", mrb_GLib_GFileEnumerator_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
