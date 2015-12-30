/*
 * struct _GFilterOutputStream
 * Defined in file giotypes.h @ line 74
 */

#include "mruby_GLib.h"

#if BIND_GFilterOutputStream_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GFilterOutputStream::initialize */
/* sha: 806bba8b3c3f9f6c9ff6adf38bd2409a54fcd27b7d1adc7f6a475f35a3e94ff3 */
#if BIND_GFilterOutputStream_INITIALIZE
mrb_value
mrb_GLib_GFilterOutputStream_initialize(mrb_state* mrb, mrb_value self) {
  struct _GFilterOutputStream* native_object = (struct _GFilterOutputStream*)calloc(1, sizeof(struct _GFilterOutputStream));
  mruby_giftwrap__GFilterOutputStream_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFilterOutputStream::initialize */
/* sha: 419ea9f59dafe8c1b1f422f2f07803345da709f246a4be8c633b339298104bdf */
mrb_value
mrb_GLib_GFilterOutputStream_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GFilterOutputStream.disown only accepts objects of type GLib::GFilterOutputStream");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFilterOutputStream::belongs_to_ruby */
/* sha: efcf1b91204d6912363ba08ac3f5a5d60960eec52cdfde3898e466894bc184ae */
mrb_value
mrb_GLib_GFilterOutputStream_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GFilterOutputStream.belongs_to_ruby only accepts objects of type GLib::GFilterOutputStream");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GFilterOutputStream_init(mrb_state* mrb) {
  struct RClass* GFilterOutputStream_class = mrb_define_class_under(mrb, GLib_module(mrb), "GFilterOutputStream", mrb->object_class);
  MRB_SET_INSTANCE_TT(GFilterOutputStream_class, MRB_TT_DATA);

#if BIND_GFilterOutputStream_INITIALIZE
  mrb_define_method(mrb, GFilterOutputStream_class, "initialize", mrb_GLib_GFilterOutputStream_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GFilterOutputStream_class, "disown", mrb_GLib_GFilterOutputStream_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GFilterOutputStream_class, "belongs_to_ruby?", mrb_GLib_GFilterOutputStream_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
