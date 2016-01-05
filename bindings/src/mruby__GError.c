/*
 * struct _GError
 * Defined in file gerror.h @ line 42
 */

#include "mruby_GLib.h"

#if BIND_GError_TYPE

/*
 * Class Methods
 */

#if BIND_GError_INITIALIZE
mrb_value
mrb_GLib_GError_initialize(mrb_state* mrb, mrb_value self) {
  struct _GError* native_object = (struct _GError*)calloc(1, sizeof(struct _GError));
  mruby_giftwrap__GError_data_ptr(self, native_object);
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
  struct _GError * native_self = mruby_unbox__GError(self);

  GQuark native_domain = native_self->domain;

  mrb_value domain = mrb_fixnum_value(native_domain);

  return domain;
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
  struct _GError * native_self = mruby_unbox__GError(self);
  mrb_int native_domain;

  mrb_get_args(mrb, "i", &native_domain);

  native_self->domain = native_domain;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GError_code_FIELD_READER
/* get_code
 *
 * Return Type: gint
 */
mrb_value
mrb_GLib_GError_get_code(mrb_state* mrb, mrb_value self) {
  struct _GError * native_self = mruby_unbox__GError(self);

  gint native_code = native_self->code;

  mrb_value code = mrb_fixnum_value(native_code);

  return code;
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
  struct _GError * native_self = mruby_unbox__GError(self);
  mrb_int native_code;

  mrb_get_args(mrb, "i", &native_code);

  native_self->code = native_code;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GError_message_FIELD_READER
/* get_message
 *
 * Return Type: gchar *
 */
mrb_value
mrb_GLib_GError_get_message(mrb_state* mrb, mrb_value self) {
  struct _GError * native_self = mruby_unbox__GError(self);

  gchar * native_message = native_self->message;

  mrb_value message = mrb_str_new(mrb, native_message, native_message_len);

  return message;
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
  struct _GError * native_self = mruby_unbox__GError(self);
  char * message = NULL;
  mrb_int message_len = 0;

  mrb_get_args(mrb, "s!", &message, &message_len);

  /* WARNING: String is strdup'ed to avoid mutable reference to internal MRuby memory */
  char * native_message = strdup(message);

  if (NULL != native_self->message) free(native_self->message);
  native_self->message = native_message;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
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
