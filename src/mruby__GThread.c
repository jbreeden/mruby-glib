/*
 * struct _GThread
 * Defined in file gthread.h @ line 49
 */

#include "mruby_GLib.h"

#if BIND_GThread_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GThread::initialize */
/* sha: 39205cdc46987c1296c727e896afcb9ea7408effa77af57d6c93bd7f32e7ba66 */
#if BIND_GThread_INITIALIZE
mrb_value
mrb_GLib_GThread_initialize(mrb_state* mrb, mrb_value self) {
  struct _GThread* native_object = (struct _GThread*)calloc(1, sizeof(struct _GThread));
  mruby_giftwrap__GThread_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GThread::initialize */
/* sha: b4d51fa9395bcb48b5689d994db3086d94b048f2a34960cc71d064ca509ed56c */
mrb_value
mrb_GLib_GThread_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GThread.disown only accepts objects of type GLib::GThread");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GThread::belongs_to_ruby */
/* sha: 9197ae09c22e35cc07e55d76263f57d96a7222e3cb522af50315441dbbfecac6 */
mrb_value
mrb_GLib_GThread_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GThread.belongs_to_ruby only accepts objects of type GLib::GThread");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GThread_init(mrb_state* mrb) {
  struct RClass* GThread_class = mrb_define_class_under(mrb, GLib_module(mrb), "GThread", mrb->object_class);
  MRB_SET_INSTANCE_TT(GThread_class, MRB_TT_DATA);

#if BIND_GThread_INITIALIZE
  mrb_define_method(mrb, GThread_class, "initialize", mrb_GLib_GThread_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GThread_class, "disown", mrb_GLib_GThread_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GThread_class, "belongs_to_ruby?", mrb_GLib_GThread_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
