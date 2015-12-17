/*
 * struct _GVariantTypeInfo
 * Defined in file gvarianttypeinfo.h @ line 34
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_GLib.h"

#if BIND_GVariantTypeInfo_TYPE

/*
 * Class Methods
 */

#if BIND_GVariantTypeInfo_INITIALIZE
mrb_value
mrb_GLib_GVariantTypeInfo_initialize(mrb_state* mrb, mrb_value self) {
  struct _GVariantTypeInfo* native_object = (struct _GVariantTypeInfo*)malloc(sizeof(struct _GVariantTypeInfo));
  mruby_gift_struct _GVariantTypeInfo_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_GVariantTypeInfo_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GVariantTypeInfo.disown only accepts objects of type GLib::GVariantTypeInfo");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_GVariantTypeInfo_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GVariantTypeInfo.belongs_to_ruby only accepts objects of type GLib::GVariantTypeInfo");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}


void mrb_GLib_GVariantTypeInfo_init(mrb_state* mrb) {
  struct RClass* GVariantTypeInfo_class = mrb_define_class_under(mrb, GLib_module(mrb), "GVariantTypeInfo", mrb->object_class);
  MRB_SET_INSTANCE_TT(GVariantTypeInfo_class, MRB_TT_DATA);

#if BIND_GVariantTypeInfo_INITIALIZE
  mrb_define_method(mrb, GVariantTypeInfo_class, "initialize", mrb_GLib_GVariantTypeInfo_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GVariantTypeInfo_class, "disown", mrb_GLib_GVariantTypeInfo_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GVariantTypeInfo_class, "belongs_to_ruby?", mrb_GLib_GVariantTypeInfo_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
