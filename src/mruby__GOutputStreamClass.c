/*
 * struct _GOutputStreamClass
 * Defined in file goutputstream.h @ line 48
 */

#include "mruby_GLib.h"

#if BIND_GOutputStreamClass_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GOutputStreamClass::initialize */
/* sha: 078c619a7a06b1473e31d5a1a19bac082a5ba077e0d2b7babc317d0179d22d6e */
#if BIND_GOutputStreamClass_INITIALIZE
mrb_value
mrb_GLib_GOutputStreamClass_initialize(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass* native_object = (struct _GOutputStreamClass*)calloc(1, sizeof(struct _GOutputStreamClass));
  mruby_giftwrap__GOutputStreamClass_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamClass::initialize */
/* sha: 0c6ceb8a800e3a2e647edcd607a009700443aea103909281ddcca3bded33d001 */
mrb_value
mrb_GLib_GOutputStreamClass_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GOutputStreamClass.disown only accepts objects of type GLib::GOutputStreamClass");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamClass::belongs_to_ruby */
/* sha: 4ef70d34ed22a00295e1b8ce8308d572f617dafcc31dd99269a3956b7c74f7da */
mrb_value
mrb_GLib_GOutputStreamClass_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GOutputStreamClass.belongs_to_ruby only accepts objects of type GLib::GOutputStreamClass");
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

/* MRUBY_BINDING: GOutputStreamClass::parent_class_reader */
/* sha: a80aa8907b542721c7327efba60ee58ab4d0ba52b69fda23683a4bade235864b */
#if BIND_GOutputStreamClass_parent_class_FIELD_READER
/* get_parent_class
 *
 * Return Type: GObjectClass
 */
mrb_value
mrb_GLib_GOutputStreamClass_get_parent_class(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass * native_self = mruby_unbox__GOutputStreamClass(self);

  GObjectClass native_parent_class = native_self->parent_class;

  mrb_value parent_class = TODO_mruby_box_GObjectClass(mrb, native_parent_class);

  return parent_class;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamClass::parent_class_writer */
/* sha: f57c8d2ea541192289cc731b970ac54095af97ede842812845e3cd36d7cacef3 */
#if BIND_GOutputStreamClass_parent_class_FIELD_WRITER
/* set_parent_class
 *
 * Parameters:
 * - value: GObjectClass
 */
mrb_value
mrb_GLib_GOutputStreamClass_set_parent_class(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass * native_self = mruby_unbox__GOutputStreamClass(self);
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

/* MRUBY_BINDING: GOutputStreamClass::write_fn_reader */
/* sha: 320a33daf91fe82e5f13de5c5ab57a914736ffd97ea4c742952b92f13a6422c7 */
#if BIND_GOutputStreamClass_write_fn_FIELD_READER
/* get_write_fn
 *
 * Return Type: gssize (*)(GOutputStream *, const void *, gsize, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GOutputStreamClass_get_write_fn(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass * native_self = mruby_unbox__GOutputStreamClass(self);

  gssize (*)(GOutputStream *, const void *, gsize, GCancellable *, GError **) native_write_fn = native_self->write_fn;

  mrb_value write_fn = TODO_mruby_box_gssize_LPAREN_PTR_RPAREN_LPAREN_GOutputStream_PTR_COMMAvoid_PTR_COMMA_gsizeCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_write_fn);

  return write_fn;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamClass::write_fn_writer */
/* sha: c2242d349813a670765c284453c20e3911c98aa281b6b4e7b720b12207a36a98 */
#if BIND_GOutputStreamClass_write_fn_FIELD_WRITER
/* set_write_fn
 *
 * Parameters:
 * - value: gssize (*)(GOutputStream *, const void *, gsize, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GOutputStreamClass_set_write_fn(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass * native_self = mruby_unbox__GOutputStreamClass(self);
  mrb_value write_fn;

  mrb_get_args(mrb, "o", &write_fn);

  /* type checking */
  TODO_type_check_gssize_LPAREN_PTR_RPAREN_LPAREN_GOutputStream_PTR_COMMAvoid_PTR_COMMA_gsizeCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(write_fn);

  gssize (*native_write_fn)(GOutputStream *, const void *, gsize, GCancellable *, GError **) = TODO_mruby_unbox_gssize_LPAREN_PTR_RPAREN_LPAREN_GOutputStream_PTR_COMMAvoid_PTR_COMMA_gsizeCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(write_fn);

  native_self->write_fn = native_write_fn;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamClass::splice_reader */
/* sha: 5f86e0acadd4f78d1e6fc5a1653f7aed901ef2f4cc0c07cebee657e9c84143ae */
#if BIND_GOutputStreamClass_splice_FIELD_READER
/* get_splice
 *
 * Return Type: gssize (*)(GOutputStream *, GInputStream *, GOutputStreamSpliceFlags, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GOutputStreamClass_get_splice(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass * native_self = mruby_unbox__GOutputStreamClass(self);

  gssize (*)(GOutputStream *, GInputStream *, GOutputStreamSpliceFlags, GCancellable *, GError **) native_splice = native_self->splice;

  mrb_value splice = TODO_mruby_box_gssize_LPAREN_PTR_RPAREN_LPAREN_GOutputStream_PTR_COMMA_GInputStream_PTR_COMMA_GOutputStreamSpliceFlagsCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_splice);

  return splice;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamClass::splice_writer */
/* sha: bb4ccd42ee661e1ae155e08a133fe90ed3db4faac116f8e86c72ccbea46ad97b */
#if BIND_GOutputStreamClass_splice_FIELD_WRITER
/* set_splice
 *
 * Parameters:
 * - value: gssize (*)(GOutputStream *, GInputStream *, GOutputStreamSpliceFlags, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GOutputStreamClass_set_splice(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass * native_self = mruby_unbox__GOutputStreamClass(self);
  mrb_value splice;

  mrb_get_args(mrb, "o", &splice);

  /* type checking */
  TODO_type_check_gssize_LPAREN_PTR_RPAREN_LPAREN_GOutputStream_PTR_COMMA_GInputStream_PTR_COMMA_GOutputStreamSpliceFlagsCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(splice);

  gssize (*native_splice)(GOutputStream *, GInputStream *, GOutputStreamSpliceFlags, GCancellable *, GError **) = TODO_mruby_unbox_gssize_LPAREN_PTR_RPAREN_LPAREN_GOutputStream_PTR_COMMA_GInputStream_PTR_COMMA_GOutputStreamSpliceFlagsCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(splice);

  native_self->splice = native_splice;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamClass::flush_reader */
/* sha: bb4d5d10d64a1c33e340a98d63a24ab50fd6cda80be75461a1fc13920b59f3ee */
#if BIND_GOutputStreamClass_flush_FIELD_READER
/* get_flush
 *
 * Return Type: gboolean (*)(GOutputStream *, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GOutputStreamClass_get_flush(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass * native_self = mruby_unbox__GOutputStreamClass(self);

  gboolean (*)(GOutputStream *, GCancellable *, GError **) native_flush = native_self->flush;

  mrb_value flush = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GOutputStream_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_flush);

  return flush;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamClass::flush_writer */
/* sha: a850cb46b49d12f73cf768e84f3bab716f6dcfa63f7b0cb8290723cafa66bb57 */
#if BIND_GOutputStreamClass_flush_FIELD_WRITER
/* set_flush
 *
 * Parameters:
 * - value: gboolean (*)(GOutputStream *, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GOutputStreamClass_set_flush(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass * native_self = mruby_unbox__GOutputStreamClass(self);
  mrb_value flush;

  mrb_get_args(mrb, "o", &flush);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GOutputStream_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(flush);

  gboolean (*native_flush)(GOutputStream *, GCancellable *, GError **) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GOutputStream_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(flush);

  native_self->flush = native_flush;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamClass::close_fn_reader */
/* sha: eaaf58bd12a51b2a9f28dbfd814edb23a35c8a7fd8341815a3104e13983ec0ba */
#if BIND_GOutputStreamClass_close_fn_FIELD_READER
/* get_close_fn
 *
 * Return Type: gboolean (*)(GOutputStream *, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GOutputStreamClass_get_close_fn(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass * native_self = mruby_unbox__GOutputStreamClass(self);

  gboolean (*)(GOutputStream *, GCancellable *, GError **) native_close_fn = native_self->close_fn;

  mrb_value close_fn = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GOutputStream_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_close_fn);

  return close_fn;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamClass::close_fn_writer */
/* sha: 11ab694818c1af3e6156ce1753dd28c298ef9686dedfcf43c7b56c782d74bffa */
#if BIND_GOutputStreamClass_close_fn_FIELD_WRITER
/* set_close_fn
 *
 * Parameters:
 * - value: gboolean (*)(GOutputStream *, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GOutputStreamClass_set_close_fn(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass * native_self = mruby_unbox__GOutputStreamClass(self);
  mrb_value close_fn;

  mrb_get_args(mrb, "o", &close_fn);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GOutputStream_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(close_fn);

  gboolean (*native_close_fn)(GOutputStream *, GCancellable *, GError **) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GOutputStream_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(close_fn);

  native_self->close_fn = native_close_fn;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamClass::write_async_reader */
/* sha: 37d307db90cd926b1371a6e0c9a8a5108e78cd39d8b29f4ccf1593e756e58ab3 */
#if BIND_GOutputStreamClass_write_async_FIELD_READER
/* get_write_async
 *
 * Return Type: void (*)(GOutputStream *, const void *, gsize, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GOutputStreamClass_get_write_async(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass * native_self = mruby_unbox__GOutputStreamClass(self);

  void (*)(GOutputStream *, const void *, gsize, int, GCancellable *, GAsyncReadyCallback, gpointer) native_write_async = native_self->write_async;

  mrb_value write_async = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GOutputStream_PTR_COMMAvoid_PTR_COMMA_gsizeCOMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(mrb, native_write_async);

  return write_async;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamClass::write_async_writer */
/* sha: b736e5188b0b073ae1b8ebfb1822dcc0d5b8de2a83e1b85f305d792252e78d43 */
#if BIND_GOutputStreamClass_write_async_FIELD_WRITER
/* set_write_async
 *
 * Parameters:
 * - value: void (*)(GOutputStream *, const void *, gsize, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GOutputStreamClass_set_write_async(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass * native_self = mruby_unbox__GOutputStreamClass(self);
  mrb_value write_async;

  mrb_get_args(mrb, "o", &write_async);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GOutputStream_PTR_COMMAvoid_PTR_COMMA_gsizeCOMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(write_async);

  void (*native_write_async)(GOutputStream *, const void *, gsize, int, GCancellable *, GAsyncReadyCallback, gpointer) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GOutputStream_PTR_COMMAvoid_PTR_COMMA_gsizeCOMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(write_async);

  native_self->write_async = native_write_async;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamClass::write_finish_reader */
/* sha: 5799c7065fd2feddba10353c216d0d233f088d905c2905714391e3700bad54dd */
#if BIND_GOutputStreamClass_write_finish_FIELD_READER
/* get_write_finish
 *
 * Return Type: gssize (*)(GOutputStream *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GOutputStreamClass_get_write_finish(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass * native_self = mruby_unbox__GOutputStreamClass(self);

  gssize (*)(GOutputStream *, GAsyncResult *, GError **) native_write_finish = native_self->write_finish;

  mrb_value write_finish = TODO_mruby_box_gssize_LPAREN_PTR_RPAREN_LPAREN_GOutputStream_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_write_finish);

  return write_finish;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamClass::write_finish_writer */
/* sha: 53f9c632619de7b18793f432bd978b39fe4b9d79bc8a8ac2fbb7b39254a8f1ec */
#if BIND_GOutputStreamClass_write_finish_FIELD_WRITER
/* set_write_finish
 *
 * Parameters:
 * - value: gssize (*)(GOutputStream *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GOutputStreamClass_set_write_finish(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass * native_self = mruby_unbox__GOutputStreamClass(self);
  mrb_value write_finish;

  mrb_get_args(mrb, "o", &write_finish);

  /* type checking */
  TODO_type_check_gssize_LPAREN_PTR_RPAREN_LPAREN_GOutputStream_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(write_finish);

  gssize (*native_write_finish)(GOutputStream *, GAsyncResult *, GError **) = TODO_mruby_unbox_gssize_LPAREN_PTR_RPAREN_LPAREN_GOutputStream_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(write_finish);

  native_self->write_finish = native_write_finish;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamClass::splice_async_reader */
/* sha: d7f84b9ca0208b1f67633fe482092bc612b4fb679ae259085513376ae5806628 */
#if BIND_GOutputStreamClass_splice_async_FIELD_READER
/* get_splice_async
 *
 * Return Type: void (*)(GOutputStream *, GInputStream *, GOutputStreamSpliceFlags, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GOutputStreamClass_get_splice_async(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass * native_self = mruby_unbox__GOutputStreamClass(self);

  void (*)(GOutputStream *, GInputStream *, GOutputStreamSpliceFlags, int, GCancellable *, GAsyncReadyCallback, gpointer) native_splice_async = native_self->splice_async;

  mrb_value splice_async = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GOutputStream_PTR_COMMA_GInputStream_PTR_COMMA_GOutputStreamSpliceFlagsCOMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(mrb, native_splice_async);

  return splice_async;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamClass::splice_async_writer */
/* sha: eb13a9440b882baac7559f329e7796bdf27d560734c1d4719e3edbb98abd65e0 */
#if BIND_GOutputStreamClass_splice_async_FIELD_WRITER
/* set_splice_async
 *
 * Parameters:
 * - value: void (*)(GOutputStream *, GInputStream *, GOutputStreamSpliceFlags, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GOutputStreamClass_set_splice_async(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass * native_self = mruby_unbox__GOutputStreamClass(self);
  mrb_value splice_async;

  mrb_get_args(mrb, "o", &splice_async);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GOutputStream_PTR_COMMA_GInputStream_PTR_COMMA_GOutputStreamSpliceFlagsCOMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(splice_async);

  void (*native_splice_async)(GOutputStream *, GInputStream *, GOutputStreamSpliceFlags, int, GCancellable *, GAsyncReadyCallback, gpointer) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GOutputStream_PTR_COMMA_GInputStream_PTR_COMMA_GOutputStreamSpliceFlagsCOMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(splice_async);

  native_self->splice_async = native_splice_async;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamClass::splice_finish_reader */
/* sha: 5de42b44db864b5e9fdb262419ee3455c4c6ee5bd4ec321de25a3116ed59aee1 */
#if BIND_GOutputStreamClass_splice_finish_FIELD_READER
/* get_splice_finish
 *
 * Return Type: gssize (*)(GOutputStream *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GOutputStreamClass_get_splice_finish(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass * native_self = mruby_unbox__GOutputStreamClass(self);

  gssize (*)(GOutputStream *, GAsyncResult *, GError **) native_splice_finish = native_self->splice_finish;

  mrb_value splice_finish = TODO_mruby_box_gssize_LPAREN_PTR_RPAREN_LPAREN_GOutputStream_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_splice_finish);

  return splice_finish;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamClass::splice_finish_writer */
/* sha: 543a2511cfb68e1bc5a987c809d11e591f825556dc0971a3abb9ab605ccef5c2 */
#if BIND_GOutputStreamClass_splice_finish_FIELD_WRITER
/* set_splice_finish
 *
 * Parameters:
 * - value: gssize (*)(GOutputStream *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GOutputStreamClass_set_splice_finish(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass * native_self = mruby_unbox__GOutputStreamClass(self);
  mrb_value splice_finish;

  mrb_get_args(mrb, "o", &splice_finish);

  /* type checking */
  TODO_type_check_gssize_LPAREN_PTR_RPAREN_LPAREN_GOutputStream_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(splice_finish);

  gssize (*native_splice_finish)(GOutputStream *, GAsyncResult *, GError **) = TODO_mruby_unbox_gssize_LPAREN_PTR_RPAREN_LPAREN_GOutputStream_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(splice_finish);

  native_self->splice_finish = native_splice_finish;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamClass::flush_async_reader */
/* sha: 7269b74a1fe457a185e2d108c96c9b5cb73f97da71b63d3da3d9b356012ece94 */
#if BIND_GOutputStreamClass_flush_async_FIELD_READER
/* get_flush_async
 *
 * Return Type: void (*)(GOutputStream *, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GOutputStreamClass_get_flush_async(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass * native_self = mruby_unbox__GOutputStreamClass(self);

  void (*)(GOutputStream *, int, GCancellable *, GAsyncReadyCallback, gpointer) native_flush_async = native_self->flush_async;

  mrb_value flush_async = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GOutputStream_PTR_COMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(mrb, native_flush_async);

  return flush_async;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamClass::flush_async_writer */
/* sha: 9e65559b2e575861dd3c62dac3510abe80e1c50bdc1ec749da0edb696b9a77eb */
#if BIND_GOutputStreamClass_flush_async_FIELD_WRITER
/* set_flush_async
 *
 * Parameters:
 * - value: void (*)(GOutputStream *, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GOutputStreamClass_set_flush_async(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass * native_self = mruby_unbox__GOutputStreamClass(self);
  mrb_value flush_async;

  mrb_get_args(mrb, "o", &flush_async);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GOutputStream_PTR_COMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(flush_async);

  void (*native_flush_async)(GOutputStream *, int, GCancellable *, GAsyncReadyCallback, gpointer) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GOutputStream_PTR_COMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(flush_async);

  native_self->flush_async = native_flush_async;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamClass::flush_finish_reader */
/* sha: 6f95b2f90b6dd9960a87c753df0f8792fcfdcf59164fae543d6d7715094a229a */
#if BIND_GOutputStreamClass_flush_finish_FIELD_READER
/* get_flush_finish
 *
 * Return Type: gboolean (*)(GOutputStream *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GOutputStreamClass_get_flush_finish(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass * native_self = mruby_unbox__GOutputStreamClass(self);

  gboolean (*)(GOutputStream *, GAsyncResult *, GError **) native_flush_finish = native_self->flush_finish;

  mrb_value flush_finish = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GOutputStream_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_flush_finish);

  return flush_finish;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamClass::flush_finish_writer */
/* sha: 11aee127b99733abc89a457b600c3500e68d2c7f93226427e4d5ee3e82e10d80 */
#if BIND_GOutputStreamClass_flush_finish_FIELD_WRITER
/* set_flush_finish
 *
 * Parameters:
 * - value: gboolean (*)(GOutputStream *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GOutputStreamClass_set_flush_finish(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass * native_self = mruby_unbox__GOutputStreamClass(self);
  mrb_value flush_finish;

  mrb_get_args(mrb, "o", &flush_finish);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GOutputStream_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(flush_finish);

  gboolean (*native_flush_finish)(GOutputStream *, GAsyncResult *, GError **) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GOutputStream_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(flush_finish);

  native_self->flush_finish = native_flush_finish;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamClass::close_async_reader */
/* sha: f8d15e469c7c65d3ce26d32e3e19c88acf8d86f00276cc2da19360b257f73f88 */
#if BIND_GOutputStreamClass_close_async_FIELD_READER
/* get_close_async
 *
 * Return Type: void (*)(GOutputStream *, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GOutputStreamClass_get_close_async(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass * native_self = mruby_unbox__GOutputStreamClass(self);

  void (*)(GOutputStream *, int, GCancellable *, GAsyncReadyCallback, gpointer) native_close_async = native_self->close_async;

  mrb_value close_async = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GOutputStream_PTR_COMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(mrb, native_close_async);

  return close_async;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamClass::close_async_writer */
/* sha: ef190e9ddbf2718f0523aa521059cedb568864f93196e6610ff12cdb66b53791 */
#if BIND_GOutputStreamClass_close_async_FIELD_WRITER
/* set_close_async
 *
 * Parameters:
 * - value: void (*)(GOutputStream *, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GOutputStreamClass_set_close_async(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass * native_self = mruby_unbox__GOutputStreamClass(self);
  mrb_value close_async;

  mrb_get_args(mrb, "o", &close_async);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GOutputStream_PTR_COMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(close_async);

  void (*native_close_async)(GOutputStream *, int, GCancellable *, GAsyncReadyCallback, gpointer) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GOutputStream_PTR_COMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(close_async);

  native_self->close_async = native_close_async;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamClass::close_finish_reader */
/* sha: 421844206a84a2faac29ed2de7bf73d39ed224098cc0c34ed3e56136096a6fa1 */
#if BIND_GOutputStreamClass_close_finish_FIELD_READER
/* get_close_finish
 *
 * Return Type: gboolean (*)(GOutputStream *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GOutputStreamClass_get_close_finish(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass * native_self = mruby_unbox__GOutputStreamClass(self);

  gboolean (*)(GOutputStream *, GAsyncResult *, GError **) native_close_finish = native_self->close_finish;

  mrb_value close_finish = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GOutputStream_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_close_finish);

  return close_finish;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamClass::close_finish_writer */
/* sha: 1deb4485cf7d52288329d91588f7519701dd34289424d01800dacdc1e0bb992c */
#if BIND_GOutputStreamClass_close_finish_FIELD_WRITER
/* set_close_finish
 *
 * Parameters:
 * - value: gboolean (*)(GOutputStream *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GOutputStreamClass_set_close_finish(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass * native_self = mruby_unbox__GOutputStreamClass(self);
  mrb_value close_finish;

  mrb_get_args(mrb, "o", &close_finish);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GOutputStream_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(close_finish);

  gboolean (*native_close_finish)(GOutputStream *, GAsyncResult *, GError **) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GOutputStream_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(close_finish);

  native_self->close_finish = native_close_finish;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamClass::_g_reserved1_reader */
/* sha: 312ce9a3a14145b2a99acb8ee7d53e3df4dfa92052c947f09099c0b6ef4b906c */
#if BIND_GOutputStreamClass__g_reserved1_FIELD_READER
/* get__g_reserved1
 *
 * Return Type: void (*)(void)
 */
mrb_value
mrb_GLib_GOutputStreamClass_get__g_reserved1(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass * native_self = mruby_unbox__GOutputStreamClass(self);

  void (*)(void) native__g_reserved1 = native_self->_g_reserved1;

  mrb_value _g_reserved1 = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native__g_reserved1);

  return _g_reserved1;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamClass::_g_reserved1_writer */
/* sha: 5111c78790bb8abad96674b08a5fb9a28fd2aac17493ed07efcec402d55d7e17 */
#if BIND_GOutputStreamClass__g_reserved1_FIELD_WRITER
/* set__g_reserved1
 *
 * Parameters:
 * - value: void (*)(void)
 */
mrb_value
mrb_GLib_GOutputStreamClass_set__g_reserved1(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass * native_self = mruby_unbox__GOutputStreamClass(self);
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

/* MRUBY_BINDING: GOutputStreamClass::_g_reserved2_reader */
/* sha: 787907272d7e83fd15b7203f6928d03a89b94e10c237bb6421e3a71c4d9addf8 */
#if BIND_GOutputStreamClass__g_reserved2_FIELD_READER
/* get__g_reserved2
 *
 * Return Type: void (*)(void)
 */
mrb_value
mrb_GLib_GOutputStreamClass_get__g_reserved2(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass * native_self = mruby_unbox__GOutputStreamClass(self);

  void (*)(void) native__g_reserved2 = native_self->_g_reserved2;

  mrb_value _g_reserved2 = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native__g_reserved2);

  return _g_reserved2;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamClass::_g_reserved2_writer */
/* sha: c474625584b3450598b86b27df7bca433a48bfc67305e837cb3cb8e1f4d3f77c */
#if BIND_GOutputStreamClass__g_reserved2_FIELD_WRITER
/* set__g_reserved2
 *
 * Parameters:
 * - value: void (*)(void)
 */
mrb_value
mrb_GLib_GOutputStreamClass_set__g_reserved2(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass * native_self = mruby_unbox__GOutputStreamClass(self);
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

/* MRUBY_BINDING: GOutputStreamClass::_g_reserved3_reader */
/* sha: 4b854f7632a55831d6e014ac4c0b201400bee850d6dd1eb3fde90197c61abce8 */
#if BIND_GOutputStreamClass__g_reserved3_FIELD_READER
/* get__g_reserved3
 *
 * Return Type: void (*)(void)
 */
mrb_value
mrb_GLib_GOutputStreamClass_get__g_reserved3(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass * native_self = mruby_unbox__GOutputStreamClass(self);

  void (*)(void) native__g_reserved3 = native_self->_g_reserved3;

  mrb_value _g_reserved3 = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native__g_reserved3);

  return _g_reserved3;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamClass::_g_reserved3_writer */
/* sha: 63835a1f4ce18067ced4f4e7a43d3e40059e0bb50d581cbbc8c4b784d662eed4 */
#if BIND_GOutputStreamClass__g_reserved3_FIELD_WRITER
/* set__g_reserved3
 *
 * Parameters:
 * - value: void (*)(void)
 */
mrb_value
mrb_GLib_GOutputStreamClass_set__g_reserved3(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass * native_self = mruby_unbox__GOutputStreamClass(self);
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

/* MRUBY_BINDING: GOutputStreamClass::_g_reserved4_reader */
/* sha: 1a6c8d8ca265fd8dbba3a3ab709abb2790eebbb2b3b213a187f21f97eda9a4e7 */
#if BIND_GOutputStreamClass__g_reserved4_FIELD_READER
/* get__g_reserved4
 *
 * Return Type: void (*)(void)
 */
mrb_value
mrb_GLib_GOutputStreamClass_get__g_reserved4(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass * native_self = mruby_unbox__GOutputStreamClass(self);

  void (*)(void) native__g_reserved4 = native_self->_g_reserved4;

  mrb_value _g_reserved4 = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native__g_reserved4);

  return _g_reserved4;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamClass::_g_reserved4_writer */
/* sha: d2c5a01596cd45ab5a12cc9b514067777d5c08659e39997b5b2e170968efe9b2 */
#if BIND_GOutputStreamClass__g_reserved4_FIELD_WRITER
/* set__g_reserved4
 *
 * Parameters:
 * - value: void (*)(void)
 */
mrb_value
mrb_GLib_GOutputStreamClass_set__g_reserved4(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass * native_self = mruby_unbox__GOutputStreamClass(self);
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

/* MRUBY_BINDING: GOutputStreamClass::_g_reserved5_reader */
/* sha: e28b8d003fff9d0caf1ef614768a305459d599202ab6881c59774a7c15ca9c39 */
#if BIND_GOutputStreamClass__g_reserved5_FIELD_READER
/* get__g_reserved5
 *
 * Return Type: void (*)(void)
 */
mrb_value
mrb_GLib_GOutputStreamClass_get__g_reserved5(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass * native_self = mruby_unbox__GOutputStreamClass(self);

  void (*)(void) native__g_reserved5 = native_self->_g_reserved5;

  mrb_value _g_reserved5 = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native__g_reserved5);

  return _g_reserved5;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamClass::_g_reserved5_writer */
/* sha: e6da6d6c8a4cdbc32940e4526d6344e010606320b9179088af8282bf77508806 */
#if BIND_GOutputStreamClass__g_reserved5_FIELD_WRITER
/* set__g_reserved5
 *
 * Parameters:
 * - value: void (*)(void)
 */
mrb_value
mrb_GLib_GOutputStreamClass_set__g_reserved5(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass * native_self = mruby_unbox__GOutputStreamClass(self);
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

/* MRUBY_BINDING: GOutputStreamClass::_g_reserved6_reader */
/* sha: d24a76adf5ae9bb7d704084a7ae7ce5660465138bdecce6ac2090dd68fa27e0c */
#if BIND_GOutputStreamClass__g_reserved6_FIELD_READER
/* get__g_reserved6
 *
 * Return Type: void (*)(void)
 */
mrb_value
mrb_GLib_GOutputStreamClass_get__g_reserved6(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass * native_self = mruby_unbox__GOutputStreamClass(self);

  void (*)(void) native__g_reserved6 = native_self->_g_reserved6;

  mrb_value _g_reserved6 = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native__g_reserved6);

  return _g_reserved6;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamClass::_g_reserved6_writer */
/* sha: 64166b7fb8917e1e0f58c1546ab273b7262132ce74f40122ce7659b811117a48 */
#if BIND_GOutputStreamClass__g_reserved6_FIELD_WRITER
/* set__g_reserved6
 *
 * Parameters:
 * - value: void (*)(void)
 */
mrb_value
mrb_GLib_GOutputStreamClass_set__g_reserved6(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass * native_self = mruby_unbox__GOutputStreamClass(self);
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

/* MRUBY_BINDING: GOutputStreamClass::_g_reserved7_reader */
/* sha: abe480a465a9c3a297978509a9e55bcd4e76a6f81ee582099187b0dc4ef9c306 */
#if BIND_GOutputStreamClass__g_reserved7_FIELD_READER
/* get__g_reserved7
 *
 * Return Type: void (*)(void)
 */
mrb_value
mrb_GLib_GOutputStreamClass_get__g_reserved7(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass * native_self = mruby_unbox__GOutputStreamClass(self);

  void (*)(void) native__g_reserved7 = native_self->_g_reserved7;

  mrb_value _g_reserved7 = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native__g_reserved7);

  return _g_reserved7;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamClass::_g_reserved7_writer */
/* sha: 197401a6fd18df3a03bd64317e2f5a5f0bd69bc8aa9b04c7cf542394d97626d6 */
#if BIND_GOutputStreamClass__g_reserved7_FIELD_WRITER
/* set__g_reserved7
 *
 * Parameters:
 * - value: void (*)(void)
 */
mrb_value
mrb_GLib_GOutputStreamClass_set__g_reserved7(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass * native_self = mruby_unbox__GOutputStreamClass(self);
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

/* MRUBY_BINDING: GOutputStreamClass::_g_reserved8_reader */
/* sha: 67fa7e654cab27149e58c62270cc31e7e34fbddc95118f129190cff758cba809 */
#if BIND_GOutputStreamClass__g_reserved8_FIELD_READER
/* get__g_reserved8
 *
 * Return Type: void (*)(void)
 */
mrb_value
mrb_GLib_GOutputStreamClass_get__g_reserved8(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass * native_self = mruby_unbox__GOutputStreamClass(self);

  void (*)(void) native__g_reserved8 = native_self->_g_reserved8;

  mrb_value _g_reserved8 = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native__g_reserved8);

  return _g_reserved8;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamClass::_g_reserved8_writer */
/* sha: 911757044cfe75f02c33a8cd7e9e4518d9b5e67863ee22ab8e03ad39ad5e8e10 */
#if BIND_GOutputStreamClass__g_reserved8_FIELD_WRITER
/* set__g_reserved8
 *
 * Parameters:
 * - value: void (*)(void)
 */
mrb_value
mrb_GLib_GOutputStreamClass_set__g_reserved8(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamClass * native_self = mruby_unbox__GOutputStreamClass(self);
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


void mrb_GLib_GOutputStreamClass_init(mrb_state* mrb) {
/* MRUBY_BINDING: GOutputStreamClass::class_definition */
/* sha: 4e73939d749099740ac98c2d49845d3079ab0b389da6c788966e408549ea5bf8 */
  struct RClass* GOutputStreamClass_class = mrb_define_class_under(mrb, GLib_module(mrb), "GOutputStreamClass", mrb->object_class);
  MRB_SET_INSTANCE_TT(GOutputStreamClass_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamClass::class_method_definitions */
/* sha: e6c931aac395d8b542227017b4f409c8b4a387d9d0d5f8e26a26aa2a6c3773d8 */
#if BIND_GOutputStreamClass_INITIALIZE
  mrb_define_method(mrb, GOutputStreamClass_class, "initialize", mrb_GLib_GOutputStreamClass_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GOutputStreamClass_class, "disown", mrb_GLib_GOutputStreamClass_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GOutputStreamClass_class, "belongs_to_ruby?", mrb_GLib_GOutputStreamClass_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamClass::attr_definitions */
/* sha: 1a5a4f81600e3db0319b0b806856813f9042e3832a535377bdf3bb4986af8f76 */
  /*
   * Fields
   */
#if BIND_GOutputStreamClass_parent_class_FIELD_READER
  mrb_define_method(mrb, GOutputStreamClass_class, "parent_class", mrb_GLib_GOutputStreamClass_get_parent_class, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GOutputStreamClass_parent_class_FIELD_WRITER
  mrb_define_method(mrb, GOutputStreamClass_class, "parent_class=", mrb_GLib_GOutputStreamClass_set_parent_class, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GOutputStreamClass_write_fn_FIELD_READER
  mrb_define_method(mrb, GOutputStreamClass_class, "write_fn", mrb_GLib_GOutputStreamClass_get_write_fn, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GOutputStreamClass_write_fn_FIELD_WRITER
  mrb_define_method(mrb, GOutputStreamClass_class, "write_fn=", mrb_GLib_GOutputStreamClass_set_write_fn, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GOutputStreamClass_splice_FIELD_READER
  mrb_define_method(mrb, GOutputStreamClass_class, "splice", mrb_GLib_GOutputStreamClass_get_splice, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GOutputStreamClass_splice_FIELD_WRITER
  mrb_define_method(mrb, GOutputStreamClass_class, "splice=", mrb_GLib_GOutputStreamClass_set_splice, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GOutputStreamClass_flush_FIELD_READER
  mrb_define_method(mrb, GOutputStreamClass_class, "flush", mrb_GLib_GOutputStreamClass_get_flush, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GOutputStreamClass_flush_FIELD_WRITER
  mrb_define_method(mrb, GOutputStreamClass_class, "flush=", mrb_GLib_GOutputStreamClass_set_flush, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GOutputStreamClass_close_fn_FIELD_READER
  mrb_define_method(mrb, GOutputStreamClass_class, "close_fn", mrb_GLib_GOutputStreamClass_get_close_fn, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GOutputStreamClass_close_fn_FIELD_WRITER
  mrb_define_method(mrb, GOutputStreamClass_class, "close_fn=", mrb_GLib_GOutputStreamClass_set_close_fn, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GOutputStreamClass_write_async_FIELD_READER
  mrb_define_method(mrb, GOutputStreamClass_class, "write_async", mrb_GLib_GOutputStreamClass_get_write_async, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GOutputStreamClass_write_async_FIELD_WRITER
  mrb_define_method(mrb, GOutputStreamClass_class, "write_async=", mrb_GLib_GOutputStreamClass_set_write_async, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GOutputStreamClass_write_finish_FIELD_READER
  mrb_define_method(mrb, GOutputStreamClass_class, "write_finish", mrb_GLib_GOutputStreamClass_get_write_finish, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GOutputStreamClass_write_finish_FIELD_WRITER
  mrb_define_method(mrb, GOutputStreamClass_class, "write_finish=", mrb_GLib_GOutputStreamClass_set_write_finish, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GOutputStreamClass_splice_async_FIELD_READER
  mrb_define_method(mrb, GOutputStreamClass_class, "splice_async", mrb_GLib_GOutputStreamClass_get_splice_async, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GOutputStreamClass_splice_async_FIELD_WRITER
  mrb_define_method(mrb, GOutputStreamClass_class, "splice_async=", mrb_GLib_GOutputStreamClass_set_splice_async, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GOutputStreamClass_splice_finish_FIELD_READER
  mrb_define_method(mrb, GOutputStreamClass_class, "splice_finish", mrb_GLib_GOutputStreamClass_get_splice_finish, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GOutputStreamClass_splice_finish_FIELD_WRITER
  mrb_define_method(mrb, GOutputStreamClass_class, "splice_finish=", mrb_GLib_GOutputStreamClass_set_splice_finish, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GOutputStreamClass_flush_async_FIELD_READER
  mrb_define_method(mrb, GOutputStreamClass_class, "flush_async", mrb_GLib_GOutputStreamClass_get_flush_async, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GOutputStreamClass_flush_async_FIELD_WRITER
  mrb_define_method(mrb, GOutputStreamClass_class, "flush_async=", mrb_GLib_GOutputStreamClass_set_flush_async, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GOutputStreamClass_flush_finish_FIELD_READER
  mrb_define_method(mrb, GOutputStreamClass_class, "flush_finish", mrb_GLib_GOutputStreamClass_get_flush_finish, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GOutputStreamClass_flush_finish_FIELD_WRITER
  mrb_define_method(mrb, GOutputStreamClass_class, "flush_finish=", mrb_GLib_GOutputStreamClass_set_flush_finish, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GOutputStreamClass_close_async_FIELD_READER
  mrb_define_method(mrb, GOutputStreamClass_class, "close_async", mrb_GLib_GOutputStreamClass_get_close_async, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GOutputStreamClass_close_async_FIELD_WRITER
  mrb_define_method(mrb, GOutputStreamClass_class, "close_async=", mrb_GLib_GOutputStreamClass_set_close_async, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GOutputStreamClass_close_finish_FIELD_READER
  mrb_define_method(mrb, GOutputStreamClass_class, "close_finish", mrb_GLib_GOutputStreamClass_get_close_finish, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GOutputStreamClass_close_finish_FIELD_WRITER
  mrb_define_method(mrb, GOutputStreamClass_class, "close_finish=", mrb_GLib_GOutputStreamClass_set_close_finish, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GOutputStreamClass__g_reserved1_FIELD_READER
  mrb_define_method(mrb, GOutputStreamClass_class, "_g_reserved1", mrb_GLib_GOutputStreamClass_get__g_reserved1, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GOutputStreamClass__g_reserved1_FIELD_WRITER
  mrb_define_method(mrb, GOutputStreamClass_class, "_g_reserved1=", mrb_GLib_GOutputStreamClass_set__g_reserved1, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GOutputStreamClass__g_reserved2_FIELD_READER
  mrb_define_method(mrb, GOutputStreamClass_class, "_g_reserved2", mrb_GLib_GOutputStreamClass_get__g_reserved2, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GOutputStreamClass__g_reserved2_FIELD_WRITER
  mrb_define_method(mrb, GOutputStreamClass_class, "_g_reserved2=", mrb_GLib_GOutputStreamClass_set__g_reserved2, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GOutputStreamClass__g_reserved3_FIELD_READER
  mrb_define_method(mrb, GOutputStreamClass_class, "_g_reserved3", mrb_GLib_GOutputStreamClass_get__g_reserved3, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GOutputStreamClass__g_reserved3_FIELD_WRITER
  mrb_define_method(mrb, GOutputStreamClass_class, "_g_reserved3=", mrb_GLib_GOutputStreamClass_set__g_reserved3, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GOutputStreamClass__g_reserved4_FIELD_READER
  mrb_define_method(mrb, GOutputStreamClass_class, "_g_reserved4", mrb_GLib_GOutputStreamClass_get__g_reserved4, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GOutputStreamClass__g_reserved4_FIELD_WRITER
  mrb_define_method(mrb, GOutputStreamClass_class, "_g_reserved4=", mrb_GLib_GOutputStreamClass_set__g_reserved4, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GOutputStreamClass__g_reserved5_FIELD_READER
  mrb_define_method(mrb, GOutputStreamClass_class, "_g_reserved5", mrb_GLib_GOutputStreamClass_get__g_reserved5, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GOutputStreamClass__g_reserved5_FIELD_WRITER
  mrb_define_method(mrb, GOutputStreamClass_class, "_g_reserved5=", mrb_GLib_GOutputStreamClass_set__g_reserved5, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GOutputStreamClass__g_reserved6_FIELD_READER
  mrb_define_method(mrb, GOutputStreamClass_class, "_g_reserved6", mrb_GLib_GOutputStreamClass_get__g_reserved6, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GOutputStreamClass__g_reserved6_FIELD_WRITER
  mrb_define_method(mrb, GOutputStreamClass_class, "_g_reserved6=", mrb_GLib_GOutputStreamClass_set__g_reserved6, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GOutputStreamClass__g_reserved7_FIELD_READER
  mrb_define_method(mrb, GOutputStreamClass_class, "_g_reserved7", mrb_GLib_GOutputStreamClass_get__g_reserved7, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GOutputStreamClass__g_reserved7_FIELD_WRITER
  mrb_define_method(mrb, GOutputStreamClass_class, "_g_reserved7=", mrb_GLib_GOutputStreamClass_set__g_reserved7, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GOutputStreamClass__g_reserved8_FIELD_READER
  mrb_define_method(mrb, GOutputStreamClass_class, "_g_reserved8", mrb_GLib_GOutputStreamClass_get__g_reserved8, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GOutputStreamClass__g_reserved8_FIELD_WRITER
  mrb_define_method(mrb, GOutputStreamClass_class, "_g_reserved8=", mrb_GLib_GOutputStreamClass_set__g_reserved8, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamClass::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
