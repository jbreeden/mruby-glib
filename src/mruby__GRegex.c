/*
 * struct _GRegex
 * Defined in file gregex.h @ line 414
 */

#include "mruby_GLib.h"

#if BIND_GRegex_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GRegex::initialize */
/* sha: 34b46c4e17614ed85ccaea0aa2c52449ece2ccd7b463d81af713b41bcd90939f */
#if BIND_GRegex_INITIALIZE
mrb_value
mrb_GLib_GRegex_initialize(mrb_state* mrb, mrb_value self) {
  struct _GRegex* native_object = (struct _GRegex*)calloc(1, sizeof(struct _GRegex));
  mruby_giftwrap__GRegex_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GRegex::initialize */
/* sha: b79accb55973c9d5070662d3b66615e83a99641c300c2912c652e357b78c6d37 */
mrb_value
mrb_GLib_GRegex_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GRegex.disown only accepts objects of type GLib::GRegex");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GRegex::belongs_to_ruby */
/* sha: 45060104a7eba29faa934809af63a287e53a82b71690d03a3597112b2a2c2eb4 */
mrb_value
mrb_GLib_GRegex_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GRegex.belongs_to_ruby only accepts objects of type GLib::GRegex");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GRegex_init(mrb_state* mrb) {
  struct RClass* GRegex_class = mrb_define_class_under(mrb, GLib_module(mrb), "GRegex", mrb->object_class);
  MRB_SET_INSTANCE_TT(GRegex_class, MRB_TT_DATA);

#if BIND_GRegex_INITIALIZE
  mrb_define_method(mrb, GRegex_class, "initialize", mrb_GLib_GRegex_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GRegex_class, "disown", mrb_GLib_GRegex_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GRegex_class, "belongs_to_ruby?", mrb_GLib_GRegex_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
