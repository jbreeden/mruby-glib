/*
 * struct _GSourceCallbackFuncs
 * Defined in file gmain.h @ line 77
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_GLib.h"

#if BIND_GSourceCallbackFuncs_TYPE

/*
 * Class Methods
 */

#if BIND_GSourceCallbackFuncs_INITIALIZE
mrb_value
mrb_GLib_GSourceCallbackFuncs_initialize(mrb_state* mrb, mrb_value self) {
  struct _GSourceCallbackFuncs* native_object = (struct _GSourceCallbackFuncs*)malloc(sizeof(struct _GSourceCallbackFuncs));
  mruby_gift_struct _GSourceCallbackFuncs_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_GSourceCallbackFuncs_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSourceCallbackFuncs.disown only accepts objects of type GLib::GSourceCallbackFuncs");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_GSourceCallbackFuncs_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSourceCallbackFuncs.belongs_to_ruby only accepts objects of type GLib::GSourceCallbackFuncs");
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

#if BIND_GSourceCallbackFuncs_ref_FIELD_READER
/* get_ref
 *
 * Return Type: void (*)(gpointer)
 */
mrb_value
mrb_GLib_GSourceCallbackFuncs_get_ref(mrb_state* mrb, mrb_value self) {
  struct _GSourceCallbackFuncs * native_self = mruby_unbox_struct _GSourceCallbackFuncs(self);

  void (*)(gpointer) native_field = native_self->ref;

  mrb_value ruby_field = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_gpointer_RPAREN(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GSourceCallbackFuncs_ref_FIELD_WRITER
/* set_ref
 *
 * Parameters:
 * - value: void (*)(gpointer)
 */
mrb_value
mrb_GLib_GSourceCallbackFuncs_set_ref(mrb_state* mrb, mrb_value self) {
  struct _GSourceCallbackFuncs * native_self = mruby_unbox_struct _GSourceCallbackFuncs(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_gpointer_RPAREN(ruby_field);

  void (*native_field)(gpointer) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_gpointer_RPAREN(ruby_field);

  native_self->ref = native_field;

  return ruby_field;
}
#endif

#if BIND_GSourceCallbackFuncs_unref_FIELD_READER
/* get_unref
 *
 * Return Type: void (*)(gpointer)
 */
mrb_value
mrb_GLib_GSourceCallbackFuncs_get_unref(mrb_state* mrb, mrb_value self) {
  struct _GSourceCallbackFuncs * native_self = mruby_unbox_struct _GSourceCallbackFuncs(self);

  void (*)(gpointer) native_field = native_self->unref;

  mrb_value ruby_field = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_gpointer_RPAREN(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GSourceCallbackFuncs_unref_FIELD_WRITER
/* set_unref
 *
 * Parameters:
 * - value: void (*)(gpointer)
 */
mrb_value
mrb_GLib_GSourceCallbackFuncs_set_unref(mrb_state* mrb, mrb_value self) {
  struct _GSourceCallbackFuncs * native_self = mruby_unbox_struct _GSourceCallbackFuncs(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_gpointer_RPAREN(ruby_field);

  void (*native_field)(gpointer) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_gpointer_RPAREN(ruby_field);

  native_self->unref = native_field;

  return ruby_field;
}
#endif

#if BIND_GSourceCallbackFuncs_get_FIELD_READER
/* get_get
 *
 * Return Type: void (*)(gpointer, GSource *, GSourceFunc *, gpointer *)
 */
mrb_value
mrb_GLib_GSourceCallbackFuncs_get_get(mrb_state* mrb, mrb_value self) {
  struct _GSourceCallbackFuncs * native_self = mruby_unbox_struct _GSourceCallbackFuncs(self);

  void (*)(gpointer, GSource *, GSourceFunc *, gpointer *) native_field = native_self->get;

  mrb_value ruby_field = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_gpointerCOMMA_GSource_PTR_COMMA_GSourceFunc_PTR_COMMA_gpointer_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GSourceCallbackFuncs_get_FIELD_WRITER
/* set_get
 *
 * Parameters:
 * - value: void (*)(gpointer, GSource *, GSourceFunc *, gpointer *)
 */
mrb_value
mrb_GLib_GSourceCallbackFuncs_set_get(mrb_state* mrb, mrb_value self) {
  struct _GSourceCallbackFuncs * native_self = mruby_unbox_struct _GSourceCallbackFuncs(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_gpointerCOMMA_GSource_PTR_COMMA_GSourceFunc_PTR_COMMA_gpointer_PTR_RPAREN(ruby_field);

  void (*native_field)(gpointer, GSource *, GSourceFunc *, gpointer *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_gpointerCOMMA_GSource_PTR_COMMA_GSourceFunc_PTR_COMMA_gpointer_PTR_RPAREN(ruby_field);

  native_self->get = native_field;

  return ruby_field;
}
#endif


void mrb_GLib_GSourceCallbackFuncs_init(mrb_state* mrb) {
  RClass* GSourceCallbackFuncs_class = mrb_define_class_under(mrb, GLib_module(mrb), "GSourceCallbackFuncs", mrb->object_class);
  MRB_SET_INSTANCE_TT(GSourceCallbackFuncs_class, MRB_TT_DATA);

#if BIND_GSourceCallbackFuncs_INITIALIZE
  mrb_define_method(mrb, GSourceCallbackFuncs_class, "initialize", mrb_GLib_GSourceCallbackFuncs_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GSourceCallbackFuncs_class, "disown", mrb_GLib_GSourceCallbackFuncs_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GSourceCallbackFuncs_class, "belongs_to_ruby?", mrb_GLib_GSourceCallbackFuncs_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GSourceCallbackFuncs_ref_FIELD_READER
  mrb_define_method(mrb, GSourceCallbackFuncs_class, "ref", mrb_GLib_GSourceCallbackFuncs_get_ref, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSourceCallbackFuncs_ref_FIELD_WRITER
  mrb_define_method(mrb, GSourceCallbackFuncs_class, "ref=", mrb_GLib_GSourceCallbackFuncs_set_ref, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSourceCallbackFuncs_unref_FIELD_READER
  mrb_define_method(mrb, GSourceCallbackFuncs_class, "unref", mrb_GLib_GSourceCallbackFuncs_get_unref, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSourceCallbackFuncs_unref_FIELD_WRITER
  mrb_define_method(mrb, GSourceCallbackFuncs_class, "unref=", mrb_GLib_GSourceCallbackFuncs_set_unref, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSourceCallbackFuncs_get_FIELD_READER
  mrb_define_method(mrb, GSourceCallbackFuncs_class, "get", mrb_GLib_GSourceCallbackFuncs_get_get, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSourceCallbackFuncs_get_FIELD_WRITER
  mrb_define_method(mrb, GSourceCallbackFuncs_class, "get=", mrb_GLib_GSourceCallbackFuncs_set_get, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
