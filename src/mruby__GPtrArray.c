/*
 * struct _GPtrArray
 * Defined in file garray.h @ line 39
 */

#include "mruby_GLib.h"

#if BIND_GPtrArray_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GPtrArray::initialize */
/* sha: c46b90508486f360f610d7e2cf6af5b5ba2d7fa75cd3a99d8b105d3e0fb717b9 */
#if BIND_GPtrArray_INITIALIZE
mrb_value
mrb_GLib_GPtrArray_initialize(mrb_state* mrb, mrb_value self) {
  struct _GPtrArray* native_object = (struct _GPtrArray*)calloc(1, sizeof(struct _GPtrArray));
  mruby_giftwrap__GPtrArray_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GPtrArray::initialize */
/* sha: 55586f47c43c110a2865f6eaecd39939758cb4abd436c3e33a3a6f901155c9ce */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GPtrArray::belongs_to_ruby */
/* sha: 618b0fd11a722a86c0bfa99c908cffbbb5009d79e5e2b993344f19671885b0d1 */
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
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: GPtrArray::pdata_reader */
/* sha: 1da97f7da66ee332379dd9752927fe7d4350aebf71fe62f5a25397c8325dbf7d */
#if BIND_GPtrArray_pdata_FIELD_READER
/* get_pdata
 *
 * Return Type: gpointer *
 */
mrb_value
mrb_GLib_GPtrArray_get_pdata(mrb_state* mrb, mrb_value self) {
  struct _GPtrArray * native_self = mruby_unbox__GPtrArray(self);

  gpointer * native_pdata = native_self->pdata;

  mrb_value pdata = TODO_mruby_box_gpointer_PTR(mrb, native_pdata);

  return pdata;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GPtrArray::pdata_writer */
/* sha: 4b7649f2d26b3aee8a94ba149500303500bc208550ee036630363cbc67b3738d */
#if BIND_GPtrArray_pdata_FIELD_WRITER
/* set_pdata
 *
 * Parameters:
 * - value: gpointer *
 */
mrb_value
mrb_GLib_GPtrArray_set_pdata(mrb_state* mrb, mrb_value self) {
  struct _GPtrArray * native_self = mruby_unbox__GPtrArray(self);
  mrb_value pdata;

  mrb_get_args(mrb, "o", &pdata);

  /* type checking */
  TODO_type_check_gpointer_PTR(pdata);

  gpointer * native_pdata = TODO_mruby_unbox_gpointer_PTR(pdata);

  native_self->pdata = native_pdata;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GPtrArray::len_reader */
/* sha: 0ca3304b43ca0142deb3ce4e6293959caebfc6c4fac1f13f93ce18202f66c8cf */
#if BIND_GPtrArray_len_FIELD_READER
/* get_len
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GPtrArray_get_len(mrb_state* mrb, mrb_value self) {
  struct _GPtrArray * native_self = mruby_unbox__GPtrArray(self);

  guint native_len = native_self->len;

  mrb_value len = mrb_fixnum_value(native_len);

  return len;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GPtrArray::len_writer */
/* sha: 866c534bf734db744bb9509c6d475d415d5a733187a72022e879ac97fe3f6245 */
#if BIND_GPtrArray_len_FIELD_WRITER
/* set_len
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GPtrArray_set_len(mrb_state* mrb, mrb_value self) {
  struct _GPtrArray * native_self = mruby_unbox__GPtrArray(self);
  mrb_int native_len;

  mrb_get_args(mrb, "i", &native_len);

  native_self->len = native_len;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_GLib_GPtrArray_init(mrb_state* mrb) {
/* MRUBY_BINDING: GPtrArray::class_definition */
/* sha: b6cabc3c28a4abc8942e560635a3a3246e1c69696987c32918ec6d3f14205bd2 */
  struct RClass* GPtrArray_class = mrb_define_class_under(mrb, GLib_module(mrb), "GPtrArray", mrb->object_class);
  MRB_SET_INSTANCE_TT(GPtrArray_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GPtrArray::class_method_definitions */
/* sha: def0cb15301d856718a9838c593566947fe4285362a09ab116a380ebcabff447 */
#if BIND_GPtrArray_INITIALIZE
  mrb_define_method(mrb, GPtrArray_class, "initialize", mrb_GLib_GPtrArray_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GPtrArray_class, "disown", mrb_GLib_GPtrArray_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GPtrArray_class, "belongs_to_ruby?", mrb_GLib_GPtrArray_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GPtrArray::attr_definitions */
/* sha: 5e1535fde9c2d7a79dd45c22e7d0b2b12ae6cedb0281e4fb9798ed24bc3fb97c */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GPtrArray::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
