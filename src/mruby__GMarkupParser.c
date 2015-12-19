/*
 * struct _GMarkupParser
 * Defined in file gmarkup.h @ line 114
 */

#include "mruby_GLib.h"

#if BIND_GMarkupParser_TYPE

/*
 * Class Methods
 */

#if BIND_GMarkupParser_INITIALIZE
mrb_value
mrb_GLib_GMarkupParser_initialize(mrb_state* mrb, mrb_value self) {
  struct _GMarkupParser* native_object = (struct _GMarkupParser*)calloc(1, sizeof(struct _GMarkupParser));
  mruby_gift_struct _GMarkupParser_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_GMarkupParser_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GMarkupParser.disown only accepts objects of type GLib::GMarkupParser");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_GMarkupParser_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GMarkupParser.belongs_to_ruby only accepts objects of type GLib::GMarkupParser");
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

#if BIND_GMarkupParser_start_element_FIELD_READER
/* get_start_element
 *
 * Return Type: void (*)(GMarkupParseContext *, const gchar *, const gchar **, const gchar **, gpointer, GError **)
 */
mrb_value
mrb_GLib_GMarkupParser_get_start_element(mrb_state* mrb, mrb_value self) {
  struct _GMarkupParser * native_self = mruby_unbox__GMarkupParser(self);

  void (*)(GMarkupParseContext *, const gchar *, const gchar **, const gchar **, gpointer, GError **) native_start_element = native_self->start_element;

  mrb_value start_element = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GMarkupParseContext_PTR_COMMAgchar_PTR_COMMA_const_gchar_PTR_PTR_COMMA_const_gchar_PTR_PTR_COMMA_gpointerCOMMA_GError_PTR_PTR_RPAREN(mrb, native_start_element);

  return start_element;
}
#endif

#if BIND_GMarkupParser_start_element_FIELD_WRITER
/* set_start_element
 *
 * Parameters:
 * - value: void (*)(GMarkupParseContext *, const gchar *, const gchar **, const gchar **, gpointer, GError **)
 */
