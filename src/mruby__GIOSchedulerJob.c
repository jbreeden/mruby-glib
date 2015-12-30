/*
 * struct _GIOSchedulerJob
 * Defined in file giotypes.h @ line 118
 */

#include "mruby_GLib.h"

#if BIND_GIOSchedulerJob_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GIOSchedulerJob::initialize */
/* sha: 2bcaf03b91aa47f31d34ea9969e2171b00dad8e09351ac3ab600de24765b330c */
#if BIND_GIOSchedulerJob_INITIALIZE
mrb_value
mrb_GLib_GIOSchedulerJob_initialize(mrb_state* mrb, mrb_value self) {
  struct _GIOSchedulerJob* native_object = (struct _GIOSchedulerJob*)calloc(1, sizeof(struct _GIOSchedulerJob));
  mruby_giftwrap__GIOSchedulerJob_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOSchedulerJob::initialize */
/* sha: d28b4e97fd7366b526108504c9f45125ed66c52b0c47c5aa4c7e6e432125d2cf */
mrb_value
mrb_GLib_GIOSchedulerJob_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GIOSchedulerJob.disown only accepts objects of type GLib::GIOSchedulerJob");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOSchedulerJob::belongs_to_ruby */
/* sha: 5ca1f2c85d92805e369aa9bff256f28cc60d3162ff738a484d321d0d8b6ccd76 */
mrb_value
mrb_GLib_GIOSchedulerJob_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GIOSchedulerJob.belongs_to_ruby only accepts objects of type GLib::GIOSchedulerJob");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GIOSchedulerJob_init(mrb_state* mrb) {
  struct RClass* GIOSchedulerJob_class = mrb_define_class_under(mrb, GLib_module(mrb), "GIOSchedulerJob", mrb->object_class);
  MRB_SET_INSTANCE_TT(GIOSchedulerJob_class, MRB_TT_DATA);

#if BIND_GIOSchedulerJob_INITIALIZE
  mrb_define_method(mrb, GIOSchedulerJob_class, "initialize", mrb_GLib_GIOSchedulerJob_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GIOSchedulerJob_class, "disown", mrb_GLib_GIOSchedulerJob_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GIOSchedulerJob_class, "belongs_to_ruby?", mrb_GLib_GIOSchedulerJob_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
