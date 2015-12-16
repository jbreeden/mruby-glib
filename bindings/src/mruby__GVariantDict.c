/*
 * struct _GVariantDict
 * Defined in file gvariant.h @ line 404
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_GLib.h"

#if BIND_GVariantDict_TYPE

/*
 * Class Methods
 */

#if BIND_GVariantDict_INITIALIZE
mrb_value
mrb_GLib_GVariantDict_initialize(mrb_state* mrb, mrb_value self) {
  struct _GVariantDict* native_object = (struct _GVariantDict*)malloc(sizeof(struct _GVariantDict));
  mruby_gift_struct _GVariantDict_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_GVariantDict_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GVariantDict.disown only accepts objects of type GLib::GVariantDict");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_GVariantDict_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GVariantDict.belongs_to_ruby only accepts objects of type GLib::GVariantDict");
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

#if BIND_GVariantDict_x_FIELD_READER
/* get_x
 *
 * Return Type: gsize [16]
 */
mrb_value
mrb_GLib_GVariantDict_get_x(mrb_state* mrb, mrb_value self) {
  struct _GVariantDict * native_self = mruby_unbox_struct _GVariantDict(self);

  gsize [16] native_field = native_self->x;

  mrb_value ruby_field = TODO_mruby_box_gsize_[16](mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GVariantDict_x_FIELD_WRITER
/* set_x
 *
 * Parameters:
 * - value: gsize [16]
 */
mrb_value
mrb_GLib_GVariantDict_set_x(mrb_state* mrb, mrb_value self) {
  struct _GVariantDict * native_self = mruby_unbox_struct _GVariantDict(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_gsize_[16](ruby_field);

  gsize [16] native_field = TODO_mruby_unbox_gsize_[16](ruby_field);

  native_self->x = native_field;

  return ruby_field;
}
#endif


void mrb_GLib_GVariantDict_init(mrb_state* mrb) {
  RClass* GVariantDict_class = mrb_define_class_under(mrb, GLib_module(mrb), "GVariantDict", mrb->object_class);
  MRB_SET_INSTANCE_TT(GVariantDict_class, MRB_TT_DATA);

#if BIND_GVariantDict_INITIALIZE
  mrb_define_method(mrb, GVariantDict_class, "initialize", mrb_GLib_GVariantDict_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GVariantDict_class, "disown", mrb_GLib_GVariantDict_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GVariantDict_class, "belongs_to_ruby?", mrb_GLib_GVariantDict_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GVariantDict_x_FIELD_READER
  mrb_define_method(mrb, GVariantDict_class, "x", mrb_GLib_GVariantDict_get_x, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GVariantDict_x_FIELD_WRITER
  mrb_define_method(mrb, GVariantDict_class, "x=", mrb_GLib_GVariantDict_set_x, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