mrb_value
mrb_GLib_GMarkupParser_set_start_element(mrb_state* mrb, mrb_value self) {
  struct _GMarkupParser * native_self = mruby_unbox__GMarkupParser(self);
  mrb_value start_element;

  mrb_get_args(mrb, "o", &start_element);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GMarkupParseContext_PTR_COMMAgchar_PTR_COMMA_const_gchar_PTR_PTR_COMMA_const_gchar_PTR_PTR_COMMA_gpointerCOMMA_GError_PTR_PTR_RPAREN(start_element);

  void (*native_start_element)(GMarkupParseContext *, const gchar *, const gchar **, const gchar **, gpointer, GError **) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GMarkupParseContext_PTR_COMMAgchar_PTR_COMMA_const_gchar_PTR_PTR_COMMA_const_gchar_PTR_PTR_COMMA_gpointerCOMMA_GError_PTR_PTR_RPAREN(start_element);

  native_self->start_element = native_start_element;
  

  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GMarkupParser_end_element_FIELD_READER
/* get_end_element
 *
 * Return Type: void (*)(GMarkupParseContext *, const gchar *, gpointer, GError **)
 */
mrb_value
mrb_GLib_GMarkupParser_get_end_element(mrb_state* mrb, mrb_value self) {
  struct _GMarkupParser * native_self = mruby_unbox__GMarkupParser(self);

  void (*)(GMarkupParseContext *, const gchar *, gpointer, GError **) native_end_element = native_self->end_element;

  mrb_value end_element = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GMarkupParseContext_PTR_COMMAgchar_PTR_COMMA_gpointerCOMMA_GError_PTR_PTR_RPAREN(mrb, native_end_element);

  return end_element;
}
#endif

#if BIND_GMarkupParser_end_element_FIELD_WRITER
/* set_end_element
 *
 * Parameters:
 * - value: void (*)(GMarkupParseContext *, const gchar *, gpointer, GError **)
 */
mrb_value
mrb_GLib_GMarkupParser_set_end_element(mrb_state* mrb, mrb_value self) {
  struct _GMarkupParser * native_self = mruby_unbox__GMarkupParser(self);
  mrb_value end_element;

  mrb_get_args(mrb, "o", &end_element);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GMarkupParseContext_PTR_COMMAgchar_PTR_COMMA_gpointerCOMMA_GError_PTR_PTR_RPAREN(end_element);

  void (*native_end_element)(GMarkupParseContext *, const gchar *, gpointer, GError **) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GMarkupParseContext_PTR_COMMAgchar_PTR_COMMA_gpointerCOMMA_GError_PTR_PTR_RPAREN(end_element);

  native_self->end_element = native_end_element;
  

  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GMarkupParser_text_FIELD_READER
/* get_text
 *
 * Return Type: void (*)(GMarkupParseContext *, const gchar *, gsize, gpointer, GError **)
 */
mrb_value
mrb_GLib_GMarkupParser_get_text(mrb_state* mrb, mrb_value self) {
  struct _GMarkupParser * native_self = mruby_unbox__GMarkupParser(self);

  void (*)(GMarkupParseContext *, const gchar *, gsize, gpointer, GError **) native_text = native_self->text;

  mrb_value text = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GMarkupParseContext_PTR_COMMAgchar_PTR_COMMA_gsizeCOMMA_gpointerCOMMA_GError_PTR_PTR_RPAREN(mrb, native_text);

  return text;
}
#endif

#if BIND_GMarkupParser_text_FIELD_WRITER
/* set_text
 *
 * Parameters:
 * - value: void (*)(GMarkupParseContext *, const gchar *, gsize, gpointer, GError **)
 */
mrb_value
mrb_GLib_GMarkupParser_set_text(mrb_state* mrb, mrb_value self) {
  struct _GMarkupParser * native_self = mruby_unbox__GMarkupParser(self);
  mrb_value text;

  mrb_get_args(mrb, "o", &text);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GMarkupParseContext_PTR_COMMAgchar_PTR_COMMA_gsizeCOMMA_gpointerCOMMA_GError_PTR_PTR_RPAREN(text);

  void (*native_text)(GMarkupParseContext *, const gchar *, gsize, gpointer, GError **) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GMarkupParseContext_PTR_COMMAgchar_PTR_COMMA_gsizeCOMMA_gpointerCOMMA_GError_PTR_PTR_RPAREN(text);

  native_self->text = native_text;
  

  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GMarkupParser_passthrough_FIELD_READER
/* get_passthrough
 *
 * Return Type: void (*)(GMarkupParseContext *, const gchar *, gsize, gpointer, GError **)
 */
mrb_value
mrb_GLib_GMarkupParser_get_passthrough(mrb_state* mrb, mrb_value self) {
  struct _GMarkupParser * native_self = mruby_unbox__GMarkupParser(self);

  void (*)(GMarkupParseContext *, const gchar *, gsize, gpointer, GError **) native_passthrough = native_self->passthrough;

  mrb_value passthrough = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GMarkupParseContext_PTR_COMMAgchar_PTR_COMMA_gsizeCOMMA_gpointerCOMMA_GError_PTR_PTR_RPAREN(mrb, native_passthrough);

  return passthrough;
}
#endif

#if BIND_GMarkupParser_passthrough_FIELD_WRITER
/* set_passthrough
 *
 * Parameters:
 * - value: void (*)(GMarkupParseContext *, const gchar *, gsize, gpointer, GError **)
 */
mrb_value
mrb_GLib_GMarkupParser_set_passthrough(mrb_state* mrb, mrb_value self) {
  struct _GMarkupParser * native_self = mruby_unbox__GMarkupParser(self);
  mrb_value passthrough;

  mrb_get_args(mrb, "o", &passthrough);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GMarkupParseContext_PTR_COMMAgchar_PTR_COMMA_gsizeCOMMA_gpointerCOMMA_GError_PTR_PTR_RPAREN(passthrough);

  void (*native_passthrough)(GMarkupParseContext *, const gchar *, gsize, gpointer, GError **) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GMarkupParseContext_PTR_COMMAgchar_PTR_COMMA_gsizeCOMMA_gpointerCOMMA_GError_PTR_PTR_RPAREN(passthrough);

  native_self->passthrough = native_passthrough;
  

  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GMarkupParser_error_FIELD_READER
/* get_error
 *
 * Return Type: void (*)(GMarkupParseContext *, GError *, gpointer)
 */
mrb_value
mrb_GLib_GMarkupParser_get_error(mrb_state* mrb, mrb_value self) {
  struct _GMarkupParser * native_self = mruby_unbox__GMarkupParser(self);

  void (*)(GMarkupParseContext *, GError *, gpointer) native_error = native_self->error;

  mrb_value error = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GMarkupParseContext_PTR_COMMA_GError_PTR_COMMA_gpointer_RPAREN(mrb, native_error);

  return error;
}
#endif

#if BIND_GMarkupParser_error_FIELD_WRITER
/* set_error
 *
 * Parameters:
 * - value: void (*)(GMarkupParseContext *, GError *, gpointer)
 */
mrb_value
mrb_GLib_GMarkupParser_set_error(mrb_state* mrb, mrb_value self) {
  struct _GMarkupParser * native_self = mruby_unbox__GMarkupParser(self);
  mrb_value error;

  mrb_get_args(mrb, "o", &error);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GMarkupParseContext_PTR_COMMA_GError_PTR_COMMA_gpointer_RPAREN(error);

  void (*native_error)(GMarkupParseContext *, GError *, gpointer) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GMarkupParseContext_PTR_COMMA_GError_PTR_COMMA_gpointer_RPAREN(error);

  native_self->error = native_error;
  

  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif


void mrb_GLib_GMarkupParser_init(mrb_state* mrb) {
  struct RClass* GMarkupParser_class = mrb_define_class_under(mrb, GLib_module(mrb), "GMarkupParser", mrb->object_class);
  MRB_SET_INSTANCE_TT(GMarkupParser_class, MRB_TT_DATA);

#if BIND_GMarkupParser_INITIALIZE
  mrb_define_method(mrb, GMarkupParser_class, "initialize", mrb_GLib_GMarkupParser_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GMarkupParser_class, "disown", mrb_GLib_GMarkupParser_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GMarkupParser_class, "belongs_to_ruby?", mrb_GLib_GMarkupParser_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GMarkupParser_start_element_FIELD_READER
  mrb_define_method(mrb, GMarkupParser_class, "start_element", mrb_GLib_GMarkupParser_get_start_element, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GMarkupParser_start_element_FIELD_WRITER
  mrb_define_method(mrb, GMarkupParser_class, "start_element=", mrb_GLib_GMarkupParser_set_start_element, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GMarkupParser_end_element_FIELD_READER
  mrb_define_method(mrb, GMarkupParser_class, "end_element", mrb_GLib_GMarkupParser_get_end_element, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GMarkupParser_end_element_FIELD_WRITER
  mrb_define_method(mrb, GMarkupParser_class, "end_element=", mrb_GLib_GMarkupParser_set_end_element, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GMarkupParser_text_FIELD_READER
  mrb_define_method(mrb, GMarkupParser_class, "text", mrb_GLib_GMarkupParser_get_text, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GMarkupParser_text_FIELD_WRITER
  mrb_define_method(mrb, GMarkupParser_class, "text=", mrb_GLib_GMarkupParser_set_text, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GMarkupParser_passthrough_FIELD_READER
  mrb_define_method(mrb, GMarkupParser_class, "passthrough", mrb_GLib_GMarkupParser_get_passthrough, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GMarkupParser_passthrough_FIELD_WRITER
  mrb_define_method(mrb, GMarkupParser_class, "passthrough=", mrb_GLib_GMarkupParser_set_passthrough, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GMarkupParser_error_FIELD_READER
  mrb_define_method(mrb, GMarkupParser_class, "error", mrb_GLib_GMarkupParser_get_error, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GMarkupParser_error_FIELD_WRITER
  mrb_define_method(mrb, GMarkupParser_class, "error=", mrb_GLib_GMarkupParser_set_error, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
