/*
 * struct _GIOChannel
 * Defined in file giochannel.h @ line 41
 */

#include "mruby_GLib.h"

#if BIND_GIOChannel_TYPE

/*
 * Class Methods
 */

#if BIND_GIOChannel_INITIALIZE
mrb_value
mrb_GLib_GIOChannel_initialize(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel* native_object = (struct _GIOChannel*)calloc(1, sizeof(struct _GIOChannel));
  mruby_giftwrap__GIOChannel_data_ptr(self, native_object);
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
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);

  gint native_ref_count = native_self->ref_count;

  mrb_value ref_count = mrb_fixnum_value(native_ref_count);

  return ref_count;
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
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);
  mrb_int native_ref_count;

  mrb_get_args(mrb, "i", &native_ref_count);

  native_self->ref_count = native_ref_count;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GIOChannel_funcs_FIELD_READER
/* get_funcs
 *
 * Return Type: GIOFuncs *
 */
mrb_value
mrb_GLib_GIOChannel_get_funcs(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);

  GIOFuncs * native_funcs = native_self->funcs;

  mrb_value funcs = (native_funcs == NULL ? mrb_nil_value() : mruby_box__GIOFuncs(mrb, native_funcs));

  return funcs;
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
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);
  mrb_value funcs;

  mrb_get_args(mrb, "o", &funcs);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, funcs, GIOFuncs_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GIOFuncs expected");
    return mrb_nil_value();
  }

  GIOFuncs * native_funcs = (mrb_nil_p(funcs) ? NULL : mruby_unbox__GIOFuncs(funcs));

  native_self->funcs = native_funcs;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GIOChannel_encoding_FIELD_READER
/* get_encoding
 *
 * Return Type: gchar *
 */
mrb_value
mrb_GLib_GIOChannel_get_encoding(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);

  gchar * native_encoding = native_self->encoding;

  mrb_value encoding = mrb_str_new_cstr(mrb, native_encoding);

  return encoding;
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
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);
  char * encoding = NULL;

  mrb_get_args(mrb, "z!", &encoding);

  /* WARNING: String is strdup'ed to avoid mutable reference to internal MRuby memory */
  char * native_encoding = strdup(encoding);

  if (NULL != native_self->encoding) free(native_self->encoding);
  native_self->encoding = native_encoding;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GIOChannel_read_cd_FIELD_READER
/* get_read_cd
 *
 * Return Type: GIConv
 */
mrb_value
mrb_GLib_GIOChannel_get_read_cd(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);

  GIConv native_read_cd = native_self->read_cd;

  mrb_value read_cd = TODO_mruby_box_GIConv(mrb, native_read_cd);

  return read_cd;
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
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);
  mrb_value read_cd;

  mrb_get_args(mrb, "o", &read_cd);

  /* type checking */
  TODO_type_check_GIConv(read_cd);

  GIConv native_read_cd = TODO_mruby_unbox_GIConv(read_cd);

  native_self->read_cd = native_read_cd;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GIOChannel_write_cd_FIELD_READER
/* get_write_cd
 *
 * Return Type: GIConv
 */
mrb_value
mrb_GLib_GIOChannel_get_write_cd(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);

  GIConv native_write_cd = native_self->write_cd;

  mrb_value write_cd = TODO_mruby_box_GIConv(mrb, native_write_cd);

  return write_cd;
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
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);
  mrb_value write_cd;

  mrb_get_args(mrb, "o", &write_cd);

  /* type checking */
  TODO_type_check_GIConv(write_cd);

  GIConv native_write_cd = TODO_mruby_unbox_GIConv(write_cd);

  native_self->write_cd = native_write_cd;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GIOChannel_line_term_FIELD_READER
/* get_line_term
 *
 * Return Type: gchar *
 */
mrb_value
mrb_GLib_GIOChannel_get_line_term(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);

  gchar * native_line_term = native_self->line_term;

  mrb_value line_term = mrb_str_new_cstr(mrb, native_line_term);

  return line_term;
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
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);
  char * line_term = NULL;

  mrb_get_args(mrb, "z!", &line_term);

  /* WARNING: String is strdup'ed to avoid mutable reference to internal MRuby memory */
  char * native_line_term = strdup(line_term);

  if (NULL != native_self->line_term) free(native_self->line_term);
  native_self->line_term = native_line_term;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GIOChannel_line_term_len_FIELD_READER
