/*
 * struct _GError
 * Defined in file gerror.h @ line 42
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_GLib.h"

#if BIND_GError_TYPE

/*
 * Class Methods
 */

#if BIND_GError_INITIALIZE
mrb_value
mrb_GLib_GError_initialize(mrb_state* mrb, mrb_value self) {
  struct _GError* native_object = (struct _GError*)malloc(sizeof(struct _GError));
  mruby_gift_struct _GError_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_GError_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GError.disown only accepts objects of type GLib::GError");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_GError_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GError.belongs_to_ruby only accepts objects of type GLib::GError");
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

#if BIND_GError_domain_FIELD_READER
/* get_domain
 *
 * Return Type: GQuark
 */
mrb_value
mrb_GLib_GError_get_domain(mrb_state* mrb, mrb_value self) {
  struct _GError * native_self = mruby_unbox_struct _GError(self);

  GQuark native_field = native_self->domain;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GError_domain_FIELD_WRITER
/* set_domain
 *
 * Parameters:
 * - value: GQuark
 */
mrb_value
mrb_GLib_GError_set_domain(mrb_state* mrb, mrb_value self) {
  struct _GError * native_self = mruby_unbox_struct _GError(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->domain = native_field;

  return ruby_field;
}
#endif

#if BIND_GError_code_FIELD_READER
/* get_code
 *
 * Return Type: gint
 */
mrb_value
mrb_GLib_GError_get_code(mrb_state* mrb, mrb_value self) {
  struct _GError * native_self = mruby_unbox_struct _GError(self);

  gint native_field = native_self->code;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GError_code_FIELD_WRITER
/* set_code
 *
 * Parameters:
 * - value: gint
 */
mrb_value
mrb_GLib_GError_set_code(mrb_state* mrb, mrb_value self) {
  struct _GError * native_self = mruby_unbox_struct _GError(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->code = native_field;

  return ruby_field;
}
#endif

#if BIND_GError_message_FIELD_READER
/* get_message
 *
 * Return Type: gchar *
 */
mrb_value
mrb_GLib_GError_get_message(mrb_state* mrb, mrb_value self) {
  struct _GError * native_self = mruby_unbox_struct _GError(self);

  gchar * native_field = native_self->message;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GError_message_FIELD_WRITER
/* set_message
 *
 * Parameters:
 * - value: gchar *
 */
mrb_value
mrb_GLib_GError_set_message(mrb_state* mrb, mrb_value self) {
  struct _GError * native_self = mruby_unbox_struct _GError(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_field = strdup(ruby_field);

  native_self->message = native_field;

  return ruby_field;
}
#endif


void mrb_GLib_GError_init(mrb_state* mrb) {
  struct RClass* GError_class = mrb_define_class_under(mrb, GLib_module(mrb), "GError", mrb->object_class);
  MRB_SET_INSTANCE_TT(GError_class, MRB_TT_DATA);

#if BIND_GError_INITIALIZE
  mrb_define_method(mrb, GError_class, "initialize", mrb_GLib_GError_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GError_class, "disown", mrb_GLib_GError_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GError_class, "belongs_to_ruby?", mrb_GLib_GError_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GError_domain_FIELD_READER
  mrb_define_method(mrb, GError_class, "domain", mrb_GLib_GError_get_domain, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GError_domain_FIELD_WRITER
  mrb_define_method(mrb, GError_class, "domain=", mrb_GLib_GError_set_domain, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GError_code_FIELD_READER
  mrb_define_method(mrb, GError_class, "code", mrb_GLib_GError_get_code, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GError_code_FIELD_WRITER
  mrb_define_method(mrb, GError_class, "code=", mrb_GLib_GError_set_code, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GError_message_FIELD_READER
  mrb_define_method(mrb, GError_class, "message", mrb_GLib_GError_get_message, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GError_message_FIELD_WRITER
  mrb_define_method(mrb, GError_class, "message=", mrb_GLib_GError_set_message, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
