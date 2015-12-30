/*
 * struct _GSimpleAsyncResult
 * Defined in file giotypes.h @ line 151
 */

#include "mruby_GLib.h"

#if BIND_GSimpleAsyncResult_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GSimpleAsyncResult::initialize */
/* sha: 42e321292e2f3ec880fc773978fdc672df9014758fd87cecc1db98315370d47b */
#if BIND_GSimpleAsyncResult_INITIALIZE
mrb_value
mrb_GLib_GSimpleAsyncResult_initialize(mrb_state* mrb, mrb_value self) {
  struct _GSimpleAsyncResult* native_object = (struct _GSimpleAsyncResult*)calloc(1, sizeof(struct _GSimpleAsyncResult));
  mruby_giftwrap__GSimpleAsyncResult_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSimpleAsyncResult::initialize */
/* sha: 7c6ef270fd2e666a6253a053ed90cae93cb452648b1226642cfa2e07e94c4002 */
mrb_value
mrb_GLib_GSimpleAsyncResult_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSimpleAsyncResult.disown only accepts objects of type GLib::GSimpleAsyncResult");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSimpleAsyncResult::belongs_to_ruby */
/* sha: d33317498c80131599da7aeb1a7ddc88da184acba30153335c41212fd09ce104 */
mrb_value
mrb_GLib_GSimpleAsyncResult_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSimpleAsyncResult.belongs_to_ruby only accepts objects of type GLib::GSimpleAsyncResult");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GSimpleAsyncResult_init(mrb_state* mrb) {
  struct RClass* GSimpleAsyncResult_class = mrb_define_class_under(mrb, GLib_module(mrb), "GSimpleAsyncResult", mrb->object_class);
  MRB_SET_INSTANCE_TT(GSimpleAsyncResult_class, MRB_TT_DATA);

#if BIND_GSimpleAsyncResult_INITIALIZE
  mrb_define_method(mrb, GSimpleAsyncResult_class, "initialize", mrb_GLib_GSimpleAsyncResult_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GSimpleAsyncResult_class, "disown", mrb_GLib_GSimpleAsyncResult_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GSimpleAsyncResult_class, "belongs_to_ruby?", mrb_GLib_GSimpleAsyncResult_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
