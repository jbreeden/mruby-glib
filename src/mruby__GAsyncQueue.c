/*
 * struct _GAsyncQueue
 * Defined in file gasyncqueue.h @ line 36
 */

#include "mruby_GLib.h"

#if BIND_GAsyncQueue_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GAsyncQueue::initialize */
/* sha: 22ebb3cbf3952588739af5eae0aaecee7c0e2731d0d2ab1940fb77a33636abb7 */
#if BIND_GAsyncQueue_INITIALIZE
mrb_value
mrb_GLib_GAsyncQueue_initialize(mrb_state* mrb, mrb_value self) {
  struct _GAsyncQueue* native_object = (struct _GAsyncQueue*)calloc(1, sizeof(struct _GAsyncQueue));
  mruby_giftwrap__GAsyncQueue_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GAsyncQueue::initialize */
/* sha: 5e0504f9d9e9d3de172fcf13fe6a31f3beb016090575fb2ea715e9346a9b4ed7 */
mrb_value
mrb_GLib_GAsyncQueue_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GAsyncQueue.disown only accepts objects of type GLib::GAsyncQueue");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GAsyncQueue::belongs_to_ruby */
/* sha: d49a4b7d5df4110bf110c6d7a6757b87f59e791d43a2f8f31ecfae8b4c61566a */
mrb_value
mrb_GLib_GAsyncQueue_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GAsyncQueue.belongs_to_ruby only accepts objects of type GLib::GAsyncQueue");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GAsyncQueue_init(mrb_state* mrb) {
  struct RClass* GAsyncQueue_class = mrb_define_class_under(mrb, GLib_module(mrb), "GAsyncQueue", mrb->object_class);
  MRB_SET_INSTANCE_TT(GAsyncQueue_class, MRB_TT_DATA);

#if BIND_GAsyncQueue_INITIALIZE
  mrb_define_method(mrb, GAsyncQueue_class, "initialize", mrb_GLib_GAsyncQueue_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GAsyncQueue_class, "disown", mrb_GLib_GAsyncQueue_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GAsyncQueue_class, "belongs_to_ruby?", mrb_GLib_GAsyncQueue_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
