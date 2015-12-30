/*
 * struct _GFileIface
 * Defined in file gfile.h @ line 47
 */

#include "mruby_GLib.h"

#if BIND_GFileIface_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GFileIface::initialize */
/* sha: 9b450f15f202a575c05af3c4369842fd55cba5e28b3225257fe5b67d2bdff9e3 */
#if BIND_GFileIface_INITIALIZE
mrb_value
mrb_GLib_GFileIface_initialize(mrb_state* mrb, mrb_value self) {
  struct _GFileIface* native_object = (struct _GFileIface*)calloc(1, sizeof(struct _GFileIface));
  mruby_giftwrap__GFileIface_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::initialize */
/* sha: 9de8a4a2caa7d2d29742e06355796c17a5b4095c2c8acef989bb56edfb621a43 */
mrb_value
mrb_GLib_GFileIface_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GFileIface.disown only accepts objects of type GLib::GFileIface");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::belongs_to_ruby */
/* sha: 32f4e306733fd39c7aef0d10524eb45fb3294fe7446b65331712308ca23a2400 */
mrb_value
mrb_GLib_GFileIface_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GFileIface.belongs_to_ruby only accepts objects of type GLib::GFileIface");
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

/* MRUBY_BINDING: GFileIface::g_iface_reader */
/* sha: 2eca29a018cc2f8083bad491109ab8bf55e47be5a0a79ad39aa24c5c81bf9396 */
#if BIND_GFileIface_g_iface_FIELD_READER
/* get_g_iface
 *
 * Return Type: GTypeInterface
 */
mrb_value
mrb_GLib_GFileIface_get_g_iface(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  GTypeInterface native_g_iface = native_self->g_iface;

  mrb_value g_iface = TODO_mruby_box_GTypeInterface(mrb, native_g_iface);

  return g_iface;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::g_iface_writer */
/* sha: 661f04958261aabb3bc7d0e9122d17cb834e7001db1bc0bbcb9e08073bdd9ce1 */
#if BIND_GFileIface_g_iface_FIELD_WRITER
/* set_g_iface
 *
 * Parameters:
 * - value: GTypeInterface
 */
mrb_value
mrb_GLib_GFileIface_set_g_iface(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
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

/* MRUBY_BINDING: GFileIface::dup_reader */
/* sha: 746f2882f3bed227b4739acbd34421dfdc97eb2dbd59902f2547e2cd0687bfe4 */
#if BIND_GFileIface_dup_FIELD_READER
/* get_dup
 *
 * Return Type: GFile *(*)(GFile *)
 */
mrb_value
mrb_GLib_GFileIface_get_dup(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  GFile *(*)(GFile *) native_dup = native_self->dup;

  mrb_value dup = TODO_mruby_box_GFile_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_RPAREN(mrb, native_dup);

  return dup;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::dup_writer */
/* sha: 03277e39041b7820d38890eb0fb2a44b253a4d32697b5fc8dc34a46ad98bcaaa */
#if BIND_GFileIface_dup_FIELD_WRITER
/* set_dup
 *
 * Parameters:
 * - value: GFile *(*)(GFile *)
 */
mrb_value
mrb_GLib_GFileIface_set_dup(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value dup;

  mrb_get_args(mrb, "o", &dup);

  /* type checking */
  TODO_type_check_GFile_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_RPAREN(dup);

  GFile *(*native_dup)(GFile *) = TODO_mruby_unbox_GFile_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_RPAREN(dup);

  native_self->dup = native_dup;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::hash_reader */
/* sha: 917623b92e8c0e78a4a413d09a07b4cb6475b6d2b1ceb738997f9d3a2611871d */
#if BIND_GFileIface_hash_FIELD_READER
/* get_hash
 *
 * Return Type: guint (*)(GFile *)
 */
mrb_value
mrb_GLib_GFileIface_get_hash(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  guint (*)(GFile *) native_hash = native_self->hash;

  mrb_value hash = TODO_mruby_box_guint_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_RPAREN(mrb, native_hash);

  return hash;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::hash_writer */
/* sha: efe3ac650eef2257630097f8cbd31a5c2e342cdb010a80de8127e45aeaad9204 */
#if BIND_GFileIface_hash_FIELD_WRITER
/* set_hash
 *
 * Parameters:
 * - value: guint (*)(GFile *)
 */
mrb_value
mrb_GLib_GFileIface_set_hash(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value hash;

  mrb_get_args(mrb, "o", &hash);

  /* type checking */
  TODO_type_check_guint_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_RPAREN(hash);

  guint (*native_hash)(GFile *) = TODO_mruby_unbox_guint_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_RPAREN(hash);

  native_self->hash = native_hash;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::equal_reader */
/* sha: 9870d019c30e2837bfb60be5f962c78a41200e89213a792455bd4e0048966730 */
#if BIND_GFileIface_equal_FIELD_READER
/* get_equal
 *
 * Return Type: gboolean (*)(GFile *, GFile *)
 */
mrb_value
mrb_GLib_GFileIface_get_equal(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  gboolean (*)(GFile *, GFile *) native_equal = native_self->equal;

  mrb_value equal = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFile_PTR_RPAREN(mrb, native_equal);

  return equal;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::equal_writer */
/* sha: b6486ec2185af4f07de6eafe758f626d3ddd10b74d1eae999d9f9fdbb4c9c2f8 */
#if BIND_GFileIface_equal_FIELD_WRITER
/* set_equal
 *
 * Parameters:
 * - value: gboolean (*)(GFile *, GFile *)
 */
mrb_value
mrb_GLib_GFileIface_set_equal(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value equal;

  mrb_get_args(mrb, "o", &equal);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFile_PTR_RPAREN(equal);

  gboolean (*native_equal)(GFile *, GFile *) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFile_PTR_RPAREN(equal);

  native_self->equal = native_equal;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::is_native_reader */
/* sha: e3838b7207e021413bce5bcbbae1437dd0f77c15adf2c1a9247b8d6b4a102a25 */
#if BIND_GFileIface_is_native_FIELD_READER
/* get_is_native
 *
 * Return Type: gboolean (*)(GFile *)
 */
mrb_value
mrb_GLib_GFileIface_get_is_native(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  gboolean (*)(GFile *) native_is_native = native_self->is_native;

  mrb_value is_native = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_RPAREN(mrb, native_is_native);

  return is_native;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::is_native_writer */
/* sha: be8b5ce8a817d749f3c554d075ac22b9dbf5af3754fcc4df607d079e3b749560 */
#if BIND_GFileIface_is_native_FIELD_WRITER
/* set_is_native
 *
 * Parameters:
 * - value: gboolean (*)(GFile *)
 */
mrb_value
mrb_GLib_GFileIface_set_is_native(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value is_native;

  mrb_get_args(mrb, "o", &is_native);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_RPAREN(is_native);

  gboolean (*native_is_native)(GFile *) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_RPAREN(is_native);

  native_self->is_native = native_is_native;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::has_uri_scheme_reader */
/* sha: 87fe6282d14336a455aae9bdcaf6a0e2584fda46aa1cc76212b777f954301c34 */
#if BIND_GFileIface_has_uri_scheme_FIELD_READER
/* get_has_uri_scheme
 *
 * Return Type: gboolean (*)(GFile *, const char *)
 */
mrb_value
mrb_GLib_GFileIface_get_has_uri_scheme(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  gboolean (*)(GFile *, const char *) native_has_uri_scheme = native_self->has_uri_scheme;

  mrb_value has_uri_scheme = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_RPAREN(mrb, native_has_uri_scheme);

  return has_uri_scheme;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::has_uri_scheme_writer */
/* sha: a1866b65e598a1a05c36ade42f66709ba54e7a2ce765030368fd7708a73b5254 */
#if BIND_GFileIface_has_uri_scheme_FIELD_WRITER
/* set_has_uri_scheme
 *
 * Parameters:
 * - value: gboolean (*)(GFile *, const char *)
 */
mrb_value
mrb_GLib_GFileIface_set_has_uri_scheme(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value has_uri_scheme;

  mrb_get_args(mrb, "o", &has_uri_scheme);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_RPAREN(has_uri_scheme);

  gboolean (*native_has_uri_scheme)(GFile *, const char *) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_RPAREN(has_uri_scheme);

  native_self->has_uri_scheme = native_has_uri_scheme;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::get_uri_scheme_reader */
/* sha: bbfd0d61633d5c339e09d01060e60b44bdae3bf88d01cf057549a0787ec3de61 */
#if BIND_GFileIface_get_uri_scheme_FIELD_READER
/* get_get_uri_scheme
 *
 * Return Type: char *(*)(GFile *)
 */
mrb_value
mrb_GLib_GFileIface_get_get_uri_scheme(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  char *(*)(GFile *) native_get_uri_scheme = native_self->get_uri_scheme;

  mrb_value get_uri_scheme = TODO_mruby_box_char_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_RPAREN(mrb, native_get_uri_scheme);

  return get_uri_scheme;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::get_uri_scheme_writer */
/* sha: 8ddbcc8999fdad1824b48fedfcfa15e27ee5ec505b22170a4c08fc1796c82171 */
#if BIND_GFileIface_get_uri_scheme_FIELD_WRITER
/* set_get_uri_scheme
 *
 * Parameters:
 * - value: char *(*)(GFile *)
 */
mrb_value
mrb_GLib_GFileIface_set_get_uri_scheme(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value get_uri_scheme;

  mrb_get_args(mrb, "o", &get_uri_scheme);

  /* type checking */
  TODO_type_check_char_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_RPAREN(get_uri_scheme);

  char *(*native_get_uri_scheme)(GFile *) = TODO_mruby_unbox_char_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_RPAREN(get_uri_scheme);

  native_self->get_uri_scheme = native_get_uri_scheme;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::get_basename_reader */
/* sha: 9979fe67bac45225947df136fbfc906532facb433485b98db35c59eef59003ff */
#if BIND_GFileIface_get_basename_FIELD_READER
/* get_get_basename
 *
 * Return Type: char *(*)(GFile *)
 */
mrb_value
mrb_GLib_GFileIface_get_get_basename(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  char *(*)(GFile *) native_get_basename = native_self->get_basename;

  mrb_value get_basename = TODO_mruby_box_char_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_RPAREN(mrb, native_get_basename);

  return get_basename;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::get_basename_writer */
/* sha: 9c0d60c550f6320ee992bacccb78c8a3f319161af10206e4c1726d50b64523fc */
#if BIND_GFileIface_get_basename_FIELD_WRITER
/* set_get_basename
 *
 * Parameters:
 * - value: char *(*)(GFile *)
 */
mrb_value
mrb_GLib_GFileIface_set_get_basename(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value get_basename;

  mrb_get_args(mrb, "o", &get_basename);

  /* type checking */
  TODO_type_check_char_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_RPAREN(get_basename);

  char *(*native_get_basename)(GFile *) = TODO_mruby_unbox_char_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_RPAREN(get_basename);

  native_self->get_basename = native_get_basename;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::get_path_reader */
/* sha: 7ff645b4fc43f33feeb70d9c1b206c11c022cee7e9007240a81d3f9ca75a97be */
#if BIND_GFileIface_get_path_FIELD_READER
/* get_get_path
 *
 * Return Type: char *(*)(GFile *)
 */
mrb_value
mrb_GLib_GFileIface_get_get_path(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  char *(*)(GFile *) native_get_path = native_self->get_path;

  mrb_value get_path = TODO_mruby_box_char_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_RPAREN(mrb, native_get_path);

  return get_path;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::get_path_writer */
/* sha: 5b45cd58f14adbafa2f02e742a7047ff0c280696bb8bd1a86b66877cd5acd62e */
#if BIND_GFileIface_get_path_FIELD_WRITER
/* set_get_path
 *
 * Parameters:
 * - value: char *(*)(GFile *)
 */
mrb_value
mrb_GLib_GFileIface_set_get_path(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value get_path;

  mrb_get_args(mrb, "o", &get_path);

  /* type checking */
  TODO_type_check_char_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_RPAREN(get_path);

  char *(*native_get_path)(GFile *) = TODO_mruby_unbox_char_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_RPAREN(get_path);

  native_self->get_path = native_get_path;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::get_uri_reader */
/* sha: 4b6d3d16a82f03dff35c680dae9ee41c94fcd49fbddefbbdd0b5477246820ccc */
#if BIND_GFileIface_get_uri_FIELD_READER
/* get_get_uri
 *
 * Return Type: char *(*)(GFile *)
 */
mrb_value
mrb_GLib_GFileIface_get_get_uri(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  char *(*)(GFile *) native_get_uri = native_self->get_uri;

  mrb_value get_uri = TODO_mruby_box_char_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_RPAREN(mrb, native_get_uri);

  return get_uri;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::get_uri_writer */
/* sha: d4a31e3752739ef69ff5588b93deada20cc2407cee693e5162edbc0502bf9efc */
#if BIND_GFileIface_get_uri_FIELD_WRITER
/* set_get_uri
 *
 * Parameters:
 * - value: char *(*)(GFile *)
 */
mrb_value
mrb_GLib_GFileIface_set_get_uri(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value get_uri;

  mrb_get_args(mrb, "o", &get_uri);

  /* type checking */
  TODO_type_check_char_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_RPAREN(get_uri);

  char *(*native_get_uri)(GFile *) = TODO_mruby_unbox_char_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_RPAREN(get_uri);

  native_self->get_uri = native_get_uri;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::get_parse_name_reader */
/* sha: 93237f8d356fd26b450a50270f1747d1729ef1cbab591ef71f0d2a6f3f326252 */
#if BIND_GFileIface_get_parse_name_FIELD_READER
/* get_get_parse_name
 *
 * Return Type: char *(*)(GFile *)
 */
mrb_value
mrb_GLib_GFileIface_get_get_parse_name(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  char *(*)(GFile *) native_get_parse_name = native_self->get_parse_name;

  mrb_value get_parse_name = TODO_mruby_box_char_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_RPAREN(mrb, native_get_parse_name);

  return get_parse_name;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::get_parse_name_writer */
/* sha: 53e374716a3c017bf4a55a857854c8ab74500e58891507893ae0964332a3d826 */
#if BIND_GFileIface_get_parse_name_FIELD_WRITER
/* set_get_parse_name
 *
 * Parameters:
 * - value: char *(*)(GFile *)
 */
mrb_value
mrb_GLib_GFileIface_set_get_parse_name(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value get_parse_name;

  mrb_get_args(mrb, "o", &get_parse_name);

  /* type checking */
  TODO_type_check_char_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_RPAREN(get_parse_name);

  char *(*native_get_parse_name)(GFile *) = TODO_mruby_unbox_char_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_RPAREN(get_parse_name);

  native_self->get_parse_name = native_get_parse_name;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::get_parent_reader */
/* sha: 75c4d318979807db91942dec7d46230419c765f7c181080d28b27547707ac557 */
#if BIND_GFileIface_get_parent_FIELD_READER
/* get_get_parent
 *
 * Return Type: GFile *(*)(GFile *)
 */
mrb_value
mrb_GLib_GFileIface_get_get_parent(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  GFile *(*)(GFile *) native_get_parent = native_self->get_parent;

  mrb_value get_parent = TODO_mruby_box_GFile_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_RPAREN(mrb, native_get_parent);

  return get_parent;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::get_parent_writer */
/* sha: 1ae34ccbb3a613ac1937d7393425af4f6e7801b0533f10b61b4ad2edc8278dfb */
#if BIND_GFileIface_get_parent_FIELD_WRITER
/* set_get_parent
 *
 * Parameters:
 * - value: GFile *(*)(GFile *)
 */
mrb_value
mrb_GLib_GFileIface_set_get_parent(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value get_parent;

  mrb_get_args(mrb, "o", &get_parent);

  /* type checking */
  TODO_type_check_GFile_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_RPAREN(get_parent);

  GFile *(*native_get_parent)(GFile *) = TODO_mruby_unbox_GFile_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_RPAREN(get_parent);

  native_self->get_parent = native_get_parent;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::prefix_matches_reader */
/* sha: f8f84d5c5eae9786ac56ece25ec16ba8dad13e391958496dbdd170d2bd8d3ab4 */
#if BIND_GFileIface_prefix_matches_FIELD_READER
/* get_prefix_matches
 *
 * Return Type: gboolean (*)(GFile *, GFile *)
 */
mrb_value
mrb_GLib_GFileIface_get_prefix_matches(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  gboolean (*)(GFile *, GFile *) native_prefix_matches = native_self->prefix_matches;

  mrb_value prefix_matches = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFile_PTR_RPAREN(mrb, native_prefix_matches);

  return prefix_matches;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::prefix_matches_writer */
/* sha: 627cdfc2d412109e0f0fa2d0cf630d4d86b615e1826b40ec3f9f9b8054d2bf5e */
#if BIND_GFileIface_prefix_matches_FIELD_WRITER
/* set_prefix_matches
 *
 * Parameters:
 * - value: gboolean (*)(GFile *, GFile *)
 */
mrb_value
mrb_GLib_GFileIface_set_prefix_matches(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value prefix_matches;

  mrb_get_args(mrb, "o", &prefix_matches);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFile_PTR_RPAREN(prefix_matches);

  gboolean (*native_prefix_matches)(GFile *, GFile *) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFile_PTR_RPAREN(prefix_matches);

  native_self->prefix_matches = native_prefix_matches;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::get_relative_path_reader */
/* sha: 30186f06db236bcffe652bd23f0ce8f35f346e9f1df0ac55fead892d5478ceae */
#if BIND_GFileIface_get_relative_path_FIELD_READER
/* get_get_relative_path
 *
 * Return Type: char *(*)(GFile *, GFile *)
 */
mrb_value
mrb_GLib_GFileIface_get_get_relative_path(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  char *(*)(GFile *, GFile *) native_get_relative_path = native_self->get_relative_path;

  mrb_value get_relative_path = TODO_mruby_box_char_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFile_PTR_RPAREN(mrb, native_get_relative_path);

  return get_relative_path;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::get_relative_path_writer */
/* sha: 6cc2efa1ca256677c337675e29ef03a74d2c4d66c6df01a8b4f3b39895fd09a5 */
#if BIND_GFileIface_get_relative_path_FIELD_WRITER
/* set_get_relative_path
 *
 * Parameters:
 * - value: char *(*)(GFile *, GFile *)
 */
mrb_value
mrb_GLib_GFileIface_set_get_relative_path(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value get_relative_path;

  mrb_get_args(mrb, "o", &get_relative_path);

  /* type checking */
  TODO_type_check_char_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFile_PTR_RPAREN(get_relative_path);

  char *(*native_get_relative_path)(GFile *, GFile *) = TODO_mruby_unbox_char_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFile_PTR_RPAREN(get_relative_path);

  native_self->get_relative_path = native_get_relative_path;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::resolve_relative_path_reader */
/* sha: 7d397d4ff6184a73f6ee5956954d46f7caffe322d10ff78cd7e17070e16674e8 */
#if BIND_GFileIface_resolve_relative_path_FIELD_READER
/* get_resolve_relative_path
 *
 * Return Type: GFile *(*)(GFile *, const char *)
 */
mrb_value
mrb_GLib_GFileIface_get_resolve_relative_path(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  GFile *(*)(GFile *, const char *) native_resolve_relative_path = native_self->resolve_relative_path;

  mrb_value resolve_relative_path = TODO_mruby_box_GFile_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_RPAREN(mrb, native_resolve_relative_path);

  return resolve_relative_path;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::resolve_relative_path_writer */
/* sha: bb3d75ef014905532c3fba77cdc9a85c8ae1877641011b98bd2a0881837ef371 */
#if BIND_GFileIface_resolve_relative_path_FIELD_WRITER
/* set_resolve_relative_path
 *
 * Parameters:
 * - value: GFile *(*)(GFile *, const char *)
 */
mrb_value
mrb_GLib_GFileIface_set_resolve_relative_path(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value resolve_relative_path;

  mrb_get_args(mrb, "o", &resolve_relative_path);

  /* type checking */
  TODO_type_check_GFile_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_RPAREN(resolve_relative_path);

  GFile *(*native_resolve_relative_path)(GFile *, const char *) = TODO_mruby_unbox_GFile_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_RPAREN(resolve_relative_path);

  native_self->resolve_relative_path = native_resolve_relative_path;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::get_child_for_display_name_reader */
/* sha: bb6e22366699523ecff3ef9382b8f60ec195053aaaf1ad3e1b74d7d25488bba7 */
#if BIND_GFileIface_get_child_for_display_name_FIELD_READER
/* get_get_child_for_display_name
 *
 * Return Type: GFile *(*)(GFile *, const char *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_get_child_for_display_name(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  GFile *(*)(GFile *, const char *, GError **) native_get_child_for_display_name = native_self->get_child_for_display_name;

  mrb_value get_child_for_display_name = TODO_mruby_box_GFile_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_get_child_for_display_name);

  return get_child_for_display_name;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::get_child_for_display_name_writer */
/* sha: 46ec6c126e530ff10a039242ccf893d681d0e13fcbb565470806a96da6bcb967 */
#if BIND_GFileIface_get_child_for_display_name_FIELD_WRITER
/* set_get_child_for_display_name
 *
 * Parameters:
 * - value: GFile *(*)(GFile *, const char *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_get_child_for_display_name(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value get_child_for_display_name;

  mrb_get_args(mrb, "o", &get_child_for_display_name);

  /* type checking */
  TODO_type_check_GFile_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_GError_PTR_PTR_RPAREN(get_child_for_display_name);

  GFile *(*native_get_child_for_display_name)(GFile *, const char *, GError **) = TODO_mruby_unbox_GFile_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_GError_PTR_PTR_RPAREN(get_child_for_display_name);

  native_self->get_child_for_display_name = native_get_child_for_display_name;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::enumerate_children_reader */
/* sha: 6b46791f9e999f189d7c5fda982285489fbe230a09abe11107c33d3a881b5fb4 */
#if BIND_GFileIface_enumerate_children_FIELD_READER
/* get_enumerate_children
 *
 * Return Type: GFileEnumerator *(*)(GFile *, const char *, GFileQueryInfoFlags, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_enumerate_children(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  GFileEnumerator *(*)(GFile *, const char *, GFileQueryInfoFlags, GCancellable *, GError **) native_enumerate_children = native_self->enumerate_children;

  mrb_value enumerate_children = TODO_mruby_box_GFileEnumerator_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_GFileQueryInfoFlagsCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_enumerate_children);

  return enumerate_children;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::enumerate_children_writer */
/* sha: 880579251493213dbb3cc06c08b7082970e479a954858a5d7b9793fa370d2608 */
#if BIND_GFileIface_enumerate_children_FIELD_WRITER
/* set_enumerate_children
 *
 * Parameters:
 * - value: GFileEnumerator *(*)(GFile *, const char *, GFileQueryInfoFlags, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_enumerate_children(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value enumerate_children;

  mrb_get_args(mrb, "o", &enumerate_children);

  /* type checking */
  TODO_type_check_GFileEnumerator_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_GFileQueryInfoFlagsCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(enumerate_children);

  GFileEnumerator *(*native_enumerate_children)(GFile *, const char *, GFileQueryInfoFlags, GCancellable *, GError **) = TODO_mruby_unbox_GFileEnumerator_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_GFileQueryInfoFlagsCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(enumerate_children);

  native_self->enumerate_children = native_enumerate_children;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::enumerate_children_async_reader */
/* sha: 48cc46831dcf87496b9b1ac13872e73578b6103502615f8c7ba39b3f3968f138 */
#if BIND_GFileIface_enumerate_children_async_FIELD_READER
/* get_enumerate_children_async
 *
 * Return Type: void (*)(GFile *, const char *, GFileQueryInfoFlags, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_get_enumerate_children_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  void (*)(GFile *, const char *, GFileQueryInfoFlags, int, GCancellable *, GAsyncReadyCallback, gpointer) native_enumerate_children_async = native_self->enumerate_children_async;

  mrb_value enumerate_children_async = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_GFileQueryInfoFlagsCOMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(mrb, native_enumerate_children_async);

  return enumerate_children_async;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::enumerate_children_async_writer */
/* sha: a52803c013e20f9c8dd4ac56174ef74cfeb89b16f62355e35177f9a7773dfa47 */
#if BIND_GFileIface_enumerate_children_async_FIELD_WRITER
/* set_enumerate_children_async
 *
 * Parameters:
 * - value: void (*)(GFile *, const char *, GFileQueryInfoFlags, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_set_enumerate_children_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value enumerate_children_async;

  mrb_get_args(mrb, "o", &enumerate_children_async);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_GFileQueryInfoFlagsCOMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(enumerate_children_async);

  void (*native_enumerate_children_async)(GFile *, const char *, GFileQueryInfoFlags, int, GCancellable *, GAsyncReadyCallback, gpointer) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_GFileQueryInfoFlagsCOMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(enumerate_children_async);

  native_self->enumerate_children_async = native_enumerate_children_async;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::enumerate_children_finish_reader */
/* sha: 819818caedf2187ceeba717a2db9de39c1734db6f2a5a971871ecf6101060711 */
#if BIND_GFileIface_enumerate_children_finish_FIELD_READER
/* get_enumerate_children_finish
 *
 * Return Type: GFileEnumerator *(*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_enumerate_children_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  GFileEnumerator *(*)(GFile *, GAsyncResult *, GError **) native_enumerate_children_finish = native_self->enumerate_children_finish;

  mrb_value enumerate_children_finish = TODO_mruby_box_GFileEnumerator_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_enumerate_children_finish);

  return enumerate_children_finish;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::enumerate_children_finish_writer */
/* sha: dd09bce7db3732fd8ee94d7494346fbc6f57ed36cedacf9fe8031132b1d6d972 */
#if BIND_GFileIface_enumerate_children_finish_FIELD_WRITER
/* set_enumerate_children_finish
 *
 * Parameters:
 * - value: GFileEnumerator *(*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_enumerate_children_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value enumerate_children_finish;

  mrb_get_args(mrb, "o", &enumerate_children_finish);

  /* type checking */
  TODO_type_check_GFileEnumerator_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(enumerate_children_finish);

  GFileEnumerator *(*native_enumerate_children_finish)(GFile *, GAsyncResult *, GError **) = TODO_mruby_unbox_GFileEnumerator_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(enumerate_children_finish);

  native_self->enumerate_children_finish = native_enumerate_children_finish;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::query_info_reader */
/* sha: 86473bd574687d171078ec00579d53ad549f1314c79e2607ec2613bcf7b4f678 */
#if BIND_GFileIface_query_info_FIELD_READER
/* get_query_info
 *
 * Return Type: GFileInfo *(*)(GFile *, const char *, GFileQueryInfoFlags, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_query_info(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  GFileInfo *(*)(GFile *, const char *, GFileQueryInfoFlags, GCancellable *, GError **) native_query_info = native_self->query_info;

  mrb_value query_info = TODO_mruby_box_GFileInfo_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_GFileQueryInfoFlagsCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_query_info);

  return query_info;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::query_info_writer */
/* sha: 19f18701f87c0f0244261b96acfd75521df256ac2fd30400ef9c487be2c8787a */
#if BIND_GFileIface_query_info_FIELD_WRITER
/* set_query_info
 *
 * Parameters:
 * - value: GFileInfo *(*)(GFile *, const char *, GFileQueryInfoFlags, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_query_info(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value query_info;

  mrb_get_args(mrb, "o", &query_info);

  /* type checking */
  TODO_type_check_GFileInfo_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_GFileQueryInfoFlagsCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(query_info);

  GFileInfo *(*native_query_info)(GFile *, const char *, GFileQueryInfoFlags, GCancellable *, GError **) = TODO_mruby_unbox_GFileInfo_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_GFileQueryInfoFlagsCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(query_info);

  native_self->query_info = native_query_info;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::query_info_async_reader */
/* sha: 692f9d5294b6336f04a73c0e88ad060472c9e7c566b84ee4ce0d0fec38b0dc2a */
#if BIND_GFileIface_query_info_async_FIELD_READER
/* get_query_info_async
 *
 * Return Type: void (*)(GFile *, const char *, GFileQueryInfoFlags, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_get_query_info_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  void (*)(GFile *, const char *, GFileQueryInfoFlags, int, GCancellable *, GAsyncReadyCallback, gpointer) native_query_info_async = native_self->query_info_async;

  mrb_value query_info_async = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_GFileQueryInfoFlagsCOMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(mrb, native_query_info_async);

  return query_info_async;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::query_info_async_writer */
/* sha: 723004dd3f71caa4bae4a0f1cea12c058be63caa176f414273da712b1c7a926e */
#if BIND_GFileIface_query_info_async_FIELD_WRITER
/* set_query_info_async
 *
 * Parameters:
 * - value: void (*)(GFile *, const char *, GFileQueryInfoFlags, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_set_query_info_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value query_info_async;

  mrb_get_args(mrb, "o", &query_info_async);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_GFileQueryInfoFlagsCOMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(query_info_async);

  void (*native_query_info_async)(GFile *, const char *, GFileQueryInfoFlags, int, GCancellable *, GAsyncReadyCallback, gpointer) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_GFileQueryInfoFlagsCOMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(query_info_async);

  native_self->query_info_async = native_query_info_async;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::query_info_finish_reader */
/* sha: 0f3f4126d865e3b9059f51c1c07ac2d3155369cdcefbf20a6c88179687c09c66 */
#if BIND_GFileIface_query_info_finish_FIELD_READER
/* get_query_info_finish
 *
 * Return Type: GFileInfo *(*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_query_info_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  GFileInfo *(*)(GFile *, GAsyncResult *, GError **) native_query_info_finish = native_self->query_info_finish;

  mrb_value query_info_finish = TODO_mruby_box_GFileInfo_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_query_info_finish);

  return query_info_finish;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::query_info_finish_writer */
/* sha: 8e57ad1ab036f8dd1d17a28638ce2a4af65bf8d1199f4e58f4936bcb7d516b65 */
#if BIND_GFileIface_query_info_finish_FIELD_WRITER
/* set_query_info_finish
 *
 * Parameters:
 * - value: GFileInfo *(*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_query_info_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value query_info_finish;

  mrb_get_args(mrb, "o", &query_info_finish);

  /* type checking */
  TODO_type_check_GFileInfo_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(query_info_finish);

  GFileInfo *(*native_query_info_finish)(GFile *, GAsyncResult *, GError **) = TODO_mruby_unbox_GFileInfo_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(query_info_finish);

  native_self->query_info_finish = native_query_info_finish;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::query_filesystem_info_reader */
/* sha: 403c07356783fad044833229e889c3702423704609188e958eba135a55a3bcdc */
#if BIND_GFileIface_query_filesystem_info_FIELD_READER
/* get_query_filesystem_info
 *
 * Return Type: GFileInfo *(*)(GFile *, const char *, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_query_filesystem_info(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  GFileInfo *(*)(GFile *, const char *, GCancellable *, GError **) native_query_filesystem_info = native_self->query_filesystem_info;

  mrb_value query_filesystem_info = TODO_mruby_box_GFileInfo_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_query_filesystem_info);

  return query_filesystem_info;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::query_filesystem_info_writer */
/* sha: d76273c0758cb5c04dcc7f75c5efe6f288f0a325a7e7feaf9a54ac873313416b */
#if BIND_GFileIface_query_filesystem_info_FIELD_WRITER
/* set_query_filesystem_info
 *
 * Parameters:
 * - value: GFileInfo *(*)(GFile *, const char *, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_query_filesystem_info(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value query_filesystem_info;

  mrb_get_args(mrb, "o", &query_filesystem_info);

  /* type checking */
  TODO_type_check_GFileInfo_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(query_filesystem_info);

  GFileInfo *(*native_query_filesystem_info)(GFile *, const char *, GCancellable *, GError **) = TODO_mruby_unbox_GFileInfo_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(query_filesystem_info);

  native_self->query_filesystem_info = native_query_filesystem_info;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::query_filesystem_info_async_reader */
/* sha: 134ea7a12f6b080fa4d455160c09483e4c69fc6cc04676ef64833989a45a88ac */
#if BIND_GFileIface_query_filesystem_info_async_FIELD_READER
/* get_query_filesystem_info_async
 *
 * Return Type: void (*)(GFile *, const char *, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_get_query_filesystem_info_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  void (*)(GFile *, const char *, int, GCancellable *, GAsyncReadyCallback, gpointer) native_query_filesystem_info_async = native_self->query_filesystem_info_async;

  mrb_value query_filesystem_info_async = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(mrb, native_query_filesystem_info_async);

  return query_filesystem_info_async;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::query_filesystem_info_async_writer */
/* sha: 45137391b707d6ebd2774f7c0a7faab3ec00e0acd2d691d19bc3140ca2ac7f65 */
#if BIND_GFileIface_query_filesystem_info_async_FIELD_WRITER
/* set_query_filesystem_info_async
 *
 * Parameters:
 * - value: void (*)(GFile *, const char *, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_set_query_filesystem_info_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value query_filesystem_info_async;

  mrb_get_args(mrb, "o", &query_filesystem_info_async);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(query_filesystem_info_async);

  void (*native_query_filesystem_info_async)(GFile *, const char *, int, GCancellable *, GAsyncReadyCallback, gpointer) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(query_filesystem_info_async);

  native_self->query_filesystem_info_async = native_query_filesystem_info_async;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::query_filesystem_info_finish_reader */
/* sha: 3fa6f61f7afb7db0737d2b9121cd66b954338f4dd9e762da7ec808bcac2e7735 */
#if BIND_GFileIface_query_filesystem_info_finish_FIELD_READER
/* get_query_filesystem_info_finish
 *
 * Return Type: GFileInfo *(*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_query_filesystem_info_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  GFileInfo *(*)(GFile *, GAsyncResult *, GError **) native_query_filesystem_info_finish = native_self->query_filesystem_info_finish;

  mrb_value query_filesystem_info_finish = TODO_mruby_box_GFileInfo_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_query_filesystem_info_finish);

  return query_filesystem_info_finish;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::query_filesystem_info_finish_writer */
/* sha: 4b6149d917cb093269eb7a2a6898ca743563dca284be5d5a92cb9dc9ff5ce249 */
#if BIND_GFileIface_query_filesystem_info_finish_FIELD_WRITER
/* set_query_filesystem_info_finish
 *
 * Parameters:
 * - value: GFileInfo *(*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_query_filesystem_info_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value query_filesystem_info_finish;

  mrb_get_args(mrb, "o", &query_filesystem_info_finish);

  /* type checking */
  TODO_type_check_GFileInfo_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(query_filesystem_info_finish);

  GFileInfo *(*native_query_filesystem_info_finish)(GFile *, GAsyncResult *, GError **) = TODO_mruby_unbox_GFileInfo_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(query_filesystem_info_finish);

  native_self->query_filesystem_info_finish = native_query_filesystem_info_finish;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::find_enclosing_mount_reader */
/* sha: a48a7b7b690c361e58b71d26e5588c76bb01df4ad05ecea6962442cee541f5ec */
#if BIND_GFileIface_find_enclosing_mount_FIELD_READER
/* get_find_enclosing_mount
 *
 * Return Type: GMount *(*)(GFile *, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_find_enclosing_mount(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  GMount *(*)(GFile *, GCancellable *, GError **) native_find_enclosing_mount = native_self->find_enclosing_mount;

  mrb_value find_enclosing_mount = TODO_mruby_box_GMount_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_find_enclosing_mount);

  return find_enclosing_mount;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::find_enclosing_mount_writer */
/* sha: 16a47e6c92eabf8e8cb148c33e83884e34ddc13fe866347f1a329faaf649a966 */
#if BIND_GFileIface_find_enclosing_mount_FIELD_WRITER
/* set_find_enclosing_mount
 *
 * Parameters:
 * - value: GMount *(*)(GFile *, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_find_enclosing_mount(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value find_enclosing_mount;

  mrb_get_args(mrb, "o", &find_enclosing_mount);

  /* type checking */
  TODO_type_check_GMount_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(find_enclosing_mount);

  GMount *(*native_find_enclosing_mount)(GFile *, GCancellable *, GError **) = TODO_mruby_unbox_GMount_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(find_enclosing_mount);

  native_self->find_enclosing_mount = native_find_enclosing_mount;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::find_enclosing_mount_async_reader */
/* sha: 75e5e8ffe84138c60d450b072a7834d0fe0639b669fde8a576f076b0bf188bcb */
#if BIND_GFileIface_find_enclosing_mount_async_FIELD_READER
/* get_find_enclosing_mount_async
 *
 * Return Type: void (*)(GFile *, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_get_find_enclosing_mount_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  void (*)(GFile *, int, GCancellable *, GAsyncReadyCallback, gpointer) native_find_enclosing_mount_async = native_self->find_enclosing_mount_async;

  mrb_value find_enclosing_mount_async = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(mrb, native_find_enclosing_mount_async);

  return find_enclosing_mount_async;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::find_enclosing_mount_async_writer */
/* sha: 627b10338e8eaffbf5d091e9b604c693dfe707dd3b0aece6aa61058c7ecb83a4 */
#if BIND_GFileIface_find_enclosing_mount_async_FIELD_WRITER
/* set_find_enclosing_mount_async
 *
 * Parameters:
 * - value: void (*)(GFile *, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_set_find_enclosing_mount_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value find_enclosing_mount_async;

  mrb_get_args(mrb, "o", &find_enclosing_mount_async);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(find_enclosing_mount_async);

  void (*native_find_enclosing_mount_async)(GFile *, int, GCancellable *, GAsyncReadyCallback, gpointer) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(find_enclosing_mount_async);

  native_self->find_enclosing_mount_async = native_find_enclosing_mount_async;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::find_enclosing_mount_finish_reader */
/* sha: cadb2c2d546adfcd89c0a4c913c2adfb74ec0ec595240937ec0ca23d350fc559 */
#if BIND_GFileIface_find_enclosing_mount_finish_FIELD_READER
/* get_find_enclosing_mount_finish
 *
 * Return Type: GMount *(*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_find_enclosing_mount_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  GMount *(*)(GFile *, GAsyncResult *, GError **) native_find_enclosing_mount_finish = native_self->find_enclosing_mount_finish;

  mrb_value find_enclosing_mount_finish = TODO_mruby_box_GMount_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_find_enclosing_mount_finish);

  return find_enclosing_mount_finish;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::find_enclosing_mount_finish_writer */
/* sha: 8ffda07f4af9372ef2b630e228e7bb3eddbf93af54228aa457c151e6bd3e34e7 */
#if BIND_GFileIface_find_enclosing_mount_finish_FIELD_WRITER
/* set_find_enclosing_mount_finish
 *
 * Parameters:
 * - value: GMount *(*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_find_enclosing_mount_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value find_enclosing_mount_finish;

  mrb_get_args(mrb, "o", &find_enclosing_mount_finish);

  /* type checking */
  TODO_type_check_GMount_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(find_enclosing_mount_finish);

  GMount *(*native_find_enclosing_mount_finish)(GFile *, GAsyncResult *, GError **) = TODO_mruby_unbox_GMount_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(find_enclosing_mount_finish);

  native_self->find_enclosing_mount_finish = native_find_enclosing_mount_finish;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::set_display_name_reader */
/* sha: 9b8697321c7e8cb18f933339636d925e3a7760de164cd154d7d9f9017e071596 */
#if BIND_GFileIface_set_display_name_FIELD_READER
/* get_set_display_name
 *
 * Return Type: GFile *(*)(GFile *, const char *, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_set_display_name(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  GFile *(*)(GFile *, const char *, GCancellable *, GError **) native_set_display_name = native_self->set_display_name;

  mrb_value set_display_name = TODO_mruby_box_GFile_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_set_display_name);

  return set_display_name;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::set_display_name_writer */
/* sha: 79f9c177cbacbf060f47494122a618f7d4249e06500f71cb6a5355a02f84e6b4 */
#if BIND_GFileIface_set_display_name_FIELD_WRITER
/* set_set_display_name
 *
 * Parameters:
 * - value: GFile *(*)(GFile *, const char *, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_set_display_name(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value set_display_name;

  mrb_get_args(mrb, "o", &set_display_name);

  /* type checking */
  TODO_type_check_GFile_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(set_display_name);

  GFile *(*native_set_display_name)(GFile *, const char *, GCancellable *, GError **) = TODO_mruby_unbox_GFile_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(set_display_name);

  native_self->set_display_name = native_set_display_name;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::set_display_name_async_reader */
/* sha: 4d4c63afa6561d554148b71759ca85187827fbad5fbb384ffafefa56dd0de525 */
#if BIND_GFileIface_set_display_name_async_FIELD_READER
/* get_set_display_name_async
 *
 * Return Type: void (*)(GFile *, const char *, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_get_set_display_name_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  void (*)(GFile *, const char *, int, GCancellable *, GAsyncReadyCallback, gpointer) native_set_display_name_async = native_self->set_display_name_async;

  mrb_value set_display_name_async = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(mrb, native_set_display_name_async);

  return set_display_name_async;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::set_display_name_async_writer */
/* sha: 2f4544227cbbfb6151312864d4d9ad294c4f09b24c973cfb32f3386b613f7c13 */
#if BIND_GFileIface_set_display_name_async_FIELD_WRITER
/* set_set_display_name_async
 *
 * Parameters:
 * - value: void (*)(GFile *, const char *, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_set_set_display_name_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value set_display_name_async;

  mrb_get_args(mrb, "o", &set_display_name_async);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(set_display_name_async);

  void (*native_set_display_name_async)(GFile *, const char *, int, GCancellable *, GAsyncReadyCallback, gpointer) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(set_display_name_async);

  native_self->set_display_name_async = native_set_display_name_async;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::set_display_name_finish_reader */
/* sha: 969fed5b1cae40b7ff4eab6d237359c8274e16e137aad6122560c213a65f7402 */
#if BIND_GFileIface_set_display_name_finish_FIELD_READER
/* get_set_display_name_finish
 *
 * Return Type: GFile *(*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_set_display_name_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  GFile *(*)(GFile *, GAsyncResult *, GError **) native_set_display_name_finish = native_self->set_display_name_finish;

  mrb_value set_display_name_finish = TODO_mruby_box_GFile_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_set_display_name_finish);

  return set_display_name_finish;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::set_display_name_finish_writer */
/* sha: 74ca88c2c8166a27dca32434625484a18f4acfdd52a81dcf473e9be9c5c2fb09 */
#if BIND_GFileIface_set_display_name_finish_FIELD_WRITER
/* set_set_display_name_finish
 *
 * Parameters:
 * - value: GFile *(*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_set_display_name_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value set_display_name_finish;

  mrb_get_args(mrb, "o", &set_display_name_finish);

  /* type checking */
  TODO_type_check_GFile_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(set_display_name_finish);

  GFile *(*native_set_display_name_finish)(GFile *, GAsyncResult *, GError **) = TODO_mruby_unbox_GFile_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(set_display_name_finish);

  native_self->set_display_name_finish = native_set_display_name_finish;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::query_settable_attributes_reader */
/* sha: 3ddefa68aeb56f88d68a8b756b7e9a755cdf6d08d7cd4127300fd99427a01063 */
#if BIND_GFileIface_query_settable_attributes_FIELD_READER
/* get_query_settable_attributes
 *
 * Return Type: GFileAttributeInfoList *(*)(GFile *, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_query_settable_attributes(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  GFileAttributeInfoList *(*)(GFile *, GCancellable *, GError **) native_query_settable_attributes = native_self->query_settable_attributes;

  mrb_value query_settable_attributes = TODO_mruby_box_GFileAttributeInfoList_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_query_settable_attributes);

  return query_settable_attributes;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::query_settable_attributes_writer */
/* sha: c2dbd70cb58fc48bbe9cbee75990d4d1d930cbd03132f0b98bbff841b3aafb17 */
#if BIND_GFileIface_query_settable_attributes_FIELD_WRITER
/* set_query_settable_attributes
 *
 * Parameters:
 * - value: GFileAttributeInfoList *(*)(GFile *, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_query_settable_attributes(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value query_settable_attributes;

  mrb_get_args(mrb, "o", &query_settable_attributes);

  /* type checking */
  TODO_type_check_GFileAttributeInfoList_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(query_settable_attributes);

  GFileAttributeInfoList *(*native_query_settable_attributes)(GFile *, GCancellable *, GError **) = TODO_mruby_unbox_GFileAttributeInfoList_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(query_settable_attributes);

  native_self->query_settable_attributes = native_query_settable_attributes;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::_query_settable_attributes_async_reader */
/* sha: 817e5b9bd840e7a74f56b70311b396a9b4e204d5f02155fa288df0ed27bba3bf */
#if BIND_GFileIface__query_settable_attributes_async_FIELD_READER
/* get__query_settable_attributes_async
 *
 * Return Type: void (*)(void)
 */
mrb_value
mrb_GLib_GFileIface_get__query_settable_attributes_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  void (*)(void) native__query_settable_attributes_async = native_self->_query_settable_attributes_async;

  mrb_value _query_settable_attributes_async = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native__query_settable_attributes_async);

  return _query_settable_attributes_async;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::_query_settable_attributes_async_writer */
/* sha: 069aaf5cbbb6ace0fcbdce7ec7c83bcfb7cd4b326118ea71f6e8bb8da451d51f */
#if BIND_GFileIface__query_settable_attributes_async_FIELD_WRITER
/* set__query_settable_attributes_async
 *
 * Parameters:
 * - value: void (*)(void)
 */
mrb_value
mrb_GLib_GFileIface_set__query_settable_attributes_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value _query_settable_attributes_async;

  mrb_get_args(mrb, "o", &_query_settable_attributes_async);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(_query_settable_attributes_async);

  void (*native__query_settable_attributes_async)(void) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(_query_settable_attributes_async);

  native_self->_query_settable_attributes_async = native__query_settable_attributes_async;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::_query_settable_attributes_finish_reader */
/* sha: 656e2856c6481c11c9b5762ee242418db08bb87c918f57d85657f96b791ad860 */
#if BIND_GFileIface__query_settable_attributes_finish_FIELD_READER
/* get__query_settable_attributes_finish
 *
 * Return Type: void (*)(void)
 */
mrb_value
mrb_GLib_GFileIface_get__query_settable_attributes_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  void (*)(void) native__query_settable_attributes_finish = native_self->_query_settable_attributes_finish;

  mrb_value _query_settable_attributes_finish = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native__query_settable_attributes_finish);

  return _query_settable_attributes_finish;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::_query_settable_attributes_finish_writer */
/* sha: d0b9d474acc9a92cadf6ca4bb7558f8e2ac15409724a892e7bb858dc51553165 */
#if BIND_GFileIface__query_settable_attributes_finish_FIELD_WRITER
/* set__query_settable_attributes_finish
 *
 * Parameters:
 * - value: void (*)(void)
 */
mrb_value
mrb_GLib_GFileIface_set__query_settable_attributes_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value _query_settable_attributes_finish;

  mrb_get_args(mrb, "o", &_query_settable_attributes_finish);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(_query_settable_attributes_finish);

  void (*native__query_settable_attributes_finish)(void) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(_query_settable_attributes_finish);

  native_self->_query_settable_attributes_finish = native__query_settable_attributes_finish;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::query_writable_namespaces_reader */
/* sha: 72bb41d245db20576065fd8945215c39621a0a1faaf4d32c5703bdff3b983d56 */
#if BIND_GFileIface_query_writable_namespaces_FIELD_READER
/* get_query_writable_namespaces
 *
 * Return Type: GFileAttributeInfoList *(*)(GFile *, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_query_writable_namespaces(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  GFileAttributeInfoList *(*)(GFile *, GCancellable *, GError **) native_query_writable_namespaces = native_self->query_writable_namespaces;

  mrb_value query_writable_namespaces = TODO_mruby_box_GFileAttributeInfoList_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_query_writable_namespaces);

  return query_writable_namespaces;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::query_writable_namespaces_writer */
/* sha: 0700cf040a0552cc82951ced00113079807bd039a4cb62e455c9ea6907c58a73 */
#if BIND_GFileIface_query_writable_namespaces_FIELD_WRITER
/* set_query_writable_namespaces
 *
 * Parameters:
 * - value: GFileAttributeInfoList *(*)(GFile *, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_query_writable_namespaces(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value query_writable_namespaces;

  mrb_get_args(mrb, "o", &query_writable_namespaces);

  /* type checking */
  TODO_type_check_GFileAttributeInfoList_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(query_writable_namespaces);

  GFileAttributeInfoList *(*native_query_writable_namespaces)(GFile *, GCancellable *, GError **) = TODO_mruby_unbox_GFileAttributeInfoList_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(query_writable_namespaces);

  native_self->query_writable_namespaces = native_query_writable_namespaces;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::_query_writable_namespaces_async_reader */
/* sha: 4dd47bf463a964bac3c4776effd3f08d997d26f62234f7840aa58f9eb0dd0687 */
#if BIND_GFileIface__query_writable_namespaces_async_FIELD_READER
/* get__query_writable_namespaces_async
 *
 * Return Type: void (*)(void)
 */
mrb_value
mrb_GLib_GFileIface_get__query_writable_namespaces_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  void (*)(void) native__query_writable_namespaces_async = native_self->_query_writable_namespaces_async;

  mrb_value _query_writable_namespaces_async = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native__query_writable_namespaces_async);

  return _query_writable_namespaces_async;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::_query_writable_namespaces_async_writer */
/* sha: 00720ca01786f5dae7e71f257dd3a7328d9ae5146724aae5b8d56d758db4e814 */
#if BIND_GFileIface__query_writable_namespaces_async_FIELD_WRITER
/* set__query_writable_namespaces_async
 *
 * Parameters:
 * - value: void (*)(void)
 */
mrb_value
mrb_GLib_GFileIface_set__query_writable_namespaces_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value _query_writable_namespaces_async;

  mrb_get_args(mrb, "o", &_query_writable_namespaces_async);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(_query_writable_namespaces_async);

  void (*native__query_writable_namespaces_async)(void) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(_query_writable_namespaces_async);

  native_self->_query_writable_namespaces_async = native__query_writable_namespaces_async;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::_query_writable_namespaces_finish_reader */
/* sha: b832f65f5cc7f778734d5a3c4fde0e39decdf9654e8edc128f64a4f778f298e6 */
#if BIND_GFileIface__query_writable_namespaces_finish_FIELD_READER
/* get__query_writable_namespaces_finish
 *
 * Return Type: void (*)(void)
 */
mrb_value
mrb_GLib_GFileIface_get__query_writable_namespaces_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  void (*)(void) native__query_writable_namespaces_finish = native_self->_query_writable_namespaces_finish;

  mrb_value _query_writable_namespaces_finish = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native__query_writable_namespaces_finish);

  return _query_writable_namespaces_finish;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::_query_writable_namespaces_finish_writer */
/* sha: 1bdd5c30dc06326f3fff6f094787caf9ba45b74a415f2ef55e51fb05877fc185 */
#if BIND_GFileIface__query_writable_namespaces_finish_FIELD_WRITER
/* set__query_writable_namespaces_finish
 *
 * Parameters:
 * - value: void (*)(void)
 */
mrb_value
mrb_GLib_GFileIface_set__query_writable_namespaces_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value _query_writable_namespaces_finish;

  mrb_get_args(mrb, "o", &_query_writable_namespaces_finish);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(_query_writable_namespaces_finish);

  void (*native__query_writable_namespaces_finish)(void) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(_query_writable_namespaces_finish);

  native_self->_query_writable_namespaces_finish = native__query_writable_namespaces_finish;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::set_attribute_reader */
/* sha: e5816b0642a5d5d25e1aa3671890c2f54d584b6da41bf798067536952a777c9e */
#if BIND_GFileIface_set_attribute_FIELD_READER
/* get_set_attribute
 *
 * Return Type: gboolean (*)(GFile *, const char *, GFileAttributeType, gpointer, GFileQueryInfoFlags, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_set_attribute(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  gboolean (*)(GFile *, const char *, GFileAttributeType, gpointer, GFileQueryInfoFlags, GCancellable *, GError **) native_set_attribute = native_self->set_attribute;

  mrb_value set_attribute = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_GFileAttributeTypeCOMMA_gpointerCOMMA_GFileQueryInfoFlagsCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_set_attribute);

  return set_attribute;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::set_attribute_writer */
/* sha: cd7d9514742b4362fe9d3b03b48291223b798889cf9a0089750d8f03549523b6 */
#if BIND_GFileIface_set_attribute_FIELD_WRITER
/* set_set_attribute
 *
 * Parameters:
 * - value: gboolean (*)(GFile *, const char *, GFileAttributeType, gpointer, GFileQueryInfoFlags, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_set_attribute(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value set_attribute;

  mrb_get_args(mrb, "o", &set_attribute);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_GFileAttributeTypeCOMMA_gpointerCOMMA_GFileQueryInfoFlagsCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(set_attribute);

  gboolean (*native_set_attribute)(GFile *, const char *, GFileAttributeType, gpointer, GFileQueryInfoFlags, GCancellable *, GError **) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_GFileAttributeTypeCOMMA_gpointerCOMMA_GFileQueryInfoFlagsCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(set_attribute);

  native_self->set_attribute = native_set_attribute;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::set_attributes_from_info_reader */
/* sha: 05948ad10e75d17aca81a8917399b990f00670ed7cbbc4483cf9e6e39b217f06 */
#if BIND_GFileIface_set_attributes_from_info_FIELD_READER
/* get_set_attributes_from_info
 *
 * Return Type: gboolean (*)(GFile *, GFileInfo *, GFileQueryInfoFlags, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_set_attributes_from_info(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  gboolean (*)(GFile *, GFileInfo *, GFileQueryInfoFlags, GCancellable *, GError **) native_set_attributes_from_info = native_self->set_attributes_from_info;

  mrb_value set_attributes_from_info = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFileInfo_PTR_COMMA_GFileQueryInfoFlagsCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_set_attributes_from_info);

  return set_attributes_from_info;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::set_attributes_from_info_writer */
/* sha: e43ee802580f47da9c095b917f270bf3e4439d6908b45b26102808ac21d5f280 */
#if BIND_GFileIface_set_attributes_from_info_FIELD_WRITER
/* set_set_attributes_from_info
 *
 * Parameters:
 * - value: gboolean (*)(GFile *, GFileInfo *, GFileQueryInfoFlags, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_set_attributes_from_info(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value set_attributes_from_info;

  mrb_get_args(mrb, "o", &set_attributes_from_info);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFileInfo_PTR_COMMA_GFileQueryInfoFlagsCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(set_attributes_from_info);

  gboolean (*native_set_attributes_from_info)(GFile *, GFileInfo *, GFileQueryInfoFlags, GCancellable *, GError **) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFileInfo_PTR_COMMA_GFileQueryInfoFlagsCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(set_attributes_from_info);

  native_self->set_attributes_from_info = native_set_attributes_from_info;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::set_attributes_async_reader */
/* sha: 8b2a93c17373321a5780b0d5d7ee51caf6b18058e1ef2ec4d164f8fc9df1729a */
#if BIND_GFileIface_set_attributes_async_FIELD_READER
/* get_set_attributes_async
 *
 * Return Type: void (*)(GFile *, GFileInfo *, GFileQueryInfoFlags, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_get_set_attributes_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  void (*)(GFile *, GFileInfo *, GFileQueryInfoFlags, int, GCancellable *, GAsyncReadyCallback, gpointer) native_set_attributes_async = native_self->set_attributes_async;

  mrb_value set_attributes_async = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFileInfo_PTR_COMMA_GFileQueryInfoFlagsCOMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(mrb, native_set_attributes_async);

  return set_attributes_async;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::set_attributes_async_writer */
/* sha: d4f3761660f6bad162f3538320d0a2a257255b20c51a4880ae2429fbd33703ac */
#if BIND_GFileIface_set_attributes_async_FIELD_WRITER
/* set_set_attributes_async
 *
 * Parameters:
 * - value: void (*)(GFile *, GFileInfo *, GFileQueryInfoFlags, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_set_set_attributes_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value set_attributes_async;

  mrb_get_args(mrb, "o", &set_attributes_async);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFileInfo_PTR_COMMA_GFileQueryInfoFlagsCOMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(set_attributes_async);

  void (*native_set_attributes_async)(GFile *, GFileInfo *, GFileQueryInfoFlags, int, GCancellable *, GAsyncReadyCallback, gpointer) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFileInfo_PTR_COMMA_GFileQueryInfoFlagsCOMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(set_attributes_async);

  native_self->set_attributes_async = native_set_attributes_async;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::set_attributes_finish_reader */
/* sha: 6bcea0696926e67374619cb05f3291da3820da7c8f226123dfa374b5f58981db */
#if BIND_GFileIface_set_attributes_finish_FIELD_READER
/* get_set_attributes_finish
 *
 * Return Type: gboolean (*)(GFile *, GAsyncResult *, GFileInfo **, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_set_attributes_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  gboolean (*)(GFile *, GAsyncResult *, GFileInfo **, GError **) native_set_attributes_finish = native_self->set_attributes_finish;

  mrb_value set_attributes_finish = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GFileInfo_PTR_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_set_attributes_finish);

  return set_attributes_finish;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::set_attributes_finish_writer */
/* sha: 8cfcaf2f4ca953e06573fb554079b84a15902d544815f43f7054e8648399cede */
#if BIND_GFileIface_set_attributes_finish_FIELD_WRITER
/* set_set_attributes_finish
 *
 * Parameters:
 * - value: gboolean (*)(GFile *, GAsyncResult *, GFileInfo **, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_set_attributes_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value set_attributes_finish;

  mrb_get_args(mrb, "o", &set_attributes_finish);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GFileInfo_PTR_PTR_COMMA_GError_PTR_PTR_RPAREN(set_attributes_finish);

  gboolean (*native_set_attributes_finish)(GFile *, GAsyncResult *, GFileInfo **, GError **) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GFileInfo_PTR_PTR_COMMA_GError_PTR_PTR_RPAREN(set_attributes_finish);

  native_self->set_attributes_finish = native_set_attributes_finish;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::read_fn_reader */
/* sha: 890b6a054ccfb182b2d092e5290605f904f586f6150db94086a66f3770fc8adf */
#if BIND_GFileIface_read_fn_FIELD_READER
/* get_read_fn
 *
 * Return Type: GFileInputStream *(*)(GFile *, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_read_fn(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  GFileInputStream *(*)(GFile *, GCancellable *, GError **) native_read_fn = native_self->read_fn;

  mrb_value read_fn = TODO_mruby_box_GFileInputStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_read_fn);

  return read_fn;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::read_fn_writer */
/* sha: c4a463f4bfff32be26629ceeeb133d404eee1fd6aa02e00fbdaade2bcfc660fb */
#if BIND_GFileIface_read_fn_FIELD_WRITER
/* set_read_fn
 *
 * Parameters:
 * - value: GFileInputStream *(*)(GFile *, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_read_fn(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value read_fn;

  mrb_get_args(mrb, "o", &read_fn);

  /* type checking */
  TODO_type_check_GFileInputStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(read_fn);

  GFileInputStream *(*native_read_fn)(GFile *, GCancellable *, GError **) = TODO_mruby_unbox_GFileInputStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(read_fn);

  native_self->read_fn = native_read_fn;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::read_async_reader */
/* sha: 8f3e500707d52f01c59abefe95f9fd2a73487618e3e530c0e71a3a1ff2e84e19 */
#if BIND_GFileIface_read_async_FIELD_READER
/* get_read_async
 *
 * Return Type: void (*)(GFile *, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_get_read_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  void (*)(GFile *, int, GCancellable *, GAsyncReadyCallback, gpointer) native_read_async = native_self->read_async;

  mrb_value read_async = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(mrb, native_read_async);

  return read_async;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::read_async_writer */
/* sha: af78894bb5cf4447669d0ff1be8a0d7dc4cc7fe1aa65ec4109df9dc1db38f5cf */
#if BIND_GFileIface_read_async_FIELD_WRITER
/* set_read_async
 *
 * Parameters:
 * - value: void (*)(GFile *, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_set_read_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value read_async;

  mrb_get_args(mrb, "o", &read_async);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(read_async);

  void (*native_read_async)(GFile *, int, GCancellable *, GAsyncReadyCallback, gpointer) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(read_async);

  native_self->read_async = native_read_async;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::read_finish_reader */
/* sha: a7ae2818277405ce1e00fe74e572ef6d4485b4900c9aa2eb26a6c854d465e805 */
#if BIND_GFileIface_read_finish_FIELD_READER
/* get_read_finish
 *
 * Return Type: GFileInputStream *(*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_read_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  GFileInputStream *(*)(GFile *, GAsyncResult *, GError **) native_read_finish = native_self->read_finish;

  mrb_value read_finish = TODO_mruby_box_GFileInputStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_read_finish);

  return read_finish;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::read_finish_writer */
/* sha: 9081691b326d853b0bc318f41cf102f83c1563292a2c33cd1f46000f07ca691f */
#if BIND_GFileIface_read_finish_FIELD_WRITER
/* set_read_finish
 *
 * Parameters:
 * - value: GFileInputStream *(*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_read_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value read_finish;

  mrb_get_args(mrb, "o", &read_finish);

  /* type checking */
  TODO_type_check_GFileInputStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(read_finish);

  GFileInputStream *(*native_read_finish)(GFile *, GAsyncResult *, GError **) = TODO_mruby_unbox_GFileInputStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(read_finish);

  native_self->read_finish = native_read_finish;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::append_to_reader */
/* sha: bcacbe4f948626694d687ad5d5b159aab452fe0b716902dd98e8bd30b029652b */
#if BIND_GFileIface_append_to_FIELD_READER
/* get_append_to
 *
 * Return Type: GFileOutputStream *(*)(GFile *, GFileCreateFlags, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_append_to(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  GFileOutputStream *(*)(GFile *, GFileCreateFlags, GCancellable *, GError **) native_append_to = native_self->append_to;

  mrb_value append_to = TODO_mruby_box_GFileOutputStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFileCreateFlagsCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_append_to);

  return append_to;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::append_to_writer */
/* sha: 190ccc5bc8659570afea208a05cbf1637c0b3be587f0430e82b07ffd159d23f3 */
#if BIND_GFileIface_append_to_FIELD_WRITER
/* set_append_to
 *
 * Parameters:
 * - value: GFileOutputStream *(*)(GFile *, GFileCreateFlags, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_append_to(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value append_to;

  mrb_get_args(mrb, "o", &append_to);

  /* type checking */
  TODO_type_check_GFileOutputStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFileCreateFlagsCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(append_to);

  GFileOutputStream *(*native_append_to)(GFile *, GFileCreateFlags, GCancellable *, GError **) = TODO_mruby_unbox_GFileOutputStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFileCreateFlagsCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(append_to);

  native_self->append_to = native_append_to;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::append_to_async_reader */
/* sha: bb51ccbe983ea48d79e38954c115da3d4ec96063ab49eb9646317f1a5e13e909 */
#if BIND_GFileIface_append_to_async_FIELD_READER
/* get_append_to_async
 *
 * Return Type: void (*)(GFile *, GFileCreateFlags, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_get_append_to_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  void (*)(GFile *, GFileCreateFlags, int, GCancellable *, GAsyncReadyCallback, gpointer) native_append_to_async = native_self->append_to_async;

  mrb_value append_to_async = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFileCreateFlagsCOMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(mrb, native_append_to_async);

  return append_to_async;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::append_to_async_writer */
/* sha: 64be69d9bae1019f80dcb4cc85a4a7fbe4d680bd5bf184f0f53b2c3a946d0dfc */
#if BIND_GFileIface_append_to_async_FIELD_WRITER
/* set_append_to_async
 *
 * Parameters:
 * - value: void (*)(GFile *, GFileCreateFlags, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_set_append_to_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value append_to_async;

  mrb_get_args(mrb, "o", &append_to_async);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFileCreateFlagsCOMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(append_to_async);

  void (*native_append_to_async)(GFile *, GFileCreateFlags, int, GCancellable *, GAsyncReadyCallback, gpointer) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFileCreateFlagsCOMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(append_to_async);

  native_self->append_to_async = native_append_to_async;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::append_to_finish_reader */
/* sha: 00f3e5731216c7340421510e2cd92a70afe2b2dd33092f1eb29796da1e64ca42 */
#if BIND_GFileIface_append_to_finish_FIELD_READER
/* get_append_to_finish
 *
 * Return Type: GFileOutputStream *(*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_append_to_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  GFileOutputStream *(*)(GFile *, GAsyncResult *, GError **) native_append_to_finish = native_self->append_to_finish;

  mrb_value append_to_finish = TODO_mruby_box_GFileOutputStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_append_to_finish);

  return append_to_finish;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::append_to_finish_writer */
/* sha: 098c4b634ce0d70b3a604d980a75a5652990d6a19915a0201d813dd04cc16c90 */
#if BIND_GFileIface_append_to_finish_FIELD_WRITER
/* set_append_to_finish
 *
 * Parameters:
 * - value: GFileOutputStream *(*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_append_to_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value append_to_finish;

  mrb_get_args(mrb, "o", &append_to_finish);

  /* type checking */
  TODO_type_check_GFileOutputStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(append_to_finish);

  GFileOutputStream *(*native_append_to_finish)(GFile *, GAsyncResult *, GError **) = TODO_mruby_unbox_GFileOutputStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(append_to_finish);

  native_self->append_to_finish = native_append_to_finish;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::create_reader */
/* sha: 82880776b9ff28655efeaabe681164d10f8bc7c49e4a2ae4cbc361cc1c3f607a */
#if BIND_GFileIface_create_FIELD_READER
/* get_create
 *
 * Return Type: GFileOutputStream *(*)(GFile *, GFileCreateFlags, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_create(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  GFileOutputStream *(*)(GFile *, GFileCreateFlags, GCancellable *, GError **) native_create = native_self->create;

  mrb_value create = TODO_mruby_box_GFileOutputStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFileCreateFlagsCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_create);

  return create;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::create_writer */
/* sha: af4a186a92333ac948e257f94665df455cf6539d8293403c977948dddc3bf4bc */
#if BIND_GFileIface_create_FIELD_WRITER
/* set_create
 *
 * Parameters:
 * - value: GFileOutputStream *(*)(GFile *, GFileCreateFlags, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_create(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value create;

  mrb_get_args(mrb, "o", &create);

  /* type checking */
  TODO_type_check_GFileOutputStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFileCreateFlagsCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(create);

  GFileOutputStream *(*native_create)(GFile *, GFileCreateFlags, GCancellable *, GError **) = TODO_mruby_unbox_GFileOutputStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFileCreateFlagsCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(create);

  native_self->create = native_create;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::create_async_reader */
/* sha: 01980e10b4894955d6fb69ca84c063f4ab0ab457e710530a0a9e857a87771471 */
#if BIND_GFileIface_create_async_FIELD_READER
/* get_create_async
 *
 * Return Type: void (*)(GFile *, GFileCreateFlags, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_get_create_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  void (*)(GFile *, GFileCreateFlags, int, GCancellable *, GAsyncReadyCallback, gpointer) native_create_async = native_self->create_async;

  mrb_value create_async = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFileCreateFlagsCOMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(mrb, native_create_async);

  return create_async;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::create_async_writer */
/* sha: 137b4347a5dad262c328953ececad0c9414191784e92af0f167b4aebab0bf4f5 */
#if BIND_GFileIface_create_async_FIELD_WRITER
/* set_create_async
 *
 * Parameters:
 * - value: void (*)(GFile *, GFileCreateFlags, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_set_create_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value create_async;

  mrb_get_args(mrb, "o", &create_async);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFileCreateFlagsCOMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(create_async);

  void (*native_create_async)(GFile *, GFileCreateFlags, int, GCancellable *, GAsyncReadyCallback, gpointer) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFileCreateFlagsCOMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(create_async);

  native_self->create_async = native_create_async;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::create_finish_reader */
/* sha: f489a5935ee8add4e4c7339f13c184ae59f4281cde661e53fd88fbee65724727 */
#if BIND_GFileIface_create_finish_FIELD_READER
/* get_create_finish
 *
 * Return Type: GFileOutputStream *(*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_create_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  GFileOutputStream *(*)(GFile *, GAsyncResult *, GError **) native_create_finish = native_self->create_finish;

  mrb_value create_finish = TODO_mruby_box_GFileOutputStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_create_finish);

  return create_finish;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::create_finish_writer */
/* sha: 1e0be577f81eec792c25ac2e0fc05162147f58c842dd9974136609fd91b67ef0 */
#if BIND_GFileIface_create_finish_FIELD_WRITER
/* set_create_finish
 *
 * Parameters:
 * - value: GFileOutputStream *(*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_create_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value create_finish;

  mrb_get_args(mrb, "o", &create_finish);

  /* type checking */
  TODO_type_check_GFileOutputStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(create_finish);

  GFileOutputStream *(*native_create_finish)(GFile *, GAsyncResult *, GError **) = TODO_mruby_unbox_GFileOutputStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(create_finish);

  native_self->create_finish = native_create_finish;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::replace_reader */
/* sha: f13041dd17fa838de4475d6f9e141f1d452df0096c161112c660cbc48eda01fe */
#if BIND_GFileIface_replace_FIELD_READER
/* get_replace
 *
 * Return Type: GFileOutputStream *(*)(GFile *, const char *, gboolean, GFileCreateFlags, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_replace(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  GFileOutputStream *(*)(GFile *, const char *, gboolean, GFileCreateFlags, GCancellable *, GError **) native_replace = native_self->replace;

  mrb_value replace = TODO_mruby_box_GFileOutputStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_gbooleanCOMMA_GFileCreateFlagsCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_replace);

  return replace;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::replace_writer */
/* sha: ab0da477aa1e24d0e16a0fc0e8bb1e352183900c55b4325f2a269063b304a042 */
#if BIND_GFileIface_replace_FIELD_WRITER
/* set_replace
 *
 * Parameters:
 * - value: GFileOutputStream *(*)(GFile *, const char *, gboolean, GFileCreateFlags, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_replace(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value replace;

  mrb_get_args(mrb, "o", &replace);

  /* type checking */
  TODO_type_check_GFileOutputStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_gbooleanCOMMA_GFileCreateFlagsCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(replace);

  GFileOutputStream *(*native_replace)(GFile *, const char *, gboolean, GFileCreateFlags, GCancellable *, GError **) = TODO_mruby_unbox_GFileOutputStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_gbooleanCOMMA_GFileCreateFlagsCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(replace);

  native_self->replace = native_replace;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::replace_async_reader */
/* sha: a3bcba1f44359ee3699a3b7e073d886151d325a7cedd091016a23283ca66dadc */
#if BIND_GFileIface_replace_async_FIELD_READER
/* get_replace_async
 *
 * Return Type: void (*)(GFile *, const char *, gboolean, GFileCreateFlags, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_get_replace_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  void (*)(GFile *, const char *, gboolean, GFileCreateFlags, int, GCancellable *, GAsyncReadyCallback, gpointer) native_replace_async = native_self->replace_async;

  mrb_value replace_async = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_gbooleanCOMMA_GFileCreateFlagsCOMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(mrb, native_replace_async);

  return replace_async;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::replace_async_writer */
/* sha: e25502eb22c657846af752a3fc0c43af641f90a13c2378c7c358dab3fb318fa8 */
#if BIND_GFileIface_replace_async_FIELD_WRITER
/* set_replace_async
 *
 * Parameters:
 * - value: void (*)(GFile *, const char *, gboolean, GFileCreateFlags, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_set_replace_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value replace_async;

  mrb_get_args(mrb, "o", &replace_async);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_gbooleanCOMMA_GFileCreateFlagsCOMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(replace_async);

  void (*native_replace_async)(GFile *, const char *, gboolean, GFileCreateFlags, int, GCancellable *, GAsyncReadyCallback, gpointer) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_gbooleanCOMMA_GFileCreateFlagsCOMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(replace_async);

  native_self->replace_async = native_replace_async;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::replace_finish_reader */
/* sha: e0c17a65704ed116b044f7b6f8bdab40b36eb9b1c7314c44c2b2c7993f3097b7 */
#if BIND_GFileIface_replace_finish_FIELD_READER
/* get_replace_finish
 *
 * Return Type: GFileOutputStream *(*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_replace_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  GFileOutputStream *(*)(GFile *, GAsyncResult *, GError **) native_replace_finish = native_self->replace_finish;

  mrb_value replace_finish = TODO_mruby_box_GFileOutputStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_replace_finish);

  return replace_finish;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::replace_finish_writer */
/* sha: 4421742257f6801d41e3febe16e5cf23b895562f6ade3aa03aa62c8676ef70da */
#if BIND_GFileIface_replace_finish_FIELD_WRITER
/* set_replace_finish
 *
 * Parameters:
 * - value: GFileOutputStream *(*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_replace_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value replace_finish;

  mrb_get_args(mrb, "o", &replace_finish);

  /* type checking */
  TODO_type_check_GFileOutputStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(replace_finish);

  GFileOutputStream *(*native_replace_finish)(GFile *, GAsyncResult *, GError **) = TODO_mruby_unbox_GFileOutputStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(replace_finish);

  native_self->replace_finish = native_replace_finish;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::delete_file_reader */
/* sha: a771739e2545cddcb336d2e9eeedf00684cad69bdb3fe24e1595ec0888e2eb07 */
#if BIND_GFileIface_delete_file_FIELD_READER
/* get_delete_file
 *
 * Return Type: gboolean (*)(GFile *, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_delete_file(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  gboolean (*)(GFile *, GCancellable *, GError **) native_delete_file = native_self->delete_file;

  mrb_value delete_file = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_delete_file);

  return delete_file;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::delete_file_writer */
/* sha: c9c3487687d7f5bdd20dbe1bee2a1f3e52e5c3fb6324b9cffefd7454de3bc228 */
#if BIND_GFileIface_delete_file_FIELD_WRITER
/* set_delete_file
 *
 * Parameters:
 * - value: gboolean (*)(GFile *, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_delete_file(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value delete_file;

  mrb_get_args(mrb, "o", &delete_file);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(delete_file);

  gboolean (*native_delete_file)(GFile *, GCancellable *, GError **) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(delete_file);

  native_self->delete_file = native_delete_file;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::delete_file_async_reader */
/* sha: e2a3a7cb3e6249a3ff1801bb3c6bfcf49f694546e39e7fccc087b96f8180f1bc */
#if BIND_GFileIface_delete_file_async_FIELD_READER
/* get_delete_file_async
 *
 * Return Type: void (*)(GFile *, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_get_delete_file_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  void (*)(GFile *, int, GCancellable *, GAsyncReadyCallback, gpointer) native_delete_file_async = native_self->delete_file_async;

  mrb_value delete_file_async = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(mrb, native_delete_file_async);

  return delete_file_async;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::delete_file_async_writer */
/* sha: 919b3d719cf0af529ef9bf6b686b38cd58883a3443f2c12b03787854ad903bf5 */
#if BIND_GFileIface_delete_file_async_FIELD_WRITER
/* set_delete_file_async
 *
 * Parameters:
 * - value: void (*)(GFile *, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_set_delete_file_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value delete_file_async;

  mrb_get_args(mrb, "o", &delete_file_async);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(delete_file_async);

  void (*native_delete_file_async)(GFile *, int, GCancellable *, GAsyncReadyCallback, gpointer) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(delete_file_async);

  native_self->delete_file_async = native_delete_file_async;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::delete_file_finish_reader */
/* sha: 16e34cfec19569526f0129f6c8d6b0aa8b2617a05bb360ff3209caf3261e7375 */
#if BIND_GFileIface_delete_file_finish_FIELD_READER
/* get_delete_file_finish
 *
 * Return Type: gboolean (*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_delete_file_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  gboolean (*)(GFile *, GAsyncResult *, GError **) native_delete_file_finish = native_self->delete_file_finish;

  mrb_value delete_file_finish = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_delete_file_finish);

  return delete_file_finish;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::delete_file_finish_writer */
/* sha: 7b9b29dd07e665d74e33172c4397832d8243c922e69440f033a458825e81164d */
#if BIND_GFileIface_delete_file_finish_FIELD_WRITER
/* set_delete_file_finish
 *
 * Parameters:
 * - value: gboolean (*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_delete_file_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value delete_file_finish;

  mrb_get_args(mrb, "o", &delete_file_finish);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(delete_file_finish);

  gboolean (*native_delete_file_finish)(GFile *, GAsyncResult *, GError **) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(delete_file_finish);

  native_self->delete_file_finish = native_delete_file_finish;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::trash_reader */
/* sha: 6e00c30384362701d2bd896379a74dd0c8e342d5d456f354c13993e5575c678d */
#if BIND_GFileIface_trash_FIELD_READER
/* get_trash
 *
 * Return Type: gboolean (*)(GFile *, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_trash(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  gboolean (*)(GFile *, GCancellable *, GError **) native_trash = native_self->trash;

  mrb_value trash = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_trash);

  return trash;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::trash_writer */
/* sha: 23ce3fc76e9da8f1327a31001cdbcafae6625ede848c75dfacdf85203da197f8 */
#if BIND_GFileIface_trash_FIELD_WRITER
/* set_trash
 *
 * Parameters:
 * - value: gboolean (*)(GFile *, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_trash(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value trash;

  mrb_get_args(mrb, "o", &trash);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(trash);

  gboolean (*native_trash)(GFile *, GCancellable *, GError **) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(trash);

  native_self->trash = native_trash;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::trash_async_reader */
/* sha: a6806d67f7b0b2b99ca7a5b0711845184ec2c1e34543a5d67b017bbcf79f31c7 */
#if BIND_GFileIface_trash_async_FIELD_READER
/* get_trash_async
 *
 * Return Type: void (*)(GFile *, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_get_trash_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  void (*)(GFile *, int, GCancellable *, GAsyncReadyCallback, gpointer) native_trash_async = native_self->trash_async;

  mrb_value trash_async = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(mrb, native_trash_async);

  return trash_async;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::trash_async_writer */
/* sha: a89cb97ecb4a7288a985dbd255f9ab9f15a53869fabc6efa616cb644308a500c */
#if BIND_GFileIface_trash_async_FIELD_WRITER
/* set_trash_async
 *
 * Parameters:
 * - value: void (*)(GFile *, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_set_trash_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value trash_async;

  mrb_get_args(mrb, "o", &trash_async);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(trash_async);

  void (*native_trash_async)(GFile *, int, GCancellable *, GAsyncReadyCallback, gpointer) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(trash_async);

  native_self->trash_async = native_trash_async;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::trash_finish_reader */
/* sha: adc10fc96f6513ce057a0909a5052b38664aa8c431ab4e5502deb8e0092ad66b */
#if BIND_GFileIface_trash_finish_FIELD_READER
/* get_trash_finish
 *
 * Return Type: gboolean (*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_trash_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  gboolean (*)(GFile *, GAsyncResult *, GError **) native_trash_finish = native_self->trash_finish;

  mrb_value trash_finish = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_trash_finish);

  return trash_finish;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::trash_finish_writer */
/* sha: 8098f09fc72dfb9be0cc97538c10d4d3fb836ddcad5eccbc5664fb86daafebb0 */
#if BIND_GFileIface_trash_finish_FIELD_WRITER
/* set_trash_finish
 *
 * Parameters:
 * - value: gboolean (*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_trash_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value trash_finish;

  mrb_get_args(mrb, "o", &trash_finish);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(trash_finish);

  gboolean (*native_trash_finish)(GFile *, GAsyncResult *, GError **) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(trash_finish);

  native_self->trash_finish = native_trash_finish;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::make_directory_reader */
/* sha: a9183a681319836a1119895764a92040ec3300de35a9bbae16fd936df7d3ece2 */
#if BIND_GFileIface_make_directory_FIELD_READER
/* get_make_directory
 *
 * Return Type: gboolean (*)(GFile *, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_make_directory(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  gboolean (*)(GFile *, GCancellable *, GError **) native_make_directory = native_self->make_directory;

  mrb_value make_directory = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_make_directory);

  return make_directory;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::make_directory_writer */
/* sha: ee4271db45783b9ef3fbd06ae108d38369b7f86819c85f70e28b02ad65fd98b0 */
#if BIND_GFileIface_make_directory_FIELD_WRITER
/* set_make_directory
 *
 * Parameters:
 * - value: gboolean (*)(GFile *, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_make_directory(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value make_directory;

  mrb_get_args(mrb, "o", &make_directory);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(make_directory);

  gboolean (*native_make_directory)(GFile *, GCancellable *, GError **) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(make_directory);

  native_self->make_directory = native_make_directory;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::make_directory_async_reader */
/* sha: 645355d4e55dd1c8833e4fc8a29c03d28776ad1350cb9ecf1b81ac3b816049bc */
#if BIND_GFileIface_make_directory_async_FIELD_READER
/* get_make_directory_async
 *
 * Return Type: void (*)(GFile *, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_get_make_directory_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  void (*)(GFile *, int, GCancellable *, GAsyncReadyCallback, gpointer) native_make_directory_async = native_self->make_directory_async;

  mrb_value make_directory_async = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(mrb, native_make_directory_async);

  return make_directory_async;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::make_directory_async_writer */
/* sha: 6645eacf6676e5a358a83225bd2960b4efabeb7e79120cd00d49f6c69bba1c8c */
#if BIND_GFileIface_make_directory_async_FIELD_WRITER
/* set_make_directory_async
 *
 * Parameters:
 * - value: void (*)(GFile *, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_set_make_directory_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value make_directory_async;

  mrb_get_args(mrb, "o", &make_directory_async);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(make_directory_async);

  void (*native_make_directory_async)(GFile *, int, GCancellable *, GAsyncReadyCallback, gpointer) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(make_directory_async);

  native_self->make_directory_async = native_make_directory_async;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::make_directory_finish_reader */
/* sha: 1adf4c68d32e680013ffc00006970042ae9a1b7962b3e300496009115ddae54e */
#if BIND_GFileIface_make_directory_finish_FIELD_READER
/* get_make_directory_finish
 *
 * Return Type: gboolean (*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_make_directory_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  gboolean (*)(GFile *, GAsyncResult *, GError **) native_make_directory_finish = native_self->make_directory_finish;

  mrb_value make_directory_finish = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_make_directory_finish);

  return make_directory_finish;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::make_directory_finish_writer */
/* sha: 7a1fdc483e4cca3a048ec3e6908f34f3f84ee52d4f5f05f0b91085bbb26e288c */
#if BIND_GFileIface_make_directory_finish_FIELD_WRITER
/* set_make_directory_finish
 *
 * Parameters:
 * - value: gboolean (*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_make_directory_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value make_directory_finish;

  mrb_get_args(mrb, "o", &make_directory_finish);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(make_directory_finish);

  gboolean (*native_make_directory_finish)(GFile *, GAsyncResult *, GError **) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(make_directory_finish);

  native_self->make_directory_finish = native_make_directory_finish;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::make_symbolic_link_reader */
/* sha: 2778ffe84db9c4f53015c1748cd809413e6fa0a23c35cdd11a95210509117e1e */
#if BIND_GFileIface_make_symbolic_link_FIELD_READER
/* get_make_symbolic_link
 *
 * Return Type: gboolean (*)(GFile *, const char *, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_make_symbolic_link(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  gboolean (*)(GFile *, const char *, GCancellable *, GError **) native_make_symbolic_link = native_self->make_symbolic_link;

  mrb_value make_symbolic_link = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_make_symbolic_link);

  return make_symbolic_link;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::make_symbolic_link_writer */
/* sha: f9d4e20f05275bcbef100e9df0b496aa60a925724b11f425f6e94f4efea99e52 */
#if BIND_GFileIface_make_symbolic_link_FIELD_WRITER
/* set_make_symbolic_link
 *
 * Parameters:
 * - value: gboolean (*)(GFile *, const char *, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_make_symbolic_link(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value make_symbolic_link;

  mrb_get_args(mrb, "o", &make_symbolic_link);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(make_symbolic_link);

  gboolean (*native_make_symbolic_link)(GFile *, const char *, GCancellable *, GError **) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(make_symbolic_link);

  native_self->make_symbolic_link = native_make_symbolic_link;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::_make_symbolic_link_async_reader */
/* sha: 338c4d2710d505ed6817fab7298c4048d1673c606faa1bc9bf0a0156825d9bb2 */
#if BIND_GFileIface__make_symbolic_link_async_FIELD_READER
/* get__make_symbolic_link_async
 *
 * Return Type: void (*)(void)
 */
mrb_value
mrb_GLib_GFileIface_get__make_symbolic_link_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  void (*)(void) native__make_symbolic_link_async = native_self->_make_symbolic_link_async;

  mrb_value _make_symbolic_link_async = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native__make_symbolic_link_async);

  return _make_symbolic_link_async;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::_make_symbolic_link_async_writer */
/* sha: 09d19f252a66e8c5aaff438bc59e85364fec9702f1b81916d8ac7ba6475953ef */
#if BIND_GFileIface__make_symbolic_link_async_FIELD_WRITER
/* set__make_symbolic_link_async
 *
 * Parameters:
 * - value: void (*)(void)
 */
mrb_value
mrb_GLib_GFileIface_set__make_symbolic_link_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value _make_symbolic_link_async;

  mrb_get_args(mrb, "o", &_make_symbolic_link_async);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(_make_symbolic_link_async);

  void (*native__make_symbolic_link_async)(void) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(_make_symbolic_link_async);

  native_self->_make_symbolic_link_async = native__make_symbolic_link_async;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::_make_symbolic_link_finish_reader */
/* sha: 1557b8c2cdc5d65332f9ee516592e963f54e3930eae000eb881237170d47ad52 */
#if BIND_GFileIface__make_symbolic_link_finish_FIELD_READER
/* get__make_symbolic_link_finish
 *
 * Return Type: void (*)(void)
 */
mrb_value
mrb_GLib_GFileIface_get__make_symbolic_link_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  void (*)(void) native__make_symbolic_link_finish = native_self->_make_symbolic_link_finish;

  mrb_value _make_symbolic_link_finish = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native__make_symbolic_link_finish);

  return _make_symbolic_link_finish;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::_make_symbolic_link_finish_writer */
/* sha: 131b106dc97f85509cad4a407d6b5cb31c821c95aa256e41a5a902d4ad204e6a */
#if BIND_GFileIface__make_symbolic_link_finish_FIELD_WRITER
/* set__make_symbolic_link_finish
 *
 * Parameters:
 * - value: void (*)(void)
 */
mrb_value
mrb_GLib_GFileIface_set__make_symbolic_link_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value _make_symbolic_link_finish;

  mrb_get_args(mrb, "o", &_make_symbolic_link_finish);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(_make_symbolic_link_finish);

  void (*native__make_symbolic_link_finish)(void) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(_make_symbolic_link_finish);

  native_self->_make_symbolic_link_finish = native__make_symbolic_link_finish;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::copy_reader */
/* sha: 2aff6ac177a99ecdd42a2926b33718bc0661e47d8e33d8468bb4508ab62e3ca9 */
#if BIND_GFileIface_copy_FIELD_READER
/* get_copy
 *
 * Return Type: gboolean (*)(GFile *, GFile *, GFileCopyFlags, GCancellable *, GFileProgressCallback, gpointer, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_copy(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  gboolean (*)(GFile *, GFile *, GFileCopyFlags, GCancellable *, GFileProgressCallback, gpointer, GError **) native_copy = native_self->copy;

  mrb_value copy = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFile_PTR_COMMA_GFileCopyFlagsCOMMA_GCancellable_PTR_COMMA_GFileProgressCallbackCOMMA_gpointerCOMMA_GError_PTR_PTR_RPAREN(mrb, native_copy);

  return copy;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::copy_writer */
/* sha: f4a3c9b36838950725f6a569d76f6ce9b5ae0552f78f8b97ba403c06bbc6b472 */
#if BIND_GFileIface_copy_FIELD_WRITER
/* set_copy
 *
 * Parameters:
 * - value: gboolean (*)(GFile *, GFile *, GFileCopyFlags, GCancellable *, GFileProgressCallback, gpointer, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_copy(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value copy;

  mrb_get_args(mrb, "o", &copy);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFile_PTR_COMMA_GFileCopyFlagsCOMMA_GCancellable_PTR_COMMA_GFileProgressCallbackCOMMA_gpointerCOMMA_GError_PTR_PTR_RPAREN(copy);

  gboolean (*native_copy)(GFile *, GFile *, GFileCopyFlags, GCancellable *, GFileProgressCallback, gpointer, GError **) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFile_PTR_COMMA_GFileCopyFlagsCOMMA_GCancellable_PTR_COMMA_GFileProgressCallbackCOMMA_gpointerCOMMA_GError_PTR_PTR_RPAREN(copy);

  native_self->copy = native_copy;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::copy_async_reader */
/* sha: 3cfff0aee849f41ca8f44c31ead60f66e85dc66a3b86f2678b2d6ceddda9f315 */
#if BIND_GFileIface_copy_async_FIELD_READER
/* get_copy_async
 *
 * Return Type: void (*)(GFile *, GFile *, GFileCopyFlags, int, GCancellable *, GFileProgressCallback, gpointer, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_get_copy_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  void (*)(GFile *, GFile *, GFileCopyFlags, int, GCancellable *, GFileProgressCallback, gpointer, GAsyncReadyCallback, gpointer) native_copy_async = native_self->copy_async;

  mrb_value copy_async = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFile_PTR_COMMA_GFileCopyFlagsCOMMA_intCOMMA_GCancellable_PTR_COMMA_GFileProgressCallbackCOMMA_gpointerCOMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(mrb, native_copy_async);

  return copy_async;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::copy_async_writer */
/* sha: 5c57b8317f737c0fcb412d6168ecd5378eba87f2a2cf51fdf7a50cfb6b5d523a */
#if BIND_GFileIface_copy_async_FIELD_WRITER
/* set_copy_async
 *
 * Parameters:
 * - value: void (*)(GFile *, GFile *, GFileCopyFlags, int, GCancellable *, GFileProgressCallback, gpointer, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_set_copy_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value copy_async;

  mrb_get_args(mrb, "o", &copy_async);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFile_PTR_COMMA_GFileCopyFlagsCOMMA_intCOMMA_GCancellable_PTR_COMMA_GFileProgressCallbackCOMMA_gpointerCOMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(copy_async);

  void (*native_copy_async)(GFile *, GFile *, GFileCopyFlags, int, GCancellable *, GFileProgressCallback, gpointer, GAsyncReadyCallback, gpointer) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFile_PTR_COMMA_GFileCopyFlagsCOMMA_intCOMMA_GCancellable_PTR_COMMA_GFileProgressCallbackCOMMA_gpointerCOMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(copy_async);

  native_self->copy_async = native_copy_async;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::copy_finish_reader */
/* sha: da8533f7ae8744e63fda2f15e6e6ca9f7e841d629a5b5c255eb3a86cc5b39ec9 */
#if BIND_GFileIface_copy_finish_FIELD_READER
/* get_copy_finish
 *
 * Return Type: gboolean (*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_copy_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  gboolean (*)(GFile *, GAsyncResult *, GError **) native_copy_finish = native_self->copy_finish;

  mrb_value copy_finish = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_copy_finish);

  return copy_finish;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::copy_finish_writer */
/* sha: 3715d687cb5b3dc113c2e33d30b564ea435e719d8c2d357273708e3968acf856 */
#if BIND_GFileIface_copy_finish_FIELD_WRITER
/* set_copy_finish
 *
 * Parameters:
 * - value: gboolean (*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_copy_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value copy_finish;

  mrb_get_args(mrb, "o", &copy_finish);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(copy_finish);

  gboolean (*native_copy_finish)(GFile *, GAsyncResult *, GError **) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(copy_finish);

  native_self->copy_finish = native_copy_finish;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::move_reader */
/* sha: ccdfaa75beff9d8513a17b8bf810e728e73fc4c9548e575a1bf761eea16a9680 */
#if BIND_GFileIface_move_FIELD_READER
/* get_move
 *
 * Return Type: gboolean (*)(GFile *, GFile *, GFileCopyFlags, GCancellable *, GFileProgressCallback, gpointer, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_move(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  gboolean (*)(GFile *, GFile *, GFileCopyFlags, GCancellable *, GFileProgressCallback, gpointer, GError **) native_move = native_self->move;

  mrb_value move = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFile_PTR_COMMA_GFileCopyFlagsCOMMA_GCancellable_PTR_COMMA_GFileProgressCallbackCOMMA_gpointerCOMMA_GError_PTR_PTR_RPAREN(mrb, native_move);

  return move;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::move_writer */
/* sha: 4c85f3e47b4829e10c0608a0fb9c04ea2107053b27096ad5dada12e1354ccf1f */
#if BIND_GFileIface_move_FIELD_WRITER
/* set_move
 *
 * Parameters:
 * - value: gboolean (*)(GFile *, GFile *, GFileCopyFlags, GCancellable *, GFileProgressCallback, gpointer, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_move(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value move;

  mrb_get_args(mrb, "o", &move);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFile_PTR_COMMA_GFileCopyFlagsCOMMA_GCancellable_PTR_COMMA_GFileProgressCallbackCOMMA_gpointerCOMMA_GError_PTR_PTR_RPAREN(move);

  gboolean (*native_move)(GFile *, GFile *, GFileCopyFlags, GCancellable *, GFileProgressCallback, gpointer, GError **) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFile_PTR_COMMA_GFileCopyFlagsCOMMA_GCancellable_PTR_COMMA_GFileProgressCallbackCOMMA_gpointerCOMMA_GError_PTR_PTR_RPAREN(move);

  native_self->move = native_move;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::_move_async_reader */
/* sha: 96e77d0a0867dc4cccb0ec36c4aeb3ae87c1689673a60f45523c02416ceceac5 */
#if BIND_GFileIface__move_async_FIELD_READER
/* get__move_async
 *
 * Return Type: void (*)(void)
 */
mrb_value
mrb_GLib_GFileIface_get__move_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  void (*)(void) native__move_async = native_self->_move_async;

  mrb_value _move_async = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native__move_async);

  return _move_async;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::_move_async_writer */
/* sha: 73706f66c851535e0ed3c909687903621ed6f47d022dcc14cb53223b5ef2c3b3 */
#if BIND_GFileIface__move_async_FIELD_WRITER
/* set__move_async
 *
 * Parameters:
 * - value: void (*)(void)
 */
mrb_value
mrb_GLib_GFileIface_set__move_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value _move_async;

  mrb_get_args(mrb, "o", &_move_async);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(_move_async);

  void (*native__move_async)(void) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(_move_async);

  native_self->_move_async = native__move_async;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::_move_finish_reader */
/* sha: d222550f0910db23cdf1df35ea3a29fd0af251e1f050b115404af9a851e7d168 */
#if BIND_GFileIface__move_finish_FIELD_READER
/* get__move_finish
 *
 * Return Type: void (*)(void)
 */
mrb_value
mrb_GLib_GFileIface_get__move_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  void (*)(void) native__move_finish = native_self->_move_finish;

  mrb_value _move_finish = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native__move_finish);

  return _move_finish;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::_move_finish_writer */
/* sha: 2fc51b423c44fe91ef0771054a38febfa23d6bcd3d8b2427eaf83e076894bb70 */
#if BIND_GFileIface__move_finish_FIELD_WRITER
/* set__move_finish
 *
 * Parameters:
 * - value: void (*)(void)
 */
mrb_value
mrb_GLib_GFileIface_set__move_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value _move_finish;

  mrb_get_args(mrb, "o", &_move_finish);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(_move_finish);

  void (*native__move_finish)(void) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(_move_finish);

  native_self->_move_finish = native__move_finish;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::mount_mountable_reader */
/* sha: 69ec1b1a28bed7d58b31190aa4fd98bc9d8a4230cfe31b330a7bef2a97731e6d */
#if BIND_GFileIface_mount_mountable_FIELD_READER
/* get_mount_mountable
 *
 * Return Type: void (*)(GFile *, GMountMountFlags, GMountOperation *, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_get_mount_mountable(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  void (*)(GFile *, GMountMountFlags, GMountOperation *, GCancellable *, GAsyncReadyCallback, gpointer) native_mount_mountable = native_self->mount_mountable;

  mrb_value mount_mountable = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GMountMountFlagsCOMMA_GMountOperation_PTR_COMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(mrb, native_mount_mountable);

  return mount_mountable;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::mount_mountable_writer */
/* sha: 9b827b690497a2cf8c15b97f241de1c67efa859147ad23c8263497caae356987 */
#if BIND_GFileIface_mount_mountable_FIELD_WRITER
/* set_mount_mountable
 *
 * Parameters:
 * - value: void (*)(GFile *, GMountMountFlags, GMountOperation *, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_set_mount_mountable(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value mount_mountable;

  mrb_get_args(mrb, "o", &mount_mountable);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GMountMountFlagsCOMMA_GMountOperation_PTR_COMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(mount_mountable);

  void (*native_mount_mountable)(GFile *, GMountMountFlags, GMountOperation *, GCancellable *, GAsyncReadyCallback, gpointer) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GMountMountFlagsCOMMA_GMountOperation_PTR_COMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(mount_mountable);

  native_self->mount_mountable = native_mount_mountable;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::mount_mountable_finish_reader */
/* sha: 65d71d109db4a9347a498f56d8beb1e326819cb515d27ce9bb1234583d949a9d */
#if BIND_GFileIface_mount_mountable_finish_FIELD_READER
/* get_mount_mountable_finish
 *
 * Return Type: GFile *(*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_mount_mountable_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  GFile *(*)(GFile *, GAsyncResult *, GError **) native_mount_mountable_finish = native_self->mount_mountable_finish;

  mrb_value mount_mountable_finish = TODO_mruby_box_GFile_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_mount_mountable_finish);

  return mount_mountable_finish;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::mount_mountable_finish_writer */
/* sha: f6e87e389b7cee54c9a20acc03594e30dd722db9548c45966430d8199fc5bed0 */
#if BIND_GFileIface_mount_mountable_finish_FIELD_WRITER
/* set_mount_mountable_finish
 *
 * Parameters:
 * - value: GFile *(*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_mount_mountable_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value mount_mountable_finish;

  mrb_get_args(mrb, "o", &mount_mountable_finish);

  /* type checking */
  TODO_type_check_GFile_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(mount_mountable_finish);

  GFile *(*native_mount_mountable_finish)(GFile *, GAsyncResult *, GError **) = TODO_mruby_unbox_GFile_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(mount_mountable_finish);

  native_self->mount_mountable_finish = native_mount_mountable_finish;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::unmount_mountable_reader */
/* sha: d4dac47fe1dc5120b13ec9bf7a89ec89b717a512a89811aea0fcc8813389f28e */
#if BIND_GFileIface_unmount_mountable_FIELD_READER
/* get_unmount_mountable
 *
 * Return Type: void (*)(GFile *, GMountUnmountFlags, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_get_unmount_mountable(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  void (*)(GFile *, GMountUnmountFlags, GCancellable *, GAsyncReadyCallback, gpointer) native_unmount_mountable = native_self->unmount_mountable;

  mrb_value unmount_mountable = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GMountUnmountFlagsCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(mrb, native_unmount_mountable);

  return unmount_mountable;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::unmount_mountable_writer */
/* sha: a6ce58bc85008df24e5b775cf87d6edaca0cda1f1c11a3251c577b3e8a75bdbe */
#if BIND_GFileIface_unmount_mountable_FIELD_WRITER
/* set_unmount_mountable
 *
 * Parameters:
 * - value: void (*)(GFile *, GMountUnmountFlags, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_set_unmount_mountable(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value unmount_mountable;

  mrb_get_args(mrb, "o", &unmount_mountable);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GMountUnmountFlagsCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(unmount_mountable);

  void (*native_unmount_mountable)(GFile *, GMountUnmountFlags, GCancellable *, GAsyncReadyCallback, gpointer) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GMountUnmountFlagsCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(unmount_mountable);

  native_self->unmount_mountable = native_unmount_mountable;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::unmount_mountable_finish_reader */
/* sha: 14f2264c7498051b2560434db9d8bcb62e730a82da09ba4f7cbf363093e9971e */
#if BIND_GFileIface_unmount_mountable_finish_FIELD_READER
/* get_unmount_mountable_finish
 *
 * Return Type: gboolean (*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_unmount_mountable_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  gboolean (*)(GFile *, GAsyncResult *, GError **) native_unmount_mountable_finish = native_self->unmount_mountable_finish;

  mrb_value unmount_mountable_finish = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_unmount_mountable_finish);

  return unmount_mountable_finish;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::unmount_mountable_finish_writer */
/* sha: 02bae773b1d49ccb36f9cf72a9bcf6d0f6369f91f47f059fef0ada6a16f0587e */
#if BIND_GFileIface_unmount_mountable_finish_FIELD_WRITER
/* set_unmount_mountable_finish
 *
 * Parameters:
 * - value: gboolean (*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_unmount_mountable_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value unmount_mountable_finish;

  mrb_get_args(mrb, "o", &unmount_mountable_finish);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(unmount_mountable_finish);

  gboolean (*native_unmount_mountable_finish)(GFile *, GAsyncResult *, GError **) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(unmount_mountable_finish);

  native_self->unmount_mountable_finish = native_unmount_mountable_finish;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::eject_mountable_reader */
/* sha: 0949c0232303a835a45b39cdfeed209e7b7233275cc84f69e416796aa9a684ff */
#if BIND_GFileIface_eject_mountable_FIELD_READER
/* get_eject_mountable
 *
 * Return Type: void (*)(GFile *, GMountUnmountFlags, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_get_eject_mountable(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  void (*)(GFile *, GMountUnmountFlags, GCancellable *, GAsyncReadyCallback, gpointer) native_eject_mountable = native_self->eject_mountable;

  mrb_value eject_mountable = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GMountUnmountFlagsCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(mrb, native_eject_mountable);

  return eject_mountable;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::eject_mountable_writer */
/* sha: cb9862943e165e1caec873be8d365637f62fcd2e31c699848f5d6c89e88cf9a2 */
#if BIND_GFileIface_eject_mountable_FIELD_WRITER
/* set_eject_mountable
 *
 * Parameters:
 * - value: void (*)(GFile *, GMountUnmountFlags, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_set_eject_mountable(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value eject_mountable;

  mrb_get_args(mrb, "o", &eject_mountable);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GMountUnmountFlagsCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(eject_mountable);

  void (*native_eject_mountable)(GFile *, GMountUnmountFlags, GCancellable *, GAsyncReadyCallback, gpointer) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GMountUnmountFlagsCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(eject_mountable);

  native_self->eject_mountable = native_eject_mountable;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::eject_mountable_finish_reader */
/* sha: a5330029d00bcafb9fb0da11702dec9ee8347ad4516ec48affc5b2030aac9d01 */
#if BIND_GFileIface_eject_mountable_finish_FIELD_READER
/* get_eject_mountable_finish
 *
 * Return Type: gboolean (*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_eject_mountable_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  gboolean (*)(GFile *, GAsyncResult *, GError **) native_eject_mountable_finish = native_self->eject_mountable_finish;

  mrb_value eject_mountable_finish = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_eject_mountable_finish);

  return eject_mountable_finish;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::eject_mountable_finish_writer */
/* sha: baf41179a8962912e663a7933f4a71d490bede4fbb446f4b92c55cc88a71f5c3 */
#if BIND_GFileIface_eject_mountable_finish_FIELD_WRITER
/* set_eject_mountable_finish
 *
 * Parameters:
 * - value: gboolean (*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_eject_mountable_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value eject_mountable_finish;

  mrb_get_args(mrb, "o", &eject_mountable_finish);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(eject_mountable_finish);

  gboolean (*native_eject_mountable_finish)(GFile *, GAsyncResult *, GError **) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(eject_mountable_finish);

  native_self->eject_mountable_finish = native_eject_mountable_finish;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::mount_enclosing_volume_reader */
/* sha: 8a4ad9340a9e2759a80eab12dd9e2836032faaea839376286fdc6a54b6519971 */
#if BIND_GFileIface_mount_enclosing_volume_FIELD_READER
/* get_mount_enclosing_volume
 *
 * Return Type: void (*)(GFile *, GMountMountFlags, GMountOperation *, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_get_mount_enclosing_volume(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  void (*)(GFile *, GMountMountFlags, GMountOperation *, GCancellable *, GAsyncReadyCallback, gpointer) native_mount_enclosing_volume = native_self->mount_enclosing_volume;

  mrb_value mount_enclosing_volume = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GMountMountFlagsCOMMA_GMountOperation_PTR_COMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(mrb, native_mount_enclosing_volume);

  return mount_enclosing_volume;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::mount_enclosing_volume_writer */
/* sha: d6d6646416d8d6e75ef6e6b5bfcd2f7c77c3a1b2ec6182426794ffdd7e8e1406 */
#if BIND_GFileIface_mount_enclosing_volume_FIELD_WRITER
/* set_mount_enclosing_volume
 *
 * Parameters:
 * - value: void (*)(GFile *, GMountMountFlags, GMountOperation *, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_set_mount_enclosing_volume(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value mount_enclosing_volume;

  mrb_get_args(mrb, "o", &mount_enclosing_volume);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GMountMountFlagsCOMMA_GMountOperation_PTR_COMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(mount_enclosing_volume);

  void (*native_mount_enclosing_volume)(GFile *, GMountMountFlags, GMountOperation *, GCancellable *, GAsyncReadyCallback, gpointer) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GMountMountFlagsCOMMA_GMountOperation_PTR_COMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(mount_enclosing_volume);

  native_self->mount_enclosing_volume = native_mount_enclosing_volume;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::mount_enclosing_volume_finish_reader */
/* sha: 1d1902831fb6a2252a4c754f20c9bf006e2ee093fff60ec7b216754dcce25aa7 */
#if BIND_GFileIface_mount_enclosing_volume_finish_FIELD_READER
/* get_mount_enclosing_volume_finish
 *
 * Return Type: gboolean (*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_mount_enclosing_volume_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  gboolean (*)(GFile *, GAsyncResult *, GError **) native_mount_enclosing_volume_finish = native_self->mount_enclosing_volume_finish;

  mrb_value mount_enclosing_volume_finish = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_mount_enclosing_volume_finish);

  return mount_enclosing_volume_finish;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::mount_enclosing_volume_finish_writer */
/* sha: 98050523904565af6ab2a59733b8dae9828204e291d5b1cc5d3c8a10bf1e19cd */
#if BIND_GFileIface_mount_enclosing_volume_finish_FIELD_WRITER
/* set_mount_enclosing_volume_finish
 *
 * Parameters:
 * - value: gboolean (*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_mount_enclosing_volume_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value mount_enclosing_volume_finish;

  mrb_get_args(mrb, "o", &mount_enclosing_volume_finish);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(mount_enclosing_volume_finish);

  gboolean (*native_mount_enclosing_volume_finish)(GFile *, GAsyncResult *, GError **) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(mount_enclosing_volume_finish);

  native_self->mount_enclosing_volume_finish = native_mount_enclosing_volume_finish;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::monitor_dir_reader */
/* sha: 7c7c2091a9c50ecd74b7fc619bf537f91a383a49c3ee883f0bd91f65d5caa4a5 */
#if BIND_GFileIface_monitor_dir_FIELD_READER
/* get_monitor_dir
 *
 * Return Type: GFileMonitor *(*)(GFile *, GFileMonitorFlags, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_monitor_dir(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  GFileMonitor *(*)(GFile *, GFileMonitorFlags, GCancellable *, GError **) native_monitor_dir = native_self->monitor_dir;

  mrb_value monitor_dir = TODO_mruby_box_GFileMonitor_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFileMonitorFlagsCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_monitor_dir);

  return monitor_dir;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::monitor_dir_writer */
/* sha: b4c7d5af93faca0188f8ddd7f4e5e64b27d2be09d3d8600ffb5364872a2da0be */
#if BIND_GFileIface_monitor_dir_FIELD_WRITER
/* set_monitor_dir
 *
 * Parameters:
 * - value: GFileMonitor *(*)(GFile *, GFileMonitorFlags, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_monitor_dir(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value monitor_dir;

  mrb_get_args(mrb, "o", &monitor_dir);

  /* type checking */
  TODO_type_check_GFileMonitor_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFileMonitorFlagsCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(monitor_dir);

  GFileMonitor *(*native_monitor_dir)(GFile *, GFileMonitorFlags, GCancellable *, GError **) = TODO_mruby_unbox_GFileMonitor_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFileMonitorFlagsCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(monitor_dir);

  native_self->monitor_dir = native_monitor_dir;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::monitor_file_reader */
/* sha: e1de16378509e74f723506410ddf6631e7b341029c14155851f4b1b58804fa8a */
#if BIND_GFileIface_monitor_file_FIELD_READER
/* get_monitor_file
 *
 * Return Type: GFileMonitor *(*)(GFile *, GFileMonitorFlags, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_monitor_file(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  GFileMonitor *(*)(GFile *, GFileMonitorFlags, GCancellable *, GError **) native_monitor_file = native_self->monitor_file;

  mrb_value monitor_file = TODO_mruby_box_GFileMonitor_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFileMonitorFlagsCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_monitor_file);

  return monitor_file;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::monitor_file_writer */
/* sha: 1c967c7223bad365589f2645d5b7dca4adbe5f53542a31b1d3494a1d9655c2ff */
#if BIND_GFileIface_monitor_file_FIELD_WRITER
/* set_monitor_file
 *
 * Parameters:
 * - value: GFileMonitor *(*)(GFile *, GFileMonitorFlags, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_monitor_file(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value monitor_file;

  mrb_get_args(mrb, "o", &monitor_file);

  /* type checking */
  TODO_type_check_GFileMonitor_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFileMonitorFlagsCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(monitor_file);

  GFileMonitor *(*native_monitor_file)(GFile *, GFileMonitorFlags, GCancellable *, GError **) = TODO_mruby_unbox_GFileMonitor_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFileMonitorFlagsCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(monitor_file);

  native_self->monitor_file = native_monitor_file;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::open_readwrite_reader */
/* sha: ead5eeadf76f0cb618d77bf73ec02106be11837a46eb9198722cc6a5eaf47a94 */
#if BIND_GFileIface_open_readwrite_FIELD_READER
/* get_open_readwrite
 *
 * Return Type: GFileIOStream *(*)(GFile *, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_open_readwrite(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  GFileIOStream *(*)(GFile *, GCancellable *, GError **) native_open_readwrite = native_self->open_readwrite;

  mrb_value open_readwrite = TODO_mruby_box_GFileIOStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_open_readwrite);

  return open_readwrite;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::open_readwrite_writer */
/* sha: 252a68a26a2acffcd82146e70c2974fb8ba9d423e0e08c5a19abaa98d8737dc5 */
#if BIND_GFileIface_open_readwrite_FIELD_WRITER
/* set_open_readwrite
 *
 * Parameters:
 * - value: GFileIOStream *(*)(GFile *, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_open_readwrite(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value open_readwrite;

  mrb_get_args(mrb, "o", &open_readwrite);

  /* type checking */
  TODO_type_check_GFileIOStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(open_readwrite);

  GFileIOStream *(*native_open_readwrite)(GFile *, GCancellable *, GError **) = TODO_mruby_unbox_GFileIOStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(open_readwrite);

  native_self->open_readwrite = native_open_readwrite;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::open_readwrite_async_reader */
/* sha: 71d66b3556a9e3856897f4a8f0e40868f6a1b39099b7b16f270f38f7429c6f7f */
#if BIND_GFileIface_open_readwrite_async_FIELD_READER
/* get_open_readwrite_async
 *
 * Return Type: void (*)(GFile *, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_get_open_readwrite_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  void (*)(GFile *, int, GCancellable *, GAsyncReadyCallback, gpointer) native_open_readwrite_async = native_self->open_readwrite_async;

  mrb_value open_readwrite_async = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(mrb, native_open_readwrite_async);

  return open_readwrite_async;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::open_readwrite_async_writer */
/* sha: fe2df2e5b2a26a9b1913acd540752f43969b08f45e12e91d1e2744506146ad40 */
#if BIND_GFileIface_open_readwrite_async_FIELD_WRITER
/* set_open_readwrite_async
 *
 * Parameters:
 * - value: void (*)(GFile *, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_set_open_readwrite_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value open_readwrite_async;

  mrb_get_args(mrb, "o", &open_readwrite_async);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(open_readwrite_async);

  void (*native_open_readwrite_async)(GFile *, int, GCancellable *, GAsyncReadyCallback, gpointer) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(open_readwrite_async);

  native_self->open_readwrite_async = native_open_readwrite_async;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::open_readwrite_finish_reader */
/* sha: 0ecb369bdffc01be5e9537cb26a682892bd88aaf859cd8901dfdff3dd7a08f02 */
#if BIND_GFileIface_open_readwrite_finish_FIELD_READER
/* get_open_readwrite_finish
 *
 * Return Type: GFileIOStream *(*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_open_readwrite_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  GFileIOStream *(*)(GFile *, GAsyncResult *, GError **) native_open_readwrite_finish = native_self->open_readwrite_finish;

  mrb_value open_readwrite_finish = TODO_mruby_box_GFileIOStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_open_readwrite_finish);

  return open_readwrite_finish;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::open_readwrite_finish_writer */
/* sha: 7665ba98fd62ae76503ce9ed49a68931aa7056de3f84fd591d43c3ddffa60a06 */
#if BIND_GFileIface_open_readwrite_finish_FIELD_WRITER
/* set_open_readwrite_finish
 *
 * Parameters:
 * - value: GFileIOStream *(*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_open_readwrite_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value open_readwrite_finish;

  mrb_get_args(mrb, "o", &open_readwrite_finish);

  /* type checking */
  TODO_type_check_GFileIOStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(open_readwrite_finish);

  GFileIOStream *(*native_open_readwrite_finish)(GFile *, GAsyncResult *, GError **) = TODO_mruby_unbox_GFileIOStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(open_readwrite_finish);

  native_self->open_readwrite_finish = native_open_readwrite_finish;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::create_readwrite_reader */
/* sha: d71880e249f79ae757d04bc8efcb9ebb673baa0e78f47690237bf71f389d179a */
#if BIND_GFileIface_create_readwrite_FIELD_READER
/* get_create_readwrite
 *
 * Return Type: GFileIOStream *(*)(GFile *, GFileCreateFlags, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_create_readwrite(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  GFileIOStream *(*)(GFile *, GFileCreateFlags, GCancellable *, GError **) native_create_readwrite = native_self->create_readwrite;

  mrb_value create_readwrite = TODO_mruby_box_GFileIOStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFileCreateFlagsCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_create_readwrite);

  return create_readwrite;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::create_readwrite_writer */
/* sha: e8f39532a63f4646451a35d6cde8c742dc4b1154609da47c974ceabe3af5dc9b */
#if BIND_GFileIface_create_readwrite_FIELD_WRITER
/* set_create_readwrite
 *
 * Parameters:
 * - value: GFileIOStream *(*)(GFile *, GFileCreateFlags, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_create_readwrite(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value create_readwrite;

  mrb_get_args(mrb, "o", &create_readwrite);

  /* type checking */
  TODO_type_check_GFileIOStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFileCreateFlagsCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(create_readwrite);

  GFileIOStream *(*native_create_readwrite)(GFile *, GFileCreateFlags, GCancellable *, GError **) = TODO_mruby_unbox_GFileIOStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFileCreateFlagsCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(create_readwrite);

  native_self->create_readwrite = native_create_readwrite;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::create_readwrite_async_reader */
/* sha: d647861cb40a4f3379f430e8a3673b43dd23b7d73cf20ec82036ddc073460418 */
#if BIND_GFileIface_create_readwrite_async_FIELD_READER
/* get_create_readwrite_async
 *
 * Return Type: void (*)(GFile *, GFileCreateFlags, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_get_create_readwrite_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  void (*)(GFile *, GFileCreateFlags, int, GCancellable *, GAsyncReadyCallback, gpointer) native_create_readwrite_async = native_self->create_readwrite_async;

  mrb_value create_readwrite_async = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFileCreateFlagsCOMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(mrb, native_create_readwrite_async);

  return create_readwrite_async;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::create_readwrite_async_writer */
/* sha: 149178832d3c6dafd380a2916aed742b0a856407e5cfd1bcb92fd5f0c5a4c029 */
#if BIND_GFileIface_create_readwrite_async_FIELD_WRITER
/* set_create_readwrite_async
 *
 * Parameters:
 * - value: void (*)(GFile *, GFileCreateFlags, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_set_create_readwrite_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value create_readwrite_async;

  mrb_get_args(mrb, "o", &create_readwrite_async);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFileCreateFlagsCOMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(create_readwrite_async);

  void (*native_create_readwrite_async)(GFile *, GFileCreateFlags, int, GCancellable *, GAsyncReadyCallback, gpointer) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFileCreateFlagsCOMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(create_readwrite_async);

  native_self->create_readwrite_async = native_create_readwrite_async;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::create_readwrite_finish_reader */
/* sha: cff78ccf00c1a76790e210c2980d4b53183bf0bb76ae6e14afd990fff5263524 */
#if BIND_GFileIface_create_readwrite_finish_FIELD_READER
/* get_create_readwrite_finish
 *
 * Return Type: GFileIOStream *(*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_create_readwrite_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  GFileIOStream *(*)(GFile *, GAsyncResult *, GError **) native_create_readwrite_finish = native_self->create_readwrite_finish;

  mrb_value create_readwrite_finish = TODO_mruby_box_GFileIOStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_create_readwrite_finish);

  return create_readwrite_finish;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::create_readwrite_finish_writer */
/* sha: b6be28d7334c41867d99a7dde59221cd5d36ded840cdb29867391a754ab7a3b3 */
#if BIND_GFileIface_create_readwrite_finish_FIELD_WRITER
/* set_create_readwrite_finish
 *
 * Parameters:
 * - value: GFileIOStream *(*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_create_readwrite_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value create_readwrite_finish;

  mrb_get_args(mrb, "o", &create_readwrite_finish);

  /* type checking */
  TODO_type_check_GFileIOStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(create_readwrite_finish);

  GFileIOStream *(*native_create_readwrite_finish)(GFile *, GAsyncResult *, GError **) = TODO_mruby_unbox_GFileIOStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(create_readwrite_finish);

  native_self->create_readwrite_finish = native_create_readwrite_finish;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::replace_readwrite_reader */
/* sha: b2a8cf382d25083735548e35905f61393fc8d485010a2d37ef3b1f1014eb2168 */
#if BIND_GFileIface_replace_readwrite_FIELD_READER
/* get_replace_readwrite
 *
 * Return Type: GFileIOStream *(*)(GFile *, const char *, gboolean, GFileCreateFlags, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_replace_readwrite(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  GFileIOStream *(*)(GFile *, const char *, gboolean, GFileCreateFlags, GCancellable *, GError **) native_replace_readwrite = native_self->replace_readwrite;

  mrb_value replace_readwrite = TODO_mruby_box_GFileIOStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_gbooleanCOMMA_GFileCreateFlagsCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_replace_readwrite);

  return replace_readwrite;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::replace_readwrite_writer */
/* sha: 2d4cefd7bcb7887772630f95858b215fee55d1b45826d15714309a8c0dcfaa66 */
#if BIND_GFileIface_replace_readwrite_FIELD_WRITER
/* set_replace_readwrite
 *
 * Parameters:
 * - value: GFileIOStream *(*)(GFile *, const char *, gboolean, GFileCreateFlags, GCancellable *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_replace_readwrite(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value replace_readwrite;

  mrb_get_args(mrb, "o", &replace_readwrite);

  /* type checking */
  TODO_type_check_GFileIOStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_gbooleanCOMMA_GFileCreateFlagsCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(replace_readwrite);

  GFileIOStream *(*native_replace_readwrite)(GFile *, const char *, gboolean, GFileCreateFlags, GCancellable *, GError **) = TODO_mruby_unbox_GFileIOStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_gbooleanCOMMA_GFileCreateFlagsCOMMA_GCancellable_PTR_COMMA_GError_PTR_PTR_RPAREN(replace_readwrite);

  native_self->replace_readwrite = native_replace_readwrite;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::replace_readwrite_async_reader */
/* sha: 5e3b5eac3661b0bf99cb953c65ba7055a8eb98c45777c5d2319ce0f1e85a8193 */
#if BIND_GFileIface_replace_readwrite_async_FIELD_READER
/* get_replace_readwrite_async
 *
 * Return Type: void (*)(GFile *, const char *, gboolean, GFileCreateFlags, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_get_replace_readwrite_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  void (*)(GFile *, const char *, gboolean, GFileCreateFlags, int, GCancellable *, GAsyncReadyCallback, gpointer) native_replace_readwrite_async = native_self->replace_readwrite_async;

  mrb_value replace_readwrite_async = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_gbooleanCOMMA_GFileCreateFlagsCOMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(mrb, native_replace_readwrite_async);

  return replace_readwrite_async;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::replace_readwrite_async_writer */
/* sha: 323fc32a44515d7f1f0267493eeed629486fc5f05cb9b0e2c495afdcd4d826ba */
#if BIND_GFileIface_replace_readwrite_async_FIELD_WRITER
/* set_replace_readwrite_async
 *
 * Parameters:
 * - value: void (*)(GFile *, const char *, gboolean, GFileCreateFlags, int, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_set_replace_readwrite_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value replace_readwrite_async;

  mrb_get_args(mrb, "o", &replace_readwrite_async);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_gbooleanCOMMA_GFileCreateFlagsCOMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(replace_readwrite_async);

  void (*native_replace_readwrite_async)(GFile *, const char *, gboolean, GFileCreateFlags, int, GCancellable *, GAsyncReadyCallback, gpointer) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMAchar_PTR_COMMA_gbooleanCOMMA_GFileCreateFlagsCOMMA_intCOMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(replace_readwrite_async);

  native_self->replace_readwrite_async = native_replace_readwrite_async;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::replace_readwrite_finish_reader */
/* sha: 10569a1df302ff4dfdb26089504ced75ea3837c4ae01f0c4a2470349620accf4 */
#if BIND_GFileIface_replace_readwrite_finish_FIELD_READER
/* get_replace_readwrite_finish
 *
 * Return Type: GFileIOStream *(*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_replace_readwrite_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  GFileIOStream *(*)(GFile *, GAsyncResult *, GError **) native_replace_readwrite_finish = native_self->replace_readwrite_finish;

  mrb_value replace_readwrite_finish = TODO_mruby_box_GFileIOStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_replace_readwrite_finish);

  return replace_readwrite_finish;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::replace_readwrite_finish_writer */
/* sha: c37d1828d191683ac04d4b1b33436d6b7ff406ae18123f0e7743beac3ec72985 */
#if BIND_GFileIface_replace_readwrite_finish_FIELD_WRITER
/* set_replace_readwrite_finish
 *
 * Parameters:
 * - value: GFileIOStream *(*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_replace_readwrite_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value replace_readwrite_finish;

  mrb_get_args(mrb, "o", &replace_readwrite_finish);

  /* type checking */
  TODO_type_check_GFileIOStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(replace_readwrite_finish);

  GFileIOStream *(*native_replace_readwrite_finish)(GFile *, GAsyncResult *, GError **) = TODO_mruby_unbox_GFileIOStream_PTR_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(replace_readwrite_finish);

  native_self->replace_readwrite_finish = native_replace_readwrite_finish;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::start_mountable_reader */
/* sha: 5a99b3268e40a4aa1aa53aa1d4a058ee7a32c0a962cb58bd850fc318453e76f9 */
#if BIND_GFileIface_start_mountable_FIELD_READER
/* get_start_mountable
 *
 * Return Type: void (*)(GFile *, GDriveStartFlags, GMountOperation *, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_get_start_mountable(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  void (*)(GFile *, GDriveStartFlags, GMountOperation *, GCancellable *, GAsyncReadyCallback, gpointer) native_start_mountable = native_self->start_mountable;

  mrb_value start_mountable = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GDriveStartFlagsCOMMA_GMountOperation_PTR_COMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(mrb, native_start_mountable);

  return start_mountable;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::start_mountable_writer */
/* sha: 899cc78477efb18ffb566b5297bb75cc05fcb4eafd6517c5cdfd0bd33f3da4c1 */
#if BIND_GFileIface_start_mountable_FIELD_WRITER
/* set_start_mountable
 *
 * Parameters:
 * - value: void (*)(GFile *, GDriveStartFlags, GMountOperation *, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_set_start_mountable(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value start_mountable;

  mrb_get_args(mrb, "o", &start_mountable);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GDriveStartFlagsCOMMA_GMountOperation_PTR_COMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(start_mountable);

  void (*native_start_mountable)(GFile *, GDriveStartFlags, GMountOperation *, GCancellable *, GAsyncReadyCallback, gpointer) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GDriveStartFlagsCOMMA_GMountOperation_PTR_COMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(start_mountable);

  native_self->start_mountable = native_start_mountable;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::start_mountable_finish_reader */
/* sha: 3effd1bdfdf871d01e08031f9f876ac13b8a58f3e702c2c51dd37f01750f8581 */
#if BIND_GFileIface_start_mountable_finish_FIELD_READER
/* get_start_mountable_finish
 *
 * Return Type: gboolean (*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_start_mountable_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  gboolean (*)(GFile *, GAsyncResult *, GError **) native_start_mountable_finish = native_self->start_mountable_finish;

  mrb_value start_mountable_finish = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_start_mountable_finish);

  return start_mountable_finish;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::start_mountable_finish_writer */
/* sha: 3c73c651941a604d041b686cb58f203dc1256a34c64f2679c8b2d6d552f983de */
#if BIND_GFileIface_start_mountable_finish_FIELD_WRITER
/* set_start_mountable_finish
 *
 * Parameters:
 * - value: gboolean (*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_start_mountable_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value start_mountable_finish;

  mrb_get_args(mrb, "o", &start_mountable_finish);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(start_mountable_finish);

  gboolean (*native_start_mountable_finish)(GFile *, GAsyncResult *, GError **) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(start_mountable_finish);

  native_self->start_mountable_finish = native_start_mountable_finish;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::stop_mountable_reader */
/* sha: 2858263bd33efeef5be62d1d58b37b45533e9e68d0794570b3f023768bff8f23 */
#if BIND_GFileIface_stop_mountable_FIELD_READER
/* get_stop_mountable
 *
 * Return Type: void (*)(GFile *, GMountUnmountFlags, GMountOperation *, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_get_stop_mountable(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  void (*)(GFile *, GMountUnmountFlags, GMountOperation *, GCancellable *, GAsyncReadyCallback, gpointer) native_stop_mountable = native_self->stop_mountable;

  mrb_value stop_mountable = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GMountUnmountFlagsCOMMA_GMountOperation_PTR_COMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(mrb, native_stop_mountable);

  return stop_mountable;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::stop_mountable_writer */
/* sha: 4c70718aab7291a6428677fabdb226c91a95de22d6fb9a0837a32ac326452645 */
#if BIND_GFileIface_stop_mountable_FIELD_WRITER
/* set_stop_mountable
 *
 * Parameters:
 * - value: void (*)(GFile *, GMountUnmountFlags, GMountOperation *, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_set_stop_mountable(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value stop_mountable;

  mrb_get_args(mrb, "o", &stop_mountable);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GMountUnmountFlagsCOMMA_GMountOperation_PTR_COMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(stop_mountable);

  void (*native_stop_mountable)(GFile *, GMountUnmountFlags, GMountOperation *, GCancellable *, GAsyncReadyCallback, gpointer) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GMountUnmountFlagsCOMMA_GMountOperation_PTR_COMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(stop_mountable);

  native_self->stop_mountable = native_stop_mountable;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::stop_mountable_finish_reader */
/* sha: 14216dc8f68600616dc13270ec169550812b1575e8dc6a5aa82829ec62959b17 */
#if BIND_GFileIface_stop_mountable_finish_FIELD_READER
/* get_stop_mountable_finish
 *
 * Return Type: gboolean (*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_stop_mountable_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  gboolean (*)(GFile *, GAsyncResult *, GError **) native_stop_mountable_finish = native_self->stop_mountable_finish;

  mrb_value stop_mountable_finish = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_stop_mountable_finish);

  return stop_mountable_finish;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::stop_mountable_finish_writer */
/* sha: ac76cd721665ab05e5d9f1c6875f703432c26ef66ff9b4d555fabcad42284874 */
#if BIND_GFileIface_stop_mountable_finish_FIELD_WRITER
/* set_stop_mountable_finish
 *
 * Parameters:
 * - value: gboolean (*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_stop_mountable_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value stop_mountable_finish;

  mrb_get_args(mrb, "o", &stop_mountable_finish);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(stop_mountable_finish);

  gboolean (*native_stop_mountable_finish)(GFile *, GAsyncResult *, GError **) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(stop_mountable_finish);

  native_self->stop_mountable_finish = native_stop_mountable_finish;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::supports_thread_contexts_reader */
/* sha: 6f331e0b1fb1cb07feafd0ba68dad23a58adeecd08e48d13418b4dbd7a5125c1 */
#if BIND_GFileIface_supports_thread_contexts_FIELD_READER
/* get_supports_thread_contexts
 *
 * Return Type: gboolean
 */
mrb_value
mrb_GLib_GFileIface_get_supports_thread_contexts(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  gboolean native_supports_thread_contexts = native_self->supports_thread_contexts;

  mrb_value supports_thread_contexts = mrb_bool_value(native_supports_thread_contexts);

  return supports_thread_contexts;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::supports_thread_contexts_writer */
/* sha: 9482d59ef9247a7b0e7e8cf2ec24120d0e202dedd11f8ce90c9249da9bd24bad */
#if BIND_GFileIface_supports_thread_contexts_FIELD_WRITER
/* set_supports_thread_contexts
 *
 * Parameters:
 * - value: gboolean
 */
mrb_value
mrb_GLib_GFileIface_set_supports_thread_contexts(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_bool native_supports_thread_contexts;

  mrb_get_args(mrb, "b", &native_supports_thread_contexts);

  native_self->supports_thread_contexts = native_supports_thread_contexts;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::unmount_mountable_with_operation_reader */
/* sha: 8680765ad4aa6da733c581f51d1bc5aefd8343ec2ac4422b1c1a10fba67cb652 */
#if BIND_GFileIface_unmount_mountable_with_operation_FIELD_READER
/* get_unmount_mountable_with_operation
 *
 * Return Type: void (*)(GFile *, GMountUnmountFlags, GMountOperation *, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_get_unmount_mountable_with_operation(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  void (*)(GFile *, GMountUnmountFlags, GMountOperation *, GCancellable *, GAsyncReadyCallback, gpointer) native_unmount_mountable_with_operation = native_self->unmount_mountable_with_operation;

  mrb_value unmount_mountable_with_operation = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GMountUnmountFlagsCOMMA_GMountOperation_PTR_COMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(mrb, native_unmount_mountable_with_operation);

  return unmount_mountable_with_operation;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::unmount_mountable_with_operation_writer */
/* sha: ed0d7f8e65d2ede7d970de9a6c37f1c2335bed52f59475c08cdd3438df1ed5b2 */
#if BIND_GFileIface_unmount_mountable_with_operation_FIELD_WRITER
/* set_unmount_mountable_with_operation
 *
 * Parameters:
 * - value: void (*)(GFile *, GMountUnmountFlags, GMountOperation *, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_set_unmount_mountable_with_operation(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value unmount_mountable_with_operation;

  mrb_get_args(mrb, "o", &unmount_mountable_with_operation);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GMountUnmountFlagsCOMMA_GMountOperation_PTR_COMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(unmount_mountable_with_operation);

  void (*native_unmount_mountable_with_operation)(GFile *, GMountUnmountFlags, GMountOperation *, GCancellable *, GAsyncReadyCallback, gpointer) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GMountUnmountFlagsCOMMA_GMountOperation_PTR_COMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(unmount_mountable_with_operation);

  native_self->unmount_mountable_with_operation = native_unmount_mountable_with_operation;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::unmount_mountable_with_operation_finish_reader */
/* sha: aff9e4792ff248d0f8e011009db122df2f40b11954f98c64ffc76a22e9c51acc */
#if BIND_GFileIface_unmount_mountable_with_operation_finish_FIELD_READER
/* get_unmount_mountable_with_operation_finish
 *
 * Return Type: gboolean (*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_unmount_mountable_with_operation_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  gboolean (*)(GFile *, GAsyncResult *, GError **) native_unmount_mountable_with_operation_finish = native_self->unmount_mountable_with_operation_finish;

  mrb_value unmount_mountable_with_operation_finish = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_unmount_mountable_with_operation_finish);

  return unmount_mountable_with_operation_finish;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::unmount_mountable_with_operation_finish_writer */
/* sha: 87891437b1a072d5abc8e7fe0852c808fa3922c357031863389fcb9248220ffa */
#if BIND_GFileIface_unmount_mountable_with_operation_finish_FIELD_WRITER
/* set_unmount_mountable_with_operation_finish
 *
 * Parameters:
 * - value: gboolean (*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_unmount_mountable_with_operation_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value unmount_mountable_with_operation_finish;

  mrb_get_args(mrb, "o", &unmount_mountable_with_operation_finish);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(unmount_mountable_with_operation_finish);

  gboolean (*native_unmount_mountable_with_operation_finish)(GFile *, GAsyncResult *, GError **) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(unmount_mountable_with_operation_finish);

  native_self->unmount_mountable_with_operation_finish = native_unmount_mountable_with_operation_finish;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::eject_mountable_with_operation_reader */
/* sha: b3341e4af7acda528ef50e1947babdc0666cb6bb69d7fc5ddacaa18e569e983d */
#if BIND_GFileIface_eject_mountable_with_operation_FIELD_READER
/* get_eject_mountable_with_operation
 *
 * Return Type: void (*)(GFile *, GMountUnmountFlags, GMountOperation *, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_get_eject_mountable_with_operation(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  void (*)(GFile *, GMountUnmountFlags, GMountOperation *, GCancellable *, GAsyncReadyCallback, gpointer) native_eject_mountable_with_operation = native_self->eject_mountable_with_operation;

  mrb_value eject_mountable_with_operation = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GMountUnmountFlagsCOMMA_GMountOperation_PTR_COMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(mrb, native_eject_mountable_with_operation);

  return eject_mountable_with_operation;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::eject_mountable_with_operation_writer */
/* sha: 3cd67da05abc782daf7f56a530d345ddbf02e419ebb3bd82a6b1bc6ca466acd1 */
#if BIND_GFileIface_eject_mountable_with_operation_FIELD_WRITER
/* set_eject_mountable_with_operation
 *
 * Parameters:
 * - value: void (*)(GFile *, GMountUnmountFlags, GMountOperation *, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_set_eject_mountable_with_operation(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value eject_mountable_with_operation;

  mrb_get_args(mrb, "o", &eject_mountable_with_operation);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GMountUnmountFlagsCOMMA_GMountOperation_PTR_COMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(eject_mountable_with_operation);

  void (*native_eject_mountable_with_operation)(GFile *, GMountUnmountFlags, GMountOperation *, GCancellable *, GAsyncReadyCallback, gpointer) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GMountUnmountFlagsCOMMA_GMountOperation_PTR_COMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(eject_mountable_with_operation);

  native_self->eject_mountable_with_operation = native_eject_mountable_with_operation;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::eject_mountable_with_operation_finish_reader */
/* sha: fda3772857d38496f66c26e5a11de7024e5f6a7aa3199bbdbfed5d1083e9418e */
#if BIND_GFileIface_eject_mountable_with_operation_finish_FIELD_READER
/* get_eject_mountable_with_operation_finish
 *
 * Return Type: gboolean (*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_eject_mountable_with_operation_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  gboolean (*)(GFile *, GAsyncResult *, GError **) native_eject_mountable_with_operation_finish = native_self->eject_mountable_with_operation_finish;

  mrb_value eject_mountable_with_operation_finish = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_eject_mountable_with_operation_finish);

  return eject_mountable_with_operation_finish;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::eject_mountable_with_operation_finish_writer */
/* sha: 534289053635d133d662da1f751d2756185c82593ec796062c81bb8db7e3bc60 */
#if BIND_GFileIface_eject_mountable_with_operation_finish_FIELD_WRITER
/* set_eject_mountable_with_operation_finish
 *
 * Parameters:
 * - value: gboolean (*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_eject_mountable_with_operation_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value eject_mountable_with_operation_finish;

  mrb_get_args(mrb, "o", &eject_mountable_with_operation_finish);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(eject_mountable_with_operation_finish);

  gboolean (*native_eject_mountable_with_operation_finish)(GFile *, GAsyncResult *, GError **) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(eject_mountable_with_operation_finish);

  native_self->eject_mountable_with_operation_finish = native_eject_mountable_with_operation_finish;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::poll_mountable_reader */
/* sha: c4e630e7d4e27d845736ebdb48e8e25ba5e023105c9fcc68983a888c939fee4c */
#if BIND_GFileIface_poll_mountable_FIELD_READER
/* get_poll_mountable
 *
 * Return Type: void (*)(GFile *, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_get_poll_mountable(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  void (*)(GFile *, GCancellable *, GAsyncReadyCallback, gpointer) native_poll_mountable = native_self->poll_mountable;

  mrb_value poll_mountable = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(mrb, native_poll_mountable);

  return poll_mountable;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::poll_mountable_writer */
/* sha: 8d3f621e7f909196795af9c781ebaa2e8680c1d75bebf960aa4daf4a1f40d64a */
#if BIND_GFileIface_poll_mountable_FIELD_WRITER
/* set_poll_mountable
 *
 * Parameters:
 * - value: void (*)(GFile *, GCancellable *, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_set_poll_mountable(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value poll_mountable;

  mrb_get_args(mrb, "o", &poll_mountable);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(poll_mountable);

  void (*native_poll_mountable)(GFile *, GCancellable *, GAsyncReadyCallback, gpointer) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GCancellable_PTR_COMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(poll_mountable);

  native_self->poll_mountable = native_poll_mountable;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::poll_mountable_finish_reader */
/* sha: ebc6cf3be4399b1e1192888c339b44841f8fdc3b260b5031b5a073460305ba77 */
#if BIND_GFileIface_poll_mountable_finish_FIELD_READER
/* get_poll_mountable_finish
 *
 * Return Type: gboolean (*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_poll_mountable_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  gboolean (*)(GFile *, GAsyncResult *, GError **) native_poll_mountable_finish = native_self->poll_mountable_finish;

  mrb_value poll_mountable_finish = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_poll_mountable_finish);

  return poll_mountable_finish;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::poll_mountable_finish_writer */
/* sha: fd8447ab3ff71f5cbf279882470e3a610edb88e13640c5a85461563fa64bf88e */
#if BIND_GFileIface_poll_mountable_finish_FIELD_WRITER
/* set_poll_mountable_finish
 *
 * Parameters:
 * - value: gboolean (*)(GFile *, GAsyncResult *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_poll_mountable_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value poll_mountable_finish;

  mrb_get_args(mrb, "o", &poll_mountable_finish);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(poll_mountable_finish);

  gboolean (*native_poll_mountable_finish)(GFile *, GAsyncResult *, GError **) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_GError_PTR_PTR_RPAREN(poll_mountable_finish);

  native_self->poll_mountable_finish = native_poll_mountable_finish;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::measure_disk_usage_reader */
/* sha: 7914d54e717a4e0807f44f75cb050a90a2c5b7a6cb8a36aa92e1745fc545db8d */
#if BIND_GFileIface_measure_disk_usage_FIELD_READER
/* get_measure_disk_usage
 *
 * Return Type: gboolean (*)(GFile *, GFileMeasureFlags, GCancellable *, GFileMeasureProgressCallback, gpointer, guint64 *, guint64 *, guint64 *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_measure_disk_usage(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  gboolean (*)(GFile *, GFileMeasureFlags, GCancellable *, GFileMeasureProgressCallback, gpointer, guint64 *, guint64 *, guint64 *, GError **) native_measure_disk_usage = native_self->measure_disk_usage;

  mrb_value measure_disk_usage = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFileMeasureFlagsCOMMA_GCancellable_PTR_COMMA_GFileMeasureProgressCallbackCOMMA_gpointerCOMMA_guint64_PTR_COMMA_guint64_PTR_COMMA_guint64_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_measure_disk_usage);

  return measure_disk_usage;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::measure_disk_usage_writer */
/* sha: 3de3a67781cb1177334a46f43ad6c612f9077d4e00c7901e4df27e718e17968c */
#if BIND_GFileIface_measure_disk_usage_FIELD_WRITER
/* set_measure_disk_usage
 *
 * Parameters:
 * - value: gboolean (*)(GFile *, GFileMeasureFlags, GCancellable *, GFileMeasureProgressCallback, gpointer, guint64 *, guint64 *, guint64 *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_measure_disk_usage(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value measure_disk_usage;

  mrb_get_args(mrb, "o", &measure_disk_usage);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFileMeasureFlagsCOMMA_GCancellable_PTR_COMMA_GFileMeasureProgressCallbackCOMMA_gpointerCOMMA_guint64_PTR_COMMA_guint64_PTR_COMMA_guint64_PTR_COMMA_GError_PTR_PTR_RPAREN(measure_disk_usage);

  gboolean (*native_measure_disk_usage)(GFile *, GFileMeasureFlags, GCancellable *, GFileMeasureProgressCallback, gpointer, guint64 *, guint64 *, guint64 *, GError **) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFileMeasureFlagsCOMMA_GCancellable_PTR_COMMA_GFileMeasureProgressCallbackCOMMA_gpointerCOMMA_guint64_PTR_COMMA_guint64_PTR_COMMA_guint64_PTR_COMMA_GError_PTR_PTR_RPAREN(measure_disk_usage);

  native_self->measure_disk_usage = native_measure_disk_usage;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::measure_disk_usage_async_reader */
/* sha: e834efbad6e22dde7dc5ad2b201f00e1d12b4617eb0d679fa418de35e1d0292d */
#if BIND_GFileIface_measure_disk_usage_async_FIELD_READER
/* get_measure_disk_usage_async
 *
 * Return Type: void (*)(GFile *, GFileMeasureFlags, gint, GCancellable *, GFileMeasureProgressCallback, gpointer, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_get_measure_disk_usage_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  void (*)(GFile *, GFileMeasureFlags, gint, GCancellable *, GFileMeasureProgressCallback, gpointer, GAsyncReadyCallback, gpointer) native_measure_disk_usage_async = native_self->measure_disk_usage_async;

  mrb_value measure_disk_usage_async = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFileMeasureFlagsCOMMA_gintCOMMA_GCancellable_PTR_COMMA_GFileMeasureProgressCallbackCOMMA_gpointerCOMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(mrb, native_measure_disk_usage_async);

  return measure_disk_usage_async;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::measure_disk_usage_async_writer */
/* sha: 102976748f3d4e341314f72df1119c4a6230b7a47aadf6b1a7d84435f49a91b5 */
#if BIND_GFileIface_measure_disk_usage_async_FIELD_WRITER
/* set_measure_disk_usage_async
 *
 * Parameters:
 * - value: void (*)(GFile *, GFileMeasureFlags, gint, GCancellable *, GFileMeasureProgressCallback, gpointer, GAsyncReadyCallback, gpointer)
 */
mrb_value
mrb_GLib_GFileIface_set_measure_disk_usage_async(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value measure_disk_usage_async;

  mrb_get_args(mrb, "o", &measure_disk_usage_async);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFileMeasureFlagsCOMMA_gintCOMMA_GCancellable_PTR_COMMA_GFileMeasureProgressCallbackCOMMA_gpointerCOMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(measure_disk_usage_async);

  void (*native_measure_disk_usage_async)(GFile *, GFileMeasureFlags, gint, GCancellable *, GFileMeasureProgressCallback, gpointer, GAsyncReadyCallback, gpointer) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GFileMeasureFlagsCOMMA_gintCOMMA_GCancellable_PTR_COMMA_GFileMeasureProgressCallbackCOMMA_gpointerCOMMA_GAsyncReadyCallbackCOMMA_gpointer_RPAREN(measure_disk_usage_async);

  native_self->measure_disk_usage_async = native_measure_disk_usage_async;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::measure_disk_usage_finish_reader */
/* sha: 20ec3581191b05d9710a3a36747e79e1700053e34ec07682205b0ad03094c9b9 */
#if BIND_GFileIface_measure_disk_usage_finish_FIELD_READER
/* get_measure_disk_usage_finish
 *
 * Return Type: gboolean (*)(GFile *, GAsyncResult *, guint64 *, guint64 *, guint64 *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_get_measure_disk_usage_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);

  gboolean (*)(GFile *, GAsyncResult *, guint64 *, guint64 *, guint64 *, GError **) native_measure_disk_usage_finish = native_self->measure_disk_usage_finish;

  mrb_value measure_disk_usage_finish = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_guint64_PTR_COMMA_guint64_PTR_COMMA_guint64_PTR_COMMA_GError_PTR_PTR_RPAREN(mrb, native_measure_disk_usage_finish);

  return measure_disk_usage_finish;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface::measure_disk_usage_finish_writer */
/* sha: 8b9820fe73eea254584bd5ffb06cf10f23b36b152e307daeba3a738251da9b8d */
#if BIND_GFileIface_measure_disk_usage_finish_FIELD_WRITER
/* set_measure_disk_usage_finish
 *
 * Parameters:
 * - value: gboolean (*)(GFile *, GAsyncResult *, guint64 *, guint64 *, guint64 *, GError **)
 */
mrb_value
mrb_GLib_GFileIface_set_measure_disk_usage_finish(mrb_state* mrb, mrb_value self) {
  struct _GFileIface * native_self = mruby_unbox__GFileIface(self);
  mrb_value measure_disk_usage_finish;

  mrb_get_args(mrb, "o", &measure_disk_usage_finish);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_guint64_PTR_COMMA_guint64_PTR_COMMA_guint64_PTR_COMMA_GError_PTR_PTR_RPAREN(measure_disk_usage_finish);

  gboolean (*native_measure_disk_usage_finish)(GFile *, GAsyncResult *, guint64 *, guint64 *, guint64 *, GError **) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GFile_PTR_COMMA_GAsyncResult_PTR_COMMA_guint64_PTR_COMMA_guint64_PTR_COMMA_guint64_PTR_COMMA_GError_PTR_PTR_RPAREN(measure_disk_usage_finish);

  native_self->measure_disk_usage_finish = native_measure_disk_usage_finish;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_GLib_GFileIface_init(mrb_state* mrb) {
  struct RClass* GFileIface_class = mrb_define_class_under(mrb, GLib_module(mrb), "GFileIface", mrb->object_class);
  MRB_SET_INSTANCE_TT(GFileIface_class, MRB_TT_DATA);

#if BIND_GFileIface_INITIALIZE
  mrb_define_method(mrb, GFileIface_class, "initialize", mrb_GLib_GFileIface_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GFileIface_class, "disown", mrb_GLib_GFileIface_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GFileIface_class, "belongs_to_ruby?", mrb_GLib_GFileIface_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GFileIface_g_iface_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "g_iface", mrb_GLib_GFileIface_get_g_iface, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_g_iface_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "g_iface=", mrb_GLib_GFileIface_set_g_iface, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_dup_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "dup", mrb_GLib_GFileIface_get_dup, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_dup_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "dup=", mrb_GLib_GFileIface_set_dup, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_hash_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "hash", mrb_GLib_GFileIface_get_hash, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_hash_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "hash=", mrb_GLib_GFileIface_set_hash, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_equal_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "equal", mrb_GLib_GFileIface_get_equal, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_equal_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "equal=", mrb_GLib_GFileIface_set_equal, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_is_native_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "is_native", mrb_GLib_GFileIface_get_is_native, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_is_native_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "is_native=", mrb_GLib_GFileIface_set_is_native, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_has_uri_scheme_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "has_uri_scheme", mrb_GLib_GFileIface_get_has_uri_scheme, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_has_uri_scheme_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "has_uri_scheme=", mrb_GLib_GFileIface_set_has_uri_scheme, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_get_uri_scheme_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "get_uri_scheme", mrb_GLib_GFileIface_get_get_uri_scheme, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_get_uri_scheme_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "get_uri_scheme=", mrb_GLib_GFileIface_set_get_uri_scheme, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_get_basename_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "get_basename", mrb_GLib_GFileIface_get_get_basename, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_get_basename_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "get_basename=", mrb_GLib_GFileIface_set_get_basename, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_get_path_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "get_path", mrb_GLib_GFileIface_get_get_path, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_get_path_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "get_path=", mrb_GLib_GFileIface_set_get_path, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_get_uri_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "get_uri", mrb_GLib_GFileIface_get_get_uri, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_get_uri_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "get_uri=", mrb_GLib_GFileIface_set_get_uri, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_get_parse_name_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "get_parse_name", mrb_GLib_GFileIface_get_get_parse_name, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_get_parse_name_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "get_parse_name=", mrb_GLib_GFileIface_set_get_parse_name, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_get_parent_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "get_parent", mrb_GLib_GFileIface_get_get_parent, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_get_parent_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "get_parent=", mrb_GLib_GFileIface_set_get_parent, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_prefix_matches_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "prefix_matches", mrb_GLib_GFileIface_get_prefix_matches, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_prefix_matches_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "prefix_matches=", mrb_GLib_GFileIface_set_prefix_matches, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_get_relative_path_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "get_relative_path", mrb_GLib_GFileIface_get_get_relative_path, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_get_relative_path_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "get_relative_path=", mrb_GLib_GFileIface_set_get_relative_path, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_resolve_relative_path_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "resolve_relative_path", mrb_GLib_GFileIface_get_resolve_relative_path, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_resolve_relative_path_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "resolve_relative_path=", mrb_GLib_GFileIface_set_resolve_relative_path, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_get_child_for_display_name_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "get_child_for_display_name", mrb_GLib_GFileIface_get_get_child_for_display_name, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_get_child_for_display_name_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "get_child_for_display_name=", mrb_GLib_GFileIface_set_get_child_for_display_name, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_enumerate_children_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "enumerate_children", mrb_GLib_GFileIface_get_enumerate_children, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_enumerate_children_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "enumerate_children=", mrb_GLib_GFileIface_set_enumerate_children, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_enumerate_children_async_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "enumerate_children_async", mrb_GLib_GFileIface_get_enumerate_children_async, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_enumerate_children_async_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "enumerate_children_async=", mrb_GLib_GFileIface_set_enumerate_children_async, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_enumerate_children_finish_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "enumerate_children_finish", mrb_GLib_GFileIface_get_enumerate_children_finish, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_enumerate_children_finish_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "enumerate_children_finish=", mrb_GLib_GFileIface_set_enumerate_children_finish, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_query_info_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "query_info", mrb_GLib_GFileIface_get_query_info, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_query_info_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "query_info=", mrb_GLib_GFileIface_set_query_info, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_query_info_async_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "query_info_async", mrb_GLib_GFileIface_get_query_info_async, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_query_info_async_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "query_info_async=", mrb_GLib_GFileIface_set_query_info_async, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_query_info_finish_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "query_info_finish", mrb_GLib_GFileIface_get_query_info_finish, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_query_info_finish_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "query_info_finish=", mrb_GLib_GFileIface_set_query_info_finish, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_query_filesystem_info_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "query_filesystem_info", mrb_GLib_GFileIface_get_query_filesystem_info, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_query_filesystem_info_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "query_filesystem_info=", mrb_GLib_GFileIface_set_query_filesystem_info, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_query_filesystem_info_async_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "query_filesystem_info_async", mrb_GLib_GFileIface_get_query_filesystem_info_async, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_query_filesystem_info_async_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "query_filesystem_info_async=", mrb_GLib_GFileIface_set_query_filesystem_info_async, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_query_filesystem_info_finish_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "query_filesystem_info_finish", mrb_GLib_GFileIface_get_query_filesystem_info_finish, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_query_filesystem_info_finish_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "query_filesystem_info_finish=", mrb_GLib_GFileIface_set_query_filesystem_info_finish, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_find_enclosing_mount_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "find_enclosing_mount", mrb_GLib_GFileIface_get_find_enclosing_mount, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_find_enclosing_mount_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "find_enclosing_mount=", mrb_GLib_GFileIface_set_find_enclosing_mount, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_find_enclosing_mount_async_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "find_enclosing_mount_async", mrb_GLib_GFileIface_get_find_enclosing_mount_async, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_find_enclosing_mount_async_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "find_enclosing_mount_async=", mrb_GLib_GFileIface_set_find_enclosing_mount_async, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_find_enclosing_mount_finish_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "find_enclosing_mount_finish", mrb_GLib_GFileIface_get_find_enclosing_mount_finish, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_find_enclosing_mount_finish_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "find_enclosing_mount_finish=", mrb_GLib_GFileIface_set_find_enclosing_mount_finish, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_set_display_name_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "set_display_name", mrb_GLib_GFileIface_get_set_display_name, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_set_display_name_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "set_display_name=", mrb_GLib_GFileIface_set_set_display_name, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_set_display_name_async_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "set_display_name_async", mrb_GLib_GFileIface_get_set_display_name_async, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_set_display_name_async_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "set_display_name_async=", mrb_GLib_GFileIface_set_set_display_name_async, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_set_display_name_finish_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "set_display_name_finish", mrb_GLib_GFileIface_get_set_display_name_finish, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_set_display_name_finish_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "set_display_name_finish=", mrb_GLib_GFileIface_set_set_display_name_finish, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_query_settable_attributes_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "query_settable_attributes", mrb_GLib_GFileIface_get_query_settable_attributes, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_query_settable_attributes_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "query_settable_attributes=", mrb_GLib_GFileIface_set_query_settable_attributes, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface__query_settable_attributes_async_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "_query_settable_attributes_async", mrb_GLib_GFileIface_get__query_settable_attributes_async, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface__query_settable_attributes_async_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "_query_settable_attributes_async=", mrb_GLib_GFileIface_set__query_settable_attributes_async, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface__query_settable_attributes_finish_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "_query_settable_attributes_finish", mrb_GLib_GFileIface_get__query_settable_attributes_finish, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface__query_settable_attributes_finish_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "_query_settable_attributes_finish=", mrb_GLib_GFileIface_set__query_settable_attributes_finish, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_query_writable_namespaces_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "query_writable_namespaces", mrb_GLib_GFileIface_get_query_writable_namespaces, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_query_writable_namespaces_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "query_writable_namespaces=", mrb_GLib_GFileIface_set_query_writable_namespaces, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface__query_writable_namespaces_async_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "_query_writable_namespaces_async", mrb_GLib_GFileIface_get__query_writable_namespaces_async, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface__query_writable_namespaces_async_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "_query_writable_namespaces_async=", mrb_GLib_GFileIface_set__query_writable_namespaces_async, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface__query_writable_namespaces_finish_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "_query_writable_namespaces_finish", mrb_GLib_GFileIface_get__query_writable_namespaces_finish, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface__query_writable_namespaces_finish_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "_query_writable_namespaces_finish=", mrb_GLib_GFileIface_set__query_writable_namespaces_finish, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_set_attribute_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "set_attribute", mrb_GLib_GFileIface_get_set_attribute, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_set_attribute_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "set_attribute=", mrb_GLib_GFileIface_set_set_attribute, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_set_attributes_from_info_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "set_attributes_from_info", mrb_GLib_GFileIface_get_set_attributes_from_info, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_set_attributes_from_info_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "set_attributes_from_info=", mrb_GLib_GFileIface_set_set_attributes_from_info, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_set_attributes_async_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "set_attributes_async", mrb_GLib_GFileIface_get_set_attributes_async, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_set_attributes_async_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "set_attributes_async=", mrb_GLib_GFileIface_set_set_attributes_async, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_set_attributes_finish_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "set_attributes_finish", mrb_GLib_GFileIface_get_set_attributes_finish, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_set_attributes_finish_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "set_attributes_finish=", mrb_GLib_GFileIface_set_set_attributes_finish, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_read_fn_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "read_fn", mrb_GLib_GFileIface_get_read_fn, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_read_fn_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "read_fn=", mrb_GLib_GFileIface_set_read_fn, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_read_async_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "read_async", mrb_GLib_GFileIface_get_read_async, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_read_async_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "read_async=", mrb_GLib_GFileIface_set_read_async, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_read_finish_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "read_finish", mrb_GLib_GFileIface_get_read_finish, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_read_finish_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "read_finish=", mrb_GLib_GFileIface_set_read_finish, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_append_to_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "append_to", mrb_GLib_GFileIface_get_append_to, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_append_to_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "append_to=", mrb_GLib_GFileIface_set_append_to, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_append_to_async_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "append_to_async", mrb_GLib_GFileIface_get_append_to_async, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_append_to_async_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "append_to_async=", mrb_GLib_GFileIface_set_append_to_async, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_append_to_finish_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "append_to_finish", mrb_GLib_GFileIface_get_append_to_finish, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_append_to_finish_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "append_to_finish=", mrb_GLib_GFileIface_set_append_to_finish, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_create_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "create", mrb_GLib_GFileIface_get_create, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_create_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "create=", mrb_GLib_GFileIface_set_create, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_create_async_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "create_async", mrb_GLib_GFileIface_get_create_async, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_create_async_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "create_async=", mrb_GLib_GFileIface_set_create_async, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_create_finish_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "create_finish", mrb_GLib_GFileIface_get_create_finish, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_create_finish_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "create_finish=", mrb_GLib_GFileIface_set_create_finish, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_replace_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "replace", mrb_GLib_GFileIface_get_replace, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_replace_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "replace=", mrb_GLib_GFileIface_set_replace, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_replace_async_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "replace_async", mrb_GLib_GFileIface_get_replace_async, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_replace_async_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "replace_async=", mrb_GLib_GFileIface_set_replace_async, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_replace_finish_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "replace_finish", mrb_GLib_GFileIface_get_replace_finish, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_replace_finish_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "replace_finish=", mrb_GLib_GFileIface_set_replace_finish, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_delete_file_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "delete_file", mrb_GLib_GFileIface_get_delete_file, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_delete_file_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "delete_file=", mrb_GLib_GFileIface_set_delete_file, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_delete_file_async_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "delete_file_async", mrb_GLib_GFileIface_get_delete_file_async, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_delete_file_async_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "delete_file_async=", mrb_GLib_GFileIface_set_delete_file_async, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_delete_file_finish_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "delete_file_finish", mrb_GLib_GFileIface_get_delete_file_finish, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_delete_file_finish_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "delete_file_finish=", mrb_GLib_GFileIface_set_delete_file_finish, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_trash_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "trash", mrb_GLib_GFileIface_get_trash, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_trash_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "trash=", mrb_GLib_GFileIface_set_trash, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_trash_async_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "trash_async", mrb_GLib_GFileIface_get_trash_async, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_trash_async_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "trash_async=", mrb_GLib_GFileIface_set_trash_async, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_trash_finish_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "trash_finish", mrb_GLib_GFileIface_get_trash_finish, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_trash_finish_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "trash_finish=", mrb_GLib_GFileIface_set_trash_finish, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_make_directory_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "make_directory", mrb_GLib_GFileIface_get_make_directory, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_make_directory_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "make_directory=", mrb_GLib_GFileIface_set_make_directory, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_make_directory_async_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "make_directory_async", mrb_GLib_GFileIface_get_make_directory_async, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_make_directory_async_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "make_directory_async=", mrb_GLib_GFileIface_set_make_directory_async, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_make_directory_finish_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "make_directory_finish", mrb_GLib_GFileIface_get_make_directory_finish, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_make_directory_finish_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "make_directory_finish=", mrb_GLib_GFileIface_set_make_directory_finish, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_make_symbolic_link_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "make_symbolic_link", mrb_GLib_GFileIface_get_make_symbolic_link, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_make_symbolic_link_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "make_symbolic_link=", mrb_GLib_GFileIface_set_make_symbolic_link, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface__make_symbolic_link_async_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "_make_symbolic_link_async", mrb_GLib_GFileIface_get__make_symbolic_link_async, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface__make_symbolic_link_async_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "_make_symbolic_link_async=", mrb_GLib_GFileIface_set__make_symbolic_link_async, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface__make_symbolic_link_finish_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "_make_symbolic_link_finish", mrb_GLib_GFileIface_get__make_symbolic_link_finish, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface__make_symbolic_link_finish_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "_make_symbolic_link_finish=", mrb_GLib_GFileIface_set__make_symbolic_link_finish, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_copy_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "copy", mrb_GLib_GFileIface_get_copy, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_copy_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "copy=", mrb_GLib_GFileIface_set_copy, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_copy_async_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "copy_async", mrb_GLib_GFileIface_get_copy_async, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_copy_async_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "copy_async=", mrb_GLib_GFileIface_set_copy_async, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_copy_finish_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "copy_finish", mrb_GLib_GFileIface_get_copy_finish, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_copy_finish_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "copy_finish=", mrb_GLib_GFileIface_set_copy_finish, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_move_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "move", mrb_GLib_GFileIface_get_move, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_move_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "move=", mrb_GLib_GFileIface_set_move, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface__move_async_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "_move_async", mrb_GLib_GFileIface_get__move_async, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface__move_async_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "_move_async=", mrb_GLib_GFileIface_set__move_async, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface__move_finish_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "_move_finish", mrb_GLib_GFileIface_get__move_finish, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface__move_finish_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "_move_finish=", mrb_GLib_GFileIface_set__move_finish, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_mount_mountable_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "mount_mountable", mrb_GLib_GFileIface_get_mount_mountable, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_mount_mountable_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "mount_mountable=", mrb_GLib_GFileIface_set_mount_mountable, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_mount_mountable_finish_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "mount_mountable_finish", mrb_GLib_GFileIface_get_mount_mountable_finish, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_mount_mountable_finish_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "mount_mountable_finish=", mrb_GLib_GFileIface_set_mount_mountable_finish, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_unmount_mountable_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "unmount_mountable", mrb_GLib_GFileIface_get_unmount_mountable, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_unmount_mountable_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "unmount_mountable=", mrb_GLib_GFileIface_set_unmount_mountable, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_unmount_mountable_finish_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "unmount_mountable_finish", mrb_GLib_GFileIface_get_unmount_mountable_finish, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_unmount_mountable_finish_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "unmount_mountable_finish=", mrb_GLib_GFileIface_set_unmount_mountable_finish, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_eject_mountable_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "eject_mountable", mrb_GLib_GFileIface_get_eject_mountable, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_eject_mountable_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "eject_mountable=", mrb_GLib_GFileIface_set_eject_mountable, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_eject_mountable_finish_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "eject_mountable_finish", mrb_GLib_GFileIface_get_eject_mountable_finish, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_eject_mountable_finish_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "eject_mountable_finish=", mrb_GLib_GFileIface_set_eject_mountable_finish, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_mount_enclosing_volume_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "mount_enclosing_volume", mrb_GLib_GFileIface_get_mount_enclosing_volume, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_mount_enclosing_volume_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "mount_enclosing_volume=", mrb_GLib_GFileIface_set_mount_enclosing_volume, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_mount_enclosing_volume_finish_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "mount_enclosing_volume_finish", mrb_GLib_GFileIface_get_mount_enclosing_volume_finish, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_mount_enclosing_volume_finish_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "mount_enclosing_volume_finish=", mrb_GLib_GFileIface_set_mount_enclosing_volume_finish, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_monitor_dir_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "monitor_dir", mrb_GLib_GFileIface_get_monitor_dir, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_monitor_dir_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "monitor_dir=", mrb_GLib_GFileIface_set_monitor_dir, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_monitor_file_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "monitor_file", mrb_GLib_GFileIface_get_monitor_file, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_monitor_file_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "monitor_file=", mrb_GLib_GFileIface_set_monitor_file, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_open_readwrite_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "open_readwrite", mrb_GLib_GFileIface_get_open_readwrite, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_open_readwrite_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "open_readwrite=", mrb_GLib_GFileIface_set_open_readwrite, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_open_readwrite_async_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "open_readwrite_async", mrb_GLib_GFileIface_get_open_readwrite_async, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_open_readwrite_async_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "open_readwrite_async=", mrb_GLib_GFileIface_set_open_readwrite_async, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_open_readwrite_finish_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "open_readwrite_finish", mrb_GLib_GFileIface_get_open_readwrite_finish, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_open_readwrite_finish_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "open_readwrite_finish=", mrb_GLib_GFileIface_set_open_readwrite_finish, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_create_readwrite_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "create_readwrite", mrb_GLib_GFileIface_get_create_readwrite, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_create_readwrite_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "create_readwrite=", mrb_GLib_GFileIface_set_create_readwrite, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_create_readwrite_async_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "create_readwrite_async", mrb_GLib_GFileIface_get_create_readwrite_async, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_create_readwrite_async_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "create_readwrite_async=", mrb_GLib_GFileIface_set_create_readwrite_async, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_create_readwrite_finish_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "create_readwrite_finish", mrb_GLib_GFileIface_get_create_readwrite_finish, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_create_readwrite_finish_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "create_readwrite_finish=", mrb_GLib_GFileIface_set_create_readwrite_finish, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_replace_readwrite_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "replace_readwrite", mrb_GLib_GFileIface_get_replace_readwrite, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_replace_readwrite_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "replace_readwrite=", mrb_GLib_GFileIface_set_replace_readwrite, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_replace_readwrite_async_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "replace_readwrite_async", mrb_GLib_GFileIface_get_replace_readwrite_async, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_replace_readwrite_async_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "replace_readwrite_async=", mrb_GLib_GFileIface_set_replace_readwrite_async, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_replace_readwrite_finish_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "replace_readwrite_finish", mrb_GLib_GFileIface_get_replace_readwrite_finish, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_replace_readwrite_finish_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "replace_readwrite_finish=", mrb_GLib_GFileIface_set_replace_readwrite_finish, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_start_mountable_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "start_mountable", mrb_GLib_GFileIface_get_start_mountable, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_start_mountable_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "start_mountable=", mrb_GLib_GFileIface_set_start_mountable, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_start_mountable_finish_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "start_mountable_finish", mrb_GLib_GFileIface_get_start_mountable_finish, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_start_mountable_finish_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "start_mountable_finish=", mrb_GLib_GFileIface_set_start_mountable_finish, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_stop_mountable_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "stop_mountable", mrb_GLib_GFileIface_get_stop_mountable, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_stop_mountable_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "stop_mountable=", mrb_GLib_GFileIface_set_stop_mountable, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_stop_mountable_finish_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "stop_mountable_finish", mrb_GLib_GFileIface_get_stop_mountable_finish, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_stop_mountable_finish_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "stop_mountable_finish=", mrb_GLib_GFileIface_set_stop_mountable_finish, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_supports_thread_contexts_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "supports_thread_contexts", mrb_GLib_GFileIface_get_supports_thread_contexts, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_supports_thread_contexts_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "supports_thread_contexts=", mrb_GLib_GFileIface_set_supports_thread_contexts, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_unmount_mountable_with_operation_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "unmount_mountable_with_operation", mrb_GLib_GFileIface_get_unmount_mountable_with_operation, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_unmount_mountable_with_operation_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "unmount_mountable_with_operation=", mrb_GLib_GFileIface_set_unmount_mountable_with_operation, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_unmount_mountable_with_operation_finish_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "unmount_mountable_with_operation_finish", mrb_GLib_GFileIface_get_unmount_mountable_with_operation_finish, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_unmount_mountable_with_operation_finish_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "unmount_mountable_with_operation_finish=", mrb_GLib_GFileIface_set_unmount_mountable_with_operation_finish, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_eject_mountable_with_operation_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "eject_mountable_with_operation", mrb_GLib_GFileIface_get_eject_mountable_with_operation, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_eject_mountable_with_operation_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "eject_mountable_with_operation=", mrb_GLib_GFileIface_set_eject_mountable_with_operation, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_eject_mountable_with_operation_finish_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "eject_mountable_with_operation_finish", mrb_GLib_GFileIface_get_eject_mountable_with_operation_finish, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_eject_mountable_with_operation_finish_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "eject_mountable_with_operation_finish=", mrb_GLib_GFileIface_set_eject_mountable_with_operation_finish, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_poll_mountable_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "poll_mountable", mrb_GLib_GFileIface_get_poll_mountable, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_poll_mountable_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "poll_mountable=", mrb_GLib_GFileIface_set_poll_mountable, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_poll_mountable_finish_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "poll_mountable_finish", mrb_GLib_GFileIface_get_poll_mountable_finish, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_poll_mountable_finish_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "poll_mountable_finish=", mrb_GLib_GFileIface_set_poll_mountable_finish, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_measure_disk_usage_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "measure_disk_usage", mrb_GLib_GFileIface_get_measure_disk_usage, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_measure_disk_usage_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "measure_disk_usage=", mrb_GLib_GFileIface_set_measure_disk_usage, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_measure_disk_usage_async_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "measure_disk_usage_async", mrb_GLib_GFileIface_get_measure_disk_usage_async, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_measure_disk_usage_async_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "measure_disk_usage_async=", mrb_GLib_GFileIface_set_measure_disk_usage_async, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GFileIface_measure_disk_usage_finish_FIELD_READER
  mrb_define_method(mrb, GFileIface_class, "measure_disk_usage_finish", mrb_GLib_GFileIface_get_measure_disk_usage_finish, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GFileIface_measure_disk_usage_finish_FIELD_WRITER
  mrb_define_method(mrb, GFileIface_class, "measure_disk_usage_finish=", mrb_GLib_GFileIface_set_measure_disk_usage_finish, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
