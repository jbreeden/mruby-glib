/*
 * struct _GSequenceNode
 * Defined in file gsequence.h @ line 31
 */

#include "mruby_GLib.h"

#if BIND_GSequenceNode_TYPE

/*
 * Class Methods
 */

#if BIND_GSequenceNode_INITIALIZE
mrb_value
mrb_GLib_GSequenceNode_initialize(mrb_state* mrb, mrb_value self) {
  struct _GSequenceNode* native_object = (struct _GSequenceNode*)calloc(1, sizeof(struct _GSequenceNode));
  mruby_gift_struct _GSequenceNode_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_GSequenceNode_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSequenceNode.disown only accepts objects of type GLib::GSequenceNode");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_GSequenceNode_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSequenceNode.belongs_to_ruby only accepts objects of type GLib::GSequenceNode");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}


void mrb_GLib_GSequenceNode_init(mrb_state* mrb) {
  struct RClass* GSequenceNode_class = mrb_define_class_under(mrb, GLib_module(mrb), "GSequenceNode", mrb->object_class);
  MRB_SET_INSTANCE_TT(GSequenceNode_class, MRB_TT_DATA);

#if BIND_GSequenceNode_INITIALIZE
  mrb_define_method(mrb, GSequenceNode_class, "initialize", mrb_GLib_GSequenceNode_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GSequenceNode_class, "disown", mrb_GLib_GSequenceNode_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GSequenceNode_class, "belongs_to_ruby?", mrb_GLib_GSequenceNode_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
