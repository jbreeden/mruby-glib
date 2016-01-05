/*
 * struct _GMatchInfo
 * Defined in file gregex.h @ line 423
 */

#include "mruby_GLib.h"

#if BIND_GMatchInfo_TYPE

/*
 * Class Methods
 */

#if BIND_GMatchInfo_INITIALIZE
mrb_value
mrb_GLib_GMatchInfo_initialize(mrb_state* mrb, mrb_value self) {
  struct _GMatchInfo* native_object = (struct _GMatchInfo*)calloc(1, sizeof(struct _GMatchInfo));
  mruby_giftwrap__GMatchInfo_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_GMatchInfo_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GMatchInfo.disown only accepts objects of type GLib::GMatchInfo");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_GMatchInfo_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GMatchInfo.belongs_to_ruby only accepts objects of type GLib::GMatchInfo");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}


void mrb_GLib_GMatchInfo_init(mrb_state* mrb) {
  struct RClass* GMatchInfo_class = mrb_define_class_under(mrb, GLib_module(mrb), "GMatchInfo", mrb->object_class);
  MRB_SET_INSTANCE_TT(GMatchInfo_class, MRB_TT_DATA);

#if BIND_GMatchInfo_INITIALIZE
  mrb_define_method(mrb, GMatchInfo_class, "initialize", mrb_GLib_GMatchInfo_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GMatchInfo_class, "disown", mrb_GLib_GMatchInfo_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GMatchInfo_class, "belongs_to_ruby?", mrb_GLib_GMatchInfo_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
