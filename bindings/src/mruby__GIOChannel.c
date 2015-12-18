/*
 * struct _GIOChannel
 * Defined in file giochannel.h @ line 41
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_GLib.h"

#if BIND_GIOChannel_TYPE

/*
 * Class Methods
 */

#if BIND_GIOChannel_INITIALIZE
mrb_value
mrb_GLib_GIOChannel_initialize(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel* native_object = (struct _GIOChannel*)malloc(sizeof(struct _GIOChannel));
  mruby_gift_struct _GIOChannel_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_GIOChannel_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GIOChannel.disown only accepts objects of type GLib::GIOChannel");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_GIOChannel_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GIOChannel.belongs_to_ruby only accepts objects of type GLib::GIOChannel");
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

#if BIND_GIOChannel_ref_count_FIELD_READER
/* get_ref_count
 *
 * Return Type: gint
 */
mrb_value
mrb_GLib_GIOChannel_get_ref_count(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox_struct _GIOChannel(self);

  gint native_field = native_self->ref_count;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GIOChannel_ref_count_FIELD_WRITER
/* set_ref_count
 *
 * Parameters:
 * - value: gint
 */
mrb_value
mrb_GLib_GIOChannel_set_ref_count(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox_struct _GIOChannel(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = (int)ruby_field;

  native_self->ref_count = native_field;

  return ruby_field;
}
#endif

#if BIND_GIOChannel_funcs_FIELD_READER
/* get_funcs
 *
 * Return Type: GIOFuncs *
 */
mrb_value
mrb_GLib_GIOChannel_get_funcs(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox_struct _GIOChannel(self);

  GIOFuncs * native_field = native_self->funcs;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box__GIOFuncs(mrb, native_field));

  return ruby_field;
}
#endif

#if BIND_GIOChannel_funcs_FIELD_WRITER
/* set_funcs
 *
 * Parameters:
 * - value: GIOFuncs *
 */
mrb_value
mrb_GLib_GIOChannel_set_funcs(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox_struct _GIOChannel(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, GIOFuncs_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GIOFuncs expected");
    return mrb_nil_value();
  }

  GIOFuncs * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox__GIOFuncs(ruby_field));

  native_self->funcs = native_field;

  return ruby_field;
}
#endif

#if BIND_GIOChannel_encoding_FIELD_READER
/* get_encoding
 *
 * Return Type: gchar *
 */
