/*
 * struct _GCredentials
 * Defined in file giotypes.h @ line 465
 */

#include "mruby_GLib.h"

#if BIND_GCredentials_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GCredentials::initialize */
/* sha: 796ee78699bdb6ea6b63ff1aa05733301cf79453277d5f96b075b50bef5126e8 */
#if BIND_GCredentials_INITIALIZE
mrb_value
mrb_GLib_GCredentials_initialize(mrb_state* mrb, mrb_value self) {
  struct _GCredentials* native_object = (struct _GCredentials*)calloc(1, sizeof(struct _GCredentials));
  mruby_giftwrap__GCredentials_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GCredentials::initialize */
/* sha: 057450bda80114f1f2ac034f96eadff65151d8dbe234ecc2b17538ab5848fd64 */
mrb_value
mrb_GLib_GCredentials_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GCredentials.disown only accepts objects of type GLib::GCredentials");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GCredentials::belongs_to_ruby */
/* sha: f0575f179583e0a78c046bc86e6d18638030f22533636b02df272059c98b8745 */
mrb_value
mrb_GLib_GCredentials_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GCredentials.belongs_to_ruby only accepts objects of type GLib::GCredentials");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GCredentials_init(mrb_state* mrb) {
  struct RClass* GCredentials_class = mrb_define_class_under(mrb, GLib_module(mrb), "GCredentials", mrb->object_class);
  MRB_SET_INSTANCE_TT(GCredentials_class, MRB_TT_DATA);

#if BIND_GCredentials_INITIALIZE
  mrb_define_method(mrb, GCredentials_class, "initialize", mrb_GLib_GCredentials_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GCredentials_class, "disown", mrb_GLib_GCredentials_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GCredentials_class, "belongs_to_ruby?", mrb_GLib_GCredentials_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
