/*
 * struct _GSocketPrivate
 * Defined in file gsocket.h @ line 46
 */

#include "mruby_GLib.h"

#if BIND_GSocketPrivate_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GSocketPrivate::initialize */
/* sha: aaf974af7eb7150af7eefea6c90588e205a34e6687d7e3507a718805fd9a02f3 */
#if BIND_GSocketPrivate_INITIALIZE
mrb_value
mrb_GLib_GSocketPrivate_initialize(mrb_state* mrb, mrb_value self) {
  struct _GSocketPrivate* native_object = (struct _GSocketPrivate*)calloc(1, sizeof(struct _GSocketPrivate));
  mruby_giftwrap__GSocketPrivate_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketPrivate::initialize */
/* sha: 8d5cb4da471c9fee587a5bdaf91776e21c7dd2122c35c7f3b203efb0074f6718 */
mrb_value
mrb_GLib_GSocketPrivate_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSocketPrivate.disown only accepts objects of type GLib::GSocketPrivate");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketPrivate::belongs_to_ruby */
/* sha: ae1f069224261db57d660daa8ab0379be535d2a5190e6df7a2ed971301413199 */
mrb_value
mrb_GLib_GSocketPrivate_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSocketPrivate.belongs_to_ruby only accepts objects of type GLib::GSocketPrivate");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GSocketPrivate_init(mrb_state* mrb) {
/* MRUBY_BINDING: GSocketPrivate::class_definition */
/* sha: e464858ae17db01df58db00a3eb1503bbc8e8f2b5243bf7ff53b6e0c7d2e22f8 */
  struct RClass* GSocketPrivate_class = mrb_define_class_under(mrb, GLib_module(mrb), "GSocketPrivate", mrb->object_class);
  MRB_SET_INSTANCE_TT(GSocketPrivate_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketPrivate::class_method_definitions */
/* sha: 52b76f95b48dd873cfc600e70e8f218f1b1025d1ad6008ec753686523e4ba6e5 */
#if BIND_GSocketPrivate_INITIALIZE
  mrb_define_method(mrb, GSocketPrivate_class, "initialize", mrb_GLib_GSocketPrivate_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GSocketPrivate_class, "disown", mrb_GLib_GSocketPrivate_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GSocketPrivate_class, "belongs_to_ruby?", mrb_GLib_GSocketPrivate_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketPrivate::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketPrivate::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
