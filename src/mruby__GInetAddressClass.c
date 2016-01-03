/*
 * struct _GInetAddressClass
 * Defined in file ginetaddress.h @ line 40
 */

#include "mruby_GLib.h"

#if BIND_GInetAddressClass_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GInetAddressClass::initialize */
/* sha: 026fab23aeea2ccd46df584d04229b025ab7c21fcca2876d0044030a3f7fb91d */
#if BIND_GInetAddressClass_INITIALIZE
mrb_value
mrb_GLib_GInetAddressClass_initialize(mrb_state* mrb, mrb_value self) {
  struct _GInetAddressClass* native_object = (struct _GInetAddressClass*)calloc(1, sizeof(struct _GInetAddressClass));
  mruby_giftwrap__GInetAddressClass_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetAddressClass::initialize */
/* sha: 9a350d187c95270c563b46ca53a2be2d6597b5aa615eb93fb64838aa8dc65cdb */
mrb_value
mrb_GLib_GInetAddressClass_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GInetAddressClass.disown only accepts objects of type GLib::GInetAddressClass");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetAddressClass::belongs_to_ruby */
/* sha: e4e0e49a5be866db98b237de2586c163245f31c6823bcaf71246c1e59e669e51 */
mrb_value
mrb_GLib_GInetAddressClass_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GInetAddressClass.belongs_to_ruby only accepts objects of type GLib::GInetAddressClass");
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

/* MRUBY_BINDING: GInetAddressClass::parent_class_reader */
/* sha: 8d80e82032a405439a937d25a6cd44c6b2e497d48216e6fcac359edc69f8eef1 */
#if BIND_GInetAddressClass_parent_class_FIELD_READER
/* get_parent_class
 *
 * Return Type: GObjectClass
 */
mrb_value
mrb_GLib_GInetAddressClass_get_parent_class(mrb_state* mrb, mrb_value self) {
  struct _GInetAddressClass * native_self = mruby_unbox__GInetAddressClass(self);

  GObjectClass native_parent_class = native_self->parent_class;

  mrb_value parent_class = TODO_mruby_box_GObjectClass(mrb, native_parent_class);

  return parent_class;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetAddressClass::parent_class_writer */
/* sha: e8bd600fc39e7b6c397ab7bfb0d3fce3d1c81abdefae9df65ff0c35b72f17909 */
#if BIND_GInetAddressClass_parent_class_FIELD_WRITER
/* set_parent_class
 *
 * Parameters:
 * - value: GObjectClass
 */
mrb_value
mrb_GLib_GInetAddressClass_set_parent_class(mrb_state* mrb, mrb_value self) {
  struct _GInetAddressClass * native_self = mruby_unbox__GInetAddressClass(self);
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

/* MRUBY_BINDING: GInetAddressClass::to_string_reader */
/* sha: fc24ef6445b1cd43c4bc2b433658ae13cfc98b67cb8fad3cedfece812ff9cdec */
#if BIND_GInetAddressClass_to_string_FIELD_READER
/* get_to_string
 *
 * Return Type: gchar *(*)(GInetAddress *)
 */
mrb_value
mrb_GLib_GInetAddressClass_get_to_string(mrb_state* mrb, mrb_value self) {
  struct _GInetAddressClass * native_self = mruby_unbox__GInetAddressClass(self);

  gchar *(*)(GInetAddress *) native_to_string = native_self->to_string;

  mrb_value to_string = TODO_mruby_box_gchar_PTR_LPAREN_PTR_RPAREN_LPAREN_GInetAddress_PTR_RPAREN(mrb, native_to_string);

  return to_string;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetAddressClass::to_string_writer */
/* sha: 119b28131902d8050c002a56c605fc2ac1dc085e426ebe52e9a6a53051397faa */
#if BIND_GInetAddressClass_to_string_FIELD_WRITER
/* set_to_string
 *
 * Parameters:
 * - value: gchar *(*)(GInetAddress *)
 */
mrb_value
mrb_GLib_GInetAddressClass_set_to_string(mrb_state* mrb, mrb_value self) {
  struct _GInetAddressClass * native_self = mruby_unbox__GInetAddressClass(self);
  mrb_value to_string;

  mrb_get_args(mrb, "o", &to_string);

  /* type checking */
  TODO_type_check_gchar_PTR_LPAREN_PTR_RPAREN_LPAREN_GInetAddress_PTR_RPAREN(to_string);

  gchar *(*native_to_string)(GInetAddress *) = TODO_mruby_unbox_gchar_PTR_LPAREN_PTR_RPAREN_LPAREN_GInetAddress_PTR_RPAREN(to_string);

  native_self->to_string = native_to_string;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetAddressClass::to_bytes_reader */
/* sha: 2f1d44559afbb17b871f34f47dc9e36132862f547dfdae558b5f09b76aef3d9b */
#if BIND_GInetAddressClass_to_bytes_FIELD_READER
/* get_to_bytes
 *
 * Return Type: const guint8 *(*)(GInetAddress *)
 */
mrb_value
mrb_GLib_GInetAddressClass_get_to_bytes(mrb_state* mrb, mrb_value self) {
  struct _GInetAddressClass * native_self = mruby_unbox__GInetAddressClass(self);

  const guint8 *(*)(GInetAddress *) native_to_bytes = native_self->to_bytes;

  mrb_value to_bytes = TODO_mruby_box_guint8_PTR_LPAREN_PTR_RPAREN_LPAREN_GInetAddress_PTR_RPAREN(mrb, native_to_bytes);

  return to_bytes;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetAddressClass::to_bytes_writer */
/* sha: bb441a4f1708cf8a26819720ce13c45004f8e7bef7003c0d21676f0299a45f7a */
#if BIND_GInetAddressClass_to_bytes_FIELD_WRITER
/* set_to_bytes
 *
 * Parameters:
 * - value: const guint8 *(*)(GInetAddress *)
 */
mrb_value
mrb_GLib_GInetAddressClass_set_to_bytes(mrb_state* mrb, mrb_value self) {
  struct _GInetAddressClass * native_self = mruby_unbox__GInetAddressClass(self);
  mrb_value to_bytes;

  mrb_get_args(mrb, "o", &to_bytes);

  /* type checking */
  TODO_type_check_guint8_PTR_LPAREN_PTR_RPAREN_LPAREN_GInetAddress_PTR_RPAREN(to_bytes);

  const guint8 *(*native_to_bytes)(GInetAddress *) = TODO_mruby_unbox_guint8_PTR_LPAREN_PTR_RPAREN_LPAREN_GInetAddress_PTR_RPAREN(to_bytes);

  native_self->to_bytes = native_to_bytes;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_GLib_GInetAddressClass_init(mrb_state* mrb) {
/* MRUBY_BINDING: GInetAddressClass::class_definition */
/* sha: 74ae83256e6775357bfdcb093cc6f7cad5c87e38b0df513e2f17ed65edd9bece */
  struct RClass* GInetAddressClass_class = mrb_define_class_under(mrb, GLib_module(mrb), "GInetAddressClass", mrb->object_class);
  MRB_SET_INSTANCE_TT(GInetAddressClass_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetAddressClass::class_method_definitions */
/* sha: 5fb3b7f4743f229a4c234bf1f09adb3fc16d23a646302b8cee158155f04a8df0 */
#if BIND_GInetAddressClass_INITIALIZE
  mrb_define_method(mrb, GInetAddressClass_class, "initialize", mrb_GLib_GInetAddressClass_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GInetAddressClass_class, "disown", mrb_GLib_GInetAddressClass_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GInetAddressClass_class, "belongs_to_ruby?", mrb_GLib_GInetAddressClass_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetAddressClass::attr_definitions */
/* sha: 5daf69aca61542827aa2b23f16f54fd4f29dd6f53e68b8e4d77113fb7d5dd692 */
  /*
   * Fields
   */
#if BIND_GInetAddressClass_parent_class_FIELD_READER
  mrb_define_method(mrb, GInetAddressClass_class, "parent_class", mrb_GLib_GInetAddressClass_get_parent_class, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GInetAddressClass_parent_class_FIELD_WRITER
  mrb_define_method(mrb, GInetAddressClass_class, "parent_class=", mrb_GLib_GInetAddressClass_set_parent_class, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GInetAddressClass_to_string_FIELD_READER
  mrb_define_method(mrb, GInetAddressClass_class, "to_string", mrb_GLib_GInetAddressClass_get_to_string, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GInetAddressClass_to_string_FIELD_WRITER
  mrb_define_method(mrb, GInetAddressClass_class, "to_string=", mrb_GLib_GInetAddressClass_set_to_string, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GInetAddressClass_to_bytes_FIELD_READER
  mrb_define_method(mrb, GInetAddressClass_class, "to_bytes", mrb_GLib_GInetAddressClass_get_to_bytes, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GInetAddressClass_to_bytes_FIELD_WRITER
  mrb_define_method(mrb, GInetAddressClass_class, "to_bytes=", mrb_GLib_GInetAddressClass_set_to_bytes, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetAddressClass::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
