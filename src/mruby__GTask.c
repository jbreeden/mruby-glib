/*
 * struct _GTask
 * Defined in file giotypes.h @ line 206
 */

#include "mruby_GLib.h"

#if BIND_GTask_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GTask::initialize */
/* sha: 2cbdae5ba599ea4a3aab889b2c89cb6da2097d446c6e15882876b8fab08359b5 */
#if BIND_GTask_INITIALIZE
mrb_value
mrb_GLib_GTask_initialize(mrb_state* mrb, mrb_value self) {
  struct _GTask* native_object = (struct _GTask*)calloc(1, sizeof(struct _GTask));
  mruby_giftwrap__GTask_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTask::initialize */
/* sha: b007afd1a7bfba1ad250e81c213da9f66a4b3bee57b2633f9e1fe48eded4ac8b */
mrb_value
mrb_GLib_GTask_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTask.disown only accepts objects of type GLib::GTask");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTask::belongs_to_ruby */
/* sha: 531e1716280caab1781c314bce6707f79fb65c261d33e95ebab5cbb0ebd1d2ba */
mrb_value
mrb_GLib_GTask_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTask.belongs_to_ruby only accepts objects of type GLib::GTask");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GTask_init(mrb_state* mrb) {
  struct RClass* GTask_class = mrb_define_class_under(mrb, GLib_module(mrb), "GTask", mrb->object_class);
  MRB_SET_INSTANCE_TT(GTask_class, MRB_TT_DATA);

#if BIND_GTask_INITIALIZE
  mrb_define_method(mrb, GTask_class, "initialize", mrb_GLib_GTask_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GTask_class, "disown", mrb_GLib_GTask_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GTask_class, "belongs_to_ruby?", mrb_GLib_GTask_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
