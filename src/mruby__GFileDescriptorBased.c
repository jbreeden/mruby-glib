/*
 * struct _GFileDescriptorBased
 * Defined in file giotypes.h @ line 94
 */

#include "mruby_GLib.h"

#if BIND_GFileDescriptorBased_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GFileDescriptorBased::initialize */
/* sha: 10d6241faf8ff0fcfd9c31a1fbe5cbddafa99f75b0d94514012bc4ebfa37dbca */
#if BIND_GFileDescriptorBased_INITIALIZE
mrb_value
mrb_GLib_GFileDescriptorBased_initialize(mrb_state* mrb, mrb_value self) {
  struct _GFileDescriptorBased* native_object = (struct _GFileDescriptorBased*)calloc(1, sizeof(struct _GFileDescriptorBased));
  mruby_giftwrap__GFileDescriptorBased_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileDescriptorBased::initialize */
/* sha: 8d9519b28aec2e566395f51bf2a89e88c61d038c0432c018ffa0674f9b000b01 */
mrb_value
mrb_GLib_GFileDescriptorBased_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GFileDescriptorBased.disown only accepts objects of type GLib::GFileDescriptorBased");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileDescriptorBased::belongs_to_ruby */
/* sha: bc566ad00913a5a0f59678b196e3ff6d2a70081ade75d42364d3305c8057b9ee */
mrb_value
mrb_GLib_GFileDescriptorBased_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GFileDescriptorBased.belongs_to_ruby only accepts objects of type GLib::GFileDescriptorBased");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GFileDescriptorBased_init(mrb_state* mrb) {
  struct RClass* GFileDescriptorBased_class = mrb_define_class_under(mrb, GLib_module(mrb), "GFileDescriptorBased", mrb->object_class);
  MRB_SET_INSTANCE_TT(GFileDescriptorBased_class, MRB_TT_DATA);

#if BIND_GFileDescriptorBased_INITIALIZE
  mrb_define_method(mrb, GFileDescriptorBased_class, "initialize", mrb_GLib_GFileDescriptorBased_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GFileDescriptorBased_class, "disown", mrb_GLib_GFileDescriptorBased_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GFileDescriptorBased_class, "belongs_to_ruby?", mrb_GLib_GFileDescriptorBased_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