/* get_line_term_len
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GIOChannel_get_line_term_len(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);

  guint native_line_term_len = native_self->line_term_len;

  mrb_value line_term_len = mrb_fixnum_value(native_line_term_len);

  return line_term_len;
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
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);
  mrb_int native_line_term_len;

  mrb_get_args(mrb, "i", &native_line_term_len);

  native_self->line_term_len = native_line_term_len;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GIOChannel_buf_size_FIELD_READER
/* get_buf_size
 *
 * Return Type: gsize
 */
mrb_value
mrb_GLib_GIOChannel_get_buf_size(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);

  gsize native_buf_size = native_self->buf_size;

  mrb_value buf_size = mrb_fixnum_value(native_buf_size);

  return buf_size;
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
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);
  mrb_int native_buf_size;

  mrb_get_args(mrb, "i", &native_buf_size);

  native_self->buf_size = native_buf_size;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GIOChannel_read_buf_FIELD_READER
/* get_read_buf
 *
 * Return Type: GString *
 */
mrb_value
mrb_GLib_GIOChannel_get_read_buf(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);

  GString * native_read_buf = native_self->read_buf;

  mrb_value read_buf = (native_read_buf == NULL ? mrb_nil_value() : mruby_box__GString(mrb, native_read_buf));

  return read_buf;
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
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);
  mrb_value read_buf;

  mrb_get_args(mrb, "o", &read_buf);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, read_buf, GString_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GString expected");
    return mrb_nil_value();
  }

  GString * native_read_buf = (mrb_nil_p(read_buf) ? NULL : mruby_unbox__GString(read_buf));

  native_self->read_buf = native_read_buf;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GIOChannel_encoded_read_buf_FIELD_READER
/* get_encoded_read_buf
 *
 * Return Type: GString *
 */
mrb_value
mrb_GLib_GIOChannel_get_encoded_read_buf(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);

  GString * native_encoded_read_buf = native_self->encoded_read_buf;

  mrb_value encoded_read_buf = (native_encoded_read_buf == NULL ? mrb_nil_value() : mruby_box__GString(mrb, native_encoded_read_buf));

  return encoded_read_buf;
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
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);
  mrb_value encoded_read_buf;

  mrb_get_args(mrb, "o", &encoded_read_buf);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, encoded_read_buf, GString_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GString expected");
    return mrb_nil_value();
  }

  GString * native_encoded_read_buf = (mrb_nil_p(encoded_read_buf) ? NULL : mruby_unbox__GString(encoded_read_buf));

  native_self->encoded_read_buf = native_encoded_read_buf;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GIOChannel_write_buf_FIELD_READER
/* get_write_buf
 *
 * Return Type: GString *
 */
mrb_value
mrb_GLib_GIOChannel_get_write_buf(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);

  GString * native_write_buf = native_self->write_buf;

  mrb_value write_buf = (native_write_buf == NULL ? mrb_nil_value() : mruby_box__GString(mrb, native_write_buf));

  return write_buf;
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
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);
  mrb_value write_buf;

  mrb_get_args(mrb, "o", &write_buf);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, write_buf, GString_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GString expected");
    return mrb_nil_value();
  }

  GString * native_write_buf = (mrb_nil_p(write_buf) ? NULL : mruby_unbox__GString(write_buf));

  native_self->write_buf = native_write_buf;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GIOChannel_partial_write_buf_FIELD_READER
/* get_partial_write_buf
 *
 * Return Type: gchar [6]
 */
mrb_value
mrb_GLib_GIOChannel_get_partial_write_buf(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);

  gchar [6] native_partial_write_buf = native_self->partial_write_buf;

  mrb_value partial_write_buf = TODO_mruby_box_gchar_[6](mrb, native_partial_write_buf);

  return partial_write_buf;
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
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);
  mrb_value partial_write_buf;

  mrb_get_args(mrb, "o", &partial_write_buf);

  /* type checking */
  TODO_type_check_gchar_[6](partial_write_buf);

  gchar [6] native_partial_write_buf = TODO_mruby_unbox_gchar_[6](partial_write_buf);

  native_self->partial_write_buf = native_partial_write_buf;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GIOChannel_use_buffer_FIELD_READER
