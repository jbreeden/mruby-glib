/*
 * struct _GTimer
 * Defined in file gtimer.h @ line 40
 */

#include "mruby_GLib.h"

#if BIND_GTimer_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GTimer::initialize */
/* sha: 8b0ecf874c4173f01ef4263986ac54fbae1e568a22183ae3477d0b3a82d010d0 */
#if BIND_GTimer_INITIALIZE
mrb_value
mrb_GLib_GTimer_initialize(mrb_state* mrb, mrb_value self) {
  struct _GTimer* native_object = (struct _GTimer*)calloc(1, sizeof(struct _GTimer));
  mruby_giftwrap__GTimer_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTimer::initialize */
/* sha: af57771214a097d01350b63e62bfbaedb5b3b1b2f8acff3aa8ab39779ae1ea73 */
mrb_value
mrb_GLib_GTimer_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTimer.disown only accepts objects of type GLib::GTimer");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTimer::belongs_to_ruby */
/* sha: f81785a340b8e92a37e290a8fc125c9e22673bfcdcba94fdc50486287f7281d6 */
mrb_value
mrb_GLib_GTimer_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTimer.belongs_to_ruby only accepts objects of type GLib::GTimer");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GTimer_init(mrb_state* mrb) {
  struct RClass* GTimer_class = mrb_define_class_under(mrb, GLib_module(mrb), "GTimer", mrb->object_class);
  MRB_SET_INSTANCE_TT(GTimer_class, MRB_TT_DATA);

#if BIND_GTimer_INITIALIZE
  mrb_define_method(mrb, GTimer_class, "initialize", mrb_GLib_GTimer_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GTimer_class, "disown", mrb_GLib_GTimer_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GTimer_class, "belongs_to_ruby?", mrb_GLib_GTimer_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
