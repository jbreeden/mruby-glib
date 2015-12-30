/*
 * struct _GTlsPassword
 * Defined in file giotypes.h @ line 232
 */

#include "mruby_GLib.h"

#if BIND_GTlsPassword_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GTlsPassword::initialize */
/* sha: 58063baa75811a3418acb2be85b56d8435c08dce7a09d334f952a8518b6ac9f6 */
#if BIND_GTlsPassword_INITIALIZE
mrb_value
mrb_GLib_GTlsPassword_initialize(mrb_state* mrb, mrb_value self) {
  struct _GTlsPassword* native_object = (struct _GTlsPassword*)calloc(1, sizeof(struct _GTlsPassword));
  mruby_giftwrap__GTlsPassword_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTlsPassword::initialize */
/* sha: 8ea92911dfdb23bac2599aed783510e28b01f30dad0eab4ac518b04721ad3e9e */
mrb_value
mrb_GLib_GTlsPassword_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTlsPassword.disown only accepts objects of type GLib::GTlsPassword");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTlsPassword::belongs_to_ruby */
/* sha: a2732e7046c260e61d4fbc4d2839ae3ff15c32223d1297efe608d96811eb1741 */
mrb_value
mrb_GLib_GTlsPassword_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTlsPassword.belongs_to_ruby only accepts objects of type GLib::GTlsPassword");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GTlsPassword_init(mrb_state* mrb) {
  struct RClass* GTlsPassword_class = mrb_define_class_under(mrb, GLib_module(mrb), "GTlsPassword", mrb->object_class);
  MRB_SET_INSTANCE_TT(GTlsPassword_class, MRB_TT_DATA);

#if BIND_GTlsPassword_INITIALIZE
  mrb_define_method(mrb, GTlsPassword_class, "initialize", mrb_GLib_GTlsPassword_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GTlsPassword_class, "disown", mrb_GLib_GTlsPassword_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GTlsPassword_class, "belongs_to_ruby?", mrb_GLib_GTlsPassword_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
