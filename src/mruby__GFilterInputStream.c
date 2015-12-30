/*
 * struct _GFilterInputStream
 * Defined in file giotypes.h @ line 73
 */

#include "mruby_GLib.h"

#if BIND_GFilterInputStream_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GFilterInputStream::initialize */
/* sha: a1b248f665f9dd5ef18cfbddd37d964f12c3d19efdab41a086bdb5ad25eafd2f */
#if BIND_GFilterInputStream_INITIALIZE
mrb_value
mrb_GLib_GFilterInputStream_initialize(mrb_state* mrb, mrb_value self) {
  struct _GFilterInputStream* native_object = (struct _GFilterInputStream*)calloc(1, sizeof(struct _GFilterInputStream));
  mruby_giftwrap__GFilterInputStream_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFilterInputStream::initialize */
/* sha: a5079261c9b6dc8b7595e3489a26fa159e33c5c3486a7d0e112e6fabbcb2b8c9 */
mrb_value
mrb_GLib_GFilterInputStream_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GFilterInputStream.disown only accepts objects of type GLib::GFilterInputStream");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFilterInputStream::belongs_to_ruby */
/* sha: 624589221eb8ecd2b7388b26030d2b9e881d29dc38526ce67f3c7ecc201e93dc */
mrb_value
mrb_GLib_GFilterInputStream_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GFilterInputStream.belongs_to_ruby only accepts objects of type GLib::GFilterInputStream");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GFilterInputStream_init(mrb_state* mrb) {
  struct RClass* GFilterInputStream_class = mrb_define_class_under(mrb, GLib_module(mrb), "GFilterInputStream", mrb->object_class);
  MRB_SET_INSTANCE_TT(GFilterInputStream_class, MRB_TT_DATA);

#if BIND_GFilterInputStream_INITIALIZE
  mrb_define_method(mrb, GFilterInputStream_class, "initialize", mrb_GLib_GFilterInputStream_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GFilterInputStream_class, "disown", mrb_GLib_GFilterInputStream_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GFilterInputStream_class, "belongs_to_ruby?", mrb_GLib_GFilterInputStream_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
