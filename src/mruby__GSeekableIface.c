/*
 * struct _GSeekableIface
 * Defined in file gseekable.h @ line 42
 */

#include "mruby_GLib.h"

#if BIND_GSeekableIface_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GSeekableIface::initialize */
/* sha: b7ac213660de07f378ab4f48ec0cd39ac4d24f8b1daef8f0307be7f4db429d2d */
#if BIND_GSeekableIface_INITIALIZE
mrb_value
mrb_GLib_GSeekableIface_initialize(mrb_state* mrb, mrb_value self) {
  struct _GSeekableIface* native_object = (struct _GSeekableIface*)calloc(1, sizeof(struct _GSeekableIface));
  mruby_giftwrap__GSeekableIface_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSeekableIface::initialize */
/* sha: 77b4176ea1df2268f5fa1187f99486e88c4a55a19a2c16e42acb71810842aa7b */
mrb_value
mrb_GLib_GSeekableIface_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSeekableIface.disown only accepts objects of type GLib::GSeekableIface");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSeekableIface::belongs_to_ruby */
/* sha: fb3602d725933d02eeb1ded4d69258c891f733a9894d19f7e120c9be119a16f4 */
mrb_value
mrb_GLib_GSeekableIface_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSeekableIface.belongs_to_ruby only accepts objects of type GLib::GSeekableIface");
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

/* MRUBY_BINDING: GSeekableIface::g_iface_reader */
/* sha: 918b8f4cd1014ee6487d565f295b28a6df813e75e1dceedb520407dd773c01a1 */
#if BIND_GSeekableIface_g_iface_FIELD_READER
/* get_g_iface
 *
 * Return Type: GTypeInterface
 */
mrb_value
mrb_GLib_GSeekableIface_get_g_iface(mrb_state* mrb, mrb_value self) {
  struct _GSeekableIface * native_self = mruby_unbox__GSeekableIface(self);

  GTypeInterface native_g_iface = native_self->g_iface;

  mrb_value g_iface = TODO_mruby_box_GTypeInterface(mrb, native_g_iface);

  return g_iface;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSeekableIface::g_iface_writer */
/* sha: 2fa31df9fab7540b5c34245204c803a64e28f05c4be0f713e3abb5607226f2f8 */
#if BIND_GSeekableIface_g_iface_FIELD_WRITER
/* set_g_iface
 *
 * Parameters:
 * - value: GTypeInterface
 */
mrb_value
mrb_GLib_GSeekableIface_set_g_iface(mrb_state* mrb, mrb_value self) {
  struct _GSeekableIface * native_self = mruby_unbox__GSeekableIface(self);
  mrb_value g_iface;

  mrb_get_args(mrb, "o", &g_iface);

  /* type checking */
  TODO_type_check_GTypeInterface(g_iface);

  GTypeInterface native_g_iface = TODO_mruby_unbox_GTypeInterface(g_iface);

  native_self->g_iface = native_g_iface;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSeekableIface::tell_reader */
/* sha: fff8e750dcb365929700d549c759f5294af78f8f31fdee524a22160022939058 */
#if BIND_GSeekableIface_tell_FIELD_READER
/* get_tell
 *
 * Return Type: goffset (*)(GSeekable *)
 */
mrb_value
mrb_GLib_GSeekableIface_get_tell(mrb_state* mrb, mrb_value self) {
  struct _GSeekableIface * native_self = mruby_unbox__GSeekableIface(self);

  goffset (*)(GSeekable *) native_tell = native_self->tell;

  mrb_value tell = TODO_mruby_box_goffset_LPAREN_PTR_RPAREN_LPAREN_GSeekable_PTR_RPAREN(mrb, native_tell);

  return tell;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSeekableIface::tell_writer */
/* sha: dad423c3a8b6badaf35f308ad6983e923ff48b88da89b129906c8cb40854f548 */
#if BIND_GSeekableIface_tell_FIELD_WRITER
/* set_tell
 *
 * Parameters:
 * - value: goffset (*)(GSeekable *)
 */
mrb_value
mrb_GLib_GSeekableIface_set_tell(mrb_state* mrb, mrb_value self) {
  struct _GSeekableIface * native_self = mruby_unbox__GSeekableIface(self);
  mrb_value tell;

  mrb_get_args(mrb, "o", &tell);

  /* type checking */
  TODO_type_check_goffset_LPAREN_PTR_RPAREN_LPAREN_GSeekable_PTR_RPAREN(tell);

  goffset (*native_tell)(GSeekable *) = TODO_mruby_unbox_goffset_LPAREN_PTR_RPAREN_LPAREN_GSeekable_PTR_RPAREN(tell);

  native_self->tell = native_tell;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSeekableIface::can_seek_reader */
/* sha: 4db20d96b75e8021dc42c383855f3d625247f11320d02a3d031d26acff0ecf6d */
#if BIND_GSeekableIface_can_seek_FIELD_READER
/* get_can_seek
 *
 * Return Type: gboolean (*)(GSeekable *)
 */
mrb_value
mrb_GLib_GSeekableIface_get_can_seek(mrb_state* mrb, mrb_value self) {
  struct _GSeekableIface * native_self = mruby_unbox__GSeekableIface(self);

  gboolean (*)(GSeekable *) native_can_seek = native_self->can_seek;

  mrb_value can_seek = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GSeekable_PTR_RPAREN(mrb, native_can_seek);

  return can_seek;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSeekableIface::can_seek_writer */
/* sha: 91230a81a2a11b0f94ab3ad049d011f0fc7d4b4b9bf53cbcc192eee917c6a1c7 */
#if BIND_GSeekableIface_can_seek_FIELD_WRITER
/* set_can_seek
 *
 * Parameters:
 * - value: gboolean (*)(GSeekable *)
 */
mrb_value
mrb_GLib_GSeekableIface_set_can_seek(mrb_state* mrb, mrb_value self) {
  struct _GSeekableIface * native_self = mruby_unbox__GSeekableIface(self);
  mrb_value can_seek;

  mrb_get_args(mrb, "o", &can_seek);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GSeekable_PTR_RPAREN(can_seek);

  gboolean (*native_can_seek)(GSeekable *) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GSeekable_PTR_RPAREN(can_seek);

  native_self->can_seek = native_can_seek;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSeekableIface::seek_reader */
/* sha: 8a6ae5535179df03ab03af04eacede3a37c49a918de2c260d9d2dcb49d0ddf1a */
#if BIND_GSeekableIface_seek_FIELD_READER
/* get_seek
 *
 * Return Type: gboolean (*)(GSeekable *, goffset, GSeekType, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GSeekableIface_get_seek(mrb_state* mrb, mrb_value self) {
  struct _GSeekableIface * native_self = mruby_unbox__GSeekableIface(self);

  gboolean (*)(GSeekable *, goffset, GSeekType, GCancellable *, GError **) native_seek = native_self->seek;

  mrb_value seek = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GSeekable_PTR_COMMA_goffsetCOMMA_GSeekTypeCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_seek);

  return seek;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSeekableIface::seek_writer */
/* sha: a10bd55f35762eff28f3cf3cd8dc1ec91df51d6308d26f6433bf46f6fd055aca */
#if BIND_GSeekableIface_seek_FIELD_WRITER
/* set_seek
 *
 * Parameters:
 * - value: gboolean (*)(GSeekable *, goffset, GSeekType, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GSeekableIface_set_seek(mrb_state* mrb, mrb_value self) {
  struct _GSeekableIface * native_self = mruby_unbox__GSeekableIface(self);
  mrb_value seek;

  mrb_get_args(mrb, "o", &seek);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GSeekable_PTR_COMMA_goffsetCOMMA_GSeekTypeCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(seek);

  gboolean (*native_seek)(GSeekable *, goffset, GSeekType, GCancellable *, GError **) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GSeekable_PTR_COMMA_goffsetCOMMA_GSeekTypeCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(seek);

  native_self->seek = native_seek;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSeekableIface::can_truncate_reader */
/* sha: 70b899adb7df36d1e76c6f26fa80d44e98bace64775ca4c777012a5f133adec3 */
#if BIND_GSeekableIface_can_truncate_FIELD_READER
/* get_can_truncate
 *
 * Return Type: gboolean (*)(GSeekable *)
 */
mrb_value
mrb_GLib_GSeekableIface_get_can_truncate(mrb_state* mrb, mrb_value self) {
  struct _GSeekableIface * native_self = mruby_unbox__GSeekableIface(self);

  gboolean (*)(GSeekable *) native_can_truncate = native_self->can_truncate;

  mrb_value can_truncate = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GSeekable_PTR_RPAREN(mrb, native_can_truncate);

  return can_truncate;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSeekableIface::can_truncate_writer */
/* sha: 5bc46172d23617b6eb5aec884705f7ed2131b8b551c055656f9518daf9c6583f */
#if BIND_GSeekableIface_can_truncate_FIELD_WRITER
/* set_can_truncate
 *
 * Parameters:
 * - value: gboolean (*)(GSeekable *)
 */
mrb_value
mrb_GLib_GSeekableIface_set_can_truncate(mrb_state* mrb, mrb_value self) {
  struct _GSeekableIface * native_self = mruby_unbox__GSeekableIface(self);
  mrb_value can_truncate;

  mrb_get_args(mrb, "o", &can_truncate);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GSeekable_PTR_RPAREN(can_truncate);

  gboolean (*native_can_truncate)(GSeekable *) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GSeekable_PTR_RPAREN(can_truncate);

  native_self->can_truncate = native_can_truncate;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSeekableIface::truncate_fn_reader */
/* sha: 1b6417b91e5f948d1683cbc48c852a476351fe699972ae657338f25cc222286e */
#if BIND_GSeekableIface_truncate_fn_FIELD_READER
/* get_truncate_fn
 *
 * Return Type: gboolean (*)(GSeekable *, goffset, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GSeekableIface_get_truncate_fn(mrb_state* mrb, mrb_value self) {
  struct _GSeekableIface * native_self = mruby_unbox__GSeekableIface(self);

  gboolean (*)(GSeekable *, goffset, GCancellable *, GError **) native_truncate_fn = native_self->truncate_fn;

  mrb_value truncate_fn = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GSeekable_PTR_COMMA_goffsetCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_truncate_fn);

  return truncate_fn;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSeekableIface::truncate_fn_writer */
/* sha: 18e9632fd571078543ccda37e9a3c428733d31a388856a4e88f62ee117b2fa87 */
#if BIND_GSeekableIface_truncate_fn_FIELD_WRITER
/* set_truncate_fn
 *
 * Parameters:
 * - value: gboolean (*)(GSeekable *, goffset, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GSeekableIface_set_truncate_fn(mrb_state* mrb, mrb_value self) {
  struct _GSeekableIface * native_self = mruby_unbox__GSeekableIface(self);
  mrb_value truncate_fn;

  mrb_get_args(mrb, "o", &truncate_fn);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GSeekable_PTR_COMMA_goffsetCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(truncate_fn);

  gboolean (*native_truncate_fn)(GSeekable *, goffset, GCancellable *, GError **) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GSeekable_PTR_COMMA_goffsetCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(truncate_fn);

  native_self->truncate_fn = native_truncate_fn;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_GLib_GSeekableIface_init(mrb_state* mrb) {
/* MRUBY_BINDING: GSeekableIface::class_definition */
/* sha: dca32da0eef7636795f4f57ae5699974a45b62c676688584bf33ef5a18fadb35 */
  struct RClass* GSeekableIface_class = mrb_define_class_under(mrb, GLib_module(mrb), "GSeekableIface", mrb->object_class);
  MRB_SET_INSTANCE_TT(GSeekableIface_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSeekableIface::class_method_definitions */
/* sha: 76887483a8d157b333bb6c24ef7e36ac69792fe403d18f9aed24b56afbb779f8 */
#if BIND_GSeekableIface_INITIALIZE
  mrb_define_method(mrb, GSeekableIface_class, "initialize", mrb_GLib_GSeekableIface_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GSeekableIface_class, "disown", mrb_GLib_GSeekableIface_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GSeekableIface_class, "belongs_to_ruby?", mrb_GLib_GSeekableIface_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSeekableIface::attr_definitions */
/* sha: 19b273a129cf669d2a9f8a4825ef3b75d85836a5799688b43ae956f4dce88879 */
  /*
   * Fields
   */
#if BIND_GSeekableIface_g_iface_FIELD_READER
  mrb_define_method(mrb, GSeekableIface_class, "g_iface", mrb_GLib_GSeekableIface_get_g_iface, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSeekableIface_g_iface_FIELD_WRITER
  mrb_define_method(mrb, GSeekableIface_class, "g_iface=", mrb_GLib_GSeekableIface_set_g_iface, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSeekableIface_tell_FIELD_READER
  mrb_define_method(mrb, GSeekableIface_class, "tell", mrb_GLib_GSeekableIface_get_tell, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSeekableIface_tell_FIELD_WRITER
  mrb_define_method(mrb, GSeekableIface_class, "tell=", mrb_GLib_GSeekableIface_set_tell, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSeekableIface_can_seek_FIELD_READER
  mrb_define_method(mrb, GSeekableIface_class, "can_seek", mrb_GLib_GSeekableIface_get_can_seek, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSeekableIface_can_seek_FIELD_WRITER
  mrb_define_method(mrb, GSeekableIface_class, "can_seek=", mrb_GLib_GSeekableIface_set_can_seek, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSeekableIface_seek_FIELD_READER
  mrb_define_method(mrb, GSeekableIface_class, "seek", mrb_GLib_GSeekableIface_get_seek, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSeekableIface_seek_FIELD_WRITER
  mrb_define_method(mrb, GSeekableIface_class, "seek=", mrb_GLib_GSeekableIface_set_seek, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSeekableIface_can_truncate_FIELD_READER
  mrb_define_method(mrb, GSeekableIface_class, "can_truncate", mrb_GLib_GSeekableIface_get_can_truncate, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSeekableIface_can_truncate_FIELD_WRITER
  mrb_define_method(mrb, GSeekableIface_class, "can_truncate=", mrb_GLib_GSeekableIface_set_can_truncate, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSeekableIface_truncate_fn_FIELD_READER
  mrb_define_method(mrb, GSeekableIface_class, "truncate_fn", mrb_GLib_GSeekableIface_get_truncate_fn, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSeekableIface_truncate_fn_FIELD_WRITER
  mrb_define_method(mrb, GSeekableIface_class, "truncate_fn=", mrb_GLib_GSeekableIface_set_truncate_fn, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSeekableIface::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
