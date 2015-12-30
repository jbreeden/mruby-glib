/*
 * struct _GOutputMessage
 * Defined in file giotypes.h @ line 451
 */

#include "mruby_GLib.h"

#if BIND_GOutputMessage_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GOutputMessage::initialize */
/* sha: 737904bb8a797a7714a23f621f664639ec88dec13a172021079553fd9857b85a */
#if BIND_GOutputMessage_INITIALIZE
mrb_value
mrb_GLib_GOutputMessage_initialize(mrb_state* mrb, mrb_value self) {
  struct _GOutputMessage* native_object = (struct _GOutputMessage*)calloc(1, sizeof(struct _GOutputMessage));
  mruby_giftwrap__GOutputMessage_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputMessage::initialize */
/* sha: 03e87c1d9cbc49755207baa6cb50b66c2fd58f16af00fb114c277154a5b5a476 */
mrb_value
mrb_GLib_GOutputMessage_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GOutputMessage.disown only accepts objects of type GLib::GOutputMessage");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputMessage::belongs_to_ruby */
/* sha: ea2299b824cd748c8b2e1b95549c60d39267bdc1c4c3f54b8e01d3c38036a0ed */
mrb_value
mrb_GLib_GOutputMessage_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GOutputMessage.belongs_to_ruby only accepts objects of type GLib::GOutputMessage");
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

/* MRUBY_BINDING: GOutputMessage::address_reader */
/* sha: a20a4529e757a1335f1c4e5879a3b0be4949ba09907468b6422931530daedf34 */
#if BIND_GOutputMessage_address_FIELD_READER
/* get_address
 *
 * Return Type: GSocketAddress *
 */
mrb_value
mrb_GLib_GOutputMessage_get_address(mrb_state* mrb, mrb_value self) {
  struct _GOutputMessage * native_self = mruby_unbox__GOutputMessage(self);

  GSocketAddress * native_address = native_self->address;

  mrb_value address = (native_address == NULL ? mrb_nil_value() : mruby_box__GSocketAddress(mrb, native_address));

  return address;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputMessage::address_writer */
/* sha: 479c2f9a3648274c4cd5a1d52bc592ff50be632726e5724776fb6bf4fa2bd854 */
#if BIND_GOutputMessage_address_FIELD_WRITER
/* set_address
 *
 * Parameters:
 * - value: GSocketAddress *
 */
mrb_value
mrb_GLib_GOutputMessage_set_address(mrb_state* mrb, mrb_value self) {
  struct _GOutputMessage * native_self = mruby_unbox__GOutputMessage(self);
  mrb_value address;

  mrb_get_args(mrb, "o", &address);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, address, GSocketAddress_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GSocketAddress expected");
    return mrb_nil_value();
  }

  GSocketAddress * native_address = (mrb_nil_p(address) ? NULL : mruby_unbox__GSocketAddress(address));

  native_self->address = native_address;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputMessage::vectors_reader */
/* sha: 73d94a14c1cccd2a00466df30bd12c087922aef3f1b7a88a103ab5d45ede5d97 */
#if BIND_GOutputMessage_vectors_FIELD_READER
/* get_vectors
 *
 * Return Type: GOutputVector *
 */
mrb_value
mrb_GLib_GOutputMessage_get_vectors(mrb_state* mrb, mrb_value self) {
  struct _GOutputMessage * native_self = mruby_unbox__GOutputMessage(self);

  GOutputVector * native_vectors = native_self->vectors;

  mrb_value vectors = (native_vectors == NULL ? mrb_nil_value() : mruby_box__GOutputVector(mrb, native_vectors));

  return vectors;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputMessage::vectors_writer */
/* sha: 6e61a2330aacfb5f5e78d7fc664f24dd94b501aaa1d9614b198f7f98a42fce45 */
#if BIND_GOutputMessage_vectors_FIELD_WRITER
/* set_vectors
 *
 * Parameters:
 * - value: GOutputVector *
 */
mrb_value
mrb_GLib_GOutputMessage_set_vectors(mrb_state* mrb, mrb_value self) {
  struct _GOutputMessage * native_self = mruby_unbox__GOutputMessage(self);
  mrb_value vectors;

  mrb_get_args(mrb, "o", &vectors);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, vectors, GOutputVector_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GOutputVector expected");
    return mrb_nil_value();
  }

  GOutputVector * native_vectors = (mrb_nil_p(vectors) ? NULL : mruby_unbox__GOutputVector(vectors));

  native_self->vectors = native_vectors;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputMessage::num_vectors_reader */
/* sha: 3c81d927081a7cdfb612413fa7fb3655d7a3e5782c1e6b136f3024a51070097b */
#if BIND_GOutputMessage_num_vectors_FIELD_READER
/* get_num_vectors
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GOutputMessage_get_num_vectors(mrb_state* mrb, mrb_value self) {
  struct _GOutputMessage * native_self = mruby_unbox__GOutputMessage(self);

  guint native_num_vectors = native_self->num_vectors;

  mrb_value num_vectors = mrb_fixnum_value(native_num_vectors);

  return num_vectors;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputMessage::num_vectors_writer */
/* sha: 452ce9033041cc7a0f5ce0d4d7fa0a24098b77f965894aec18de0dfec5b55aa3 */
#if BIND_GOutputMessage_num_vectors_FIELD_WRITER
/* set_num_vectors
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GOutputMessage_set_num_vectors(mrb_state* mrb, mrb_value self) {
  struct _GOutputMessage * native_self = mruby_unbox__GOutputMessage(self);
  mrb_int native_num_vectors;

  mrb_get_args(mrb, "i", &native_num_vectors);

  native_self->num_vectors = native_num_vectors;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputMessage::bytes_sent_reader */
/* sha: 6a992109b3b92e3e9ca0d7c7c75c340ba9e5cdf541651f54299a5a192313fd82 */
#if BIND_GOutputMessage_bytes_sent_FIELD_READER
/* get_bytes_sent
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GOutputMessage_get_bytes_sent(mrb_state* mrb, mrb_value self) {
  struct _GOutputMessage * native_self = mruby_unbox__GOutputMessage(self);

  guint native_bytes_sent = native_self->bytes_sent;

  mrb_value bytes_sent = mrb_fixnum_value(native_bytes_sent);

  return bytes_sent;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputMessage::bytes_sent_writer */
/* sha: ab5b7c31ca0d4a0cfb95dffc764a4733796b21e53c2ce7f790263f2a9a13b64a */
#if BIND_GOutputMessage_bytes_sent_FIELD_WRITER
/* set_bytes_sent
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GOutputMessage_set_bytes_sent(mrb_state* mrb, mrb_value self) {
  struct _GOutputMessage * native_self = mruby_unbox__GOutputMessage(self);
  mrb_int native_bytes_sent;

  mrb_get_args(mrb, "i", &native_bytes_sent);

  native_self->bytes_sent = native_bytes_sent;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputMessage::control_messages_reader */
/* sha: 89b49a354777876287a9ca6cc35f4678b8735443fadffcb9ce39392b813fec6b */
#if BIND_GOutputMessage_control_messages_FIELD_READER
/* get_control_messages
 *
 * Return Type: GSocketControlMessage **
 */
mrb_value
mrb_GLib_GOutputMessage_get_control_messages(mrb_state* mrb, mrb_value self) {
  struct _GOutputMessage * native_self = mruby_unbox__GOutputMessage(self);

  GSocketControlMessage ** native_control_messages = native_self->control_messages;

  mrb_value control_messages = TODO_mruby_box_GSocketControlMessage_PTR_PTR(mrb, native_control_messages);

  return control_messages;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputMessage::control_messages_writer */
/* sha: 7fefe46b869b24925f0ecf68a2388a7e1522726fea25bd49352005b105c4e979 */
#if BIND_GOutputMessage_control_messages_FIELD_WRITER
/* set_control_messages
 *
 * Parameters:
 * - value: GSocketControlMessage **
 */
mrb_value
mrb_GLib_GOutputMessage_set_control_messages(mrb_state* mrb, mrb_value self) {
  struct _GOutputMessage * native_self = mruby_unbox__GOutputMessage(self);
  mrb_value control_messages;

  mrb_get_args(mrb, "o", &control_messages);

  /* type checking */
  TODO_type_check_GSocketControlMessage_PTR_PTR(control_messages);

  GSocketControlMessage ** native_control_messages = TODO_mruby_unbox_GSocketControlMessage_PTR_PTR(control_messages);

  native_self->control_messages = native_control_messages;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputMessage::num_control_messages_reader */
/* sha: a05fab2f02affe50c60c0033167ce35f7f8a6c0996df04f2068d16e434060b1c */
#if BIND_GOutputMessage_num_control_messages_FIELD_READER
/* get_num_control_messages
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GOutputMessage_get_num_control_messages(mrb_state* mrb, mrb_value self) {
  struct _GOutputMessage * native_self = mruby_unbox__GOutputMessage(self);

  guint native_num_control_messages = native_self->num_control_messages;

  mrb_value num_control_messages = mrb_fixnum_value(native_num_control_messages);

  return num_control_messages;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputMessage::num_control_messages_writer */
/* sha: 6af4efd78a4b2d38888b4a0f60b57874a8518359169f713c06a08aa21b37307f */
#if BIND_GOutputMessage_num_control_messages_FIELD_WRITER
/* set_num_control_messages
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GOutputMessage_set_num_control_messages(mrb_state* mrb, mrb_value self) {
  struct _GOutputMessage * native_self = mruby_unbox__GOutputMessage(self);
  mrb_int native_num_control_messages;

  mrb_get_args(mrb, "i", &native_num_control_messages);

  native_self->num_control_messages = native_num_control_messages;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_GLib_GOutputMessage_init(mrb_state* mrb) {
  struct RClass* GOutputMessage_class = mrb_define_class_under(mrb, GLib_module(mrb), "GOutputMessage", mrb->object_class);
  MRB_SET_INSTANCE_TT(GOutputMessage_class, MRB_TT_DATA);

#if BIND_GOutputMessage_INITIALIZE
  mrb_define_method(mrb, GOutputMessage_class, "initialize", mrb_GLib_GOutputMessage_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GOutputMessage_class, "disown", mrb_GLib_GOutputMessage_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GOutputMessage_class, "belongs_to_ruby?", mrb_GLib_GOutputMessage_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GOutputMessage_address_FIELD_READER
  mrb_define_method(mrb, GOutputMessage_class, "address", mrb_GLib_GOutputMessage_get_address, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GOutputMessage_address_FIELD_WRITER
  mrb_define_method(mrb, GOutputMessage_class, "address=", mrb_GLib_GOutputMessage_set_address, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GOutputMessage_vectors_FIELD_READER
  mrb_define_method(mrb, GOutputMessage_class, "vectors", mrb_GLib_GOutputMessage_get_vectors, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GOutputMessage_vectors_FIELD_WRITER
  mrb_define_method(mrb, GOutputMessage_class, "vectors=", mrb_GLib_GOutputMessage_set_vectors, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GOutputMessage_num_vectors_FIELD_READER
  mrb_define_method(mrb, GOutputMessage_class, "num_vectors", mrb_GLib_GOutputMessage_get_num_vectors, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GOutputMessage_num_vectors_FIELD_WRITER
  mrb_define_method(mrb, GOutputMessage_class, "num_vectors=", mrb_GLib_GOutputMessage_set_num_vectors, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GOutputMessage_bytes_sent_FIELD_READER
  mrb_define_method(mrb, GOutputMessage_class, "bytes_sent", mrb_GLib_GOutputMessage_get_bytes_sent, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GOutputMessage_bytes_sent_FIELD_WRITER
  mrb_define_method(mrb, GOutputMessage_class, "bytes_sent=", mrb_GLib_GOutputMessage_set_bytes_sent, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GOutputMessage_control_messages_FIELD_READER
  mrb_define_method(mrb, GOutputMessage_class, "control_messages", mrb_GLib_GOutputMessage_get_control_messages, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GOutputMessage_control_messages_FIELD_WRITER
  mrb_define_method(mrb, GOutputMessage_class, "control_messages=", mrb_GLib_GOutputMessage_set_control_messages, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GOutputMessage_num_control_messages_FIELD_READER
  mrb_define_method(mrb, GOutputMessage_class, "num_control_messages", mrb_GLib_GOutputMessage_get_num_control_messages, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GOutputMessage_num_control_messages_FIELD_WRITER
  mrb_define_method(mrb, GOutputMessage_class, "num_control_messages=", mrb_GLib_GOutputMessage_set_num_control_messages, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
