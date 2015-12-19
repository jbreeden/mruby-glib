/*
 * struct _GVariantIter
 * Defined in file gvariant.h @ line 268
 */

#include "mruby_GLib.h"

#if BIND_GVariantIter_TYPE

/*
 * Class Methods
 */

#if BIND_GVariantIter_INITIALIZE
mrb_value
mrb_GLib_GVariantIter_initialize(mrb_state* mrb, mrb_value self) {
  struct _GVariantIter* native_object = (struct _GVariantIter*)calloc(1, sizeof(struct _GVariantIter));
  mruby_giftwrap__GVariantIter_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_GVariantIter_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GVariantIter.disown only accepts objects of type GLib::GVariantIter");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_GVariantIter_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GVariantIter.belongs_to_ruby only accepts objects of type GLib::GVariantIter");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}

/*
 * Fields
 */

#if BIND_GVariantIter_x_FIELD_READER
/* get_x
 *
 * Return Type: gsize [16]
 */
mrb_value
mrb_GLib_GVariantIter_get_x(mrb_state* mrb, mrb_value self) {
  struct _GVariantIter * native_self = mruby_unbox__GVariantIter(self);

  gsize [16] native_x = native_self->x;

  mrb_value x = TODO_mruby_box_gsize_[16](mrb, native_x);

  return x;
}
#endif

#if BIND_GVariantIter_x_FIELD_WRITER
/* set_x
 *
 * Parameters:
 * - value: gsize [16]
 */
mrb_value
mrb_GLib_GVariantIter_set_x(mrb_state* mrb, mrb_value self) {
  struct _GVariantIter * native_self = mruby_unbox__GVariantIter(self);
  mrb_value x;

  mrb_get_args(mrb, "o", &x);

  /* type checking */
  TODO_type_check_gsize_[16](x);

  gsize [16] native_x = TODO_mruby_unbox_gsize_[16](x);

  native_self->x = native_x;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif


void mrb_GLib_GVariantIter_init(mrb_state* mrb) {
  struct RClass* GVariantIter_class = mrb_define_class_under(mrb, GLib_module(mrb), "GVariantIter", mrb->object_class);
  MRB_SET_INSTANCE_TT(GVariantIter_class, MRB_TT_DATA);

#if BIND_GVariantIter_INITIALIZE
  mrb_define_method(mrb, GVariantIter_class, "initialize", mrb_GLib_GVariantIter_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GVariantIter_class, "disown", mrb_GLib_GVariantIter_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GVariantIter_class, "belongs_to_ruby?", mrb_GLib_GVariantIter_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GVariantIter_x_FIELD_READER
  mrb_define_method(mrb, GVariantIter_class, "x", mrb_GLib_GVariantIter_get_x, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GVariantIter_x_FIELD_WRITER
  mrb_define_method(mrb, GVariantIter_class, "x=", mrb_GLib_GVariantIter_set_x, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
