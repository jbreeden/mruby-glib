/*
 * struct _GMarkupParseContext
 * Defined in file gmarkup.h @ line 113
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_GLib.h"

#if BIND_GMarkupParseContext_TYPE

/*
 * Class Methods
 */

#if BIND_GMarkupParseContext_INITIALIZE
mrb_value
mrb_GLib_GMarkupParseContext_initialize(mrb_state* mrb, mrb_value self) {
  struct _GMarkupParseContext* native_object = (struct _GMarkupParseContext*)malloc(sizeof(struct _GMarkupParseContext));
  mruby_gift_struct _GMarkupParseContext_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_GMarkupParseContext_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GMarkupParseContext.disown only accepts objects of type GLib::GMarkupParseContext");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_GMarkupParseContext_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GMarkupParseContext.belongs_to_ruby only accepts objects of type GLib::GMarkupParseContext");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}


void mrb_GLib_GMarkupParseContext_init(mrb_state* mrb) {
  struct RClass* GMarkupParseContext_class = mrb_define_class_under(mrb, GLib_module(mrb), "GMarkupParseContext", mrb->object_class);
  MRB_SET_INSTANCE_TT(GMarkupParseContext_class, MRB_TT_DATA);

#if BIND_GMarkupParseContext_INITIALIZE
  mrb_define_method(mrb, GMarkupParseContext_class, "initialize", mrb_GLib_GMarkupParseContext_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GMarkupParseContext_class, "disown", mrb_GLib_GMarkupParseContext_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GMarkupParseContext_class, "belongs_to_ruby?", mrb_GLib_GMarkupParseContext_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
