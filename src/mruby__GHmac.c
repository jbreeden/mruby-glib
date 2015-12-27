/*
 * struct _GHmac
 * Defined in file ghmac.h @ line 40
 */

#include "mruby_GLib.h"

#if BIND_GHmac_TYPE

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
  struct RClass* GHmac_class = mrb_define_class_under(mrb, GLib_module(mrb), "GHmac", mrb->object_class);
  MRB_SET_INSTANCE_TT(GHmac_class, MRB_TT_DATA);

#if BIND_GHmac_INITIALIZE
  mrb_define_method(mrb, GHmac_class, "initialize", mrb_GLib_GHmac_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GHmac_class, "disown", mrb_GLib_GHmac_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GHmac_class, "belongs_to_ruby?", mrb_GLib_GHmac_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
