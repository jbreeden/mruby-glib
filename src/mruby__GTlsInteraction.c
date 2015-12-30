/*
 * struct _GTlsInteraction
 * Defined in file giotypes.h @ line 231
 */

#include "mruby_GLib.h"

#if BIND_GTlsInteraction_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GTlsInteraction::initialize */
/* sha: 51972d410541aa5cad30e0b6b58100d025ffd76a43d53e98466230531ff51938 */
#if BIND_GTlsInteraction_INITIALIZE
mrb_value
mrb_GLib_GTlsInteraction_initialize(mrb_state* mrb, mrb_value self) {
  struct _GTlsInteraction* native_object = (struct _GTlsInteraction*)calloc(1, sizeof(struct _GTlsInteraction));
  mruby_giftwrap__GTlsInteraction_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTlsInteraction::initialize */
/* sha: 285bf3b48b0774393687a5ff838badfa82b170c81034689c2f2c494a968579f8 */
mrb_value
mrb_GLib_GTlsInteraction_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTlsInteraction.disown only accepts objects of type GLib::GTlsInteraction");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTlsInteraction::belongs_to_ruby */
/* sha: 58027d4ba7be2a60aa87ae80ccadf80959081bb1a680e89da88479a1fa5e517d */
mrb_value
mrb_GLib_GTlsInteraction_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTlsInteraction.belongs_to_ruby only accepts objects of type GLib::GTlsInteraction");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GTlsInteraction_init(mrb_state* mrb) {
  struct RClass* GTlsInteraction_class = mrb_define_class_under(mrb, GLib_module(mrb), "GTlsInteraction", mrb->object_class);
  MRB_SET_INSTANCE_TT(GTlsInteraction_class, MRB_TT_DATA);

#if BIND_GTlsInteraction_INITIALIZE
  mrb_define_method(mrb, GTlsInteraction_class, "initialize", mrb_GLib_GTlsInteraction_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GTlsInteraction_class, "disown", mrb_GLib_GTlsInteraction_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GTlsInteraction_class, "belongs_to_ruby?", mrb_GLib_GTlsInteraction_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
