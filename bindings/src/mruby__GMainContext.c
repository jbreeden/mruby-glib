/*
 * struct _GMainContext
 * Defined in file gmain.h @ line 48
 */

#include "mruby_GLib.h"

#if BIND_GMainContext_TYPE

/*
 * Class Methods
 */

#if BIND_GMainContext_INITIALIZE
mrb_value
mrb_GLib_GMainContext_initialize(mrb_state* mrb, mrb_value self) {
  struct _GMainContext* native_object = (struct _GMainContext*)calloc(1, sizeof(struct _GMainContext));
  mruby_giftwrap__GMainContext_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_GMainContext_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GMainContext.disown only accepts objects of type GLib::GMainContext");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_GMainContext_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GMainContext.belongs_to_ruby only accepts objects of type GLib::GMainContext");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}


void mrb_GLib_GMainContext_init(mrb_state* mrb) {
  struct RClass* GMainContext_class = mrb_define_class_under(mrb, GLib_module(mrb), "GMainContext", mrb->object_class);
  MRB_SET_INSTANCE_TT(GMainContext_class, MRB_TT_DATA);

#if BIND_GMainContext_INITIALIZE
  mrb_define_method(mrb, GMainContext_class, "initialize", mrb_GLib_GMainContext_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GMainContext_class, "disown", mrb_GLib_GMainContext_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GMainContext_class, "belongs_to_ruby?", mrb_GLib_GMainContext_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
