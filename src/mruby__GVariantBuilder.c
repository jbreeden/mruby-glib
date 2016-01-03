/*
 * struct _GVariantBuilder
 * Defined in file gvariant.h @ line 297
 */

#include "mruby_GLib.h"

#if BIND_GVariantBuilder_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GVariantBuilder::initialize */
/* sha: a3c707d3aff55659438be961ddf3defa7274ad969ba808f9fecbfc2094edf739 */
#if BIND_GVariantBuilder_INITIALIZE
mrb_value
mrb_GLib_GVariantBuilder_initialize(mrb_state* mrb, mrb_value self) {
  struct _GVariantBuilder* native_object = (struct _GVariantBuilder*)calloc(1, sizeof(struct _GVariantBuilder));
  mruby_giftwrap__GVariantBuilder_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GVariantBuilder::initialize */
/* sha: 119d2fd7c43442d3267fac2a254a4b07beed7fc5762a49aaf3285e4eeb0f9988 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GVariantBuilder::belongs_to_ruby */
/* sha: 5c92c8cca4c4a675cd9d7fd057c291abf0b310f5fbb651dce2947a9678c7f601 */
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
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: GVariantBuilder::x_reader */
/* sha: b469035036298a2362eb2c48792cdacdc949918cd53dee9b05da8b87d53b2577 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GVariantBuilder::x_writer */
/* sha: 5ec8c7e74404d7e45fe56d78fee1ef94f59d94e4144f2025edb01feb2f471197 */
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
/* MRUBY_BINDING_END */


void mrb_GLib_GVariantBuilder_init(mrb_state* mrb) {
/* MRUBY_BINDING: GVariantBuilder::class_definition */
/* sha: f681b59b72ac730ef95534fed437d114bfabe8630008759a724fdcee35014ebf */
  struct RClass* GVariantBuilder_class = mrb_define_class_under(mrb, GLib_module(mrb), "GVariantBuilder", mrb->object_class);
  MRB_SET_INSTANCE_TT(GVariantBuilder_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GVariantBuilder::class_method_definitions */
/* sha: 73319b891272b89187cf51b1652a2f556a4a1eb239c62cd91b9101c39e65627f */
#if BIND_GVariantBuilder_INITIALIZE
  mrb_define_method(mrb, GVariantBuilder_class, "initialize", mrb_GLib_GVariantBuilder_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GVariantBuilder_class, "disown", mrb_GLib_GVariantBuilder_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GVariantBuilder_class, "belongs_to_ruby?", mrb_GLib_GVariantBuilder_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GVariantBuilder::attr_definitions */
/* sha: 2c16069e359a137dfe9284025182c3c31d8ebd135f4578cfcb46ad80ac11f49c */
  /*
   * Fields
   */
#if BIND_GVariantBuilder_x_FIELD_READER
  mrb_define_method(mrb, GVariantBuilder_class, "x", mrb_GLib_GVariantBuilder_get_x, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GVariantBuilder_x_FIELD_WRITER
  mrb_define_method(mrb, GVariantBuilder_class, "x=", mrb_GLib_GVariantBuilder_set_x, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GVariantBuilder::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
