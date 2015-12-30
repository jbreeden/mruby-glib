/*
 * struct _GPollableOutputStream
 * Defined in file giotypes.h @ line 139
 */

#include "mruby_GLib.h"

#if BIND_GPollableOutputStream_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GPollableOutputStream::initialize */
/* sha: d6916eaa7be38fe2cc3d46b87570f52d72aca8030e0d47f4c81737c2d6749ca3 */
#if BIND_GPollableOutputStream_INITIALIZE
mrb_value
mrb_GLib_GPollableOutputStream_initialize(mrb_state* mrb, mrb_value self) {
  struct _GPollableOutputStream* native_object = (struct _GPollableOutputStream*)calloc(1, sizeof(struct _GPollableOutputStream));
  mruby_giftwrap__GPollableOutputStream_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GPollableOutputStream::initialize */
/* sha: 34a38bddef5bac50524a6c81a39929ba0a6bfe261fb2134cb9ce635e3f16e90d */
mrb_value
mrb_GLib_GPollableOutputStream_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GPollableOutputStream.disown only accepts objects of type GLib::GPollableOutputStream");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GPollableOutputStream::belongs_to_ruby */
/* sha: 93051e89b5bc4256cc6c4a8a72920f4c784d29e0658b6ed38b2ac932da4b5cec */
mrb_value
mrb_GLib_GPollableOutputStream_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GPollableOutputStream.belongs_to_ruby only accepts objects of type GLib::GPollableOutputStream");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GPollableOutputStream_init(mrb_state* mrb) {
  struct RClass* GPollableOutputStream_class = mrb_define_class_under(mrb, GLib_module(mrb), "GPollableOutputStream", mrb->object_class);
  MRB_SET_INSTANCE_TT(GPollableOutputStream_class, MRB_TT_DATA);

#if BIND_GPollableOutputStream_INITIALIZE
  mrb_define_method(mrb, GPollableOutputStream_class, "initialize", mrb_GLib_GPollableOutputStream_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GPollableOutputStream_class, "disown", mrb_GLib_GPollableOutputStream_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GPollableOutputStream_class, "belongs_to_ruby?", mrb_GLib_GPollableOutputStream_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
