/*
 * struct _GNetworkService
 * Defined in file giotypes.h @ line 134
 */

#include "mruby_GLib.h"

#if BIND_GNetworkService_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GNetworkService::initialize */
/* sha: 5977e7009c603baad311ea961cd40062ea40a9ced0b7f0b11ca08c1d000c1566 */
#if BIND_GNetworkService_INITIALIZE
mrb_value
mrb_GLib_GNetworkService_initialize(mrb_state* mrb, mrb_value self) {
  struct _GNetworkService* native_object = (struct _GNetworkService*)calloc(1, sizeof(struct _GNetworkService));
  mruby_giftwrap__GNetworkService_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GNetworkService::initialize */
/* sha: ed411e30eada621d3da47c35085d2c3d5b2ecc7d728ae8a15a3f0e6b75a67b9e */
mrb_value
mrb_GLib_GNetworkService_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GNetworkService.disown only accepts objects of type GLib::GNetworkService");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GNetworkService::belongs_to_ruby */
/* sha: 6a8ca237e6d5429a475c0aba667ca22d88f3a4521e5d8f4e7b1bba3533b73d8f */
mrb_value
mrb_GLib_GNetworkService_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GNetworkService.belongs_to_ruby only accepts objects of type GLib::GNetworkService");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GNetworkService_init(mrb_state* mrb) {
  struct RClass* GNetworkService_class = mrb_define_class_under(mrb, GLib_module(mrb), "GNetworkService", mrb->object_class);
  MRB_SET_INSTANCE_TT(GNetworkService_class, MRB_TT_DATA);

#if BIND_GNetworkService_INITIALIZE
  mrb_define_method(mrb, GNetworkService_class, "initialize", mrb_GLib_GNetworkService_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GNetworkService_class, "disown", mrb_GLib_GNetworkService_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GNetworkService_class, "belongs_to_ruby?", mrb_GLib_GNetworkService_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
