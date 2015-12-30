/*
 * struct _GResolver
 * Defined in file giotypes.h @ line 140
 */

#include "mruby_GLib.h"

#if BIND_GResolver_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GResolver::initialize */
/* sha: 29453e90072d8eb02a577c5026536115711e6391bd9f163a974937c8543bfa42 */
#if BIND_GResolver_INITIALIZE
mrb_value
mrb_GLib_GResolver_initialize(mrb_state* mrb, mrb_value self) {
  struct _GResolver* native_object = (struct _GResolver*)calloc(1, sizeof(struct _GResolver));
  mruby_giftwrap__GResolver_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GResolver::initialize */
/* sha: c01cba41fd68dde48e1d8d9c4650b1834b6665fdef8bd900f0a5af3612a5066f */
mrb_value
mrb_GLib_GResolver_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GResolver.disown only accepts objects of type GLib::GResolver");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GResolver::belongs_to_ruby */
/* sha: 3b8e513527c4263fea503b18d6ef60402e69690b0e444ac3ca2d381f8e9d81b1 */
mrb_value
mrb_GLib_GResolver_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GResolver.belongs_to_ruby only accepts objects of type GLib::GResolver");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GResolver_init(mrb_state* mrb) {
  struct RClass* GResolver_class = mrb_define_class_under(mrb, GLib_module(mrb), "GResolver", mrb->object_class);
  MRB_SET_INSTANCE_TT(GResolver_class, MRB_TT_DATA);

#if BIND_GResolver_INITIALIZE
  mrb_define_method(mrb, GResolver_class, "initialize", mrb_GLib_GResolver_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GResolver_class, "disown", mrb_GLib_GResolver_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GResolver_class, "belongs_to_ruby?", mrb_GLib_GResolver_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
