/*
 * struct _GVariantBuilder
 * Defined in file gvariant.h @ line 297
 */

#include "mruby_GLib.h"

#if BIND_GVariantBuilder_TYPE

/*
 * Class Methods
 */

#if BIND_GVariantBuilder_INITIALIZE
mrb_value
mrb_GLib_GVariantBuilder_initialize(mrb_state* mrb, mrb_value self) {
  struct _GVariantBuilder* native_object = (struct _GVariantBuilder*)calloc(1, sizeof(struct _GVariantBuilder));
  mruby_gift_struct _GVariantBuilder_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_GVariantBuilder_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GVariantBuilder.disown only accepts objects of type GLib::GVariantBuilder");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_GVariantBuilder_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GVariantBuilder.belongs_to_ruby only accepts objects of type GLib::GVariantBuilder");
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

#if BIND_GVariantBuilder_x_FIELD_READER
/* get_x
 *
 * Return Type: gsize [16]
 */
mrb_value
mrb_GLib_GVariantBuilder_get_x(mrb_state* mrb, mrb_value self) {
  struct _GVariantBuilder * native_self = mruby_unbox__GVariantBuilder(self);

  gsize [16] native_x = native_self->x;

  mrb_value x = TODO_mruby_box_gsize_[16](mrb, native_x);

  return x;
}
#endif

#if BIND_GVariantBuilder_x_FIELD_WRITER
/* set_x
 *
 * Parameters:
 * - value: gsize [16]
 */
mrb_value
mrb_GLib_GVariantBuilder_set_x(mrb_state* mrb, mrb_value self) {
  struct _GVariantBuilder * native_self = mruby_unbox__GVariantBuilder(self);
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


void mrb_GLib_GVariantBuilder_init(mrb_state* mrb) {
  struct RClass* GVariantBuilder_class = mrb_define_class_under(mrb, GLib_module(mrb), "GVariantBuilder", mrb->object_class);
  MRB_SET_INSTANCE_TT(GVariantBuilder_class, MRB_TT_DATA);

#if BIND_GVariantBuilder_INITIALIZE
  mrb_define_method(mrb, GVariantBuilder_class, "initialize", mrb_GLib_GVariantBuilder_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GVariantBuilder_class, "disown", mrb_GLib_GVariantBuilder_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GVariantBuilder_class, "belongs_to_ruby?", mrb_GLib_GVariantBuilder_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GVariantBuilder_x_FIELD_READER
  mrb_define_method(mrb, GVariantBuilder_class, "x", mrb_GLib_GVariantBuilder_get_x, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GVariantBuilder_x_FIELD_WRITER
  mrb_define_method(mrb, GVariantBuilder_class, "x=", mrb_GLib_GVariantBuilder_set_x, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
