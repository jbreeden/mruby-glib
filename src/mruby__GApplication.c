/*
 * struct _GApplication
 * Defined in file giotypes.h @ line 56
 */

#include "mruby_GLib.h"

#if BIND_GApplication_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GApplication::initialize */
/* sha: 1a42b76058b72db79f7ba5297a35722845d3d01db1bca26edeb48e57aec17070 */
#if BIND_GApplication_INITIALIZE
mrb_value
mrb_GLib_GApplication_initialize(mrb_state* mrb, mrb_value self) {
  struct _GApplication* native_object = (struct _GApplication*)calloc(1, sizeof(struct _GApplication));
  mruby_giftwrap__GApplication_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GApplication::initialize */
/* sha: 32c772045f68d5a8a31755677efd80b2e74a1aaca8b9efea603631aa16ea9436 */
mrb_value
mrb_GLib_GApplication_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GApplication.disown only accepts objects of type GLib::GApplication");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GApplication::belongs_to_ruby */
/* sha: 9b1ed1238792a40dd53e977173df093b3053e3cd4829662622bec5afc472ca15 */
mrb_value
mrb_GLib_GApplication_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GApplication.belongs_to_ruby only accepts objects of type GLib::GApplication");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GApplication_init(mrb_state* mrb) {
  struct RClass* GApplication_class = mrb_define_class_under(mrb, GLib_module(mrb), "GApplication", mrb->object_class);
  MRB_SET_INSTANCE_TT(GApplication_class, MRB_TT_DATA);

#if BIND_GApplication_INITIALIZE
  mrb_define_method(mrb, GApplication_class, "initialize", mrb_GLib_GApplication_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GApplication_class, "disown", mrb_GLib_GApplication_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GApplication_class, "belongs_to_ruby?", mrb_GLib_GApplication_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
