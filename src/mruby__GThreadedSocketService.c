/*
 * struct _GThreadedSocketService
 * Defined in file giotypes.h @ line 224
 */

#include "mruby_GLib.h"

#if BIND_GThreadedSocketService_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GThreadedSocketService::initialize */
/* sha: e8eadebc7dd45da8b312a5d64bd98d18035cdb6d864c6b5112b663aa26802c7f */
#if BIND_GThreadedSocketService_INITIALIZE
mrb_value
mrb_GLib_GThreadedSocketService_initialize(mrb_state* mrb, mrb_value self) {
  struct _GThreadedSocketService* native_object = (struct _GThreadedSocketService*)calloc(1, sizeof(struct _GThreadedSocketService));
  mruby_giftwrap__GThreadedSocketService_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GThreadedSocketService::initialize */
/* sha: b0ac2d271b0a50f0682bd7c9b910238e106922a67a8873f3b716aa46d30563d4 */
mrb_value
mrb_GLib_GThreadedSocketService_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GThreadedSocketService.disown only accepts objects of type GLib::GThreadedSocketService");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GThreadedSocketService::belongs_to_ruby */
/* sha: 8793fb3f45d3929ceb1cbd54c67334bc368654b26cd8efb8dd8b83f1f4fdaf3d */
mrb_value
mrb_GLib_GThreadedSocketService_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GThreadedSocketService.belongs_to_ruby only accepts objects of type GLib::GThreadedSocketService");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GThreadedSocketService_init(mrb_state* mrb) {
  struct RClass* GThreadedSocketService_class = mrb_define_class_under(mrb, GLib_module(mrb), "GThreadedSocketService", mrb->object_class);
  MRB_SET_INSTANCE_TT(GThreadedSocketService_class, MRB_TT_DATA);

#if BIND_GThreadedSocketService_INITIALIZE
  mrb_define_method(mrb, GThreadedSocketService_class, "initialize", mrb_GLib_GThreadedSocketService_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GThreadedSocketService_class, "disown", mrb_GLib_GThreadedSocketService_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GThreadedSocketService_class, "belongs_to_ruby?", mrb_GLib_GThreadedSocketService_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
