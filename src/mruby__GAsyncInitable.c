/*
 * struct _GAsyncInitable
 * Defined in file giotypes.h @ line 35
 */

#include "mruby_GLib.h"

#if BIND_GAsyncInitable_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GAsyncInitable::initialize */
/* sha: 4c673b399983a9e904f4dcaef6ed3f33f56e18884a13f6c1aa7ec7d73325cd49 */
#if BIND_GAsyncInitable_INITIALIZE
mrb_value
mrb_GLib_GAsyncInitable_initialize(mrb_state* mrb, mrb_value self) {
  struct _GAsyncInitable* native_object = (struct _GAsyncInitable*)calloc(1, sizeof(struct _GAsyncInitable));
  mruby_giftwrap__GAsyncInitable_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GAsyncInitable::initialize */
/* sha: a102dd4e3f95f4dbe576f6e64b206109c78df1fd72385f79694ff0a8b8045eea */
mrb_value
mrb_GLib_GAsyncInitable_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GAsyncInitable.disown only accepts objects of type GLib::GAsyncInitable");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GAsyncInitable::belongs_to_ruby */
/* sha: 34393403b05f39ce9ae9009595161dad609340a0bb6cdfc56330a00617a66827 */
mrb_value
mrb_GLib_GAsyncInitable_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GAsyncInitable.belongs_to_ruby only accepts objects of type GLib::GAsyncInitable");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GAsyncInitable_init(mrb_state* mrb) {
  struct RClass* GAsyncInitable_class = mrb_define_class_under(mrb, GLib_module(mrb), "GAsyncInitable", mrb->object_class);
  MRB_SET_INSTANCE_TT(GAsyncInitable_class, MRB_TT_DATA);

#if BIND_GAsyncInitable_INITIALIZE
  mrb_define_method(mrb, GAsyncInitable_class, "initialize", mrb_GLib_GAsyncInitable_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GAsyncInitable_class, "disown", mrb_GLib_GAsyncInitable_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GAsyncInitable_class, "belongs_to_ruby?", mrb_GLib_GAsyncInitable_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
