/*
 * struct mapping_range
 * Defined in file gtranslit-data.h @ line 7
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_GLib.h"

#if BIND_MappingRange_TYPE

/*
 * Class Methods
 */

#if BIND_MappingRange_INITIALIZE
mrb_value
mrb_GLib_MappingRange_initialize(mrb_state* mrb, mrb_value self) {
  struct mapping_range* native_object = (struct mapping_range*)malloc(sizeof(struct mapping_range));
  mruby_gift_struct mapping_range_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_MappingRange_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::MappingRange.disown only accepts objects of type GLib::MappingRange");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_MappingRange_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::MappingRange.belongs_to_ruby only accepts objects of type GLib::MappingRange");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}


void mrb_GLib_MappingRange_init(mrb_state* mrb) {
  RClass* MappingRange_class = mrb_define_class_under(mrb, GLib_module(mrb), "MappingRange", mrb->object_class);
  MRB_SET_INSTANCE_TT(MappingRange_class, MRB_TT_DATA);

#if BIND_MappingRange_INITIALIZE
  mrb_define_method(mrb, MappingRange_class, "initialize", mrb_GLib_MappingRange_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, MappingRange_class, "disown", mrb_GLib_MappingRange_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, MappingRange_class, "belongs_to_ruby?", mrb_GLib_MappingRange_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
