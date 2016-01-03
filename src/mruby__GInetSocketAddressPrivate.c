/*
 * struct _GInetSocketAddressPrivate
 * Defined in file ginetsocketaddress.h @ line 41
 */

#include "mruby_GLib.h"

#if BIND_GInetSocketAddressPrivate_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GInetSocketAddressPrivate::initialize */
/* sha: 948901a965013870edb1a73ae65ab081bd577700e231eb2dd91e3c28725c2d66 */
#if BIND_GInetSocketAddressPrivate_INITIALIZE
mrb_value
mrb_GLib_GInetSocketAddressPrivate_initialize(mrb_state* mrb, mrb_value self) {
  struct _GInetSocketAddressPrivate* native_object = (struct _GInetSocketAddressPrivate*)calloc(1, sizeof(struct _GInetSocketAddressPrivate));
  mruby_giftwrap__GInetSocketAddressPrivate_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetSocketAddressPrivate::initialize */
/* sha: 9526b69dfa0a966590933c0a01671574f1b90329c721cc449af0410f85e91f28 */
mrb_value
mrb_GLib_GInetSocketAddressPrivate_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GInetSocketAddressPrivate.disown only accepts objects of type GLib::GInetSocketAddressPrivate");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetSocketAddressPrivate::belongs_to_ruby */
/* sha: 9d4166583b3d8ad8ab88c3760a59df8ffdfa4535d9213cfa294fdc9e8f7545ef */
mrb_value
mrb_GLib_GInetSocketAddressPrivate_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GInetSocketAddressPrivate.belongs_to_ruby only accepts objects of type GLib::GInetSocketAddressPrivate");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GInetSocketAddressPrivate_init(mrb_state* mrb) {
/* MRUBY_BINDING: GInetSocketAddressPrivate::class_definition */
/* sha: 4beacfac499ee961d2b9265cc01341fb66521d8dd7209067f63f2d98d13c3bf4 */
  struct RClass* GInetSocketAddressPrivate_class = mrb_define_class_under(mrb, GLib_module(mrb), "GInetSocketAddressPrivate", mrb->object_class);
  MRB_SET_INSTANCE_TT(GInetSocketAddressPrivate_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetSocketAddressPrivate::class_method_definitions */
/* sha: 4d4c0098b2bc30742b84c665d56560c84a8f21abe60f9407075a7b000bf487b1 */
#if BIND_GInetSocketAddressPrivate_INITIALIZE
  mrb_define_method(mrb, GInetSocketAddressPrivate_class, "initialize", mrb_GLib_GInetSocketAddressPrivate_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GInetSocketAddressPrivate_class, "disown", mrb_GLib_GInetSocketAddressPrivate_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GInetSocketAddressPrivate_class, "belongs_to_ruby?", mrb_GLib_GInetSocketAddressPrivate_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetSocketAddressPrivate::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetSocketAddressPrivate::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
