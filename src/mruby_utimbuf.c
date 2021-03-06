/*
 * struct utimbuf
 * Defined in file gstdio.h @ line 155
 */

#include "mruby_GLib.h"

#if BIND_Utimbuf_TYPE

/*
 * Class Methods
 */

#if BIND_Utimbuf_INITIALIZE
mrb_value
mrb_GLib_Utimbuf_initialize(mrb_state* mrb, mrb_value self) {
  struct utimbuf* native_object = (struct utimbuf*)calloc(1, sizeof(struct utimbuf));
  mruby_giftwrap_utimbuf_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_Utimbuf_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::Utimbuf.disown only accepts objects of type GLib::Utimbuf");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_Utimbuf_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::Utimbuf.belongs_to_ruby only accepts objects of type GLib::Utimbuf");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}


void mrb_GLib_Utimbuf_init(mrb_state* mrb) {
  struct RClass* Utimbuf_class = mrb_define_class_under(mrb, GLib_module(mrb), "Utimbuf", mrb->object_class);
  MRB_SET_INSTANCE_TT(Utimbuf_class, MRB_TT_DATA);

#if BIND_Utimbuf_INITIALIZE
  mrb_define_method(mrb, Utimbuf_class, "initialize", mrb_GLib_Utimbuf_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Utimbuf_class, "disown", mrb_GLib_Utimbuf_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Utimbuf_class, "belongs_to_ruby?", mrb_GLib_Utimbuf_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
