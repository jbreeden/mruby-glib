/*
 * struct _GInetAddressMask
 * Defined in file giotypes.h @ line 104
 */

#include "mruby_GLib.h"

#if BIND_GInetAddressMask_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GInetAddressMask::initialize */
/* sha: 87c7225cb4101d972ef3990e01aeb3987a2a2073854e746049d36d97e2943146 */
#if BIND_GInetAddressMask_INITIALIZE
mrb_value
mrb_GLib_GInetAddressMask_initialize(mrb_state* mrb, mrb_value self) {
  struct _GInetAddressMask* native_object = (struct _GInetAddressMask*)calloc(1, sizeof(struct _GInetAddressMask));
  mruby_giftwrap__GInetAddressMask_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetAddressMask::initialize */
/* sha: 7f6f5c14759252316507fe8ca148d9c1f58b1be85bfb6e9ce8b28bff629df065 */
mrb_value
mrb_GLib_GInetAddressMask_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GInetAddressMask.disown only accepts objects of type GLib::GInetAddressMask");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetAddressMask::belongs_to_ruby */
/* sha: 879f0ac23b97be45983fae497e2a7533384cb50dc49d9ea27a88f1b71f6294e3 */
mrb_value
mrb_GLib_GInetAddressMask_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GInetAddressMask.belongs_to_ruby only accepts objects of type GLib::GInetAddressMask");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GInetAddressMask_init(mrb_state* mrb) {
  struct RClass* GInetAddressMask_class = mrb_define_class_under(mrb, GLib_module(mrb), "GInetAddressMask", mrb->object_class);
  MRB_SET_INSTANCE_TT(GInetAddressMask_class, MRB_TT_DATA);

#if BIND_GInetAddressMask_INITIALIZE
  mrb_define_method(mrb, GInetAddressMask_class, "initialize", mrb_GLib_GInetAddressMask_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GInetAddressMask_class, "disown", mrb_GLib_GInetAddressMask_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GInetAddressMask_class, "belongs_to_ruby?", mrb_GLib_GInetAddressMask_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
