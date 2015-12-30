/*
 * struct _GSocketListener
 * Defined in file giotypes.h @ line 192
 */

#include "mruby_GLib.h"

#if BIND_GSocketListener_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GSocketListener::initialize */
/* sha: 4cf89ec0960ab6dd691f2ece2e46bbbcf6ea4ae392c533f3d907233afa5619fb */
#if BIND_GSocketListener_INITIALIZE
mrb_value
mrb_GLib_GSocketListener_initialize(mrb_state* mrb, mrb_value self) {
  struct _GSocketListener* native_object = (struct _GSocketListener*)calloc(1, sizeof(struct _GSocketListener));
  mruby_giftwrap__GSocketListener_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketListener::initialize */
/* sha: 0d3127c654dd9db6c4ce0955e75a836c1ea5b99ae728b5b8ff42f23ae86885c4 */
mrb_value
mrb_GLib_GSocketListener_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSocketListener.disown only accepts objects of type GLib::GSocketListener");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketListener::belongs_to_ruby */
/* sha: fbe02271f6274f2035dd0caebcaf228f7d390a9dfa9bc5abc32891ca0fcf05a4 */
mrb_value
mrb_GLib_GSocketListener_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSocketListener.belongs_to_ruby only accepts objects of type GLib::GSocketListener");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GSocketListener_init(mrb_state* mrb) {
  struct RClass* GSocketListener_class = mrb_define_class_under(mrb, GLib_module(mrb), "GSocketListener", mrb->object_class);
  MRB_SET_INSTANCE_TT(GSocketListener_class, MRB_TT_DATA);

#if BIND_GSocketListener_INITIALIZE
  mrb_define_method(mrb, GSocketListener_class, "initialize", mrb_GLib_GSocketListener_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GSocketListener_class, "disown", mrb_GLib_GSocketListener_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GSocketListener_class, "belongs_to_ruby?", mrb_GLib_GSocketListener_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
