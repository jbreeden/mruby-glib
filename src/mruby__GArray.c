/*
 * struct _GArray
 * Defined in file garray.h @ line 37
 */

#include "mruby_GLib.h"

#if BIND_GArray_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GArray::initialize */
/* sha: 891c10e7cdd9894791cabe505182743b5776da07b521bd8e2ded1fc35f40bbad */
#if BIND_GArray_INITIALIZE
mrb_value
mrb_GLib_GArray_initialize(mrb_state* mrb, mrb_value self) {
  struct _GArray* native_object = (struct _GArray*)calloc(1, sizeof(struct _GArray));
  mruby_giftwrap__GArray_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GArray::initialize */
/* sha: 57d3b2d76e22425703fb52940eb80a55ac38d40f827e2d4e32ead1d96d8edfdc */
mrb_value
mrb_GLib_GArray_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GArray.disown only accepts objects of type GLib::GArray");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GArray::belongs_to_ruby */
/* sha: 152978887f099ed954a74100b01506a51176725f022f61f96c60887026babd91 */
mrb_value
mrb_GLib_GArray_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GArray.belongs_to_ruby only accepts objects of type GLib::GArray");
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

/* MRUBY_BINDING: GArray::data_reader */
/* sha: 5e281fd102ba02c89e10a3b3effa6a610de85bf28442678cd881018fdda39ff1 */
#if BIND_GArray_data_FIELD_READER
/* get_data
 *
 * Return Type: gchar *
 */
mrb_value
mrb_GLib_GArray_get_data(mrb_state* mrb, mrb_value self) {
  struct _GArray * native_self = mruby_unbox__GArray(self);

  gchar * native_data = native_self->data;

  mrb_value data = TODO_mruby_box_gchar_PTR(mrb, native_data);

  return data;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GArray::data_writer */
/* sha: 71e742f366967cbf37040b9274c1782e2a8be946024a0ea11a2391712c5deb11 */
#if BIND_GArray_data_FIELD_WRITER
/* set_data
 *
 * Parameters:
 * - value: gchar *
 */
mrb_value
mrb_GLib_GArray_set_data(mrb_state* mrb, mrb_value self) {
  struct _GArray * native_self = mruby_unbox__GArray(self);
  mrb_value data;

  mrb_get_args(mrb, "o", &data);

  /* type checking */
  TODO_type_check_gchar_PTR(data);

  gchar * native_data = TODO_mruby_unbox_gchar_PTR(data);

  native_self->data = native_data;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GArray::len_reader */
/* sha: cc7ba77dfd0e2ac712b5172d8046bc1064ed8022aa5556209e005c4383ad6d2d */
#if BIND_GArray_len_FIELD_READER
/* get_len
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GArray_get_len(mrb_state* mrb, mrb_value self) {
  struct _GArray * native_self = mruby_unbox__GArray(self);

  guint native_len = native_self->len;

  mrb_value len = mrb_fixnum_value(native_len);

  return len;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GArray::len_writer */
/* sha: ee71936b92433596e74c7f30739bdea8a4e3fd3f4b278f780bb909ec78fd7103 */
#if BIND_GArray_len_FIELD_WRITER
/* set_len
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GArray_set_len(mrb_state* mrb, mrb_value self) {
  struct _GArray * native_self = mruby_unbox__GArray(self);
  mrb_int native_len;

  mrb_get_args(mrb, "i", &native_len);

  native_self->len = native_len;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_GLib_GArray_init(mrb_state* mrb) {
  struct RClass* GArray_class = mrb_define_class_under(mrb, GLib_module(mrb), "GArray", mrb->object_class);
  MRB_SET_INSTANCE_TT(GArray_class, MRB_TT_DATA);

#if BIND_GArray_INITIALIZE
  mrb_define_method(mrb, GArray_class, "initialize", mrb_GLib_GArray_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GArray_class, "disown", mrb_GLib_GArray_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GArray_class, "belongs_to_ruby?", mrb_GLib_GArray_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GArray_data_FIELD_READER
  mrb_define_method(mrb, GArray_class, "data", mrb_GLib_GArray_get_data, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GArray_data_FIELD_WRITER
  mrb_define_method(mrb, GArray_class, "data=", mrb_GLib_GArray_set_data, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GArray_len_FIELD_READER
  mrb_define_method(mrb, GArray_class, "len", mrb_GLib_GArray_get_len, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GArray_len_FIELD_WRITER
  mrb_define_method(mrb, GArray_class, "len=", mrb_GLib_GArray_set_len, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
