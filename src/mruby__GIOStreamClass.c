/*
 * struct _GIOStreamClass
 * Defined in file giostream.h @ line 39
 */

#include "mruby_GLib.h"

#if BIND_GIOStreamClass_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GIOStreamClass::initialize */
/* sha: b31f358a7efd7441c25dfb832d7d936aca51bef70716f68fce413737d25274b9 */
#if BIND_GIOStreamClass_INITIALIZE
mrb_value
mrb_GLib_GIOStreamClass_initialize(mrb_state* mrb, mrb_value self) {
  struct _GIOStreamClass* native_object = (struct _GIOStreamClass*)calloc(1, sizeof(struct _GIOStreamClass));
  mruby_giftwrap__GIOStreamClass_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamClass::initialize */
/* sha: 82b0dcc59f7f8f2903f4e06e5853f37197c1c6fbb297424ba28c04ef26b2039c */
mrb_value
mrb_GLib_GIOStreamClass_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GIOStreamClass.disown only accepts objects of type GLib::GIOStreamClass");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamClass::belongs_to_ruby */
/* sha: 9b77b1669fe1f8283192f2c98831f8599ad995d06a0352603ef9201d69c36b1a */
mrb_value
mrb_GLib_GIOStreamClass_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GIOStreamClass.belongs_to_ruby only accepts objects of type GLib::GIOStreamClass");
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

/* MRUBY_BINDING: GIOStreamClass::parent_class_reader */
/* sha: a6df3783a43c65764fe4d4ed3bb78bbf906d800ba223b27a805d9c73af011cae */
#if BIND_GIOStreamClass_parent_class_FIELD_READER
/* get_parent_class
 *
 * Return Type: GObjectClass
 */
mrb_value
mrb_GLib_GIOStreamClass_get_parent_class(mrb_state* mrb, mrb_value self) {
  struct _GIOStreamClass * native_self = mruby_unbox__GIOStreamClass(self);

  GObjectClass native_parent_class = native_self->parent_class;

  mrb_value parent_class = TODO_mruby_box_GObjectClass(mrb, native_parent_class);

  return parent_class;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamClass::parent_class_writer */
/* sha: 194642ca23e90bfba2dbd31421b4e17e900a997abee982c5efc130f36adde0f3 */
#if BIND_GIOStreamClass_parent_class_FIELD_WRITER
/* set_parent_class
 *
 * Parameters:
 * - value: GObjectClass
 */
mrb_value
mrb_GLib_GIOStreamClass_set_parent_class(mrb_state* mrb, mrb_value self) {
  struct _GIOStreamClass * native_self = mruby_unbox__GIOStreamClass(self);
  mrb_value parent_class;

  mrb_get_args(mrb, "o", &parent_class);

  /* type checking */
  TODO_type_check_GObjectClass(parent_class);

  GObjectClass native_parent_class = TODO_mruby_unbox_GObjectClass(parent_class);

  native_self->parent_class = native_parent_class;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamClass::get_input_stream_reader */
/* sha: 0d51f2a2836417d6d20a0c7f07928dfbbed72eccf701b61f3d1af8e808f754a8 */
#if BIND_GIOStreamClass_get_input_stream_FIELD_READER
/* get_get_input_stream
 *
 * Return Type: GInputStream *(*)(GIOStream *)
 */
mrb_value
mrb_GLib_GIOStreamClass_get_get_input_stream(mrb_state* mrb, mrb_value self) {
  struct _GIOStreamClass * native_self = mruby_unbox__GIOStreamClass(self);

  GInputStream *(*)(GIOStream *) native_get_input_stream = native_self->get_input_stream;

  mrb_value get_input_stream = TODO_mruby_box_GInputStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GIOStream_PTR_RPAREN(mrb, native_get_input_stream);

  return get_input_stream;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamClass::get_input_stream_writer */
/* sha: 85deea959404ba6b9bcbfdbe9cd85f5387a3241cca3dd15d3fce4287fdb09768 */
#if BIND_GIOStreamClass_get_input_stream_FIELD_WRITER
/* set_get_input_stream
 *
 * Parameters:
 * - value: GInputStream *(*)(GIOStream *)
 */
mrb_value
mrb_GLib_GIOStreamClass_set_get_input_stream(mrb_state* mrb, mrb_value self) {
  struct _GIOStreamClass * native_self = mruby_unbox__GIOStreamClass(self);
  mrb_value get_input_stream;

  mrb_get_args(mrb, "o", &get_input_stream);

  /* type checking */
  TODO_type_check_GInputStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GIOStream_PTR_RPAREN(get_input_stream);

  GInputStream *(*native_get_input_stream)(GIOStream *) = TODO_mruby_unbox_GInputStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GIOStream_PTR_RPAREN(get_input_stream);

  native_self->get_input_stream = native_get_input_stream;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamClass::get_output_stream_reader */
/* sha: 6f13650efb8306cfc4c5269d1079ef126721483cd1c79b17986d9cbc453f5f0b */
#if BIND_GIOStreamClass_get_output_stream_FIELD_READER
/* get_get_output_stream
 *
 * Return Type: GOutputStream *(*)(GIOStream *)
 */
mrb_value
mrb_GLib_GIOStreamClass_get_get_output_stream(mrb_state* mrb, mrb_value self) {
  struct _GIOStreamClass * native_self = mruby_unbox__GIOStreamClass(self);

  GOutputStream *(*)(GIOStream *) native_get_output_stream = native_self->get_output_stream;

  mrb_value get_output_stream = TODO_mruby_box_GOutputStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GIOStream_PTR_RPAREN(mrb, native_get_output_stream);

  return get_output_stream;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamClass::get_output_stream_writer */
/* sha: af08bafca6f2476d6dc777227e9b6f0171b274f5f057c566997382a3a827fb7a */
#if BIND_GIOStreamClass_get_output_stream_FIELD_WRITER
/* set_get_output_stream
 *
 * Parameters:
 * - value: GOutputStream *(*)(GIOStream *)
 */
mrb_value
mrb_GLib_GIOStreamClass_set_get_output_stream(mrb_state* mrb, mrb_value self) {
  struct _GIOStreamClass * native_self = mruby_unbox__GIOStreamClass(self);
  mrb_value get_output_stream;

  mrb_get_args(mrb, "o", &get_output_stream);

  /* type checking */
  TODO_type_check_GOutputStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GIOStream_PTR_RPAREN(get_output_stream);

  GOutputStream *(*native_get_output_stream)(GIOStream *) = TODO_mruby_unbox_GOutputStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GIOStream_PTR_RPAREN(get_output_stream);

  native_self->get_output_stream = native_get_output_stream;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamClass::close_fn_reader */
/* sha: 297ce15a5cc10ba6c6a9088b345e7fbb90ea347d371c14f560e1f05354d47e71 */
#if BIND_GIOStreamClass_close_fn_FIELD_READER
/* get_close_fn
 *
 * Return Type: gboolean (*)(GIOStream *, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GIOStreamClass_get_close_fn(mrb_state* mrb, mrb_value self) {
  struct _GIOStreamClass * native_self = mruby_unbox__GIOStreamClass(self);

  gboolean (*)(GIOStream *, GCancellable *, GError **) native_close_fn = native_self->close_fn;

  mrb_value close_fn = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GIOStream_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_close_fn);

  return close_fn;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamClass::close_fn_writer */
/* sha: 04082f255f6f052dfe4bf769b548fb4fa648093e8f4dab817e7180e4676ef975 */
#if BIND_GIOStreamClass_close_fn_FIELD_WRITER
/* set_close_fn
 *
 * Parameters:
 * - value: gboolean (*)(GIOStream *, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GIOStreamClass_set_close_fn(mrb_state* mrb, mrb_value self) {
  struct _GIOStreamClass * native_self = mruby_unbox__GIOStreamClass(self);
  mrb_value close_fn;

  mrb_get_args(mrb, "o", &close_fn);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GIOStream_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(close_fn);

  gboolean (*native_close_fn)(GIOStream *, GCancellable *, GError **) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GIOStream_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(close_fn);

  native_self->close_fn = native_close_fn;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamClass::close_async_reader */
/* sha: 528f4595b03259bc6b7a47e062a511f829cbde080a41031a30b51d21defc42c8 */
#if BIND_GIOStreamClass_close_async_FIELD_READER
/* get_close_async
 *
 * Return Type: void (*)(GIOStream *, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GIOStreamClass_get_close_async(mrb_state* mrb, mrb_value self) {
  struct _GIOStreamClass * native_self = mruby_unbox__GIOStreamClass(self);

  void (*)(GIOStream *, int, GCancellable *, GAsyncReadyCallback, gpointer) native_close_async = native_self->close_async;

  mrb_value close_async = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GIOStream_PTR_COMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(mrb, native_close_async);

  return close_async;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamClass::close_async_writer */
/* sha: 8e83b53dccce3809bcc5ae2e2dfe19975f2f7ea8200486495e3f957f9cfd63b9 */
#if BIND_GIOStreamClass_close_async_FIELD_WRITER
/* set_close_async
 *
 * Parameters:
 * - value: void (*)(GIOStream *, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GIOStreamClass_set_close_async(mrb_state* mrb, mrb_value self) {
  struct _GIOStreamClass * native_self = mruby_unbox__GIOStreamClass(self);
  mrb_value close_async;

  mrb_get_args(mrb, "o", &close_async);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GIOStream_PTR_COMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(close_async);

  void (*native_close_async)(GIOStream *, int, GCancellable *, GAsyncReadyCallback, gpointer) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GIOStream_PTR_COMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(close_async);

  native_self->close_async = native_close_async;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamClass::close_finish_reader */
/* sha: fd10dd5e51771706f059a8111d56bd4ba8f45f7b99ccac49e6523f1bf7caae90 */
#if BIND_GIOStreamClass_close_finish_FIELD_READER
/* get_close_finish
 *
 * Return Type: gboolean (*)(GIOStream *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GIOStreamClass_get_close_finish(mrb_state* mrb, mrb_value self) {
  struct _GIOStreamClass * native_self = mruby_unbox__GIOStreamClass(self);

  gboolean (*)(GIOStream *, GAsyncResult *, GError **) native_close_finish = native_self->close_finish;

  mrb_value close_finish = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GIOStream_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_close_finish);

  return close_finish;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamClass::close_finish_writer */
/* sha: c4cb1432669b3f7cab4616b0ee3190854e20d3da3376cc358d7a2634e0b09882 */
#if BIND_GIOStreamClass_close_finish_FIELD_WRITER
/* set_close_finish
 *
 * Parameters:
 * - value: gboolean (*)(GIOStream *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GIOStreamClass_set_close_finish(mrb_state* mrb, mrb_value self) {
  struct _GIOStreamClass * native_self = mruby_unbox__GIOStreamClass(self);
  mrb_value close_finish;

  mrb_get_args(mrb, "o", &close_finish);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GIOStream_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(close_finish);

  gboolean (*native_close_finish)(GIOStream *, GAsyncResult *, GError **) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GIOStream_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(close_finish);

  native_self->close_finish = native_close_finish;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamClass::_g_reserved1_reader */
/* sha: 78b82ccc936f6397f57970bce2558ce84f4caba9a1f7c62b3f08fa518971a702 */
#if BIND_GIOStreamClass__g_reserved1_FIELD_READER
/* get__g_reserved1
 *
 * Return Type: void (*)(void)
 */
mrb_value
mrb_GLib_GIOStreamClass_get__g_reserved1(mrb_state* mrb, mrb_value self) {
  struct _GIOStreamClass * native_self = mruby_unbox__GIOStreamClass(self);

  void (*)(void) native__g_reserved1 = native_self->_g_reserved1;

  mrb_value _g_reserved1 = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native__g_reserved1);

  return _g_reserved1;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamClass::_g_reserved1_writer */
/* sha: 32fd97421ed18fd76a92b53a9f02dc2d841a88d6a1d7e9576b16489c39a41eb1 */
#if BIND_GIOStreamClass__g_reserved1_FIELD_WRITER
/* set__g_reserved1
 *
 * Parameters:
 * - value: void (*)(void)
 */
mrb_value
mrb_GLib_GIOStreamClass_set__g_reserved1(mrb_state* mrb, mrb_value self) {
  struct _GIOStreamClass * native_self = mruby_unbox__GIOStreamClass(self);
  mrb_value _g_reserved1;

  mrb_get_args(mrb, "o", &_g_reserved1);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(_g_reserved1);

  void (*native__g_reserved1)(void) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(_g_reserved1);

  native_self->_g_reserved1 = native__g_reserved1;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamClass::_g_reserved2_reader */
/* sha: 3357d12f4ca0d9269a4c9ffb565f42fec58e2bf191cf61fff445dd5d8e61bfa3 */
#if BIND_GIOStreamClass__g_reserved2_FIELD_READER
/* get__g_reserved2
 *
 * Return Type: void (*)(void)
 */
mrb_value
mrb_GLib_GIOStreamClass_get__g_reserved2(mrb_state* mrb, mrb_value self) {
  struct _GIOStreamClass * native_self = mruby_unbox__GIOStreamClass(self);

  void (*)(void) native__g_reserved2 = native_self->_g_reserved2;

  mrb_value _g_reserved2 = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native__g_reserved2);

  return _g_reserved2;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamClass::_g_reserved2_writer */
/* sha: 12183a88c8e08a822a2b47cf47b4ca530ef5de9e50594e32976e6f917bbce7dd */
#if BIND_GIOStreamClass__g_reserved2_FIELD_WRITER
/* set__g_reserved2
 *
 * Parameters:
 * - value: void (*)(void)
 */
mrb_value
mrb_GLib_GIOStreamClass_set__g_reserved2(mrb_state* mrb, mrb_value self) {
  struct _GIOStreamClass * native_self = mruby_unbox__GIOStreamClass(self);
  mrb_value _g_reserved2;

  mrb_get_args(mrb, "o", &_g_reserved2);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(_g_reserved2);

  void (*native__g_reserved2)(void) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(_g_reserved2);

  native_self->_g_reserved2 = native__g_reserved2;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamClass::_g_reserved3_reader */
/* sha: 2712ee45c7a96a221d5792ce7ff7c6accd8cf06a7e2de8874c716c7e2005d12b */
#if BIND_GIOStreamClass__g_reserved3_FIELD_READER
/* get__g_reserved3
 *
 * Return Type: void (*)(void)
 */
mrb_value
mrb_GLib_GIOStreamClass_get__g_reserved3(mrb_state* mrb, mrb_value self) {
  struct _GIOStreamClass * native_self = mruby_unbox__GIOStreamClass(self);

  void (*)(void) native__g_reserved3 = native_self->_g_reserved3;

  mrb_value _g_reserved3 = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native__g_reserved3);

  return _g_reserved3;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamClass::_g_reserved3_writer */
/* sha: 6c5ab401af7910b74d95be482ca9a8574b15d9cda262caa84720d5a164648ef3 */
#if BIND_GIOStreamClass__g_reserved3_FIELD_WRITER
/* set__g_reserved3
 *
 * Parameters:
 * - value: void (*)(void)
 */
mrb_value
mrb_GLib_GIOStreamClass_set__g_reserved3(mrb_state* mrb, mrb_value self) {
  struct _GIOStreamClass * native_self = mruby_unbox__GIOStreamClass(self);
  mrb_value _g_reserved3;

  mrb_get_args(mrb, "o", &_g_reserved3);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(_g_reserved3);

  void (*native__g_reserved3)(void) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(_g_reserved3);

  native_self->_g_reserved3 = native__g_reserved3;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamClass::_g_reserved4_reader */
/* sha: 1a21f4f6ff005de09a2c33a724e28d0e99af32f2cc43a2a2eace57c09ceda0e9 */
#if BIND_GIOStreamClass__g_reserved4_FIELD_READER
/* get__g_reserved4
 *
 * Return Type: void (*)(void)
 */
mrb_value
mrb_GLib_GIOStreamClass_get__g_reserved4(mrb_state* mrb, mrb_value self) {
  struct _GIOStreamClass * native_self = mruby_unbox__GIOStreamClass(self);

  void (*)(void) native__g_reserved4 = native_self->_g_reserved4;

  mrb_value _g_reserved4 = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native__g_reserved4);

  return _g_reserved4;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamClass::_g_reserved4_writer */
/* sha: f3c5fb18d6be03fa224468bfc142039558e1f5de4c7ffa8c080f2c42f034b9f6 */
#if BIND_GIOStreamClass__g_reserved4_FIELD_WRITER
/* set__g_reserved4
 *
 * Parameters:
 * - value: void (*)(void)
 */
mrb_value
mrb_GLib_GIOStreamClass_set__g_reserved4(mrb_state* mrb, mrb_value self) {
  struct _GIOStreamClass * native_self = mruby_unbox__GIOStreamClass(self);
  mrb_value _g_reserved4;

  mrb_get_args(mrb, "o", &_g_reserved4);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(_g_reserved4);

  void (*native__g_reserved4)(void) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(_g_reserved4);

  native_self->_g_reserved4 = native__g_reserved4;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamClass::_g_reserved5_reader */
/* sha: 940a70f50dfefee95197eb9808823e09c153548195163047113735f9d0068263 */
#if BIND_GIOStreamClass__g_reserved5_FIELD_READER
/* get__g_reserved5
 *
 * Return Type: void (*)(void)
 */
mrb_value
mrb_GLib_GIOStreamClass_get__g_reserved5(mrb_state* mrb, mrb_value self) {
  struct _GIOStreamClass * native_self = mruby_unbox__GIOStreamClass(self);

  void (*)(void) native__g_reserved5 = native_self->_g_reserved5;

  mrb_value _g_reserved5 = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native__g_reserved5);

  return _g_reserved5;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamClass::_g_reserved5_writer */
/* sha: c0262e557732bf0e795f9172e35e8976b9acfccc76a764ca7898fd5853759a0e */
#if BIND_GIOStreamClass__g_reserved5_FIELD_WRITER
/* set__g_reserved5
 *
 * Parameters:
 * - value: void (*)(void)
 */
mrb_value
mrb_GLib_GIOStreamClass_set__g_reserved5(mrb_state* mrb, mrb_value self) {
  struct _GIOStreamClass * native_self = mruby_unbox__GIOStreamClass(self);
  mrb_value _g_reserved5;

  mrb_get_args(mrb, "o", &_g_reserved5);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(_g_reserved5);

  void (*native__g_reserved5)(void) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(_g_reserved5);

  native_self->_g_reserved5 = native__g_reserved5;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamClass::_g_reserved6_reader */
/* sha: 736d3be4b3c6418d8782d2ce7206e62833b79594bdc61f0f0bf2704c9c4b7637 */
#if BIND_GIOStreamClass__g_reserved6_FIELD_READER
/* get__g_reserved6
 *
 * Return Type: void (*)(void)
 */
mrb_value
mrb_GLib_GIOStreamClass_get__g_reserved6(mrb_state* mrb, mrb_value self) {
  struct _GIOStreamClass * native_self = mruby_unbox__GIOStreamClass(self);

  void (*)(void) native__g_reserved6 = native_self->_g_reserved6;

  mrb_value _g_reserved6 = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native__g_reserved6);

  return _g_reserved6;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamClass::_g_reserved6_writer */
/* sha: 66c78b7e69283097ecdd42510eebadb63f63c8c608e174c4189cdf6438cdb724 */
#if BIND_GIOStreamClass__g_reserved6_FIELD_WRITER
/* set__g_reserved6
 *
 * Parameters:
 * - value: void (*)(void)
 */
mrb_value
mrb_GLib_GIOStreamClass_set__g_reserved6(mrb_state* mrb, mrb_value self) {
  struct _GIOStreamClass * native_self = mruby_unbox__GIOStreamClass(self);
  mrb_value _g_reserved6;

  mrb_get_args(mrb, "o", &_g_reserved6);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(_g_reserved6);

  void (*native__g_reserved6)(void) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(_g_reserved6);

  native_self->_g_reserved6 = native__g_reserved6;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamClass::_g_reserved7_reader */
/* sha: c8a532157b9f6244326a3faf506566b0732f55a0ea1023e3bddc17152a7aeda2 */
#if BIND_GIOStreamClass__g_reserved7_FIELD_READER
/* get__g_reserved7
 *
 * Return Type: void (*)(void)
 */
mrb_value
mrb_GLib_GIOStreamClass_get__g_reserved7(mrb_state* mrb, mrb_value self) {
  struct _GIOStreamClass * native_self = mruby_unbox__GIOStreamClass(self);

  void (*)(void) native__g_reserved7 = native_self->_g_reserved7;

  mrb_value _g_reserved7 = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native__g_reserved7);

  return _g_reserved7;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamClass::_g_reserved7_writer */
/* sha: cdeed40e51ebc036332459f6dfed8cf1d7a3f196e20f33401d87102756ee8b9f */
#if BIND_GIOStreamClass__g_reserved7_FIELD_WRITER
/* set__g_reserved7
 *
 * Parameters:
 * - value: void (*)(void)
 */
mrb_value
mrb_GLib_GIOStreamClass_set__g_reserved7(mrb_state* mrb, mrb_value self) {
  struct _GIOStreamClass * native_self = mruby_unbox__GIOStreamClass(self);
  mrb_value _g_reserved7;

  mrb_get_args(mrb, "o", &_g_reserved7);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(_g_reserved7);

  void (*native__g_reserved7)(void) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(_g_reserved7);

  native_self->_g_reserved7 = native__g_reserved7;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamClass::_g_reserved8_reader */
/* sha: a1058a998fc1aeb01785ff9ff5fd65174a4a0da5215a126a5236d6206b68d97b */
#if BIND_GIOStreamClass__g_reserved8_FIELD_READER
/* get__g_reserved8
 *
 * Return Type: void (*)(void)
 */
mrb_value
mrb_GLib_GIOStreamClass_get__g_reserved8(mrb_state* mrb, mrb_value self) {
  struct _GIOStreamClass * native_self = mruby_unbox__GIOStreamClass(self);

  void (*)(void) native__g_reserved8 = native_self->_g_reserved8;

  mrb_value _g_reserved8 = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native__g_reserved8);

  return _g_reserved8;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamClass::_g_reserved8_writer */
/* sha: 63a579acd514dec742777ac9f1acd0ecab7f5fe41150b8c4b6f58b25c0089b91 */
#if BIND_GIOStreamClass__g_reserved8_FIELD_WRITER
/* set__g_reserved8
 *
 * Parameters:
 * - value: void (*)(void)
 */
mrb_value
mrb_GLib_GIOStreamClass_set__g_reserved8(mrb_state* mrb, mrb_value self) {
  struct _GIOStreamClass * native_self = mruby_unbox__GIOStreamClass(self);
  mrb_value _g_reserved8;

  mrb_get_args(mrb, "o", &_g_reserved8);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(_g_reserved8);

  void (*native__g_reserved8)(void) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(_g_reserved8);

  native_self->_g_reserved8 = native__g_reserved8;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamClass::_g_reserved9_reader */
/* sha: 118edfa7aa546fc786f7894079b675c976c55566802895f402fdeccc63ee22ee */
#if BIND_GIOStreamClass__g_reserved9_FIELD_READER
/* get__g_reserved9
 *
 * Return Type: void (*)(void)
 */
mrb_value
mrb_GLib_GIOStreamClass_get__g_reserved9(mrb_state* mrb, mrb_value self) {
  struct _GIOStreamClass * native_self = mruby_unbox__GIOStreamClass(self);

  void (*)(void) native__g_reserved9 = native_self->_g_reserved9;

  mrb_value _g_reserved9 = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native__g_reserved9);

  return _g_reserved9;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamClass::_g_reserved9_writer */
/* sha: eeb6f0b361dcdcc2d4331e12fb95a8b39d488a7a83c515b6d691cfaa191759c9 */
#if BIND_GIOStreamClass__g_reserved9_FIELD_WRITER
/* set__g_reserved9
 *
 * Parameters:
 * - value: void (*)(void)
 */
mrb_value
mrb_GLib_GIOStreamClass_set__g_reserved9(mrb_state* mrb, mrb_value self) {
  struct _GIOStreamClass * native_self = mruby_unbox__GIOStreamClass(self);
  mrb_value _g_reserved9;

  mrb_get_args(mrb, "o", &_g_reserved9);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(_g_reserved9);

  void (*native__g_reserved9)(void) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(_g_reserved9);

  native_self->_g_reserved9 = native__g_reserved9;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamClass::_g_reserved10_reader */
/* sha: 8ebc8c8a795da76558f7e021b37144df7f0b5846a7d9b44efd16dd59e1f82b1c */
#if BIND_GIOStreamClass__g_reserved10_FIELD_READER
/* get__g_reserved10
 *
 * Return Type: void (*)(void)
 */
mrb_value
mrb_GLib_GIOStreamClass_get__g_reserved10(mrb_state* mrb, mrb_value self) {
  struct _GIOStreamClass * native_self = mruby_unbox__GIOStreamClass(self);

  void (*)(void) native__g_reserved10 = native_self->_g_reserved10;

  mrb_value _g_reserved10 = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native__g_reserved10);

  return _g_reserved10;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamClass::_g_reserved10_writer */
/* sha: 5fcf9371bc1809fc04602652134b62b8afe0a08475d6deb5b5f6eb1f4d298fdf */
#if BIND_GIOStreamClass__g_reserved10_FIELD_WRITER
/* set__g_reserved10
 *
 * Parameters:
 * - value: void (*)(void)
 */
mrb_value
mrb_GLib_GIOStreamClass_set__g_reserved10(mrb_state* mrb, mrb_value self) {
  struct _GIOStreamClass * native_self = mruby_unbox__GIOStreamClass(self);
  mrb_value _g_reserved10;

  mrb_get_args(mrb, "o", &_g_reserved10);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(_g_reserved10);

  void (*native__g_reserved10)(void) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(_g_reserved10);

  native_self->_g_reserved10 = native__g_reserved10;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_GLib_GIOStreamClass_init(mrb_state* mrb) {
/* MRUBY_BINDING: GIOStreamClass::class_definition */
/* sha: 544027b345ec06747b459d9a777fc077d20d01f55d6c96262454e7b93a765f0d */
  struct RClass* GIOStreamClass_class = mrb_define_class_under(mrb, GLib_module(mrb), "GIOStreamClass", mrb->object_class);
  MRB_SET_INSTANCE_TT(GIOStreamClass_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamClass::class_method_definitions */
/* sha: 2b15b676db8320efaf09732898e6b712c91ae7020f94d320f23ae97644f642d0 */
#if BIND_GIOStreamClass_INITIALIZE
  mrb_define_method(mrb, GIOStreamClass_class, "initialize", mrb_GLib_GIOStreamClass_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GIOStreamClass_class, "disown", mrb_GLib_GIOStreamClass_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GIOStreamClass_class, "belongs_to_ruby?", mrb_GLib_GIOStreamClass_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamClass::attr_definitions */
/* sha: 632d1ce09fbbd4e4dd542baa579b509c19f4040b61f49d6d3c4984874ba2fc00 */
  /*
   * Fields
   */
#if BIND_GIOStreamClass_parent_class_FIELD_READER
  mrb_define_method(mrb, GIOStreamClass_class, "parent_class", mrb_GLib_GIOStreamClass_get_parent_class, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOStreamClass_parent_class_FIELD_WRITER
  mrb_define_method(mrb, GIOStreamClass_class, "parent_class=", mrb_GLib_GIOStreamClass_set_parent_class, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOStreamClass_get_input_stream_FIELD_READER
  mrb_define_method(mrb, GIOStreamClass_class, "get_input_stream", mrb_GLib_GIOStreamClass_get_get_input_stream, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOStreamClass_get_input_stream_FIELD_WRITER
  mrb_define_method(mrb, GIOStreamClass_class, "get_input_stream=", mrb_GLib_GIOStreamClass_set_get_input_stream, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOStreamClass_get_output_stream_FIELD_READER
  mrb_define_method(mrb, GIOStreamClass_class, "get_output_stream", mrb_GLib_GIOStreamClass_get_get_output_stream, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOStreamClass_get_output_stream_FIELD_WRITER
  mrb_define_method(mrb, GIOStreamClass_class, "get_output_stream=", mrb_GLib_GIOStreamClass_set_get_output_stream, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOStreamClass_close_fn_FIELD_READER
  mrb_define_method(mrb, GIOStreamClass_class, "close_fn", mrb_GLib_GIOStreamClass_get_close_fn, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOStreamClass_close_fn_FIELD_WRITER
  mrb_define_method(mrb, GIOStreamClass_class, "close_fn=", mrb_GLib_GIOStreamClass_set_close_fn, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOStreamClass_close_async_FIELD_READER
  mrb_define_method(mrb, GIOStreamClass_class, "close_async", mrb_GLib_GIOStreamClass_get_close_async, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOStreamClass_close_async_FIELD_WRITER
  mrb_define_method(mrb, GIOStreamClass_class, "close_async=", mrb_GLib_GIOStreamClass_set_close_async, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOStreamClass_close_finish_FIELD_READER
  mrb_define_method(mrb, GIOStreamClass_class, "close_finish", mrb_GLib_GIOStreamClass_get_close_finish, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOStreamClass_close_finish_FIELD_WRITER
  mrb_define_method(mrb, GIOStreamClass_class, "close_finish=", mrb_GLib_GIOStreamClass_set_close_finish, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOStreamClass__g_reserved1_FIELD_READER
  mrb_define_method(mrb, GIOStreamClass_class, "_g_reserved1", mrb_GLib_GIOStreamClass_get__g_reserved1, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOStreamClass__g_reserved1_FIELD_WRITER
  mrb_define_method(mrb, GIOStreamClass_class, "_g_reserved1=", mrb_GLib_GIOStreamClass_set__g_reserved1, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOStreamClass__g_reserved2_FIELD_READER
  mrb_define_method(mrb, GIOStreamClass_class, "_g_reserved2", mrb_GLib_GIOStreamClass_get__g_reserved2, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOStreamClass__g_reserved2_FIELD_WRITER
  mrb_define_method(mrb, GIOStreamClass_class, "_g_reserved2=", mrb_GLib_GIOStreamClass_set__g_reserved2, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOStreamClass__g_reserved3_FIELD_READER
  mrb_define_method(mrb, GIOStreamClass_class, "_g_reserved3", mrb_GLib_GIOStreamClass_get__g_reserved3, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOStreamClass__g_reserved3_FIELD_WRITER
  mrb_define_method(mrb, GIOStreamClass_class, "_g_reserved3=", mrb_GLib_GIOStreamClass_set__g_reserved3, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOStreamClass__g_reserved4_FIELD_READER
  mrb_define_method(mrb, GIOStreamClass_class, "_g_reserved4", mrb_GLib_GIOStreamClass_get__g_reserved4, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOStreamClass__g_reserved4_FIELD_WRITER
  mrb_define_method(mrb, GIOStreamClass_class, "_g_reserved4=", mrb_GLib_GIOStreamClass_set__g_reserved4, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOStreamClass__g_reserved5_FIELD_READER
  mrb_define_method(mrb, GIOStreamClass_class, "_g_reserved5", mrb_GLib_GIOStreamClass_get__g_reserved5, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOStreamClass__g_reserved5_FIELD_WRITER
  mrb_define_method(mrb, GIOStreamClass_class, "_g_reserved5=", mrb_GLib_GIOStreamClass_set__g_reserved5, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOStreamClass__g_reserved6_FIELD_READER
  mrb_define_method(mrb, GIOStreamClass_class, "_g_reserved6", mrb_GLib_GIOStreamClass_get__g_reserved6, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOStreamClass__g_reserved6_FIELD_WRITER
  mrb_define_method(mrb, GIOStreamClass_class, "_g_reserved6=", mrb_GLib_GIOStreamClass_set__g_reserved6, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOStreamClass__g_reserved7_FIELD_READER
  mrb_define_method(mrb, GIOStreamClass_class, "_g_reserved7", mrb_GLib_GIOStreamClass_get__g_reserved7, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOStreamClass__g_reserved7_FIELD_WRITER
  mrb_define_method(mrb, GIOStreamClass_class, "_g_reserved7=", mrb_GLib_GIOStreamClass_set__g_reserved7, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOStreamClass__g_reserved8_FIELD_READER
  mrb_define_method(mrb, GIOStreamClass_class, "_g_reserved8", mrb_GLib_GIOStreamClass_get__g_reserved8, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOStreamClass__g_reserved8_FIELD_WRITER
  mrb_define_method(mrb, GIOStreamClass_class, "_g_reserved8=", mrb_GLib_GIOStreamClass_set__g_reserved8, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOStreamClass__g_reserved9_FIELD_READER
  mrb_define_method(mrb, GIOStreamClass_class, "_g_reserved9", mrb_GLib_GIOStreamClass_get__g_reserved9, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOStreamClass__g_reserved9_FIELD_WRITER
  mrb_define_method(mrb, GIOStreamClass_class, "_g_reserved9=", mrb_GLib_GIOStreamClass_set__g_reserved9, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOStreamClass__g_reserved10_FIELD_READER
  mrb_define_method(mrb, GIOStreamClass_class, "_g_reserved10", mrb_GLib_GIOStreamClass_get__g_reserved10, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOStreamClass__g_reserved10_FIELD_WRITER
  mrb_define_method(mrb, GIOStreamClass_class, "_g_reserved10=", mrb_GLib_GIOStreamClass_set__g_reserved10, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamClass::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
