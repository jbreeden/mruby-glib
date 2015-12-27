/*
 * struct _GIOFuncs
 * Defined in file giochannel.h @ line 42
 */

#include "mruby_GLib.h"

#if BIND_GIOFuncs_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GIOFuncs::initialize */
/* sha: c7951425c4dd6c80928a2a5590b1d94a2372dae62a6543035b2e5711e10e48cb */
#if BIND_GIOFuncs_INITIALIZE
mrb_value
mrb_GLib_GIOFuncs_initialize(mrb_state* mrb, mrb_value self) {
  struct _GIOFuncs* native_object = (struct _GIOFuncs*)calloc(1, sizeof(struct _GIOFuncs));
  mruby_giftwrap__GIOFuncs_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOFuncs::initialize */
/* sha: 0ab983fe7793e1222b854beab059da6cf4bbec1fb566bfeba28625e157626951 */
mrb_value
mrb_GLib_GIOFuncs_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GIOFuncs.disown only accepts objects of type GLib::GIOFuncs");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOFuncs::belongs_to_ruby */
/* sha: c6329a875079aa374f63d6dfc9151e1592dc5b4d695e59278f736a4ecc0bf462 */
mrb_value
mrb_GLib_GIOFuncs_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GIOFuncs.belongs_to_ruby only accepts objects of type GLib::GIOFuncs");
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

/* MRUBY_BINDING: GIOFuncs::io_read_reader */
/* sha: af3867b677957ea619d8569d9e9be2e7054a27b244b868760727e8b963345ce1 */
#if BIND_GIOFuncs_io_read_FIELD_READER
/* get_io_read
 *
 * Return Type: GIOStatus (*)(GIOChannel *, gchar *, gsize, gsize *, GError **)
 */
mrb_value
mrb_GLib_GIOFuncs_get_io_read(mrb_state* mrb, mrb_value self) {
  struct _GIOFuncs * native_self = mruby_unbox__GIOFuncs(self);

  GIOStatus (*)(GIOChannel *, gchar *, gsize, gsize *, GError **) native_io_read = native_self->io_read;

  mrb_value io_read = TODO_mruby_box_GIOStatus_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_COMMA_gchar_PTR_COMMA_gsizeCOMMA_gsize_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_io_read);

  return io_read;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOFuncs::io_read_writer */
/* sha: 1875dfc7032cd4d7150b3178e8bb87166a05ef5da4f4c0b76ecf6eaa752a5203 */
#if BIND_GIOFuncs_io_read_FIELD_WRITER
/* set_io_read
 *
 * Parameters:
 * - value: GIOStatus (*)(GIOChannel *, gchar *, gsize, gsize *, GError **)
 */
mrb_value
mrb_GLib_GIOFuncs_set_io_read(mrb_state* mrb, mrb_value self) {
  struct _GIOFuncs * native_self = mruby_unbox__GIOFuncs(self);
  mrb_value io_read;

  mrb_get_args(mrb, "o", &io_read);

  /* type checking */
  TODO_type_check_GIOStatus_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_COMMA_gchar_PTR_COMMA_gsizeCOMMA_gsize_PTR_COMMA_GError_PTR_PTR_RPAREN(io_read);

  GIOStatus (*native_io_read)(GIOChannel *, gchar *, gsize, gsize *, GError **) = TODO_mruby_unbox_GIOStatus_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_COMMA_gchar_PTR_COMMA_gsizeCOMMA_gsize_PTR_COMMA_GError_PTR_PTR_RPAREN(io_read);

  native_self->io_read = native_io_read;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOFuncs::io_write_reader */
/* sha: 1bb52aa7fb928376dcc800be5814be6cbd05ea246aa79a8893b50b3b884da235 */
#if BIND_GIOFuncs_io_write_FIELD_READER
/* get_io_write
 *
 * Return Type: GIOStatus (*)(GIOChannel *, const gchar *, gsize, gsize *, GError **)
 */
mrb_value
mrb_GLib_GIOFuncs_get_io_write(mrb_state* mrb, mrb_value self) {
  struct _GIOFuncs * native_self = mruby_unbox__GIOFuncs(self);

  GIOStatus (*)(GIOChannel *, const gchar *, gsize, gsize *, GError **) native_io_write = native_self->io_write;

  mrb_value io_write = TODO_mruby_box_GIOStatus_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_COMMAgchar_PTR_COMMA_gsizeCOMMA_gsize_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_io_write);

  return io_write;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOFuncs::io_write_writer */
/* sha: f33e4bbb1fad0542a49ade02c7079b7bd7479cecf1f79d731ef94d7bc3baba88 */
#if BIND_GIOFuncs_io_write_FIELD_WRITER
/* set_io_write
 *
 * Parameters:
 * - value: GIOStatus (*)(GIOChannel *, const gchar *, gsize, gsize *, GError **)
 */
mrb_value
mrb_GLib_GIOFuncs_set_io_write(mrb_state* mrb, mrb_value self) {
  struct _GIOFuncs * native_self = mruby_unbox__GIOFuncs(self);
  mrb_value io_write;

  mrb_get_args(mrb, "o", &io_write);

  /* type checking */
  TODO_type_check_GIOStatus_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_COMMAgchar_PTR_COMMA_gsizeCOMMA_gsize_PTR_COMMA_GError_PTR_PTR_RPAREN(io_write);

  GIOStatus (*native_io_write)(GIOChannel *, const gchar *, gsize, gsize *, GError **) = TODO_mruby_unbox_GIOStatus_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_COMMAgchar_PTR_COMMA_gsizeCOMMA_gsize_PTR_COMMA_GError_PTR_PTR_RPAREN(io_write);

  native_self->io_write = native_io_write;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOFuncs::io_seek_reader */
/* sha: 83da9c202ca0eacf7d54988f5f361927a4ca682e00b972b815c80610971f875e */
#if BIND_GIOFuncs_io_seek_FIELD_READER
/* get_io_seek
 *
 * Return Type: GIOStatus (*)(GIOChannel *, gint64, GSeekType, GError **)
 */
mrb_value
mrb_GLib_GIOFuncs_get_io_seek(mrb_state* mrb, mrb_value self) {
  struct _GIOFuncs * native_self = mruby_unbox__GIOFuncs(self);

  GIOStatus (*)(GIOChannel *, gint64, GSeekType, GError **) native_io_seek = native_self->io_seek;

  mrb_value io_seek = TODO_mruby_box_GIOStatus_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_COMMA_gint64COMMA_GSeekTypeCOMMA_GError_PTR_PTR_RPAREN(mrb, native_io_seek);

  return io_seek;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOFuncs::io_seek_writer */
/* sha: 3db38e92dda8415b041ce487667966606687598857709eda55c849805d6bf277 */
#if BIND_GIOFuncs_io_seek_FIELD_WRITER
/* set_io_seek
 *
 * Parameters:
 * - value: GIOStatus (*)(GIOChannel *, gint64, GSeekType, GError **)
 */
mrb_value
mrb_GLib_GIOFuncs_set_io_seek(mrb_state* mrb, mrb_value self) {
  struct _GIOFuncs * native_self = mruby_unbox__GIOFuncs(self);
  mrb_value io_seek;

  mrb_get_args(mrb, "o", &io_seek);

  /* type checking */
  TODO_type_check_GIOStatus_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_COMMA_gint64COMMA_GSeekTypeCOMMA_GError_PTR_PTR_RPAREN(io_seek);

  GIOStatus (*native_io_seek)(GIOChannel *, gint64, GSeekType, GError **) = TODO_mruby_unbox_GIOStatus_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_COMMA_gint64COMMA_GSeekTypeCOMMA_GError_PTR_PTR_RPAREN(io_seek);

  native_self->io_seek = native_io_seek;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOFuncs::io_close_reader */
/* sha: f1655510422e8dfd86393bf93f16712c203c1c04651e322e3ed901f7db1d0021 */
#if BIND_GIOFuncs_io_close_FIELD_READER
/* get_io_close
 *
 * Return Type: GIOStatus (*)(GIOChannel *, GError **)
 */
mrb_value
mrb_GLib_GIOFuncs_get_io_close(mrb_state* mrb, mrb_value self) {
  struct _GIOFuncs * native_self = mruby_unbox__GIOFuncs(self);

  GIOStatus (*)(GIOChannel *, GError **) native_io_close = native_self->io_close;

  mrb_value io_close = TODO_mruby_box_GIOStatus_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_io_close);

  return io_close;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOFuncs::io_close_writer */
/* sha: 703716aba146fe4c35a37e552978d2d0feeef3a78c2058591c90423575cc6288 */
#if BIND_GIOFuncs_io_close_FIELD_WRITER
/* set_io_close
 *
 * Parameters:
 * - value: GIOStatus (*)(GIOChannel *, GError **)
 */
mrb_value
mrb_GLib_GIOFuncs_set_io_close(mrb_state* mrb, mrb_value self) {
  struct _GIOFuncs * native_self = mruby_unbox__GIOFuncs(self);
  mrb_value io_close;

  mrb_get_args(mrb, "o", &io_close);

  /* type checking */
  TODO_type_check_GIOStatus_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_COMMA_GError_PTR_PTR_RPAREN(io_close);

  GIOStatus (*native_io_close)(GIOChannel *, GError **) = TODO_mruby_unbox_GIOStatus_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_COMMA_GError_PTR_PTR_RPAREN(io_close);

  native_self->io_close = native_io_close;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOFuncs::io_create_watch_reader */
/* sha: b10e9787efedba365c00648ef7f463d600f686c88a9c7497fffdf0da2aa0afc1 */
#if BIND_GIOFuncs_io_create_watch_FIELD_READER
/* get_io_create_watch
 *
 * Return Type: GSource *(*)(GIOChannel *, GIOCondition)
 */
mrb_value
mrb_GLib_GIOFuncs_get_io_create_watch(mrb_state* mrb, mrb_value self) {
  struct _GIOFuncs * native_self = mruby_unbox__GIOFuncs(self);

  GSource *(*)(GIOChannel *, GIOCondition) native_io_create_watch = native_self->io_create_watch;

  mrb_value io_create_watch = TODO_mruby_box_GSource_PTR_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_COMMA_GIOCondition_RPAREN(mrb, native_io_create_watch);

  return io_create_watch;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOFuncs::io_create_watch_writer */
/* sha: c1dcc58ae68b5401a75e5f812616bd84bd3538a133f1b6cad82b21822064e71d */
#if BIND_GIOFuncs_io_create_watch_FIELD_WRITER
/* set_io_create_watch
 *
 * Parameters:
 * - value: GSource *(*)(GIOChannel *, GIOCondition)
 */
mrb_value
mrb_GLib_GIOFuncs_set_io_create_watch(mrb_state* mrb, mrb_value self) {
  struct _GIOFuncs * native_self = mruby_unbox__GIOFuncs(self);
  mrb_value io_create_watch;

  mrb_get_args(mrb, "o", &io_create_watch);

  /* type checking */
  TODO_type_check_GSource_PTR_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_COMMA_GIOCondition_RPAREN(io_create_watch);

  GSource *(*native_io_create_watch)(GIOChannel *, GIOCondition) = TODO_mruby_unbox_GSource_PTR_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_COMMA_GIOCondition_RPAREN(io_create_watch);

  native_self->io_create_watch = native_io_create_watch;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOFuncs::io_free_reader */
/* sha: 685fdaa3ef8c71c6b9150f65ed57ec9ebb33b7b784212cfbdbfdfdb07e18bd92 */
#if BIND_GIOFuncs_io_free_FIELD_READER
/* get_io_free
 *
 * Return Type: void (*)(GIOChannel *)
 */
mrb_value
mrb_GLib_GIOFuncs_get_io_free(mrb_state* mrb, mrb_value self) {
  struct _GIOFuncs * native_self = mruby_unbox__GIOFuncs(self);

  void (*)(GIOChannel *) native_io_free = native_self->io_free;

  mrb_value io_free = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_RPAREN(mrb, native_io_free);

  return io_free;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOFuncs::io_free_writer */
/* sha: 5656766798cc68b187a85401dde7a5d5861848ee3a8b665b6f59d573d78a1382 */
#if BIND_GIOFuncs_io_free_FIELD_WRITER
/* set_io_free
 *
 * Parameters:
 * - value: void (*)(GIOChannel *)
 */
mrb_value
mrb_GLib_GIOFuncs_set_io_free(mrb_state* mrb, mrb_value self) {
  struct _GIOFuncs * native_self = mruby_unbox__GIOFuncs(self);
  mrb_value io_free;

  mrb_get_args(mrb, "o", &io_free);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_RPAREN(io_free);

  void (*native_io_free)(GIOChannel *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_RPAREN(io_free);

  native_self->io_free = native_io_free;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOFuncs::io_set_flags_reader */
/* sha: 72ec4264142aa932081f82e3e47225392c0bb2c979673a65243c142c747bb0b3 */
#if BIND_GIOFuncs_io_set_flags_FIELD_READER
/* get_io_set_flags
 *
 * Return Type: GIOStatus (*)(GIOChannel *, GIOFlags, GError **)
 */
mrb_value
mrb_GLib_GIOFuncs_get_io_set_flags(mrb_state* mrb, mrb_value self) {
  struct _GIOFuncs * native_self = mruby_unbox__GIOFuncs(self);

  GIOStatus (*)(GIOChannel *, GIOFlags, GError **) native_io_set_flags = native_self->io_set_flags;

  mrb_value io_set_flags = TODO_mruby_box_GIOStatus_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_COMMA_GIOFlagsCOMMA_GError_PTR_PTR_RPAREN(mrb, native_io_set_flags);

  return io_set_flags;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOFuncs::io_set_flags_writer */
/* sha: edfbda8ab5f6a1ca9ea045600ff2b6fd9891639b7ca5cacbbd08528b8eed6d36 */
#if BIND_GIOFuncs_io_set_flags_FIELD_WRITER
/* set_io_set_flags
 *
 * Parameters:
 * - value: GIOStatus (*)(GIOChannel *, GIOFlags, GError **)
 */
mrb_value
mrb_GLib_GIOFuncs_set_io_set_flags(mrb_state* mrb, mrb_value self) {
  struct _GIOFuncs * native_self = mruby_unbox__GIOFuncs(self);
  mrb_value io_set_flags;

  mrb_get_args(mrb, "o", &io_set_flags);

  /* type checking */
  TODO_type_check_GIOStatus_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_COMMA_GIOFlagsCOMMA_GError_PTR_PTR_RPAREN(io_set_flags);

  GIOStatus (*native_io_set_flags)(GIOChannel *, GIOFlags, GError **) = TODO_mruby_unbox_GIOStatus_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_COMMA_GIOFlagsCOMMA_GError_PTR_PTR_RPAREN(io_set_flags);

  native_self->io_set_flags = native_io_set_flags;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOFuncs::io_get_flags_reader */
/* sha: 20fe19b51a6c2652baa65b4b498647c9d57e327dece5b64fb0d2d0d4bc6f4d5e */
#if BIND_GIOFuncs_io_get_flags_FIELD_READER
/* get_io_get_flags
 *
 * Return Type: GIOFlags (*)(GIOChannel *)
 */
mrb_value
mrb_GLib_GIOFuncs_get_io_get_flags(mrb_state* mrb, mrb_value self) {
  struct _GIOFuncs * native_self = mruby_unbox__GIOFuncs(self);

  GIOFlags (*)(GIOChannel *) native_io_get_flags = native_self->io_get_flags;

  mrb_value io_get_flags = TODO_mruby_box_GIOFlags_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_RPAREN(mrb, native_io_get_flags);

  return io_get_flags;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOFuncs::io_get_flags_writer */
/* sha: 83932560fc7957ceb0d270142f826ff5bdab6cd0cddb6b983e2f98c1688873c9 */
#if BIND_GIOFuncs_io_get_flags_FIELD_WRITER
/* set_io_get_flags
 *
 * Parameters:
 * - value: GIOFlags (*)(GIOChannel *)
 */
mrb_value
mrb_GLib_GIOFuncs_set_io_get_flags(mrb_state* mrb, mrb_value self) {
  struct _GIOFuncs * native_self = mruby_unbox__GIOFuncs(self);
  mrb_value io_get_flags;

  mrb_get_args(mrb, "o", &io_get_flags);

  /* type checking */
  TODO_type_check_GIOFlags_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_RPAREN(io_get_flags);

  GIOFlags (*native_io_get_flags)(GIOChannel *) = TODO_mruby_unbox_GIOFlags_LPAREN_PTR_RPAREN_LPAREN_GIOChannel_PTR_RPAREN(io_get_flags);

  native_self->io_get_flags = native_io_get_flags;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_GLib_GIOFuncs_init(mrb_state* mrb) {
  struct RClass* GIOFuncs_class = mrb_define_class_under(mrb, GLib_module(mrb), "GIOFuncs", mrb->object_class);
  MRB_SET_INSTANCE_TT(GIOFuncs_class, MRB_TT_DATA);

#if BIND_GIOFuncs_INITIALIZE
  mrb_define_method(mrb, GIOFuncs_class, "initialize", mrb_GLib_GIOFuncs_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GIOFuncs_class, "disown", mrb_GLib_GIOFuncs_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GIOFuncs_class, "belongs_to_ruby?", mrb_GLib_GIOFuncs_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GIOFuncs_io_read_FIELD_READER
  mrb_define_method(mrb, GIOFuncs_class, "io_read", mrb_GLib_GIOFuncs_get_io_read, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOFuncs_io_read_FIELD_WRITER
  mrb_define_method(mrb, GIOFuncs_class, "io_read=", mrb_GLib_GIOFuncs_set_io_read, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOFuncs_io_write_FIELD_READER
  mrb_define_method(mrb, GIOFuncs_class, "io_write", mrb_GLib_GIOFuncs_get_io_write, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOFuncs_io_write_FIELD_WRITER
  mrb_define_method(mrb, GIOFuncs_class, "io_write=", mrb_GLib_GIOFuncs_set_io_write, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOFuncs_io_seek_FIELD_READER
  mrb_define_method(mrb, GIOFuncs_class, "io_seek", mrb_GLib_GIOFuncs_get_io_seek, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOFuncs_io_seek_FIELD_WRITER
  mrb_define_method(mrb, GIOFuncs_class, "io_seek=", mrb_GLib_GIOFuncs_set_io_seek, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOFuncs_io_close_FIELD_READER
  mrb_define_method(mrb, GIOFuncs_class, "io_close", mrb_GLib_GIOFuncs_get_io_close, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOFuncs_io_close_FIELD_WRITER
  mrb_define_method(mrb, GIOFuncs_class, "io_close=", mrb_GLib_GIOFuncs_set_io_close, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOFuncs_io_create_watch_FIELD_READER
  mrb_define_method(mrb, GIOFuncs_class, "io_create_watch", mrb_GLib_GIOFuncs_get_io_create_watch, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOFuncs_io_create_watch_FIELD_WRITER
  mrb_define_method(mrb, GIOFuncs_class, "io_create_watch=", mrb_GLib_GIOFuncs_set_io_create_watch, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOFuncs_io_free_FIELD_READER
  mrb_define_method(mrb, GIOFuncs_class, "io_free", mrb_GLib_GIOFuncs_get_io_free, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOFuncs_io_free_FIELD_WRITER
  mrb_define_method(mrb, GIOFuncs_class, "io_free=", mrb_GLib_GIOFuncs_set_io_free, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOFuncs_io_set_flags_FIELD_READER
  mrb_define_method(mrb, GIOFuncs_class, "io_set_flags", mrb_GLib_GIOFuncs_get_io_set_flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOFuncs_io_set_flags_FIELD_WRITER
  mrb_define_method(mrb, GIOFuncs_class, "io_set_flags=", mrb_GLib_GIOFuncs_set_io_set_flags, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GIOFuncs_io_get_flags_FIELD_READER
  mrb_define_method(mrb, GIOFuncs_class, "io_get_flags", mrb_GLib_GIOFuncs_get_io_get_flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GIOFuncs_io_get_flags_FIELD_WRITER
  mrb_define_method(mrb, GIOFuncs_class, "io_get_flags=", mrb_GLib_GIOFuncs_set_io_get_flags, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
