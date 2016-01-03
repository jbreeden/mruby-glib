/*
 * struct _GInputStreamClass
 * Defined in file ginputstream.h @ line 44
 */

#include "mruby_GLib.h"

#if BIND_GInputStreamClass_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GInputStreamClass::initialize */
/* sha: 9abe655e477b45fc26229ee9cc7f8a432bc1b4277d163c619996a7d4527e3a4f */
#if BIND_GInputStreamClass_INITIALIZE
mrb_value
mrb_GLib_GInputStreamClass_initialize(mrb_state* mrb, mrb_value self) {
  struct _GInputStreamClass* native_object = (struct _GInputStreamClass*)calloc(1, sizeof(struct _GInputStreamClass));
  mruby_giftwrap__GInputStreamClass_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStreamClass::initialize */
/* sha: 2033cb7565bede81d055b118eca22ab02a2a3992c459f4ae62576ef743bbcb6f */
mrb_value
mrb_GLib_GInputStreamClass_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GInputStreamClass.disown only accepts objects of type GLib::GInputStreamClass");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStreamClass::belongs_to_ruby */
/* sha: a96816afe0eba59018fa6a73167a4b73989ab0adf847b409fef68fea829bcfcb */
mrb_value
mrb_GLib_GInputStreamClass_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GInputStreamClass.belongs_to_ruby only accepts objects of type GLib::GInputStreamClass");
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

/* MRUBY_BINDING: GInputStreamClass::parent_class_reader */
/* sha: b94ade95eca9a9cb143be6e8ca4e5fadafa388172bd15980826eee92c7308c40 */
#if BIND_GInputStreamClass_parent_class_FIELD_READER
/* get_parent_class
 *
 * Return Type: GObjectClass
 */
mrb_value
mrb_GLib_GInputStreamClass_get_parent_class(mrb_state* mrb, mrb_value self) {
  struct _GInputStreamClass * native_self = mruby_unbox__GInputStreamClass(self);

  GObjectClass native_parent_class = native_self->parent_class;

  mrb_value parent_class = TODO_mruby_box_GObjectClass(mrb, native_parent_class);

  return parent_class;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStreamClass::parent_class_writer */
/* sha: 028950358fb7a8c2e9ec2692fa07dc0be06104714d5320e3f328c768e7e29331 */
#if BIND_GInputStreamClass_parent_class_FIELD_WRITER
/* set_parent_class
 *
 * Parameters:
 * - value: GObjectClass
 */
mrb_value
mrb_GLib_GInputStreamClass_set_parent_class(mrb_state* mrb, mrb_value self) {
  struct _GInputStreamClass * native_self = mruby_unbox__GInputStreamClass(self);
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

/* MRUBY_BINDING: GInputStreamClass::read_fn_reader */
/* sha: 47917f7c0e047d714b7f51fbbe9bc3e308c1be7c7b9f3db579b86d5041c45ece */
#if BIND_GInputStreamClass_read_fn_FIELD_READER
/* get_read_fn
 *
 * Return Type: gssize (*)(GInputStream *, void *, gsize, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GInputStreamClass_get_read_fn(mrb_state* mrb, mrb_value self) {
  struct _GInputStreamClass * native_self = mruby_unbox__GInputStreamClass(self);

  gssize (*)(GInputStream *, void *, gsize, GCancellable *, GError **) native_read_fn = native_self->read_fn;

  mrb_value read_fn = TODO_mruby_box_gssize_LPAREN_PTR_RPAREN_LPAREN_GInputStream_PTR_COMMA_void_PTR_COMMA_gsizeCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_read_fn);

  return read_fn;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStreamClass::read_fn_writer */
/* sha: 59eaca6467ad44e1811721acf062022c9fe7541138be7da0884c1616f9266b8a */
#if BIND_GInputStreamClass_read_fn_FIELD_WRITER
/* set_read_fn
 *
 * Parameters:
 * - value: gssize (*)(GInputStream *, void *, gsize, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GInputStreamClass_set_read_fn(mrb_state* mrb, mrb_value self) {
  struct _GInputStreamClass * native_self = mruby_unbox__GInputStreamClass(self);
  mrb_value read_fn;

  mrb_get_args(mrb, "o", &read_fn);

  /* type checking */
  TODO_type_check_gssize_LPAREN_PTR_RPAREN_LPAREN_GInputStream_PTR_COMMA_void_PTR_COMMA_gsizeCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(read_fn);

  gssize (*native_read_fn)(GInputStream *, void *, gsize, GCancellable *, GError **) = TODO_mruby_unbox_gssize_LPAREN_PTR_RPAREN_LPAREN_GInputStream_PTR_COMMA_void_PTR_COMMA_gsizeCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(read_fn);

  native_self->read_fn = native_read_fn;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStreamClass::skip_reader */
/* sha: efbd78868a5c44e0fcb67b3a23621fa1f4cdfc9f3f6ee0aef7e328ac86995605 */
#if BIND_GInputStreamClass_skip_FIELD_READER
/* get_skip
 *
 * Return Type: gssize (*)(GInputStream *, gsize, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GInputStreamClass_get_skip(mrb_state* mrb, mrb_value self) {
  struct _GInputStreamClass * native_self = mruby_unbox__GInputStreamClass(self);

  gssize (*)(GInputStream *, gsize, GCancellable *, GError **) native_skip = native_self->skip;

  mrb_value skip = TODO_mruby_box_gssize_LPAREN_PTR_RPAREN_LPAREN_GInputStream_PTR_COMMA_gsizeCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_skip);

  return skip;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStreamClass::skip_writer */
/* sha: 710f8a9daba4e2e199189ca102e62ddc8ebd1e29b9418e9f19c6469140e52771 */
#if BIND_GInputStreamClass_skip_FIELD_WRITER
/* set_skip
 *
 * Parameters:
 * - value: gssize (*)(GInputStream *, gsize, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GInputStreamClass_set_skip(mrb_state* mrb, mrb_value self) {
  struct _GInputStreamClass * native_self = mruby_unbox__GInputStreamClass(self);
  mrb_value skip;

  mrb_get_args(mrb, "o", &skip);

  /* type checking */
  TODO_type_check_gssize_LPAREN_PTR_RPAREN_LPAREN_GInputStream_PTR_COMMA_gsizeCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(skip);

  gssize (*native_skip)(GInputStream *, gsize, GCancellable *, GError **) = TODO_mruby_unbox_gssize_LPAREN_PTR_RPAREN_LPAREN_GInputStream_PTR_COMMA_gsizeCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(skip);

  native_self->skip = native_skip;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStreamClass::close_fn_reader */
/* sha: 1b00ae08fbe874b5b98a439a776cc0a46aef8611856456df663238ed1ed90d0d */
#if BIND_GInputStreamClass_close_fn_FIELD_READER
/* get_close_fn
 *
 * Return Type: gboolean (*)(GInputStream *, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GInputStreamClass_get_close_fn(mrb_state* mrb, mrb_value self) {
  struct _GInputStreamClass * native_self = mruby_unbox__GInputStreamClass(self);

  gboolean (*)(GInputStream *, GCancellable *, GError **) native_close_fn = native_self->close_fn;

  mrb_value close_fn = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GInputStream_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_close_fn);

  return close_fn;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStreamClass::close_fn_writer */
/* sha: 8c0e50a957b8a3f7cb4b054225dbc2675b6329e502f0f42b20b885df6fc0d38f */
#if BIND_GInputStreamClass_close_fn_FIELD_WRITER
/* set_close_fn
 *
 * Parameters:
 * - value: gboolean (*)(GInputStream *, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GInputStreamClass_set_close_fn(mrb_state* mrb, mrb_value self) {
  struct _GInputStreamClass * native_self = mruby_unbox__GInputStreamClass(self);
  mrb_value close_fn;

  mrb_get_args(mrb, "o", &close_fn);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GInputStream_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(close_fn);

  gboolean (*native_close_fn)(GInputStream *, GCancellable *, GError **) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GInputStream_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(close_fn);

  native_self->close_fn = native_close_fn;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStreamClass::read_async_reader */
/* sha: bdace7abbf972fbd50779002e7d3becce492d38696938722756847642b09bff9 */
#if BIND_GInputStreamClass_read_async_FIELD_READER
/* get_read_async
 *
 * Return Type: void (*)(GInputStream *, void *, gsize, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GInputStreamClass_get_read_async(mrb_state* mrb, mrb_value self) {
  struct _GInputStreamClass * native_self = mruby_unbox__GInputStreamClass(self);

  void (*)(GInputStream *, void *, gsize, int, GCancellable *, GAsyncReadyCallback, gpointer) native_read_async = native_self->read_async;

  mrb_value read_async = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GInputStream_PTR_COMMA_void_PTR_COMMA_gsizeCOMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(mrb, native_read_async);

  return read_async;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStreamClass::read_async_writer */
/* sha: 453cdf6c7da9657e62e288b5bad1baca87af40284391fa33ef3779083e85b7bf */
#if BIND_GInputStreamClass_read_async_FIELD_WRITER
/* set_read_async
 *
 * Parameters:
 * - value: void (*)(GInputStream *, void *, gsize, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GInputStreamClass_set_read_async(mrb_state* mrb, mrb_value self) {
  struct _GInputStreamClass * native_self = mruby_unbox__GInputStreamClass(self);
  mrb_value read_async;

  mrb_get_args(mrb, "o", &read_async);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GInputStream_PTR_COMMA_void_PTR_COMMA_gsizeCOMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(read_async);

  void (*native_read_async)(GInputStream *, void *, gsize, int, GCancellable *, GAsyncReadyCallback, gpointer) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GInputStream_PTR_COMMA_void_PTR_COMMA_gsizeCOMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(read_async);

  native_self->read_async = native_read_async;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStreamClass::read_finish_reader */
/* sha: 2b5a1ebe52f098130272007edb4c8422e240a2f3cc92a98f081613f63b262e24 */
#if BIND_GInputStreamClass_read_finish_FIELD_READER
/* get_read_finish
 *
 * Return Type: gssize (*)(GInputStream *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GInputStreamClass_get_read_finish(mrb_state* mrb, mrb_value self) {
  struct _GInputStreamClass * native_self = mruby_unbox__GInputStreamClass(self);

  gssize (*)(GInputStream *, GAsyncResult *, GError **) native_read_finish = native_self->read_finish;

  mrb_value read_finish = TODO_mruby_box_gssize_LPAREN_PTR_RPAREN_LPAREN_GInputStream_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_read_finish);

  return read_finish;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStreamClass::read_finish_writer */
/* sha: 6978fc5a4afd5e9a7871b5a2bae8cf263e00058efbb454cab135242235bdc35b */
#if BIND_GInputStreamClass_read_finish_FIELD_WRITER
/* set_read_finish
 *
 * Parameters:
 * - value: gssize (*)(GInputStream *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GInputStreamClass_set_read_finish(mrb_state* mrb, mrb_value self) {
  struct _GInputStreamClass * native_self = mruby_unbox__GInputStreamClass(self);
  mrb_value read_finish;

  mrb_get_args(mrb, "o", &read_finish);

  /* type checking */
  TODO_type_check_gssize_LPAREN_PTR_RPAREN_LPAREN_GInputStream_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(read_finish);

  gssize (*native_read_finish)(GInputStream *, GAsyncResult *, GError **) = TODO_mruby_unbox_gssize_LPAREN_PTR_RPAREN_LPAREN_GInputStream_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(read_finish);

  native_self->read_finish = native_read_finish;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStreamClass::skip_async_reader */
/* sha: cd0f6c8aadcebfd0bbf17c43f331a8687e6043ee007ebdd89cd7b0d3ac2198de */
#if BIND_GInputStreamClass_skip_async_FIELD_READER
/* get_skip_async
 *
 * Return Type: void (*)(GInputStream *, gsize, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GInputStreamClass_get_skip_async(mrb_state* mrb, mrb_value self) {
  struct _GInputStreamClass * native_self = mruby_unbox__GInputStreamClass(self);

  void (*)(GInputStream *, gsize, int, GCancellable *, GAsyncReadyCallback, gpointer) native_skip_async = native_self->skip_async;

  mrb_value skip_async = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GInputStream_PTR_COMMA_gsizeCOMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(mrb, native_skip_async);

  return skip_async;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStreamClass::skip_async_writer */
/* sha: 12e912d8192e976ecede10fa0a57b804e41c7fd0b6a5a052cb849d9aacac7ddd */
#if BIND_GInputStreamClass_skip_async_FIELD_WRITER
/* set_skip_async
 *
 * Parameters:
 * - value: void (*)(GInputStream *, gsize, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GInputStreamClass_set_skip_async(mrb_state* mrb, mrb_value self) {
  struct _GInputStreamClass * native_self = mruby_unbox__GInputStreamClass(self);
  mrb_value skip_async;

  mrb_get_args(mrb, "o", &skip_async);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GInputStream_PTR_COMMA_gsizeCOMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(skip_async);

  void (*native_skip_async)(GInputStream *, gsize, int, GCancellable *, GAsyncReadyCallback, gpointer) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GInputStream_PTR_COMMA_gsizeCOMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(skip_async);

  native_self->skip_async = native_skip_async;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStreamClass::skip_finish_reader */
/* sha: 7d35280758884c69bfdcf4a606a38f57e185a4256f04582cd8abfa9c0db2f048 */
#if BIND_GInputStreamClass_skip_finish_FIELD_READER
/* get_skip_finish
 *
 * Return Type: gssize (*)(GInputStream *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GInputStreamClass_get_skip_finish(mrb_state* mrb, mrb_value self) {
  struct _GInputStreamClass * native_self = mruby_unbox__GInputStreamClass(self);

  gssize (*)(GInputStream *, GAsyncResult *, GError **) native_skip_finish = native_self->skip_finish;

  mrb_value skip_finish = TODO_mruby_box_gssize_LPAREN_PTR_RPAREN_LPAREN_GInputStream_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_skip_finish);

  return skip_finish;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStreamClass::skip_finish_writer */
/* sha: e3cda98a9a1153b1d1ab5a76288fbf9df82284e0b92857558f26e067b2a2e7a7 */
#if BIND_GInputStreamClass_skip_finish_FIELD_WRITER
/* set_skip_finish
 *
 * Parameters:
 * - value: gssize (*)(GInputStream *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GInputStreamClass_set_skip_finish(mrb_state* mrb, mrb_value self) {
  struct _GInputStreamClass * native_self = mruby_unbox__GInputStreamClass(self);
  mrb_value skip_finish;

  mrb_get_args(mrb, "o", &skip_finish);

  /* type checking */
  TODO_type_check_gssize_LPAREN_PTR_RPAREN_LPAREN_GInputStream_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(skip_finish);

  gssize (*native_skip_finish)(GInputStream *, GAsyncResult *, GError **) = TODO_mruby_unbox_gssize_LPAREN_PTR_RPAREN_LPAREN_GInputStream_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(skip_finish);

  native_self->skip_finish = native_skip_finish;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStreamClass::close_async_reader */
/* sha: 47e5df3e09392790ee8a18ab58ec92a4bc7a95d1c09ffe5a4dc84a381a5829d7 */
#if BIND_GInputStreamClass_close_async_FIELD_READER
/* get_close_async
 *
 * Return Type: void (*)(GInputStream *, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GInputStreamClass_get_close_async(mrb_state* mrb, mrb_value self) {
  struct _GInputStreamClass * native_self = mruby_unbox__GInputStreamClass(self);

  void (*)(GInputStream *, int, GCancellable *, GAsyncReadyCallback, gpointer) native_close_async = native_self->close_async;

  mrb_value close_async = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GInputStream_PTR_COMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(mrb, native_close_async);

  return close_async;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStreamClass::close_async_writer */
/* sha: f00a83e44815148e394c9d7d52c1e102e48fc4df3069e893915894ec1bf95c71 */
#if BIND_GInputStreamClass_close_async_FIELD_WRITER
/* set_close_async
 *
 * Parameters:
 * - value: void (*)(GInputStream *, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GInputStreamClass_set_close_async(mrb_state* mrb, mrb_value self) {
  struct _GInputStreamClass * native_self = mruby_unbox__GInputStreamClass(self);
  mrb_value close_async;

  mrb_get_args(mrb, "o", &close_async);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GInputStream_PTR_COMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(close_async);

  void (*native_close_async)(GInputStream *, int, GCancellable *, GAsyncReadyCallback, gpointer) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GInputStream_PTR_COMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(close_async);

  native_self->close_async = native_close_async;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStreamClass::close_finish_reader */
/* sha: 4e77c345a451fe35f80bca111d4d6729b3c0e7e1e6d211d4baa0cecdbf0bb7d3 */
#if BIND_GInputStreamClass_close_finish_FIELD_READER
/* get_close_finish
 *
 * Return Type: gboolean (*)(GInputStream *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GInputStreamClass_get_close_finish(mrb_state* mrb, mrb_value self) {
  struct _GInputStreamClass * native_self = mruby_unbox__GInputStreamClass(self);

  gboolean (*)(GInputStream *, GAsyncResult *, GError **) native_close_finish = native_self->close_finish;

  mrb_value close_finish = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GInputStream_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_close_finish);

  return close_finish;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStreamClass::close_finish_writer */
/* sha: f46845b924ea62cdf246300cbbc3b8601c77ad4bc9f188f91b3da8b945c34a5f */
#if BIND_GInputStreamClass_close_finish_FIELD_WRITER
/* set_close_finish
 *
 * Parameters:
 * - value: gboolean (*)(GInputStream *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GInputStreamClass_set_close_finish(mrb_state* mrb, mrb_value self) {
  struct _GInputStreamClass * native_self = mruby_unbox__GInputStreamClass(self);
  mrb_value close_finish;

  mrb_get_args(mrb, "o", &close_finish);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GInputStream_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(close_finish);

  gboolean (*native_close_finish)(GInputStream *, GAsyncResult *, GError **) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GInputStream_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(close_finish);

  native_self->close_finish = native_close_finish;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStreamClass::_g_reserved1_reader */
/* sha: b3e7d6a91807e7e76b7dce304b2428d1f48ee119436689373bc7b1726a6ddb06 */
#if BIND_GInputStreamClass__g_reserved1_FIELD_READER
/* get__g_reserved1
 *
 * Return Type: void (*)(void)
 */
mrb_value
mrb_GLib_GInputStreamClass_get__g_reserved1(mrb_state* mrb, mrb_value self) {
  struct _GInputStreamClass * native_self = mruby_unbox__GInputStreamClass(self);

  void (*)(void) native__g_reserved1 = native_self->_g_reserved1;

  mrb_value _g_reserved1 = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native__g_reserved1);

  return _g_reserved1;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStreamClass::_g_reserved1_writer */
/* sha: b60c623c48995925bf37460c61288c0b0473e2251de852515ef48e428a8db602 */
#if BIND_GInputStreamClass__g_reserved1_FIELD_WRITER
/* set__g_reserved1
 *
 * Parameters:
 * - value: void (*)(void)
 */
mrb_value
mrb_GLib_GInputStreamClass_set__g_reserved1(mrb_state* mrb, mrb_value self) {
  struct _GInputStreamClass * native_self = mruby_unbox__GInputStreamClass(self);
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

/* MRUBY_BINDING: GInputStreamClass::_g_reserved2_reader */
/* sha: 59b7042808494d758e8bb4dae5cacf1f551623df620bbe6ccf196dfb1c9b9b5e */
#if BIND_GInputStreamClass__g_reserved2_FIELD_READER
/* get__g_reserved2
 *
 * Return Type: void (*)(void)
 */
mrb_value
mrb_GLib_GInputStreamClass_get__g_reserved2(mrb_state* mrb, mrb_value self) {
  struct _GInputStreamClass * native_self = mruby_unbox__GInputStreamClass(self);

  void (*)(void) native__g_reserved2 = native_self->_g_reserved2;

  mrb_value _g_reserved2 = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native__g_reserved2);

  return _g_reserved2;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStreamClass::_g_reserved2_writer */
/* sha: a3b3efc4cbef826899ef0d186d5881661275728d80f3310faa60a2f8a4f9da8e */
#if BIND_GInputStreamClass__g_reserved2_FIELD_WRITER
/* set__g_reserved2
 *
 * Parameters:
 * - value: void (*)(void)
 */
mrb_value
mrb_GLib_GInputStreamClass_set__g_reserved2(mrb_state* mrb, mrb_value self) {
  struct _GInputStreamClass * native_self = mruby_unbox__GInputStreamClass(self);
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

/* MRUBY_BINDING: GInputStreamClass::_g_reserved3_reader */
/* sha: 7e5923ad8a6fafac3e2c127b2068f330686f71a460ed7dc9451d03e1c18ecdf5 */
#if BIND_GInputStreamClass__g_reserved3_FIELD_READER
/* get__g_reserved3
 *
 * Return Type: void (*)(void)
 */
mrb_value
mrb_GLib_GInputStreamClass_get__g_reserved3(mrb_state* mrb, mrb_value self) {
  struct _GInputStreamClass * native_self = mruby_unbox__GInputStreamClass(self);

  void (*)(void) native__g_reserved3 = native_self->_g_reserved3;

  mrb_value _g_reserved3 = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native__g_reserved3);

  return _g_reserved3;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStreamClass::_g_reserved3_writer */
/* sha: d9ed8630cc1b94323a6d2e3e199ece7bc50204ab3fcdb3a7391890c7d956a1bf */
#if BIND_GInputStreamClass__g_reserved3_FIELD_WRITER
/* set__g_reserved3
 *
 * Parameters:
 * - value: void (*)(void)
 */
mrb_value
mrb_GLib_GInputStreamClass_set__g_reserved3(mrb_state* mrb, mrb_value self) {
  struct _GInputStreamClass * native_self = mruby_unbox__GInputStreamClass(self);
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

/* MRUBY_BINDING: GInputStreamClass::_g_reserved4_reader */
/* sha: 38ed9265eaf97a8078391d79b984ced2bd75b2f968185316136eacda6d3cdf09 */
#if BIND_GInputStreamClass__g_reserved4_FIELD_READER
/* get__g_reserved4
 *
 * Return Type: void (*)(void)
 */
mrb_value
mrb_GLib_GInputStreamClass_get__g_reserved4(mrb_state* mrb, mrb_value self) {
  struct _GInputStreamClass * native_self = mruby_unbox__GInputStreamClass(self);

  void (*)(void) native__g_reserved4 = native_self->_g_reserved4;

  mrb_value _g_reserved4 = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native__g_reserved4);

  return _g_reserved4;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStreamClass::_g_reserved4_writer */
/* sha: 28dd00da78de2ce482c94f9704dba312385192fe8ec3fe401e32082d4b481a19 */
#if BIND_GInputStreamClass__g_reserved4_FIELD_WRITER
/* set__g_reserved4
 *
 * Parameters:
 * - value: void (*)(void)
 */
mrb_value
mrb_GLib_GInputStreamClass_set__g_reserved4(mrb_state* mrb, mrb_value self) {
  struct _GInputStreamClass * native_self = mruby_unbox__GInputStreamClass(self);
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

/* MRUBY_BINDING: GInputStreamClass::_g_reserved5_reader */
/* sha: a39c42f4cb6ef463ab5a647f204bd665046f7cb3279a1c751814cbffa2f6b090 */
#if BIND_GInputStreamClass__g_reserved5_FIELD_READER
/* get__g_reserved5
 *
 * Return Type: void (*)(void)
 */
mrb_value
mrb_GLib_GInputStreamClass_get__g_reserved5(mrb_state* mrb, mrb_value self) {
  struct _GInputStreamClass * native_self = mruby_unbox__GInputStreamClass(self);

  void (*)(void) native__g_reserved5 = native_self->_g_reserved5;

  mrb_value _g_reserved5 = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native__g_reserved5);

  return _g_reserved5;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStreamClass::_g_reserved5_writer */
/* sha: b2085b384ef5307c67302b4343c43a667192ecfa69a9ec57b3fe9341721b650b */
#if BIND_GInputStreamClass__g_reserved5_FIELD_WRITER
/* set__g_reserved5
 *
 * Parameters:
 * - value: void (*)(void)
 */
mrb_value
mrb_GLib_GInputStreamClass_set__g_reserved5(mrb_state* mrb, mrb_value self) {
  struct _GInputStreamClass * native_self = mruby_unbox__GInputStreamClass(self);
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


void mrb_GLib_GInputStreamClass_init(mrb_state* mrb) {
/* MRUBY_BINDING: GInputStreamClass::class_definition */
/* sha: 2243039fe7f9904e37bc05d0664d2e23da0e8596be32199c43b527e79b837db8 */
  struct RClass* GInputStreamClass_class = mrb_define_class_under(mrb, GLib_module(mrb), "GInputStreamClass", mrb->object_class);
  MRB_SET_INSTANCE_TT(GInputStreamClass_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStreamClass::class_method_definitions */
/* sha: 3c8e9ec81960d5d1c45f25ec71e8048bee4da4c94544d729775c877a06e650c9 */
#if BIND_GInputStreamClass_INITIALIZE
  mrb_define_method(mrb, GInputStreamClass_class, "initialize", mrb_GLib_GInputStreamClass_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GInputStreamClass_class, "disown", mrb_GLib_GInputStreamClass_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GInputStreamClass_class, "belongs_to_ruby?", mrb_GLib_GInputStreamClass_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStreamClass::attr_definitions */
/* sha: 2cdb96bdf3db3b6d88856d3348d6f399ee68de52738184801c293acbb8d1e811 */
  /*
   * Fields
   */
#if BIND_GInputStreamClass_parent_class_FIELD_READER
  mrb_define_method(mrb, GInputStreamClass_class, "parent_class", mrb_GLib_GInputStreamClass_get_parent_class, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GInputStreamClass_parent_class_FIELD_WRITER
  mrb_define_method(mrb, GInputStreamClass_class, "parent_class=", mrb_GLib_GInputStreamClass_set_parent_class, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GInputStreamClass_read_fn_FIELD_READER
  mrb_define_method(mrb, GInputStreamClass_class, "read_fn", mrb_GLib_GInputStreamClass_get_read_fn, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GInputStreamClass_read_fn_FIELD_WRITER
  mrb_define_method(mrb, GInputStreamClass_class, "read_fn=", mrb_GLib_GInputStreamClass_set_read_fn, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GInputStreamClass_skip_FIELD_READER
  mrb_define_method(mrb, GInputStreamClass_class, "skip", mrb_GLib_GInputStreamClass_get_skip, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GInputStreamClass_skip_FIELD_WRITER
  mrb_define_method(mrb, GInputStreamClass_class, "skip=", mrb_GLib_GInputStreamClass_set_skip, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GInputStreamClass_close_fn_FIELD_READER
  mrb_define_method(mrb, GInputStreamClass_class, "close_fn", mrb_GLib_GInputStreamClass_get_close_fn, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GInputStreamClass_close_fn_FIELD_WRITER
  mrb_define_method(mrb, GInputStreamClass_class, "close_fn=", mrb_GLib_GInputStreamClass_set_close_fn, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GInputStreamClass_read_async_FIELD_READER
  mrb_define_method(mrb, GInputStreamClass_class, "read_async", mrb_GLib_GInputStreamClass_get_read_async, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GInputStreamClass_read_async_FIELD_WRITER
  mrb_define_method(mrb, GInputStreamClass_class, "read_async=", mrb_GLib_GInputStreamClass_set_read_async, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GInputStreamClass_read_finish_FIELD_READER
  mrb_define_method(mrb, GInputStreamClass_class, "read_finish", mrb_GLib_GInputStreamClass_get_read_finish, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GInputStreamClass_read_finish_FIELD_WRITER
  mrb_define_method(mrb, GInputStreamClass_class, "read_finish=", mrb_GLib_GInputStreamClass_set_read_finish, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GInputStreamClass_skip_async_FIELD_READER
  mrb_define_method(mrb, GInputStreamClass_class, "skip_async", mrb_GLib_GInputStreamClass_get_skip_async, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GInputStreamClass_skip_async_FIELD_WRITER
  mrb_define_method(mrb, GInputStreamClass_class, "skip_async=", mrb_GLib_GInputStreamClass_set_skip_async, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GInputStreamClass_skip_finish_FIELD_READER
  mrb_define_method(mrb, GInputStreamClass_class, "skip_finish", mrb_GLib_GInputStreamClass_get_skip_finish, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GInputStreamClass_skip_finish_FIELD_WRITER
  mrb_define_method(mrb, GInputStreamClass_class, "skip_finish=", mrb_GLib_GInputStreamClass_set_skip_finish, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GInputStreamClass_close_async_FIELD_READER
  mrb_define_method(mrb, GInputStreamClass_class, "close_async", mrb_GLib_GInputStreamClass_get_close_async, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GInputStreamClass_close_async_FIELD_WRITER
  mrb_define_method(mrb, GInputStreamClass_class, "close_async=", mrb_GLib_GInputStreamClass_set_close_async, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GInputStreamClass_close_finish_FIELD_READER
  mrb_define_method(mrb, GInputStreamClass_class, "close_finish", mrb_GLib_GInputStreamClass_get_close_finish, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GInputStreamClass_close_finish_FIELD_WRITER
  mrb_define_method(mrb, GInputStreamClass_class, "close_finish=", mrb_GLib_GInputStreamClass_set_close_finish, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GInputStreamClass__g_reserved1_FIELD_READER
  mrb_define_method(mrb, GInputStreamClass_class, "_g_reserved1", mrb_GLib_GInputStreamClass_get__g_reserved1, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GInputStreamClass__g_reserved1_FIELD_WRITER
  mrb_define_method(mrb, GInputStreamClass_class, "_g_reserved1=", mrb_GLib_GInputStreamClass_set__g_reserved1, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GInputStreamClass__g_reserved2_FIELD_READER
  mrb_define_method(mrb, GInputStreamClass_class, "_g_reserved2", mrb_GLib_GInputStreamClass_get__g_reserved2, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GInputStreamClass__g_reserved2_FIELD_WRITER
  mrb_define_method(mrb, GInputStreamClass_class, "_g_reserved2=", mrb_GLib_GInputStreamClass_set__g_reserved2, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GInputStreamClass__g_reserved3_FIELD_READER
  mrb_define_method(mrb, GInputStreamClass_class, "_g_reserved3", mrb_GLib_GInputStreamClass_get__g_reserved3, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GInputStreamClass__g_reserved3_FIELD_WRITER
  mrb_define_method(mrb, GInputStreamClass_class, "_g_reserved3=", mrb_GLib_GInputStreamClass_set__g_reserved3, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GInputStreamClass__g_reserved4_FIELD_READER
  mrb_define_method(mrb, GInputStreamClass_class, "_g_reserved4", mrb_GLib_GInputStreamClass_get__g_reserved4, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GInputStreamClass__g_reserved4_FIELD_WRITER
  mrb_define_method(mrb, GInputStreamClass_class, "_g_reserved4=", mrb_GLib_GInputStreamClass_set__g_reserved4, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GInputStreamClass__g_reserved5_FIELD_READER
  mrb_define_method(mrb, GInputStreamClass_class, "_g_reserved5", mrb_GLib_GInputStreamClass_get__g_reserved5, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GInputStreamClass__g_reserved5_FIELD_WRITER
  mrb_define_method(mrb, GInputStreamClass_class, "_g_reserved5=", mrb_GLib_GInputStreamClass_set__g_reserved5, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStreamClass::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
