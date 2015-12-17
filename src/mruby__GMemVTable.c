/*
 * struct _GMemVTable
 * Defined in file gmem.h @ line 51
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_GLib.h"

#if BIND_GMemVTable_TYPE

/*
 * Class Methods
 */

#if BIND_GMemVTable_INITIALIZE
mrb_value
mrb_GLib_GMemVTable_initialize(mrb_state* mrb, mrb_value self) {
  struct _GMemVTable* native_object = (struct _GMemVTable*)malloc(sizeof(struct _GMemVTable));
  mruby_gift_struct _GMemVTable_data_ptr(self, native_object);
  return self;
}
#endif

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

/*
 * Fields
 */

#if BIND_GMemVTable_malloc_FIELD_READER
/* get_malloc
 *
 * Return Type: gpointer (*)(gsize)
 */
mrb_value
mrb_GLib_GMemVTable_get_malloc(mrb_state* mrb, mrb_value self) {
  struct _GMemVTable * native_self = mruby_unbox_struct _GMemVTable(self);

  gpointer (*)(gsize) native_field = native_self->malloc;

  mrb_value ruby_field = TODO_mruby_box_gpointer_LPAREN_PTR_RPAREN_LPAREN_gsize_RPAREN(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GMemVTable_malloc_FIELD_WRITER
/* set_malloc
 *
 * Parameters:
 * - value: gpointer (*)(gsize)
 */
mrb_value
mrb_GLib_GMemVTable_set_malloc(mrb_state* mrb, mrb_value self) {
  struct _GMemVTable * native_self = mruby_unbox_struct _GMemVTable(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_gpointer_LPAREN_PTR_RPAREN_LPAREN_gsize_RPAREN(ruby_field);

  gpointer (*native_field)(gsize) = TODO_mruby_unbox_gpointer_LPAREN_PTR_RPAREN_LPAREN_gsize_RPAREN(ruby_field);

  native_self->malloc = native_field;

  return ruby_field;
}
#endif

#if BIND_GMemVTable_realloc_FIELD_READER
/* get_realloc
 *
 * Return Type: gpointer (*)(gpointer, gsize)
 */
mrb_value
mrb_GLib_GMemVTable_get_realloc(mrb_state* mrb, mrb_value self) {
  struct _GMemVTable * native_self = mruby_unbox_struct _GMemVTable(self);

  gpointer (*)(gpointer, gsize) native_field = native_self->realloc;

  mrb_value ruby_field = TODO_mruby_box_gpointer_LPAREN_PTR_RPAREN_LPAREN_gpointerCOMMA_gsize_RPAREN(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GMemVTable_realloc_FIELD_WRITER
/* set_realloc
 *
 * Parameters:
 * - value: gpointer (*)(gpointer, gsize)
 */
mrb_value
mrb_GLib_GMemVTable_set_realloc(mrb_state* mrb, mrb_value self) {
  struct _GMemVTable * native_self = mruby_unbox_struct _GMemVTable(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_gpointer_LPAREN_PTR_RPAREN_LPAREN_gpointerCOMMA_gsize_RPAREN(ruby_field);

  gpointer (*native_field)(gpointer, gsize) = TODO_mruby_unbox_gpointer_LPAREN_PTR_RPAREN_LPAREN_gpointerCOMMA_gsize_RPAREN(ruby_field);

  native_self->realloc = native_field;

  return ruby_field;
}
#endif

#if BIND_GMemVTable_free_FIELD_READER
/* get_free
 *
 * Return Type: void (*)(gpointer)
 */
mrb_value
mrb_GLib_GMemVTable_get_free(mrb_state* mrb, mrb_value self) {
  struct _GMemVTable * native_self = mruby_unbox_struct _GMemVTable(self);

  void (*)(gpointer) native_field = native_self->free;

  mrb_value ruby_field = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_gpointer_RPAREN(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GMemVTable_free_FIELD_WRITER
/* set_free
 *
 * Parameters:
 * - value: void (*)(gpointer)
 */
mrb_value
mrb_GLib_GMemVTable_set_free(mrb_state* mrb, mrb_value self) {
  struct _GMemVTable * native_self = mruby_unbox_struct _GMemVTable(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_gpointer_RPAREN(ruby_field);

  void (*native_field)(gpointer) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_gpointer_RPAREN(ruby_field);

  native_self->free = native_field;

  return ruby_field;
}
#endif

#if BIND_GMemVTable_calloc_FIELD_READER
/* get_calloc
 *
 * Return Type: gpointer (*)(gsize, gsize)
 */
mrb_value
mrb_GLib_GMemVTable_get_calloc(mrb_state* mrb, mrb_value self) {
  struct _GMemVTable * native_self = mruby_unbox_struct _GMemVTable(self);

  gpointer (*)(gsize, gsize) native_field = native_self->calloc;

  mrb_value ruby_field = TODO_mruby_box_gpointer_LPAREN_PTR_RPAREN_LPAREN_gsizeCOMMA_gsize_RPAREN(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GMemVTable_calloc_FIELD_WRITER
/* set_calloc
 *
 * Parameters:
 * - value: gpointer (*)(gsize, gsize)
 */
mrb_value
mrb_GLib_GMemVTable_set_calloc(mrb_state* mrb, mrb_value self) {
  struct _GMemVTable * native_self = mruby_unbox_struct _GMemVTable(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_gpointer_LPAREN_PTR_RPAREN_LPAREN_gsizeCOMMA_gsize_RPAREN(ruby_field);

  gpointer (*native_field)(gsize, gsize) = TODO_mruby_unbox_gpointer_LPAREN_PTR_RPAREN_LPAREN_gsizeCOMMA_gsize_RPAREN(ruby_field);

  native_self->calloc = native_field;

  return ruby_field;
}
#endif

#if BIND_GMemVTable_try_malloc_FIELD_READER
/* get_try_malloc
 *
 * Return Type: gpointer (*)(gsize)
 */
mrb_value
mrb_GLib_GMemVTable_get_try_malloc(mrb_state* mrb, mrb_value self) {
  struct _GMemVTable * native_self = mruby_unbox_struct _GMemVTable(self);

  gpointer (*)(gsize) native_field = native_self->try_malloc;

  mrb_value ruby_field = TODO_mruby_box_gpointer_LPAREN_PTR_RPAREN_LPAREN_gsize_RPAREN(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GMemVTable_try_malloc_FIELD_WRITER
/* set_try_malloc
 *
 * Parameters:
 * - value: gpointer (*)(gsize)
 */
mrb_value
mrb_GLib_GMemVTable_set_try_malloc(mrb_state* mrb, mrb_value self) {
  struct _GMemVTable * native_self = mruby_unbox_struct _GMemVTable(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_gpointer_LPAREN_PTR_RPAREN_LPAREN_gsize_RPAREN(ruby_field);

  gpointer (*native_field)(gsize) = TODO_mruby_unbox_gpointer_LPAREN_PTR_RPAREN_LPAREN_gsize_RPAREN(ruby_field);

  native_self->try_malloc = native_field;

  return ruby_field;
}
#endif

#if BIND_GMemVTable_try_realloc_FIELD_READER
/* get_try_realloc
 *
 * Return Type: gpointer (*)(gpointer, gsize)
 */
mrb_value
mrb_GLib_GMemVTable_get_try_realloc(mrb_state* mrb, mrb_value self) {
  struct _GMemVTable * native_self = mruby_unbox_struct _GMemVTable(self);

  gpointer (*)(gpointer, gsize) native_field = native_self->try_realloc;

  mrb_value ruby_field = TODO_mruby_box_gpointer_LPAREN_PTR_RPAREN_LPAREN_gpointerCOMMA_gsize_RPAREN(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GMemVTable_try_realloc_FIELD_WRITER
/* set_try_realloc
 *
 * Parameters:
 * - value: gpointer (*)(gpointer, gsize)
 */
mrb_value
mrb_GLib_GMemVTable_set_try_realloc(mrb_state* mrb, mrb_value self) {
  struct _GMemVTable * native_self = mruby_unbox_struct _GMemVTable(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_gpointer_LPAREN_PTR_RPAREN_LPAREN_gpointerCOMMA_gsize_RPAREN(ruby_field);

  gpointer (*native_field)(gpointer, gsize) = TODO_mruby_unbox_gpointer_LPAREN_PTR_RPAREN_LPAREN_gpointerCOMMA_gsize_RPAREN(ruby_field);

  native_self->try_realloc = native_field;

  return ruby_field;
}
#endif


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
