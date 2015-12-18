/*
 * struct _GPtrArray
 * Defined in file garray.h @ line 39
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_GLib.h"

#if BIND_GPtrArray_TYPE

/*
 * Class Methods
 */

#if BIND_GPtrArray_INITIALIZE
mrb_value
mrb_GLib_GPtrArray_initialize(mrb_state* mrb, mrb_value self) {
  struct _GPtrArray* native_object = (struct _GPtrArray*)malloc(sizeof(struct _GPtrArray));
  mruby_gift_struct _GPtrArray_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_GPtrArray_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GPtrArray.disown only accepts objects of type GLib::GPtrArray");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_GPtrArray_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GPtrArray.belongs_to_ruby only accepts objects of type GLib::GPtrArray");
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

#if BIND_GPtrArray_pdata_FIELD_READER
/* get_pdata
 *
 * Return Type: gpointer *
 */
mrb_value
mrb_GLib_GPtrArray_get_pdata(mrb_state* mrb, mrb_value self) {
  struct _GPtrArray * native_self = mruby_unbox_struct _GPtrArray(self);

  gpointer * native_field = native_self->pdata;

  mrb_value ruby_field = TODO_mruby_box_gpointer_PTR(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GPtrArray_pdata_FIELD_WRITER
/* set_pdata
 *
 * Parameters:
 * - value: gpointer *
 */
mrb_value
mrb_GLib_GPtrArray_set_pdata(mrb_state* mrb, mrb_value self) {
  struct _GPtrArray * native_self = mruby_unbox_struct _GPtrArray(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_gpointer_PTR(ruby_field);

  gpointer * native_field = TODO_mruby_unbox_gpointer_PTR(ruby_field);

  native_self->pdata = native_field;

  return ruby_field;
}
#endif

#if BIND_GPtrArray_len_FIELD_READER
/* get_len
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GPtrArray_get_len(mrb_state* mrb, mrb_value self) {
  struct _GPtrArray * native_self = mruby_unbox_struct _GPtrArray(self);

  guint native_field = native_self->len;

  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GPtrArray_len_FIELD_WRITER
/* set_len
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GPtrArray_set_len(mrb_state* mrb, mrb_value self) {
  struct _GPtrArray * native_self = mruby_unbox_struct _GPtrArray(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->len = native_field;

  return ruby_field;
}
#endif


void mrb_GLib_GPtrArray_init(mrb_state* mrb) {
  struct RClass* GPtrArray_class = mrb_define_class_under(mrb, GLib_module(mrb), "GPtrArray", mrb->object_class);
  MRB_SET_INSTANCE_TT(GPtrArray_class, MRB_TT_DATA);

#if BIND_GPtrArray_INITIALIZE
  mrb_define_method(mrb, GPtrArray_class, "initialize", mrb_GLib_GPtrArray_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GPtrArray_class, "disown", mrb_GLib_GPtrArray_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GPtrArray_class, "belongs_to_ruby?", mrb_GLib_GPtrArray_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GPtrArray_pdata_FIELD_READER
  mrb_define_method(mrb, GPtrArray_class, "pdata", mrb_GLib_GPtrArray_get_pdata, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GPtrArray_pdata_FIELD_WRITER
  mrb_define_method(mrb, GPtrArray_class, "pdata=", mrb_GLib_GPtrArray_set_pdata, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GPtrArray_len_FIELD_READER
  mrb_define_method(mrb, GPtrArray_class, "len", mrb_GLib_GPtrArray_get_len, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GPtrArray_len_FIELD_WRITER
  mrb_define_method(mrb, GPtrArray_class, "len=", mrb_GLib_GPtrArray_set_len, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
