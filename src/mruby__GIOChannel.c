/*
 * struct _GIOChannel
 * Defined in file giochannel.h @ line 41
 */

#include "mruby_GLib.h"

#if BIND_GIOChannel_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GIOChannel::initialize */
/* sha: d72dcaa5f43eb30357f26d1f02342248aa199f939fd39bcead37d12c24c38962 */
#if BIND_GIOChannel_INITIALIZE
mrb_value
mrb_GLib_GIOChannel_initialize(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel* native_object = (struct _GIOChannel*)calloc(1, sizeof(struct _GIOChannel));
  mruby_giftwrap__GIOChannel_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOChannel::initialize */
/* sha: 5171768b662587fae587528396be19b4fd896e65704d60c070f65aa8f39032a8 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOChannel::belongs_to_ruby */
/* sha: d79fbc225ad371fdbcb0c335f80d7ecd08e4f27620b1d69c26b6dea8d3f5dae7 */
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
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: GIOChannel::ref_count_reader */
/* sha: cb3320275fb990ec1c0b6c99f4e259bfb1e65913cc63bafd5c439cb60b48b142 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOChannel::ref_count_writer */
/* sha: 5200532a5ffec2cd5fe0a8caa3d533506afef3f4d2a95bea9571bc6b35e42d55 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOChannel::funcs_reader */
/* sha: 4ca4d0dea01eae50e58c453981adc00d396639c51624ab05ca15d6d3bd51bc5f */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOChannel::funcs_writer */
/* sha: 8b0242c5c2652f84530f9b4f95cb67b80cf7c3cc6f25292e9d7abc52074ad432 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOChannel::encoding_reader */
/* sha: 9a67f0b31e1b566e262bb1a9db4da7c56285034eb2d26203b121f12597b66671 */
#if BIND_GIOChannel_encoding_FIELD_READER
/* get_encoding
 *
 * Return Type: gchar *
 */
mrb_value
mrb_GLib_GIOChannel_get_encoding(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);

  gchar * native_encoding = native_self->encoding;

  mrb_value encoding = TODO_mruby_box_gchar_PTR(mrb, native_encoding);

  return encoding;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOChannel::encoding_writer */
/* sha: e6d4193ca29827ab2a450e8ce83b4db226452fea59f2e070a9b1ec0e14e9c76e */
#if BIND_GIOChannel_encoding_FIELD_WRITER
/* set_encoding
 *
 * Parameters:
 * - value: gchar *
 */
mrb_value
mrb_GLib_GIOChannel_set_encoding(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);
  mrb_value encoding;

  mrb_get_args(mrb, "o", &encoding);

  /* type checking */
  TODO_type_check_gchar_PTR(encoding);

  gchar * native_encoding = TODO_mruby_unbox_gchar_PTR(encoding);

  native_self->encoding = native_encoding;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOChannel::read_cd_reader */
/* sha: c8e8b6dc7f1e6fdde549bfc47b9982b26fefe390973394f6f5f86f6de204518c */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOChannel::read_cd_writer */
/* sha: b22e91165de3b20a7ba88f8a3e7bbf9df39c10f675e66fd6b1ee1392913cea59 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOChannel::write_cd_reader */
/* sha: 068a8cea854ae24dc2a6dfad9cd2afa6f70c7a96eb7baf4db2e5b083dfc5e7b0 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOChannel::write_cd_writer */
/* sha: f43c188c1ad646362d7f098c8d4f40a0140b9d9dcf47a6dcf02fa6c58d3a7841 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOChannel::line_term_reader */
/* sha: 779d06e0a3ae4425ef8c62a141a66c4b0cf2d6d6341a7f7ea1053e4b2f5b6524 */
#if BIND_GIOChannel_line_term_FIELD_READER
/* get_line_term
 *
 * Return Type: gchar *
 */
mrb_value
mrb_GLib_GIOChannel_get_line_term(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);

  gchar * native_line_term = native_self->line_term;

  mrb_value line_term = TODO_mruby_box_gchar_PTR(mrb, native_line_term);

  return line_term;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOChannel::line_term_writer */
/* sha: 644381c58d4c5d8d37495892fda11fd4311520a31cc4c3b7372c416897c2add7 */
#if BIND_GIOChannel_line_term_FIELD_WRITER
/* set_line_term
 *
 * Parameters:
 * - value: gchar *
 */
mrb_value
mrb_GLib_GIOChannel_set_line_term(mrb_state* mrb, mrb_value self) {
  struct _GIOChannel * native_self = mruby_unbox__GIOChannel(self);
  mrb_value line_term;

  mrb_get_args(mrb, "o", &line_term);

  /* type checking */
  TODO_type_check_gchar_PTR(line_term);

  gchar * native_line_term = TODO_mruby_unbox_gchar_PTR(line_term);

  native_self->line_term = native_line_term;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOChannel::line_term_len_reader */
/* sha: e9999b0d621fd57114f637627e8c773925ca17bf50df5e2368e372ff6146e732 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOChannel::line_term_len_writer */
/* sha: 4a68299a8cd2c8371b84abfa96053ee61f8d35dd30474fa3f6cea75d8ea5b6e0 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOChannel::buf_size_reader */
/* sha: 983b07125fd00e68338291b07b7f76c810c87d52f05e4d732610918b10f4d4d5 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOChannel::buf_size_writer */
/* sha: 9c2e2f1d61327a96d7447e455f7e538de3d64b03fab80bf8eb37904a93680457 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOChannel::read_buf_reader */
/* sha: 48585df1c49282d79757d4695100c2525b51eb42170d5e5e3332ebbdb2884bd8 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOChannel::read_buf_writer */
/* sha: 4c08e9c56532e7c1f6a737573c3b3188390af6a5f163c7c8fe1c42d37f19346c */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOChannel::encoded_read_buf_reader */
/* sha: f360892a5ea28ad2c2eff35e50564e47c6aa740d9de7476b74fb3dee639a3af2 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOChannel::encoded_read_buf_writer */
/* sha: 15efc0771c6433797fd7b053cc36224dd36454a974f6c7d326a6e07f3ba34d39 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOChannel::write_buf_reader */
/* sha: 9bfc26fce8b8810ea92bb74bb910aa95b7c46545c53f4fd0e19e88cc572e5a6e */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOChannel::write_buf_writer */
/* sha: 08defb43b5b31b6c35a6b0b07396b4418082c574406e154220db34709544e28c */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOChannel::partial_write_buf_reader */
/* sha: 53bb72dfb83cffa330d652e8d1284a6ae954fdfbbabd1e97e69bc36c9bba1a62 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOChannel::partial_write_buf_writer */
/* sha: dc6d30d7a4a4af9818f01900f94ec546aa69a0430ee9d5e82dfd9b39bea4e8d3 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOChannel::use_buffer_reader */
/* sha: 40db89e14bd233e639b4c1fb5eac0bc8983ca069d1e66545b20c8166ac3e6f15 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOChannel::use_buffer_writer */
/* sha: 2a8a9d0868b9b0c1616d6fb1f0e94e9b92e94c88ac366d98e0574e6f7f3645f4 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOChannel::do_encode_reader */
/* sha: 5656967fbcebb84dfdf2e754eb22e2c46d0067371deba91da495c3b4379f333d */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOChannel::do_encode_writer */
/* sha: 6748aa01b270547554f71239fabf8952cb63825229c438ef7a3a1699ed608308 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOChannel::close_on_unref_reader */
/* sha: 13bb8881e9a7fbfffa0ad7ecd345ca9b777048d1c218050654f9127dc6903280 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOChannel::close_on_unref_writer */
/* sha: af05a7a76b53cf5d3e91887377819f323455d30c35e422d692185fce65bf3066 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOChannel::is_readable_reader */
/* sha: 7f99b809424d7c3e1a464f44105df4e071f7b2b07542eebf47760b434af36563 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOChannel::is_readable_writer */
/* sha: 322fc9a9815075a69123bdc38323daa832ef9487142cb8591fbc1b838148fd7b */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOChannel::is_writeable_reader */
/* sha: 09ba5ae420eadc7f7b66028a5b51a7c3dd41c1ead79597d776ec61662190c19b */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOChannel::is_writeable_writer */
/* sha: 1ad7bb22b05e2605c732a3a6a57553e87afacdfd48e16a4612583d1021b10b51 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOChannel::is_seekable_reader */
/* sha: 79f290606365f5a94a6b531348974315fbc76c2c7a888959b81d4f50fc0d0da1 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOChannel::is_seekable_writer */
/* sha: aa7edc28ef25b0f825287882507cedd9ba1a10a3168d2deb5846478357d479f8 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOChannel::reserved1_reader */
/* sha: 8b1e0a5ecb3f7d57ecbb25e21e907f157d3d227409579599c24f70bb58d139dc */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOChannel::reserved1_writer */
/* sha: ba3105d326d8c01c231b18c316908773bc65aa95859ea0b497f17685f132d2b9 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOChannel::reserved2_reader */
/* sha: 5c08293ee100a4f2fbcbaef92efabd2315361773cadc297e2b1b9b87b83e726a */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOChannel::reserved2_writer */
/* sha: 4f138a8fae28c8a7a14146124be7098c0ac7a02e1620ae447a7218e5a218bcff */
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
/* MRUBY_BINDING_END */


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
