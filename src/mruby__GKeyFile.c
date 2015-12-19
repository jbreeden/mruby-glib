/*
 * struct _GKeyFile
 * Defined in file gkeyfile.h @ line 48
 */

#include "mruby_GLib.h"

#if BIND_GKeyFile_TYPE

/*
 * Class Methods
 */

#if BIND_GKeyFile_INITIALIZE
mrb_value
mrb_GLib_GKeyFile_initialize(mrb_state* mrb, mrb_value self) {
  struct _GKeyFile* native_object = (struct _GKeyFile*)calloc(1, sizeof(struct _GKeyFile));
  mruby_gift_struct _GKeyFile_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_GKeyFile_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GKeyFile.disown only accepts objects of type GLib::GKeyFile");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_GKeyFile_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GKeyFile.belongs_to_ruby only accepts objects of type GLib::GKeyFile");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}


void mrb_GLib_GKeyFile_init(mrb_state* mrb) {
  struct RClass* GKeyFile_class = mrb_define_class_under(mrb, GLib_module(mrb), "GKeyFile", mrb->object_class);
  MRB_SET_INSTANCE_TT(GKeyFile_class, MRB_TT_DATA);

#if BIND_GKeyFile_INITIALIZE
  mrb_define_method(mrb, GKeyFile_class, "initialize", mrb_GLib_GKeyFile_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GKeyFile_class, "disown", mrb_GLib_GKeyFile_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GKeyFile_class, "belongs_to_ruby?", mrb_GLib_GKeyFile_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
