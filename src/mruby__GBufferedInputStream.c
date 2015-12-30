/*
 * struct _GBufferedInputStream
 * Defined in file giotypes.h @ line 36
 */

#include "mruby_GLib.h"

#if BIND_GBufferedInputStream_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GBufferedInputStream::initialize */
/* sha: 3d407bfc429b9ab8e0b9cad6a281f4e8fd11dfa8f834fa5f8b15b87a58308e62 */
#if BIND_GBufferedInputStream_INITIALIZE
mrb_value
mrb_GLib_GBufferedInputStream_initialize(mrb_state* mrb, mrb_value self) {
  struct _GBufferedInputStream* native_object = (struct _GBufferedInputStream*)calloc(1, sizeof(struct _GBufferedInputStream));
  mruby_giftwrap__GBufferedInputStream_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GBufferedInputStream::initialize */
/* sha: 658ddadada54102f3cca9652d7a1f46bc4d562e2484f3774c06ec01c2c632420 */
mrb_value
mrb_GLib_GBufferedInputStream_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GBufferedInputStream.disown only accepts objects of type GLib::GBufferedInputStream");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GBufferedInputStream::belongs_to_ruby */
/* sha: f5727a2b8422d144181f7d4178bf5f0ce4a0814efec10664de99b944ce0cab5b */
mrb_value
mrb_GLib_GBufferedInputStream_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GBufferedInputStream.belongs_to_ruby only accepts objects of type GLib::GBufferedInputStream");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GBufferedInputStream_init(mrb_state* mrb) {
  struct RClass* GBufferedInputStream_class = mrb_define_class_under(mrb, GLib_module(mrb), "GBufferedInputStream", mrb->object_class);
  MRB_SET_INSTANCE_TT(GBufferedInputStream_class, MRB_TT_DATA);

#if BIND_GBufferedInputStream_INITIALIZE
  mrb_define_method(mrb, GBufferedInputStream_class, "initialize", mrb_GLib_GBufferedInputStream_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GBufferedInputStream_class, "disown", mrb_GLib_GBufferedInputStream_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GBufferedInputStream_class, "belongs_to_ruby?", mrb_GLib_GBufferedInputStream_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
