/*
 * GVariantSerialised
 * Defined in file gvariant-serialiser.h @ line 26
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_GLib.h"

#if BIND_GVariantSerialised_TYPE

/*
 * Class Methods
 */

#if BIND_GVariantSerialised_INITIALIZE
mrb_value
mrb_GLib_GVariantSerialised_initialize(mrb_state* mrb, mrb_value self) {
  GVariantSerialised* native_object = (GVariantSerialised*)malloc(sizeof(GVariantSerialised));
  mruby_gift_GVariantSerialised_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_GVariantSerialised_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GVariantSerialised.disown only accepts objects of type GLib::GVariantSerialised");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_GVariantSerialised_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GVariantSerialised.belongs_to_ruby only accepts objects of type GLib::GVariantSerialised");
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

#if BIND_GVariantSerialised_type_info_FIELD_READER
/* get_type_info
 *
 * Return Type: GVariantTypeInfo *
 */
mrb_value
mrb_GLib_GVariantSerialised_get_type_info(mrb_state* mrb, mrb_value self) {
  GVariantSerialised * native_self = mruby_unbox_GVariantSerialised(self);

  GVariantTypeInfo * native_field = native_self->type_info;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box__GVariantTypeInfo(mrb, native_field));

  return ruby_field;
}
#endif

#if BIND_GVariantSerialised_type_info_FIELD_WRITER
/* set_type_info
 *
 * Parameters:
 * - value: GVariantTypeInfo *
 */
mrb_value
mrb_GLib_GVariantSerialised_set_type_info(mrb_state* mrb, mrb_value self) {
  GVariantSerialised * native_self = mruby_unbox_GVariantSerialised(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, GVariantTypeInfo_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GVariantTypeInfo expected");
    return mrb_nil_value();
  }

  GVariantTypeInfo * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox__GVariantTypeInfo(ruby_field));

  native_self->type_info = native_field;

  return ruby_field;
}
#endif

#if BIND_GVariantSerialised_data_FIELD_READER
/* get_data
 *
 * Return Type: guchar *
 */
mrb_value
mrb_GLib_GVariantSerialised_get_data(mrb_state* mrb, mrb_value self) {
  GVariantSerialised * native_self = mruby_unbox_GVariantSerialised(self);

  guchar * native_field = native_self->data;

  mrb_value ruby_field = TODO_mruby_box_guchar_PTR(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GVariantSerialised_data_FIELD_WRITER
/* set_data
 *
 * Parameters:
 * - value: guchar *
 */
mrb_value
mrb_GLib_GVariantSerialised_set_data(mrb_state* mrb, mrb_value self) {
  GVariantSerialised * native_self = mruby_unbox_GVariantSerialised(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_guchar_PTR(ruby_field);

  guchar * native_field = TODO_mruby_unbox_guchar_PTR(ruby_field);

  native_self->data = native_field;

  return ruby_field;
}
#endif

#if BIND_GVariantSerialised_size_FIELD_READER
/* get_size
 *
 * Return Type: gsize
 */
mrb_value
mrb_GLib_GVariantSerialised_get_size(mrb_state* mrb, mrb_value self) {
  GVariantSerialised * native_self = mruby_unbox_GVariantSerialised(self);

  gsize native_field = native_self->size;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GVariantSerialised_size_FIELD_WRITER
/* set_size
 *
 * Parameters:
 * - value: gsize
 */
mrb_value
mrb_GLib_GVariantSerialised_set_size(mrb_state* mrb, mrb_value self) {
  GVariantSerialised * native_self = mruby_unbox_GVariantSerialised(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned long native_field = mrb_fixnum(ruby_field);

  native_self->size = native_field;

  return ruby_field;
}
#endif


void mrb_GLib_GVariantSerialised_init(mrb_state* mrb) {
  struct RClass* GVariantSerialised_class = mrb_define_class_under(mrb, GLib_module(mrb), "GVariantSerialised", mrb->object_class);
  MRB_SET_INSTANCE_TT(GVariantSerialised_class, MRB_TT_DATA);

#if BIND_GVariantSerialised_INITIALIZE
  mrb_define_method(mrb, GVariantSerialised_class, "initialize", mrb_GLib_GVariantSerialised_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GVariantSerialised_class, "disown", mrb_GLib_GVariantSerialised_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GVariantSerialised_class, "belongs_to_ruby?", mrb_GLib_GVariantSerialised_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GVariantSerialised_type_info_FIELD_READER
  mrb_define_method(mrb, GVariantSerialised_class, "type_info", mrb_GLib_GVariantSerialised_get_type_info, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GVariantSerialised_type_info_FIELD_WRITER
  mrb_define_method(mrb, GVariantSerialised_class, "type_info=", mrb_GLib_GVariantSerialised_set_type_info, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GVariantSerialised_data_FIELD_READER
  mrb_define_method(mrb, GVariantSerialised_class, "data", mrb_GLib_GVariantSerialised_get_data, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GVariantSerialised_data_FIELD_WRITER
  mrb_define_method(mrb, GVariantSerialised_class, "data=", mrb_GLib_GVariantSerialised_set_data, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GVariantSerialised_size_FIELD_READER
  mrb_define_method(mrb, GVariantSerialised_class, "size", mrb_GLib_GVariantSerialised_get_size, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GVariantSerialised_size_FIELD_WRITER
  mrb_define_method(mrb, GVariantSerialised_class, "size=", mrb_GLib_GVariantSerialised_set_size, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
