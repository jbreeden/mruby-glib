/*
 * struct _GVariant
 * Defined in file gvariant.h @ line 34
 */

#include "mruby_GLib.h"

#if BIND_GVariant_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GVariant::initialize */
/* sha: a473dc7b399145f2ae4478f56cb5a0a7806af38179947d2e4b0fb372c3e513d2 */
#if BIND_GVariant_INITIALIZE
mrb_value
mrb_GLib_GVariant_initialize(mrb_state* mrb, mrb_value self) {
  struct _GVariant* native_object = (struct _GVariant*)calloc(1, sizeof(struct _GVariant));
  mruby_giftwrap__GVariant_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GVariant::initialize */
/* sha: 0952b8ca5750b3e055748a9a9137a76106acfba4fde467d67c39f4b70bf6375e */
mrb_value
mrb_GLib_GVariant_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GVariant.disown only accepts objects of type GLib::GVariant");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GVariant::belongs_to_ruby */
/* sha: 66b74951feef0967b1b7601e129c94798433f5a931dbc182607191c0d5677d50 */
mrb_value
mrb_GLib_GVariant_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GVariant.belongs_to_ruby only accepts objects of type GLib::GVariant");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GVariant_init(mrb_state* mrb) {
/* MRUBY_BINDING: GVariant::class_definition */
/* sha: be15430687370a21031338c74708d17b6793bccf0bc7248b461c4acd00e4a3ce */
  struct RClass* GVariant_class = mrb_define_class_under(mrb, GLib_module(mrb), "GVariant", mrb->object_class);
  MRB_SET_INSTANCE_TT(GVariant_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GVariant::class_method_definitions */
/* sha: b7f65b2e3630f2976d2fd1193e751d62a07193e0a02815c6edaae9d0a0c177ba */
#if BIND_GVariant_INITIALIZE
  mrb_define_method(mrb, GVariant_class, "initialize", mrb_GLib_GVariant_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GVariant_class, "disown", mrb_GLib_GVariant_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GVariant_class, "belongs_to_ruby?", mrb_GLib_GVariant_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GVariant::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GVariant::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
