/*
 * struct _GMemVTable
 * Defined in file gmem.h @ line 51
 */

#include "mruby_GLib.h"

#if BIND_GMemVTable_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GMemVTable::initialize */
/* sha: d7fa91b62ff4f12a8ab1e9cc9fd53620976cb36cc6a29c9ae1260a5d19f7429a */
#if BIND_GMemVTable_INITIALIZE
mrb_value
mrb_GLib_GMemVTable_initialize(mrb_state* mrb, mrb_value self) {
  struct _GMemVTable* native_object = (struct _GMemVTable*)calloc(1, sizeof(struct _GMemVTable));
  mruby_giftwrap__GMemVTable_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMemVTable::initialize */
/* sha: 3e384d9f9a90e930a0173e772d1060ca1244c00aa1a5676d32d5f3a87567d5ed */
mrb_value
mrb_GLib_GMemVTable_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GMemVTable.disown only accepts objects of type GLib::GMemVTable");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMemVTable::belongs_to_ruby */
/* sha: 06bf0d2ef3ddf20c4d7c61277f8712befc86b9db76304f6008f2a039ce1f7482 */
mrb_value
mrb_GLib_GMemVTable_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GMemVTable.belongs_to_ruby only accepts objects of type GLib::GMemVTable");
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

/* MRUBY_BINDING: GMemVTable::malloc_reader */
/* sha: a7253e2e2b713147b4644047a12a88038947a66312125eb2f0303f9d428eeeb3 */
#if BIND_GMemVTable_malloc_FIELD_READER
/* get_malloc
 *
 * Return Type: gpointer (*)(gsize)
 */
mrb_value
mrb_GLib_GMemVTable_get_malloc(mrb_state* mrb, mrb_value self) {
  struct _GMemVTable * native_self = mruby_unbox__GMemVTable(self);

  gpointer (*)(gsize) native_malloc = native_self->malloc;

  mrb_value malloc = TODO_mruby_box_gpointer_LPAREN_PTR_RPAREN_LPAREN_gsize_RPAREN(mrb, native_malloc);

  return malloc;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMemVTable::malloc_writer */
/* sha: 273ac188684451e83f9954b74570567c5c87dbdb681c3efa2dbce34f1451c61a */
#if BIND_GMemVTable_malloc_FIELD_WRITER
/* set_malloc
 *
 * Parameters:
 * - value: gpointer (*)(gsize)
 */
mrb_value
mrb_GLib_GMemVTable_set_malloc(mrb_state* mrb, mrb_value self) {
  struct _GMemVTable * native_self = mruby_unbox__GMemVTable(self);
  mrb_value malloc;

  mrb_get_args(mrb, "o", &malloc);

  /* type checking */
  TODO_type_check_gpointer_LPAREN_PTR_RPAREN_LPAREN_gsize_RPAREN(malloc);

  gpointer (*native_malloc)(gsize) = TODO_mruby_unbox_gpointer_LPAREN_PTR_RPAREN_LPAREN_gsize_RPAREN(malloc);

  native_self->malloc = native_malloc;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMemVTable::realloc_reader */
/* sha: 09c7ac2aff766c2c69335183e796cb32fc0e83fdd9f04d174a7c20ef31949c4b */
#if BIND_GMemVTable_realloc_FIELD_READER
/* get_realloc
 *
 * Return Type: gpointer (*)(gpointer, gsize)
 */
mrb_value
mrb_GLib_GMemVTable_get_realloc(mrb_state* mrb, mrb_value self) {
  struct _GMemVTable * native_self = mruby_unbox__GMemVTable(self);

  gpointer (*)(gpointer, gsize) native_realloc = native_self->realloc;

  mrb_value realloc = TODO_mruby_box_gpointer_LPAREN_PTR_RPAREN_LPAREN_gpointerCOMMA_gsize_RPAREN(mrb, native_realloc);

  return realloc;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMemVTable::realloc_writer */
/* sha: 7c4df3bf96108a1aa28aff85470fb939e9f4c4e9041f8a923bd21902af2ad082 */
#if BIND_GMemVTable_realloc_FIELD_WRITER
/* set_realloc
 *
 * Parameters:
 * - value: gpointer (*)(gpointer, gsize)
 */
mrb_value
mrb_GLib_GMemVTable_set_realloc(mrb_state* mrb, mrb_value self) {
  struct _GMemVTable * native_self = mruby_unbox__GMemVTable(self);
  mrb_value realloc;

  mrb_get_args(mrb, "o", &realloc);

  /* type checking */
  TODO_type_check_gpointer_LPAREN_PTR_RPAREN_LPAREN_gpointerCOMMA_gsize_RPAREN(realloc);

  gpointer (*native_realloc)(gpointer, gsize) = TODO_mruby_unbox_gpointer_LPAREN_PTR_RPAREN_LPAREN_gpointerCOMMA_gsize_RPAREN(realloc);

  native_self->realloc = native_realloc;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMemVTable::free_reader */
/* sha: 3746f7dfe01d2d4583cee3a8b92ae250b32927356bb96b921c83859851ae1833 */
#if BIND_GMemVTable_free_FIELD_READER
/* get_free
 *
 * Return Type: void (*)(gpointer)
 */
mrb_value
mrb_GLib_GMemVTable_get_free(mrb_state* mrb, mrb_value self) {
  struct _GMemVTable * native_self = mruby_unbox__GMemVTable(self);

  void (*)(gpointer) native_free = native_self->free;

  mrb_value free = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_gpointer_RPAREN(mrb, native_free);

  return free;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMemVTable::free_writer */
/* sha: 496f29a683ac2afde70919e70acecc7c44d08241d2afa73318c4e5c7e8243ab7 */
#if BIND_GMemVTable_free_FIELD_WRITER
/* set_free
 *
 * Parameters:
 * - value: void (*)(gpointer)
 */
mrb_value
mrb_GLib_GMemVTable_set_free(mrb_state* mrb, mrb_value self) {
  struct _GMemVTable * native_self = mruby_unbox__GMemVTable(self);
  mrb_value free;

  mrb_get_args(mrb, "o", &free);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_gpointer_RPAREN(free);

  void (*native_free)(gpointer) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_gpointer_RPAREN(free);

  native_self->free = native_free;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMemVTable::calloc_reader */
/* sha: aae35ec552807dd5cfe9570664ec600db07384ab3380e7fc55f1c1d012ac6db4 */
#if BIND_GMemVTable_calloc_FIELD_READER
/* get_calloc
 *
 * Return Type: gpointer (*)(gsize, gsize)
 */
mrb_value
mrb_GLib_GMemVTable_get_calloc(mrb_state* mrb, mrb_value self) {
  struct _GMemVTable * native_self = mruby_unbox__GMemVTable(self);

  gpointer (*)(gsize, gsize) native_calloc = native_self->calloc;

  mrb_value calloc = TODO_mruby_box_gpointer_LPAREN_PTR_RPAREN_LPAREN_gsizeCOMMA_gsize_RPAREN(mrb, native_calloc);

  return calloc;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMemVTable::calloc_writer */
/* sha: ffc2a6dd4325424da7281b2b18bb168548dac27aaa5d0b2ef2b6c20440aa9d87 */
#if BIND_GMemVTable_calloc_FIELD_WRITER
/* set_calloc
 *
 * Parameters:
 * - value: gpointer (*)(gsize, gsize)
 */
mrb_value
mrb_GLib_GMemVTable_set_calloc(mrb_state* mrb, mrb_value self) {
  struct _GMemVTable * native_self = mruby_unbox__GMemVTable(self);
  mrb_value calloc;

  mrb_get_args(mrb, "o", &calloc);

  /* type checking */
  TODO_type_check_gpointer_LPAREN_PTR_RPAREN_LPAREN_gsizeCOMMA_gsize_RPAREN(calloc);

  gpointer (*native_calloc)(gsize, gsize) = TODO_mruby_unbox_gpointer_LPAREN_PTR_RPAREN_LPAREN_gsizeCOMMA_gsize_RPAREN(calloc);

  native_self->calloc = native_calloc;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMemVTable::try_malloc_reader */
/* sha: 1d431ed264a5227217fdaf50f8eca708532522e6d052b426b32684263802bfc1 */
#if BIND_GMemVTable_try_malloc_FIELD_READER
/* get_try_malloc
 *
 * Return Type: gpointer (*)(gsize)
 */
mrb_value
mrb_GLib_GMemVTable_get_try_malloc(mrb_state* mrb, mrb_value self) {
  struct _GMemVTable * native_self = mruby_unbox__GMemVTable(self);

  gpointer (*)(gsize) native_try_malloc = native_self->try_malloc;

  mrb_value try_malloc = TODO_mruby_box_gpointer_LPAREN_PTR_RPAREN_LPAREN_gsize_RPAREN(mrb, native_try_malloc);

  return try_malloc;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMemVTable::try_malloc_writer */
/* sha: a28e4a383525b7faa8ac7431b058151588983702bc986a574ce0fce078bce8ef */
#if BIND_GMemVTable_try_malloc_FIELD_WRITER
/* set_try_malloc
 *
 * Parameters:
 * - value: gpointer (*)(gsize)
 */
mrb_value
mrb_GLib_GMemVTable_set_try_malloc(mrb_state* mrb, mrb_value self) {
  struct _GMemVTable * native_self = mruby_unbox__GMemVTable(self);
  mrb_value try_malloc;

  mrb_get_args(mrb, "o", &try_malloc);

  /* type checking */
  TODO_type_check_gpointer_LPAREN_PTR_RPAREN_LPAREN_gsize_RPAREN(try_malloc);

  gpointer (*native_try_malloc)(gsize) = TODO_mruby_unbox_gpointer_LPAREN_PTR_RPAREN_LPAREN_gsize_RPAREN(try_malloc);

  native_self->try_malloc = native_try_malloc;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMemVTable::try_realloc_reader */
/* sha: 6243b4ade2e14a5efb17459d8621379ec16df41cf514ef2363f2a9ab63592aea */
#if BIND_GMemVTable_try_realloc_FIELD_READER
/* get_try_realloc
 *
 * Return Type: gpointer (*)(gpointer, gsize)
 */
mrb_value
mrb_GLib_GMemVTable_get_try_realloc(mrb_state* mrb, mrb_value self) {
  struct _GMemVTable * native_self = mruby_unbox__GMemVTable(self);

  gpointer (*)(gpointer, gsize) native_try_realloc = native_self->try_realloc;

  mrb_value try_realloc = TODO_mruby_box_gpointer_LPAREN_PTR_RPAREN_LPAREN_gpointerCOMMA_gsize_RPAREN(mrb, native_try_realloc);

  return try_realloc;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMemVTable::try_realloc_writer */
/* sha: 2b2c217f7e80fcabdf53c45a7c0819e03a3d24c01374ac93ecb84a31c08c2795 */
#if BIND_GMemVTable_try_realloc_FIELD_WRITER
/* set_try_realloc
 *
 * Parameters:
 * - value: gpointer (*)(gpointer, gsize)
 */
mrb_value
mrb_GLib_GMemVTable_set_try_realloc(mrb_state* mrb, mrb_value self) {
  struct _GMemVTable * native_self = mruby_unbox__GMemVTable(self);
  mrb_value try_realloc;

  mrb_get_args(mrb, "o", &try_realloc);

  /* type checking */
  TODO_type_check_gpointer_LPAREN_PTR_RPAREN_LPAREN_gpointerCOMMA_gsize_RPAREN(try_realloc);

  gpointer (*native_try_realloc)(gpointer, gsize) = TODO_mruby_unbox_gpointer_LPAREN_PTR_RPAREN_LPAREN_gpointerCOMMA_gsize_RPAREN(try_realloc);

  native_self->try_realloc = native_try_realloc;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_GLib_GMemVTable_init(mrb_state* mrb) {
  struct RClass* GMemVTable_class = mrb_define_class_under(mrb, GLib_module(mrb), "GMemVTable", mrb->object_class);
  MRB_SET_INSTANCE_TT(GMemVTable_class, MRB_TT_DATA);

#if BIND_GMemVTable_INITIALIZE
  mrb_define_method(mrb, GMemVTable_class, "initialize", mrb_GLib_GMemVTable_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GMemVTable_class, "disown", mrb_GLib_GMemVTable_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GMemVTable_class, "belongs_to_ruby?", mrb_GLib_GMemVTable_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GMemVTable_malloc_FIELD_READER
  mrb_define_method(mrb, GMemVTable_class, "malloc", mrb_GLib_GMemVTable_get_malloc, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GMemVTable_malloc_FIELD_WRITER
  mrb_define_method(mrb, GMemVTable_class, "malloc=", mrb_GLib_GMemVTable_set_malloc, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GMemVTable_realloc_FIELD_READER
  mrb_define_method(mrb, GMemVTable_class, "realloc", mrb_GLib_GMemVTable_get_realloc, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GMemVTable_realloc_FIELD_WRITER
  mrb_define_method(mrb, GMemVTable_class, "realloc=", mrb_GLib_GMemVTable_set_realloc, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GMemVTable_free_FIELD_READER
  mrb_define_method(mrb, GMemVTable_class, "free", mrb_GLib_GMemVTable_get_free, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GMemVTable_free_FIELD_WRITER
  mrb_define_method(mrb, GMemVTable_class, "free=", mrb_GLib_GMemVTable_set_free, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GMemVTable_calloc_FIELD_READER
  mrb_define_method(mrb, GMemVTable_class, "calloc", mrb_GLib_GMemVTable_get_calloc, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GMemVTable_calloc_FIELD_WRITER
  mrb_define_method(mrb, GMemVTable_class, "calloc=", mrb_GLib_GMemVTable_set_calloc, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GMemVTable_try_malloc_FIELD_READER
  mrb_define_method(mrb, GMemVTable_class, "try_malloc", mrb_GLib_GMemVTable_get_try_malloc, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GMemVTable_try_malloc_FIELD_WRITER
  mrb_define_method(mrb, GMemVTable_class, "try_malloc=", mrb_GLib_GMemVTable_set_try_malloc, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GMemVTable_try_realloc_FIELD_READER
  mrb_define_method(mrb, GMemVTable_class, "try_realloc", mrb_GLib_GMemVTable_get_try_realloc, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GMemVTable_try_realloc_FIELD_WRITER
  mrb_define_method(mrb, GMemVTable_class, "try_realloc=", mrb_GLib_GMemVTable_set_try_realloc, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
