/*
 * struct _GConverterInputStream
 * Defined in file giotypes.h @ line 41
 */

#include "mruby_GLib.h"

#if BIND_GConverterInputStream_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GConverterInputStream::initialize */
/* sha: 970682b0b090c45f464580a535c851c6e5b4842b3fb5e2e3caebb965f31f5107 */
#if BIND_GConverterInputStream_INITIALIZE
mrb_value
mrb_GLib_GConverterInputStream_initialize(mrb_state* mrb, mrb_value self) {
  struct _GConverterInputStream* native_object = (struct _GConverterInputStream*)calloc(1, sizeof(struct _GConverterInputStream));
  mruby_giftwrap__GConverterInputStream_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GConverterInputStream::initialize */
/* sha: 276a648f0a6c4611620f1c26b1090b3d3fad4822edafc3a2f3aa92f17a1dc88f */
mrb_value
mrb_GLib_GConverterInputStream_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GConverterInputStream.disown only accepts objects of type GLib::GConverterInputStream");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GConverterInputStream::belongs_to_ruby */
/* sha: de51bb61d3a9c61ec4edfce32b6c16def93da420b295a85495993f773c6cfa98 */
mrb_value
mrb_GLib_GConverterInputStream_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GConverterInputStream.belongs_to_ruby only accepts objects of type GLib::GConverterInputStream");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GConverterInputStream_init(mrb_state* mrb) {
  struct RClass* GConverterInputStream_class = mrb_define_class_under(mrb, GLib_module(mrb), "GConverterInputStream", mrb->object_class);
  MRB_SET_INSTANCE_TT(GConverterInputStream_class, MRB_TT_DATA);

#if BIND_GConverterInputStream_INITIALIZE
  mrb_define_method(mrb, GConverterInputStream_class, "initialize", mrb_GLib_GConverterInputStream_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GConverterInputStream_class, "disown", mrb_GLib_GConverterInputStream_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GConverterInputStream_class, "belongs_to_ruby?", mrb_GLib_GConverterInputStream_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
