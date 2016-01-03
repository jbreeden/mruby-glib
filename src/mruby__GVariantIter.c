/*
 * struct _GVariantIter
 * Defined in file gvariant.h @ line 268
 */

#include "mruby_GLib.h"

#if BIND_GVariantIter_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GVariantIter::initialize */
/* sha: 82a81e628c2c6a92fe503d29708f64406f309e5b351a19f99db5e976a4166e86 */
#if BIND_GVariantIter_INITIALIZE
mrb_value
mrb_GLib_GVariantIter_initialize(mrb_state* mrb, mrb_value self) {
  struct _GVariantIter* native_object = (struct _GVariantIter*)calloc(1, sizeof(struct _GVariantIter));
  mruby_giftwrap__GVariantIter_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GVariantIter::initialize */
/* sha: 719f2ea8a034ca2adfd3bbb22daa316a3fa102feffc4fd328f1efcf8c6f16df0 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GVariantIter::belongs_to_ruby */
/* sha: 08d2a3f22d9c1995f8374e091143cd72b58ee8782f1b76602585c075584bb298 */
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
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: GVariantIter::x_reader */
/* sha: f6d537e354f44a4ad1dea8198ecc787986a5fa8580c369b4c6b66b650cb52d90 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GVariantIter::x_writer */
/* sha: 3d31bdaaf8e1308f1c1bcbb91f207e5ee8ff20dbe36ac6a92e7b553937c10719 */
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
/* MRUBY_BINDING_END */


void mrb_GLib_GVariantIter_init(mrb_state* mrb) {
/* MRUBY_BINDING: GVariantIter::class_definition */
/* sha: 8e98cbf45b6393397022ba254d6dc6c2299278212a033cca505b606cf55e1d82 */
  struct RClass* GVariantIter_class = mrb_define_class_under(mrb, GLib_module(mrb), "GVariantIter", mrb->object_class);
  MRB_SET_INSTANCE_TT(GVariantIter_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GVariantIter::class_method_definitions */
/* sha: fda59558ce2b1fed2f32741900cbfc7a0af80060ff29f691b6e978fbe3e5094e */
#if BIND_GVariantIter_INITIALIZE
  mrb_define_method(mrb, GVariantIter_class, "initialize", mrb_GLib_GVariantIter_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GVariantIter_class, "disown", mrb_GLib_GVariantIter_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GVariantIter_class, "belongs_to_ruby?", mrb_GLib_GVariantIter_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GVariantIter::attr_definitions */
/* sha: 8a37b0bc95ec888539ae1423d20df50ea73952f11f40ba62d81543b072ac58e2 */
  /*
   * Fields
   */
#if BIND_GVariantIter_x_FIELD_READER
  mrb_define_method(mrb, GVariantIter_class, "x", mrb_GLib_GVariantIter_get_x, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GVariantIter_x_FIELD_WRITER
  mrb_define_method(mrb, GVariantIter_class, "x=", mrb_GLib_GVariantIter_set_x, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GVariantIter::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
