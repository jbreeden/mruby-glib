/*
 * struct _GTlsCertificate
 * Defined in file giotypes.h @ line 226
 */

#include "mruby_GLib.h"

#if BIND_GTlsCertificate_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GTlsCertificate::initialize */
/* sha: 69e400435539efdc0877959c4868dbe8c7e25a13089c9b508e0e8f014be19800 */
#if BIND_GTlsCertificate_INITIALIZE
mrb_value
mrb_GLib_GTlsCertificate_initialize(mrb_state* mrb, mrb_value self) {
  struct _GTlsCertificate* native_object = (struct _GTlsCertificate*)calloc(1, sizeof(struct _GTlsCertificate));
  mruby_giftwrap__GTlsCertificate_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTlsCertificate::initialize */
/* sha: e3d714b05bcfb3c068ec9e99feda1b532e41878fced33f3fe15d04209323e7b8 */
mrb_value
mrb_GLib_GTlsCertificate_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTlsCertificate.disown only accepts objects of type GLib::GTlsCertificate");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTlsCertificate::belongs_to_ruby */
/* sha: f389a0503481f36f5850fbfc90254e3512a92cdfac5dcded09be31e053289e44 */
mrb_value
mrb_GLib_GTlsCertificate_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTlsCertificate.belongs_to_ruby only accepts objects of type GLib::GTlsCertificate");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GTlsCertificate_init(mrb_state* mrb) {
  struct RClass* GTlsCertificate_class = mrb_define_class_under(mrb, GLib_module(mrb), "GTlsCertificate", mrb->object_class);
  MRB_SET_INSTANCE_TT(GTlsCertificate_class, MRB_TT_DATA);

#if BIND_GTlsCertificate_INITIALIZE
  mrb_define_method(mrb, GTlsCertificate_class, "initialize", mrb_GLib_GTlsCertificate_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GTlsCertificate_class, "disown", mrb_GLib_GTlsCertificate_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GTlsCertificate_class, "belongs_to_ruby?", mrb_GLib_GTlsCertificate_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
