/*
 * struct _GApplicationCommandLine
 * Defined in file giotypes.h @ line 57
 */

#include "mruby_GLib.h"

#if BIND_GApplicationCommandLine_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GApplicationCommandLine::initialize */
/* sha: 6a3bf9a06d501e288e2d443f92bd142369f68ac08fe41fd38110036e0745eefa */
#if BIND_GApplicationCommandLine_INITIALIZE
mrb_value
mrb_GLib_GApplicationCommandLine_initialize(mrb_state* mrb, mrb_value self) {
  struct _GApplicationCommandLine* native_object = (struct _GApplicationCommandLine*)calloc(1, sizeof(struct _GApplicationCommandLine));
  mruby_giftwrap__GApplicationCommandLine_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GApplicationCommandLine::initialize */
/* sha: 0b545e40739699ab425adb7434bbb74073f0ad8c1dc0707ddd71f0ffd9dc5633 */
mrb_value
mrb_GLib_GApplicationCommandLine_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GApplicationCommandLine.disown only accepts objects of type GLib::GApplicationCommandLine");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GApplicationCommandLine::belongs_to_ruby */
/* sha: e037f75ff3538f7dbbd6db08a098386498730a54d415f862101829ab22d78eff */
mrb_value
mrb_GLib_GApplicationCommandLine_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GApplicationCommandLine.belongs_to_ruby only accepts objects of type GLib::GApplicationCommandLine");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GApplicationCommandLine_init(mrb_state* mrb) {
  struct RClass* GApplicationCommandLine_class = mrb_define_class_under(mrb, GLib_module(mrb), "GApplicationCommandLine", mrb->object_class);
  MRB_SET_INSTANCE_TT(GApplicationCommandLine_class, MRB_TT_DATA);

#if BIND_GApplicationCommandLine_INITIALIZE
  mrb_define_method(mrb, GApplicationCommandLine_class, "initialize", mrb_GLib_GApplicationCommandLine_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GApplicationCommandLine_class, "disown", mrb_GLib_GApplicationCommandLine_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GApplicationCommandLine_class, "belongs_to_ruby?", mrb_GLib_GApplicationCommandLine_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
