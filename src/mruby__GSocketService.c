/*
 * struct _GSocketService
 * Defined in file giotypes.h @ line 201
 */

#include "mruby_GLib.h"

#if BIND_GSocketService_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GSocketService::initialize */
/* sha: 83f31f3953559593d2998d1bc3f62e7f10ce0f4d7d2471befa415256f82a8a93 */
#if BIND_GSocketService_INITIALIZE
mrb_value
mrb_GLib_GSocketService_initialize(mrb_state* mrb, mrb_value self) {
  struct _GSocketService* native_object = (struct _GSocketService*)calloc(1, sizeof(struct _GSocketService));
  mruby_giftwrap__GSocketService_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketService::initialize */
/* sha: 36971169df1e466caa7bb69aa44bfb0d4e33cbe47a0ded74bc130bb0d5ec232c */
mrb_value
mrb_GLib_GSocketService_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSocketService.disown only accepts objects of type GLib::GSocketService");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketService::belongs_to_ruby */
/* sha: 331d5fb88827e29b4d76ba14bdaa7d2c9b7a839cf36c65ed64de7cf9d9acd62b */
mrb_value
mrb_GLib_GSocketService_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSocketService.belongs_to_ruby only accepts objects of type GLib::GSocketService");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GSocketService_init(mrb_state* mrb) {
  struct RClass* GSocketService_class = mrb_define_class_under(mrb, GLib_module(mrb), "GSocketService", mrb->object_class);
  MRB_SET_INSTANCE_TT(GSocketService_class, MRB_TT_DATA);

#if BIND_GSocketService_INITIALIZE
  mrb_define_method(mrb, GSocketService_class, "initialize", mrb_GLib_GSocketService_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GSocketService_class, "disown", mrb_GLib_GSocketService_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GSocketService_class, "belongs_to_ruby?", mrb_GLib_GSocketService_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
