/*
 * struct _GInetAddressPrivate
 * Defined in file ginetaddress.h @ line 41
 */

#include "mruby_GLib.h"

#if BIND_GInetAddressPrivate_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GInetAddressPrivate::initialize */
/* sha: e04f20cd19e9c3c0e276ce2c88f8d37746371db11a55f14c75026fdb9527faa7 */
#if BIND_GInetAddressPrivate_INITIALIZE
mrb_value
mrb_GLib_GInetAddressPrivate_initialize(mrb_state* mrb, mrb_value self) {
  struct _GInetAddressPrivate* native_object = (struct _GInetAddressPrivate*)calloc(1, sizeof(struct _GInetAddressPrivate));
  mruby_giftwrap__GInetAddressPrivate_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetAddressPrivate::initialize */
/* sha: 794e1df6c2f913a0376bde8c2bba645a692c8d95aed0bdd100890f5d9480c640 */
mrb_value
mrb_GLib_GInetAddressPrivate_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GInetAddressPrivate.disown only accepts objects of type GLib::GInetAddressPrivate");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetAddressPrivate::belongs_to_ruby */
/* sha: 1dadae1502bd3fcabe7a90280d041b34682bf41b6f186fe40dc5343745203651 */
mrb_value
mrb_GLib_GInetAddressPrivate_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GInetAddressPrivate.belongs_to_ruby only accepts objects of type GLib::GInetAddressPrivate");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GInetAddressPrivate_init(mrb_state* mrb) {
/* MRUBY_BINDING: GInetAddressPrivate::class_definition */
/* sha: 170bd84ded322b11ae30654456b1ada1ba64c1eda5f02f3d8e783fa29331ad6a */
  struct RClass* GInetAddressPrivate_class = mrb_define_class_under(mrb, GLib_module(mrb), "GInetAddressPrivate", mrb->object_class);
  MRB_SET_INSTANCE_TT(GInetAddressPrivate_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetAddressPrivate::class_method_definitions */
/* sha: 8d7111645ce311ec7e685f154e1afb87584bb09b344f10604543374a99fdf4dc */
#if BIND_GInetAddressPrivate_INITIALIZE
  mrb_define_method(mrb, GInetAddressPrivate_class, "initialize", mrb_GLib_GInetAddressPrivate_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GInetAddressPrivate_class, "disown", mrb_GLib_GInetAddressPrivate_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GInetAddressPrivate_class, "belongs_to_ruby?", mrb_GLib_GInetAddressPrivate_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetAddressPrivate::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetAddressPrivate::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
