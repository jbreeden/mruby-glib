/*
 * struct _GTimeZone
 * Defined in file gtimezone.h @ line 31
 */

#include "mruby_GLib.h"

#if BIND_GTimeZone_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GTimeZone::initialize */
/* sha: 4d7fc39c53c6558e9e4d0bb7dfff22c1a04ae8c622a918879a9f088087487537 */
#if BIND_GTimeZone_INITIALIZE
mrb_value
mrb_GLib_GTimeZone_initialize(mrb_state* mrb, mrb_value self) {
  struct _GTimeZone* native_object = (struct _GTimeZone*)calloc(1, sizeof(struct _GTimeZone));
  mruby_giftwrap__GTimeZone_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTimeZone::initialize */
/* sha: c58087f4e37cc80f100c0d83bf5a37729d4847f542226b97e4a5d52af1f06fd8 */
mrb_value
mrb_GLib_GTimeZone_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTimeZone.disown only accepts objects of type GLib::GTimeZone");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTimeZone::belongs_to_ruby */
/* sha: 00a35c5a7742b0db0e32b2cd20289df9a078545cc9a5e74ed76009c9618d7213 */
mrb_value
mrb_GLib_GTimeZone_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTimeZone.belongs_to_ruby only accepts objects of type GLib::GTimeZone");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GTimeZone_init(mrb_state* mrb) {
  struct RClass* GTimeZone_class = mrb_define_class_under(mrb, GLib_module(mrb), "GTimeZone", mrb->object_class);
  MRB_SET_INSTANCE_TT(GTimeZone_class, MRB_TT_DATA);

#if BIND_GTimeZone_INITIALIZE
  mrb_define_method(mrb, GTimeZone_class, "initialize", mrb_GLib_GTimeZone_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GTimeZone_class, "disown", mrb_GLib_GTimeZone_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GTimeZone_class, "belongs_to_ruby?", mrb_GLib_GTimeZone_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
