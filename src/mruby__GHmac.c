/*
 * struct _GHmac
 * Defined in file ghmac.h @ line 40
 */

#include "mruby_GLib.h"

#if BIND_GHmac_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GHmac::initialize */
/* sha: 16b4450e840a1a37d97397909e9ffc320b92add3fd518cf8bc04b82f7c4eab89 */
#if BIND_GHmac_INITIALIZE
mrb_value
mrb_GLib_GHmac_initialize(mrb_state* mrb, mrb_value self) {
  struct _GHmac* native_object = (struct _GHmac*)calloc(1, sizeof(struct _GHmac));
  mruby_giftwrap__GHmac_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHmac::initialize */
/* sha: d33ecad9e8a38579f138d6f54f3565880bc27e225ccf5564730de31d842d645b */
mrb_value
mrb_GLib_GHmac_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GHmac.disown only accepts objects of type GLib::GHmac");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHmac::belongs_to_ruby */
/* sha: 0e5d9d8f8846680dfa7efcaad56647a9a079cbcea5492cf68d3553c9b7467cb7 */
mrb_value
mrb_GLib_GHmac_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GHmac.belongs_to_ruby only accepts objects of type GLib::GHmac");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GHmac_init(mrb_state* mrb) {
/* MRUBY_BINDING: GHmac::class_definition */
/* sha: a6c7c95cabbc504adec75c4b05a8f6efbedf94d0773ce5faf3c0c118447c9b47 */
  struct RClass* GHmac_class = mrb_define_class_under(mrb, GLib_module(mrb), "GHmac", mrb->object_class);
  MRB_SET_INSTANCE_TT(GHmac_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHmac::class_method_definitions */
/* sha: 765a5160783b426c2ee4eda2c7a82c1f730a115102211c5e4b4bb66395242caa */
#if BIND_GHmac_INITIALIZE
  mrb_define_method(mrb, GHmac_class, "initialize", mrb_GLib_GHmac_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GHmac_class, "disown", mrb_GLib_GHmac_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GHmac_class, "belongs_to_ruby?", mrb_GLib_GHmac_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHmac::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHmac::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