/* get_use_buffer
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GIOChannel_get_use_buffer(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);

  guint native_use_buffer = native_self->use_buffer;

  mrb_value use_buffer = mrb_fixnum_value(native_use_buffer);

  return use_buffer;
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
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);
  mrb_int native_use_buffer;

  mrb_get_args(mrb, "i", &native_use_buffer);

  native_self->use_buffer = native_use_buffer;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GIOChannel_do_encode_FIELD_READER
/* get_do_encode
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GIOChannel_get_do_encode(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);

  guint native_do_encode = native_self->do_encode;

  mrb_value do_encode = mrb_fixnum_value(native_do_encode);

  return do_encode;
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
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);
  mrb_int native_do_encode;

  mrb_get_args(mrb, "i", &native_do_encode);

  native_self->do_encode = native_do_encode;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GIOChannel_close_on_unref_FIELD_READER
/* get_close_on_unref
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GIOChannel_get_close_on_unref(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);

  guint native_close_on_unref = native_self->close_on_unref;

  mrb_value close_on_unref = mrb_fixnum_value(native_close_on_unref);

  return close_on_unref;
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
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);
  mrb_int native_close_on_unref;

  mrb_get_args(mrb, "i", &native_close_on_unref);

  native_self->close_on_unref = native_close_on_unref;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GIOChannel_is_readable_FIELD_READER
/* get_is_readable
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GIOChannel_get_is_readable(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);

  guint native_is_readable = native_self->is_readable;

  mrb_value is_readable = mrb_fixnum_value(native_is_readable);

  return is_readable;
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
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);
  mrb_int native_is_readable;

  mrb_get_args(mrb, "i", &native_is_readable);

  native_self->is_readable = native_is_readable;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GIOChannel_is_writeable_FIELD_READER
/* get_is_writeable
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GIOChannel_get_is_writeable(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);

  guint native_is_writeable = native_self->is_writeable;

  mrb_value is_writeable = mrb_fixnum_value(native_is_writeable);

  return is_writeable;
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
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);
  mrb_int native_is_writeable;

  mrb_get_args(mrb, "i", &native_is_writeable);

  native_self->is_writeable = native_is_writeable;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GIOChannel_is_seekable_FIELD_READER
/* get_is_seekable
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GIOChannel_get_is_seekable(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);

  guint native_is_seekable = native_self->is_seekable;

  mrb_value is_seekable = mrb_fixnum_value(native_is_seekable);

  return is_seekable;
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
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);
  mrb_int native_is_seekable;

  mrb_get_args(mrb, "i", &native_is_seekable);

  native_self->is_seekable = native_is_seekable;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GIOChannel_reserved1_FIELD_READER
/* get_reserved1
 *
 * Return Type: gpointer
 */
mrb_value
mrb_GLib_GIOChannel_get_reserved1(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);

  gpointer native_reserved1 = native_self->reserved1;

  mrb_value reserved1 = TODO_mruby_box_gpointer(mrb, native_reserved1);

  return reserved1;
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
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);
  mrb_value reserved1;

  mrb_get_args(mrb, "o", &reserved1);

  /* type checking */
  TODO_type_check_gpointer(reserved1);

  gpointer native_reserved1 = TODO_mruby_unbox_gpointer(reserved1);

  native_self->reserved1 = native_reserved1;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GIOChannel_reserved2_FIELD_READER
/* get_reserved2
 *
 * Return Type: gpointer
 */
mrb_value
mrb_GLib_GIOChannel_get_reserved2(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);

  gpointer native_reserved2 = native_self->reserved2;

  mrb_value reserved2 = TODO_mruby_box_gpointer(mrb, native_reserved2);

  return reserved2;
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
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);
  mrb_value reserved2;

  mrb_get_args(mrb, "o", &reserved2);

  /* type checking */
  TODO_type_check_gpointer(reserved2);

  gpointer native_reserved2 = TODO_mruby_unbox_gpointer(reserved2);

  native_self->reserved2 = native_reserved2;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
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
