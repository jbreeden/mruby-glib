/*
 * struct _GMemoryOutputStream
 * Defined in file giotypes.h @ line 123
 */

#include "mruby_GLib.h"

#if BIND_GMemoryOutputStream_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GMemoryOutputStream::initialize */
/* sha: 597c5695b9bb15cb95da96ba0033751ebe6c051ce30b2fb93a2cf5a04d4e6cf2 */
#if BIND_GMemoryOutputStream_INITIALIZE
mrb_value
mrb_GLib_GMemoryOutputStream_initialize(mrb_state* mrb, mrb_value self) {
  struct _GMemoryOutputStream* native_object = (struct _GMemoryOutputStream*)calloc(1, sizeof(struct _GMemoryOutputStream));
  mruby_giftwrap__GMemoryOutputStream_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMemoryOutputStream::initialize */
/* sha: b2c32fb75aeeec5542433b8cf0a651701b395756e9e5b9acad7b139c3a4df708 */
mrb_value
mrb_GLib_GMemoryOutputStream_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GMemoryOutputStream.disown only accepts objects of type GLib::GMemoryOutputStream");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMemoryOutputStream::belongs_to_ruby */
/* sha: 9065d34136713b1534d4908a38ab6f66cc62ed488534f79cd6f1f9080890549d */
mrb_value
mrb_GLib_GMemoryOutputStream_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GMemoryOutputStream.belongs_to_ruby only accepts objects of type GLib::GMemoryOutputStream");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GMemoryOutputStream_init(mrb_state* mrb) {
  struct RClass* GMemoryOutputStream_class = mrb_define_class_under(mrb, GLib_module(mrb), "GMemoryOutputStream", mrb->object_class);
  MRB_SET_INSTANCE_TT(GMemoryOutputStream_class, MRB_TT_DATA);

#if BIND_GMemoryOutputStream_INITIALIZE
  mrb_define_method(mrb, GMemoryOutputStream_class, "initialize", mrb_GLib_GMemoryOutputStream_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GMemoryOutputStream_class, "disown", mrb_GLib_GMemoryOutputStream_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GMemoryOutputStream_class, "belongs_to_ruby?", mrb_GLib_GMemoryOutputStream_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
