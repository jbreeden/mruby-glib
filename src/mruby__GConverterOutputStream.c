/*
 * struct _GConverterOutputStream
 * Defined in file giotypes.h @ line 42
 */

#include "mruby_GLib.h"

#if BIND_GConverterOutputStream_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GConverterOutputStream::initialize */
/* sha: 61541fc65b8ead3389d2d3e2c3631165e55c8dc39a6fba3f33a295c6f58fc17d */
#if BIND_GConverterOutputStream_INITIALIZE
mrb_value
mrb_GLib_GConverterOutputStream_initialize(mrb_state* mrb, mrb_value self) {
  struct _GConverterOutputStream* native_object = (struct _GConverterOutputStream*)calloc(1, sizeof(struct _GConverterOutputStream));
  mruby_giftwrap__GConverterOutputStream_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GConverterOutputStream::initialize */
/* sha: 22ef511c14a8d2da4faa6b4529c0d6f8bc326be6e2e448fbe3f562cfce123717 */
mrb_value
mrb_GLib_GConverterOutputStream_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GConverterOutputStream.disown only accepts objects of type GLib::GConverterOutputStream");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GConverterOutputStream::belongs_to_ruby */
/* sha: 16b3485882fadc8883ed6776f1d400b50886f8230d5b7b630adc8b3f523e3841 */
mrb_value
mrb_GLib_GConverterOutputStream_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GConverterOutputStream.belongs_to_ruby only accepts objects of type GLib::GConverterOutputStream");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GConverterOutputStream_init(mrb_state* mrb) {
  struct RClass* GConverterOutputStream_class = mrb_define_class_under(mrb, GLib_module(mrb), "GConverterOutputStream", mrb->object_class);
  MRB_SET_INSTANCE_TT(GConverterOutputStream_class, MRB_TT_DATA);

#if BIND_GConverterOutputStream_INITIALIZE
  mrb_define_method(mrb, GConverterOutputStream_class, "initialize", mrb_GLib_GConverterOutputStream_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GConverterOutputStream_class, "disown", mrb_GLib_GConverterOutputStream_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GConverterOutputStream_class, "belongs_to_ruby?", mrb_GLib_GConverterOutputStream_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
