/*
 * struct _GVolume
 * Defined in file giotypes.h @ line 253
 */

#include "mruby_GLib.h"

#if BIND_GVolume_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GVolume::initialize */
/* sha: 1d53316a85971b9ef13f8390512871e6c48a35732c7ebcfd813164bab9778d03 */
#if BIND_GVolume_INITIALIZE
mrb_value
mrb_GLib_GVolume_initialize(mrb_state* mrb, mrb_value self) {
  struct _GVolume* native_object = (struct _GVolume*)calloc(1, sizeof(struct _GVolume));
  mruby_giftwrap__GVolume_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GVolume::initialize */
/* sha: d0cb2a082f3bfaf0e604691572e7b1a68f74d9ca0fd2f0640b0856533a04f263 */
mrb_value
mrb_GLib_GVolume_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GVolume.disown only accepts objects of type GLib::GVolume");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GVolume::belongs_to_ruby */
/* sha: 6b654bac1e59f385fcfee8b18299bfc9783f718af7a665d87a74c70b66d8766e */
mrb_value
mrb_GLib_GVolume_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GVolume.belongs_to_ruby only accepts objects of type GLib::GVolume");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GVolume_init(mrb_state* mrb) {
  struct RClass* GVolume_class = mrb_define_class_under(mrb, GLib_module(mrb), "GVolume", mrb->object_class);
  MRB_SET_INSTANCE_TT(GVolume_class, MRB_TT_DATA);

#if BIND_GVolume_INITIALIZE
  mrb_define_method(mrb, GVolume_class, "initialize", mrb_GLib_GVolume_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GVolume_class, "disown", mrb_GLib_GVolume_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GVolume_class, "belongs_to_ruby?", mrb_GLib_GVolume_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