mrb_value
mrb_GLib_GIOChannel_get_encoding(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox_struct _GIOChannel(self);

  gchar * native_field = native_self->encoding;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GIOChannel_encoding_FIELD_WRITER
/* set_encoding
 *
 * Parameters:
 * - value: gchar *
 */
mrb_value
mrb_GLib_GIOChannel_set_encoding(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox_struct _GIOChannel(self);
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

  native_self->encoding = native_field;

  return ruby_field;
}
#endif

#if BIND_GIOChannel_read_cd_FIELD_READER
/* get_read_cd
 *
 * Return Type: GIConv
 */
mrb_value
mrb_GLib_GIOChannel_get_read_cd(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox_struct _GIOChannel(self);

  GIConv native_field = native_self->read_cd;

  mrb_value ruby_field = TODO_mruby_box_GIConv(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GIOChannel_read_cd_FIELD_WRITER
/* set_read_cd
 *
 * Parameters:
 * - value: GIConv
 */
mrb_value
mrb_GLib_GIOChannel_set_read_cd(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox_struct _GIOChannel(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_GIConv(ruby_field);

  GIConv native_field = TODO_mruby_unbox_GIConv(ruby_field);

  native_self->read_cd = native_field;

  return ruby_field;
}
#endif

#if BIND_GIOChannel_write_cd_FIELD_READER
/* get_write_cd
 *
 * Return Type: GIConv
 */
mrb_value
mrb_GLib_GIOChannel_get_write_cd(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox_struct _GIOChannel(self);

  GIConv native_field = native_self->write_cd;

  mrb_value ruby_field = TODO_mruby_box_GIConv(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GIOChannel_write_cd_FIELD_WRITER
/* set_write_cd
 *
 * Parameters:
 * - value: GIConv
 */
mrb_value
mrb_GLib_GIOChannel_set_write_cd(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox_struct _GIOChannel(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_GIConv(ruby_field);

  GIConv native_field = TODO_mruby_unbox_GIConv(ruby_field);

  native_self->write_cd = native_field;

  return ruby_field;
}
#endif

#if BIND_GIOChannel_line_term_FIELD_READER
/* get_line_term
 *
 * Return Type: gchar *
 */
mrb_value
mrb_GLib_GIOChannel_get_line_term(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox_struct _GIOChannel(self);

  gchar * native_field = native_self->line_term;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GIOChannel_line_term_FIELD_WRITER
/* set_line_term
 *
 * Parameters:
 * - value: gchar *
 */
mrb_value
mrb_GLib_GIOChannel_set_line_term(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox_struct _GIOChannel(self);
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

  native_self->line_term = native_field;

  return ruby_field;
}
#endif

#if BIND_GIOChannel_line_term_len_FIELD_READER
/* get_line_term_len
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GIOChannel_get_line_term_len(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox_struct _GIOChannel(self);

  guint native_field = native_self->line_term_len;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GIOChannel_line_term_len_FIELD_WRITER
/* set_line_term_len
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GIOChannel_set_line_term_len(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox_struct _GIOChannel(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->line_term_len = native_field;

  return ruby_field;
}
#endif

#if BIND_GIOChannel_buf_size_FIELD_READER
/* get_buf_size
 *
 * Return Type: gsize
 */
mrb_value
mrb_GLib_GIOChannel_get_buf_size(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox_struct _GIOChannel(self);

  gsize native_field = native_self->buf_size;

  mrb_value ruby_field = TODO_mruby_box_gsize(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GIOChannel_buf_size_FIELD_WRITER
/* set_buf_size
 *
 * Parameters:
 * - value: gsize
 */
mrb_value
mrb_GLib_GIOChannel_set_buf_size(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox_struct _GIOChannel(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_gsize(ruby_field);

  gsize native_field = TODO_mruby_unbox_gsize(ruby_field);

  native_self->buf_size = native_field;

  return ruby_field;
}
#endif

#if BIND_GIOChannel_read_buf_FIELD_READER
/* get_read_buf
 *
 * Return Type: GString *
 */
mrb_value
mrb_GLib_GIOChannel_get_read_buf(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox_struct _GIOChannel(self);

  GString * native_field = native_self->read_buf;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box__GString(mrb, native_field));

  return ruby_field;
}
#endif

#if BIND_GIOChannel_read_buf_FIELD_WRITER
/* set_read_buf
 *
 * Parameters:
 * - value: GString *
 */
mrb_value
mrb_GLib_GIOChannel_set_read_buf(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox_struct _GIOChannel(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, GString_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GString expected");
    return mrb_nil_value();
  }

  GString * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox__GString(ruby_field));

  native_self->read_buf = native_field;

  return ruby_field;
}
#endif

#if BIND_GIOChannel_encoded_read_buf_FIELD_READER
/* get_encoded_read_buf
 *
 * Return Type: GString *
 */
mrb_value
mrb_GLib_GIOChannel_get_encoded_read_buf(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox_struct _GIOChannel(self);

  GString * native_field = native_self->encoded_read_buf;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box__GString(mrb, native_field));

  return ruby_field;
}
#endif

#if BIND_GIOChannel_encoded_read_buf_FIELD_WRITER
/* set_encoded_read_buf
 *
 * Parameters:
 * - value: GString *
 */
mrb_value
mrb_GLib_GIOChannel_set_encoded_read_buf(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox_struct _GIOChannel(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, GString_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GString expected");
    return mrb_nil_value();
  }

  GString * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox__GString(ruby_field));

  native_self->encoded_read_buf = native_field;

  return ruby_field;
}
#endif

#if BIND_GIOChannel_write_buf_FIELD_READER
/* get_write_buf
 *
 * Return Type: GString *
 */
mrb_value
mrb_GLib_GIOChannel_get_write_buf(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox_struct _GIOChannel(self);

  GString * native_field = native_self->write_buf;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box__GString(mrb, native_field));

  return ruby_field;
}
#endif

#if BIND_GIOChannel_write_buf_FIELD_WRITER
/* set_write_buf
 *
 * Parameters:
 * - value: GString *
 */
mrb_value
mrb_GLib_GIOChannel_set_write_buf(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox_struct _GIOChannel(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, GString_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GString expected");
    return mrb_nil_value();
  }

  GString * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox__GString(ruby_field));

  native_self->write_buf = native_field;

  return ruby_field;
}
#endif

#if BIND_GIOChannel_partial_write_buf_FIELD_READER
/* get_partial_write_buf
 *
 * Return Type: gchar [6]
 */
mrb_value
mrb_GLib_GIOChannel_get_partial_write_buf(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox_struct _GIOChannel(self);

  gchar [6] native_field = native_self->partial_write_buf;

  mrb_value ruby_field = TODO_mruby_box_gchar_[6](mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GIOChannel_partial_write_buf_FIELD_WRITER
/* set_partial_write_buf
 *
 * Parameters:
 * - value: gchar [6]
 */
mrb_value
mrb_GLib_GIOChannel_set_partial_write_buf(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox_struct _GIOChannel(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_gchar_[6](ruby_field);

  gchar [6] native_field = TODO_mruby_unbox_gchar_[6](ruby_field);

  native_self->partial_write_buf = native_field;

  return ruby_field;
}
#endif

#if BIND_GIOChannel_use_buffer_FIELD_READER
/* get_use_buffer
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GIOChannel_get_use_buffer(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox_struct _GIOChannel(self);

  guint native_field = native_self->use_buffer;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GIOChannel_use_buffer_FIELD_WRITER
/* set_use_buffer
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GIOChannel_set_use_buffer(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox_struct _GIOChannel(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->use_buffer = native_field;

  return ruby_field;
}
#endif

#if BIND_GIOChannel_do_encode_FIELD_READER
/* get_do_encode
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GIOChannel_get_do_encode(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox_struct _GIOChannel(self);

  guint native_field = native_self->do_encode;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GIOChannel_do_encode_FIELD_WRITER
/* set_do_encode
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GIOChannel_set_do_encode(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox_struct _GIOChannel(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->do_encode = native_field;

  return ruby_field;
}
#endif

#if BIND_GIOChannel_close_on_unref_FIELD_READER
/* get_close_on_unref
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GIOChannel_get_close_on_unref(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox_struct _GIOChannel(self);

  guint native_field = native_self->close_on_unref;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GIOChannel_close_on_unref_FIELD_WRITER
/* set_close_on_unref
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GIOChannel_set_close_on_unref(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox_struct _GIOChannel(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->close_on_unref = native_field;

  return ruby_field;
}
#endif

#if BIND_GIOChannel_is_readable_FIELD_READER
/* get_is_readable
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GIOChannel_get_is_readable(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox_struct _GIOChannel(self);

  guint native_field = native_self->is_readable;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GIOChannel_is_readable_FIELD_WRITER
/* set_is_readable
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GIOChannel_set_is_readable(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox_struct _GIOChannel(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->is_readable = native_field;

  return ruby_field;
}
#endif

#if BIND_GIOChannel_is_writeable_FIELD_READER
/* get_is_writeable
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GIOChannel_get_is_writeable(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox_struct _GIOChannel(self);

  guint native_field = native_self->is_writeable;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GIOChannel_is_writeable_FIELD_WRITER
/* set_is_writeable
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GIOChannel_set_is_writeable(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox_struct _GIOChannel(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->is_writeable = native_field;

  return ruby_field;
}
#endif

#if BIND_GIOChannel_is_seekable_FIELD_READER
/* get_is_seekable
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GIOChannel_get_is_seekable(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox_struct _GIOChannel(self);

  guint native_field = native_self->is_seekable;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GIOChannel_is_seekable_FIELD_WRITER
/* set_is_seekable
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GIOChannel_set_is_seekable(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox_struct _GIOChannel(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = (unsigned int)ruby_field;

  native_self->is_seekable = native_field;

  return ruby_field;
}
#endif

#if BIND_GIOChannel_reserved1_FIELD_READER
/* get_reserved1
 *
 * Return Type: gpointer
 */
mrb_value
mrb_GLib_GIOChannel_get_reserved1(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox_struct _GIOChannel(self);

  gpointer native_field = native_self->reserved1;

  mrb_value ruby_field = TODO_mruby_box_gpointer(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GIOChannel_reserved1_FIELD_WRITER
/* set_reserved1
 *
 * Parameters:
 * - value: gpointer
 */
mrb_value
mrb_GLib_GIOChannel_set_reserved1(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox_struct _GIOChannel(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_gpointer(ruby_field);

  gpointer native_field = TODO_mruby_unbox_gpointer(ruby_field);

  native_self->reserved1 = native_field;

  return ruby_field;
}
#endif

#if BIND_GIOChannel_reserved2_FIELD_READER
/* get_reserved2
 *
 * Return Type: gpointer
 */
mrb_value
mrb_GLib_GIOChannel_get_reserved2(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox_struct _GIOChannel(self);

  gpointer native_field = native_self->reserved2;

  mrb_value ruby_field = TODO_mruby_box_gpointer(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GIOChannel_reserved2_FIELD_WRITER
/* set_reserved2
 *
 * Parameters:
 * - value: gpointer
 */
mrb_value
mrb_GLib_GIOChannel_set_reserved2(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox_struct _GIOChannel(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_gpointer(ruby_field);

  gpointer native_field = TODO_mruby_unbox_gpointer(ruby_field);

  native_self->reserved2 = native_field;

  return ruby_field;
}
#endif


void mrb_GLib_GIOChannel_init(mrb_state* mrb) {
  struct RClass* GIOChannel_class = mrb_define_class_under(mrb, GLib_module(mrb), "GIOChannel", mrb->object_class);
  MRB_SET_INSTANCE_TT(GIOChannel_class, MRB_TT_DATA);

#if BIND_GIOChannel_INITIALIZE
  mrb_define_method(mrb, GIOChannel_class, "initialize", mrb_GLib_GIOChannel_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GIOChannel_class, "disown", mrb_GLib_GIOChannel_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GIOChannel_class, "belongs_to_ruby?", mrb_GLib_GIOChannel_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GIOChannel_ref_count_FIELD_READER
  mrb_define_method(mrb, GIOChannel_class, "ref_count", mrb_GLib_GIOChannel_get_ref_count, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOChannel_ref_count_FIELD_WRITER
  mrb_define_method(mrb, GIOChannel_class, "ref_count=", mrb_GLib_GIOChannel_set_ref_count, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOChannel_funcs_FIELD_READER
  mrb_define_method(mrb, GIOChannel_class, "funcs", mrb_GLib_GIOChannel_get_funcs, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOChannel_funcs_FIELD_WRITER
  mrb_define_method(mrb, GIOChannel_class, "funcs=", mrb_GLib_GIOChannel_set_funcs, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOChannel_encoding_FIELD_READER
  mrb_define_method(mrb, GIOChannel_class, "encoding", mrb_GLib_GIOChannel_get_encoding, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOChannel_encoding_FIELD_WRITER
  mrb_define_method(mrb, GIOChannel_class, "encoding=", mrb_GLib_GIOChannel_set_encoding, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOChannel_read_cd_FIELD_READER
  mrb_define_method(mrb, GIOChannel_class, "read_cd", mrb_GLib_GIOChannel_get_read_cd, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOChannel_read_cd_FIELD_WRITER
  mrb_define_method(mrb, GIOChannel_class, "read_cd=", mrb_GLib_GIOChannel_set_read_cd, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOChannel_write_cd_FIELD_READER
  mrb_define_method(mrb, GIOChannel_class, "write_cd", mrb_GLib_GIOChannel_get_write_cd, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOChannel_write_cd_FIELD_WRITER
  mrb_define_method(mrb, GIOChannel_class, "write_cd=", mrb_GLib_GIOChannel_set_write_cd, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOChannel_line_term_FIELD_READER
  mrb_define_method(mrb, GIOChannel_class, "line_term", mrb_GLib_GIOChannel_get_line_term, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOChannel_line_term_FIELD_WRITER
  mrb_define_method(mrb, GIOChannel_class, "line_term=", mrb_GLib_GIOChannel_set_line_term, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOChannel_line_term_len_FIELD_READER
  mrb_define_method(mrb, GIOChannel_class, "line_term_len", mrb_GLib_GIOChannel_get_line_term_len, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOChannel_line_term_len_FIELD_WRITER
  mrb_define_method(mrb, GIOChannel_class, "line_term_len=", mrb_GLib_GIOChannel_set_line_term_len, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOChannel_buf_size_FIELD_READER
  mrb_define_method(mrb, GIOChannel_class, "buf_size", mrb_GLib_GIOChannel_get_buf_size, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOChannel_buf_size_FIELD_WRITER
  mrb_define_method(mrb, GIOChannel_class, "buf_size=", mrb_GLib_GIOChannel_set_buf_size, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOChannel_read_buf_FIELD_READER
  mrb_define_method(mrb, GIOChannel_class, "read_buf", mrb_GLib_GIOChannel_get_read_buf, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOChannel_read_buf_FIELD_WRITER
  mrb_define_method(mrb, GIOChannel_class, "read_buf=", mrb_GLib_GIOChannel_set_read_buf, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOChannel_encoded_read_buf_FIELD_READER
  mrb_define_method(mrb, GIOChannel_class, "encoded_read_buf", mrb_GLib_GIOChannel_get_encoded_read_buf, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOChannel_encoded_read_buf_FIELD_WRITER
  mrb_define_method(mrb, GIOChannel_class, "encoded_read_buf=", mrb_GLib_GIOChannel_set_encoded_read_buf, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOChannel_write_buf_FIELD_READER
  mrb_define_method(mrb, GIOChannel_class, "write_buf", mrb_GLib_GIOChannel_get_write_buf, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOChannel_write_buf_FIELD_WRITER
  mrb_define_method(mrb, GIOChannel_class, "write_buf=", mrb_GLib_GIOChannel_set_write_buf, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOChannel_partial_write_buf_FIELD_READER
  mrb_define_method(mrb, GIOChannel_class, "partial_write_buf", mrb_GLib_GIOChannel_get_partial_write_buf, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOChannel_partial_write_buf_FIELD_WRITER
  mrb_define_method(mrb, GIOChannel_class, "partial_write_buf=", mrb_GLib_GIOChannel_set_partial_write_buf, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOChannel_use_buffer_FIELD_READER
  mrb_define_method(mrb, GIOChannel_class, "use_buffer", mrb_GLib_GIOChannel_get_use_buffer, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOChannel_use_buffer_FIELD_WRITER
  mrb_define_method(mrb, GIOChannel_class, "use_buffer=", mrb_GLib_GIOChannel_set_use_buffer, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOChannel_do_encode_FIELD_READER
  mrb_define_method(mrb, GIOChannel_class, "do_encode", mrb_GLib_GIOChannel_get_do_encode, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOChannel_do_encode_FIELD_WRITER
  mrb_define_method(mrb, GIOChannel_class, "do_encode=", mrb_GLib_GIOChannel_set_do_encode, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOChannel_close_on_unref_FIELD_READER
  mrb_define_method(mrb, GIOChannel_class, "close_on_unref", mrb_GLib_GIOChannel_get_close_on_unref, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOChannel_close_on_unref_FIELD_WRITER
  mrb_define_method(mrb, GIOChannel_class, "close_on_unref=", mrb_GLib_GIOChannel_set_close_on_unref, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOChannel_is_readable_FIELD_READER
  mrb_define_method(mrb, GIOChannel_class, "is_readable", mrb_GLib_GIOChannel_get_is_readable, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOChannel_is_readable_FIELD_WRITER
  mrb_define_method(mrb, GIOChannel_class, "is_readable=", mrb_GLib_GIOChannel_set_is_readable, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOChannel_is_writeable_FIELD_READER
  mrb_define_method(mrb, GIOChannel_class, "is_writeable", mrb_GLib_GIOChannel_get_is_writeable, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOChannel_is_writeable_FIELD_WRITER
  mrb_define_method(mrb, GIOChannel_class, "is_writeable=", mrb_GLib_GIOChannel_set_is_writeable, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOChannel_is_seekable_FIELD_READER
  mrb_define_method(mrb, GIOChannel_class, "is_seekable", mrb_GLib_GIOChannel_get_is_seekable, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOChannel_is_seekable_FIELD_WRITER
  mrb_define_method(mrb, GIOChannel_class, "is_seekable=", mrb_GLib_GIOChannel_set_is_seekable, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOChannel_reserved1_FIELD_READER
  mrb_define_method(mrb, GIOChannel_class, "reserved1", mrb_GLib_GIOChannel_get_reserved1, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOChannel_reserved1_FIELD_WRITER
  mrb_define_method(mrb, GIOChannel_class, "reserved1=", mrb_GLib_GIOChannel_set_reserved1, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOChannel_reserved2_FIELD_READER
  mrb_define_method(mrb, GIOChannel_class, "reserved2", mrb_GLib_GIOChannel_get_reserved2, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOChannel_reserved2_FIELD_WRITER
  mrb_define_method(mrb, GIOChannel_class, "reserved2=", mrb_GLib_GIOChannel_set_reserved2, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
