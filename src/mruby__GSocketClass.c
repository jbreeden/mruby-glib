/*
 * struct _GSocketClass
 * Defined in file gsocket.h @ line 47
 */

#include "mruby_GLib.h"

#if BIND_GSocketClass_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GSocketClass::initialize */
/* sha: f55c5295cfc0cbecff93160e6c01fbbd9e4becdf07849e8e5ea77e2067a201c7 */
#if BIND_GSocketClass_INITIALIZE
mrb_value
mrb_GLib_GSocketClass_initialize(mrb_state* mrb, mrb_value self) {
  struct _GSocketClass* native_object = (struct _GSocketClass*)calloc(1, sizeof(struct _GSocketClass));
  mruby_giftwrap__GSocketClass_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketClass::initialize */
/* sha: 299be3a7a3f63de8cb00fe286dcca4e0b6feb943500b565818a007d55fc77418 */
mrb_value
mrb_GLib_GSocketClass_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSocketClass.disown only accepts objects of type GLib::GSocketClass");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketClass::belongs_to_ruby */
/* sha: 8476e4127882c89f0e2f5c3c0b35ea3b9973cf4504ffc15f7ea4baa0e6f95fb2 */
mrb_value
mrb_GLib_GSocketClass_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSocketClass.belongs_to_ruby only accepts objects of type GLib::GSocketClass");
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

/* MRUBY_BINDING: GSocketClass::parent_class_reader */
/* sha: 9340e4ee5fc59a6c080e501954803cf2434ea3f360066c5c89017b6fedb95d73 */
#if BIND_GSocketClass_parent_class_FIELD_READER
/* get_parent_class
 *
 * Return Type: GObjectClass
 */
mrb_value
mrb_GLib_GSocketClass_get_parent_class(mrb_state* mrb, mrb_value self) {
  struct _GSocketClass * native_self = mruby_unbox__GSocketClass(self);

  GObjectClass native_parent_class = native_self->parent_class;

  mrb_value parent_class = TODO_mruby_box_GObjectClass(mrb, native_parent_class);

  return parent_class;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketClass::parent_class_writer */
/* sha: 441b3c24b87796e3cae45e1e83694a3ad8ec67fc78c894cc719ff1e17341fb39 */
#if BIND_GSocketClass_parent_class_FIELD_WRITER
/* set_parent_class
 *
 * Parameters:
 * - value: GObjectClass
 */
mrb_value
mrb_GLib_GSocketClass_set_parent_class(mrb_state* mrb, mrb_value self) {
  struct _GSocketClass * native_self = mruby_unbox__GSocketClass(self);
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

/* MRUBY_BINDING: GSocketClass::_g_reserved1_reader */
/* sha: c205c77da96b0d48075ba0260dfeabb2d756fa95744934226f21734ae3ca0273 */
#if BIND_GSocketClass__g_reserved1_FIELD_READER
/* get__g_reserved1
 *
 * Return Type: void (*)(void)
 */
mrb_value
mrb_GLib_GSocketClass_get__g_reserved1(mrb_state* mrb, mrb_value self) {
  struct _GSocketClass * native_self = mruby_unbox__GSocketClass(self);

  void (*)(void) native__g_reserved1 = native_self->_g_reserved1;

  mrb_value _g_reserved1 = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native__g_reserved1);

  return _g_reserved1;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketClass::_g_reserved1_writer */
/* sha: 28ee21a04e1210752e524038ef1e95606f83bfd01215817efff7ca1ec5b07e97 */
#if BIND_GSocketClass__g_reserved1_FIELD_WRITER
/* set__g_reserved1
 *
 * Parameters:
 * - value: void (*)(void)
 */
mrb_value
mrb_GLib_GSocketClass_set__g_reserved1(mrb_state* mrb, mrb_value self) {
  struct _GSocketClass * native_self = mruby_unbox__GSocketClass(self);
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

/* MRUBY_BINDING: GSocketClass::_g_reserved2_reader */
/* sha: 2a28c05eec5c698cc5559aae4265398a2c56ed5d117b328cf5210b6bbb12466b */
#if BIND_GSocketClass__g_reserved2_FIELD_READER
/* get__g_reserved2
 *
 * Return Type: void (*)(void)
 */
mrb_value
mrb_GLib_GSocketClass_get__g_reserved2(mrb_state* mrb, mrb_value self) {
  struct _GSocketClass * native_self = mruby_unbox__GSocketClass(self);

  void (*)(void) native__g_reserved2 = native_self->_g_reserved2;

  mrb_value _g_reserved2 = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native__g_reserved2);

  return _g_reserved2;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketClass::_g_reserved2_writer */
/* sha: 975234f1d561abcf7e3938c99269eecfe7ff8447be7172cc940a503706752354 */
#if BIND_GSocketClass__g_reserved2_FIELD_WRITER
/* set__g_reserved2
 *
 * Parameters:
 * - value: void (*)(void)
 */
mrb_value
mrb_GLib_GSocketClass_set__g_reserved2(mrb_state* mrb, mrb_value self) {
  struct _GSocketClass * native_self = mruby_unbox__GSocketClass(self);
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

/* MRUBY_BINDING: GSocketClass::_g_reserved3_reader */
/* sha: c5c280b7f353bac467ac60ce04194d134b3236371dd16853482f6558e7d434f1 */
#if BIND_GSocketClass__g_reserved3_FIELD_READER
/* get__g_reserved3
 *
 * Return Type: void (*)(void)
 */
mrb_value
mrb_GLib_GSocketClass_get__g_reserved3(mrb_state* mrb, mrb_value self) {
  struct _GSocketClass * native_self = mruby_unbox__GSocketClass(self);

  void (*)(void) native__g_reserved3 = native_self->_g_reserved3;

  mrb_value _g_reserved3 = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native__g_reserved3);

  return _g_reserved3;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketClass::_g_reserved3_writer */
/* sha: 672666f37cb0ca5cf3e442cb88ab4273b7bf17a89cf482325294c4220d4252fa */
#if BIND_GSocketClass__g_reserved3_FIELD_WRITER
/* set__g_reserved3
 *
 * Parameters:
 * - value: void (*)(void)
 */
mrb_value
mrb_GLib_GSocketClass_set__g_reserved3(mrb_state* mrb, mrb_value self) {
  struct _GSocketClass * native_self = mruby_unbox__GSocketClass(self);
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

/* MRUBY_BINDING: GSocketClass::_g_reserved4_reader */
/* sha: e1494834f5d898a8b7c3cebf814fac02e89de90e304e18138d86acfcb7e3de5d */
#if BIND_GSocketClass__g_reserved4_FIELD_READER
/* get__g_reserved4
 *
 * Return Type: void (*)(void)
 */
mrb_value
mrb_GLib_GSocketClass_get__g_reserved4(mrb_state* mrb, mrb_value self) {
  struct _GSocketClass * native_self = mruby_unbox__GSocketClass(self);

  void (*)(void) native__g_reserved4 = native_self->_g_reserved4;

  mrb_value _g_reserved4 = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native__g_reserved4);

  return _g_reserved4;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketClass::_g_reserved4_writer */
/* sha: 71573638e6612d05b178534436dddfb1d16c3d7bfb637fda0ab571cdd7becd2b */
#if BIND_GSocketClass__g_reserved4_FIELD_WRITER
/* set__g_reserved4
 *
 * Parameters:
 * - value: void (*)(void)
 */
mrb_value
mrb_GLib_GSocketClass_set__g_reserved4(mrb_state* mrb, mrb_value self) {
  struct _GSocketClass * native_self = mruby_unbox__GSocketClass(self);
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

/* MRUBY_BINDING: GSocketClass::_g_reserved5_reader */
/* sha: 64a3f3fac92e33de5c0f0dd05cf52276a8e6055f3da1b54dd43561ee7e2b50ce */
#if BIND_GSocketClass__g_reserved5_FIELD_READER
/* get__g_reserved5
 *
 * Return Type: void (*)(void)
 */
mrb_value
mrb_GLib_GSocketClass_get__g_reserved5(mrb_state* mrb, mrb_value self) {
  struct _GSocketClass * native_self = mruby_unbox__GSocketClass(self);

  void (*)(void) native__g_reserved5 = native_self->_g_reserved5;

  mrb_value _g_reserved5 = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native__g_reserved5);

  return _g_reserved5;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketClass::_g_reserved5_writer */
/* sha: 815ec92073610197cb543991004404c59dbbea0c76c2dac672ebe2a1ebf6a4c2 */
#if BIND_GSocketClass__g_reserved5_FIELD_WRITER
/* set__g_reserved5
 *
 * Parameters:
 * - value: void (*)(void)
 */
mrb_value
mrb_GLib_GSocketClass_set__g_reserved5(mrb_state* mrb, mrb_value self) {
  struct _GSocketClass * native_self = mruby_unbox__GSocketClass(self);
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

/* MRUBY_BINDING: GSocketClass::_g_reserved6_reader */
/* sha: 096aaef1b8b6870f1c6dbb1988029cb10c2ef4398572bd7a226790a9d6e46ecb */
#if BIND_GSocketClass__g_reserved6_FIELD_READER
/* get__g_reserved6
 *
 * Return Type: void (*)(void)
 */
mrb_value
mrb_GLib_GSocketClass_get__g_reserved6(mrb_state* mrb, mrb_value self) {
  struct _GSocketClass * native_self = mruby_unbox__GSocketClass(self);

  void (*)(void) native__g_reserved6 = native_self->_g_reserved6;

  mrb_value _g_reserved6 = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native__g_reserved6);

  return _g_reserved6;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketClass::_g_reserved6_writer */
/* sha: 6830f1751cb9c4b3090524d88b62b5e7c82ebd8373d413d1cda5437d15da5750 */
#if BIND_GSocketClass__g_reserved6_FIELD_WRITER
/* set__g_reserved6
 *
 * Parameters:
 * - value: void (*)(void)
 */
mrb_value
mrb_GLib_GSocketClass_set__g_reserved6(mrb_state* mrb, mrb_value self) {
  struct _GSocketClass * native_self = mruby_unbox__GSocketClass(self);
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

/* MRUBY_BINDING: GSocketClass::_g_reserved7_reader */
/* sha: b569a57952d8f7a79c6196f36e119e29edd255cbddbe1ea41f3503ee5bbe7731 */
#if BIND_GSocketClass__g_reserved7_FIELD_READER
/* get__g_reserved7
 *
 * Return Type: void (*)(void)
 */
mrb_value
mrb_GLib_GSocketClass_get__g_reserved7(mrb_state* mrb, mrb_value self) {
  struct _GSocketClass * native_self = mruby_unbox__GSocketClass(self);

  void (*)(void) native__g_reserved7 = native_self->_g_reserved7;

  mrb_value _g_reserved7 = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native__g_reserved7);

  return _g_reserved7;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketClass::_g_reserved7_writer */
/* sha: 3b1a614468ab112ce0553b20d5bc12abe63d76d2df51bcc20a987ca285ffd238 */
#if BIND_GSocketClass__g_reserved7_FIELD_WRITER
/* set__g_reserved7
 *
 * Parameters:
 * - value: void (*)(void)
 */
mrb_value
mrb_GLib_GSocketClass_set__g_reserved7(mrb_state* mrb, mrb_value self) {
  struct _GSocketClass * native_self = mruby_unbox__GSocketClass(self);
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

/* MRUBY_BINDING: GSocketClass::_g_reserved8_reader */
/* sha: 42f99d6e9ba9503c57c208c70b9ab7bfada4f7f4092fac41f1d9846af8286bc4 */
#if BIND_GSocketClass__g_reserved8_FIELD_READER
/* get__g_reserved8
 *
 * Return Type: void (*)(void)
 */
mrb_value
mrb_GLib_GSocketClass_get__g_reserved8(mrb_state* mrb, mrb_value self) {
  struct _GSocketClass * native_self = mruby_unbox__GSocketClass(self);

  void (*)(void) native__g_reserved8 = native_self->_g_reserved8;

  mrb_value _g_reserved8 = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native__g_reserved8);

  return _g_reserved8;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketClass::_g_reserved8_writer */
/* sha: df691982b9cfec9f809a0d87a854d3b38862d215406b174065139afdc99780c6 */
#if BIND_GSocketClass__g_reserved8_FIELD_WRITER
/* set__g_reserved8
 *
 * Parameters:
 * - value: void (*)(void)
 */
mrb_value
mrb_GLib_GSocketClass_set__g_reserved8(mrb_state* mrb, mrb_value self) {
  struct _GSocketClass * native_self = mruby_unbox__GSocketClass(self);
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

/* MRUBY_BINDING: GSocketClass::_g_reserved9_reader */
/* sha: a3fe16c26cfca13e04a653d5c64853532ee2e2334305ee59a4e65578a54379d2 */
#if BIND_GSocketClass__g_reserved9_FIELD_READER
/* get__g_reserved9
 *
 * Return Type: void (*)(void)
 */
mrb_value
mrb_GLib_GSocketClass_get__g_reserved9(mrb_state* mrb, mrb_value self) {
  struct _GSocketClass * native_self = mruby_unbox__GSocketClass(self);

  void (*)(void) native__g_reserved9 = native_self->_g_reserved9;

  mrb_value _g_reserved9 = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native__g_reserved9);

  return _g_reserved9;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketClass::_g_reserved9_writer */
/* sha: 55da1e036d6147016278afa7a456fe5b79c8184c5d90c88e2c0ba5afdffecc04 */
#if BIND_GSocketClass__g_reserved9_FIELD_WRITER
/* set__g_reserved9
 *
 * Parameters:
 * - value: void (*)(void)
 */
mrb_value
mrb_GLib_GSocketClass_set__g_reserved9(mrb_state* mrb, mrb_value self) {
  struct _GSocketClass * native_self = mruby_unbox__GSocketClass(self);
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

/* MRUBY_BINDING: GSocketClass::_g_reserved10_reader */
/* sha: 8f9ecf6385dbb2dd3e8315bf3568ce5990ffaeec14487fc2f21d057c110dddee */
#if BIND_GSocketClass__g_reserved10_FIELD_READER
/* get__g_reserved10
 *
 * Return Type: void (*)(void)
 */
mrb_value
mrb_GLib_GSocketClass_get__g_reserved10(mrb_state* mrb, mrb_value self) {
  struct _GSocketClass * native_self = mruby_unbox__GSocketClass(self);

  void (*)(void) native__g_reserved10 = native_self->_g_reserved10;

  mrb_value _g_reserved10 = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native__g_reserved10);

  return _g_reserved10;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketClass::_g_reserved10_writer */
/* sha: 29e89b78678c9f4a7c9b1c8be7a02733d374ff1634ebf745eee4a1aee9211296 */
#if BIND_GSocketClass__g_reserved10_FIELD_WRITER
/* set__g_reserved10
 *
 * Parameters:
 * - value: void (*)(void)
 */
mrb_value
mrb_GLib_GSocketClass_set__g_reserved10(mrb_state* mrb, mrb_value self) {
  struct _GSocketClass * native_self = mruby_unbox__GSocketClass(self);
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


void mrb_GLib_GSocketClass_init(mrb_state* mrb) {
/* MRUBY_BINDING: GSocketClass::class_definition */
/* sha: e175aef6853e2248da9d51a541716a91b9eb8b5001faba0177c4f7a9359058c2 */
  struct RClass* GSocketClass_class = mrb_define_class_under(mrb, GLib_module(mrb), "GSocketClass", mrb->object_class);
  MRB_SET_INSTANCE_TT(GSocketClass_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketClass::class_method_definitions */
/* sha: 134fac4ab8735c674fe4400d4baafeee07bef567962e3165b3a15eb6a3d985b3 */
#if BIND_GSocketClass_INITIALIZE
  mrb_define_method(mrb, GSocketClass_class, "initialize", mrb_GLib_GSocketClass_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GSocketClass_class, "disown", mrb_GLib_GSocketClass_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GSocketClass_class, "belongs_to_ruby?", mrb_GLib_GSocketClass_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketClass::attr_definitions */
/* sha: 623d64cb1bf6207cf97c7d405885103020642227ded176afb7b2f4300d4b5fcc */
  /*
   * Fields
   */
#if BIND_GSocketClass_parent_class_FIELD_READER
  mrb_define_method(mrb, GSocketClass_class, "parent_class", mrb_GLib_GSocketClass_get_parent_class, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSocketClass_parent_class_FIELD_WRITER
  mrb_define_method(mrb, GSocketClass_class, "parent_class=", mrb_GLib_GSocketClass_set_parent_class, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSocketClass__g_reserved1_FIELD_READER
  mrb_define_method(mrb, GSocketClass_class, "_g_reserved1", mrb_GLib_GSocketClass_get__g_reserved1, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSocketClass__g_reserved1_FIELD_WRITER
  mrb_define_method(mrb, GSocketClass_class, "_g_reserved1=", mrb_GLib_GSocketClass_set__g_reserved1, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSocketClass__g_reserved2_FIELD_READER
  mrb_define_method(mrb, GSocketClass_class, "_g_reserved2", mrb_GLib_GSocketClass_get__g_reserved2, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSocketClass__g_reserved2_FIELD_WRITER
  mrb_define_method(mrb, GSocketClass_class, "_g_reserved2=", mrb_GLib_GSocketClass_set__g_reserved2, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSocketClass__g_reserved3_FIELD_READER
  mrb_define_method(mrb, GSocketClass_class, "_g_reserved3", mrb_GLib_GSocketClass_get__g_reserved3, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSocketClass__g_reserved3_FIELD_WRITER
  mrb_define_method(mrb, GSocketClass_class, "_g_reserved3=", mrb_GLib_GSocketClass_set__g_reserved3, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSocketClass__g_reserved4_FIELD_READER
  mrb_define_method(mrb, GSocketClass_class, "_g_reserved4", mrb_GLib_GSocketClass_get__g_reserved4, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSocketClass__g_reserved4_FIELD_WRITER
  mrb_define_method(mrb, GSocketClass_class, "_g_reserved4=", mrb_GLib_GSocketClass_set__g_reserved4, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSocketClass__g_reserved5_FIELD_READER
  mrb_define_method(mrb, GSocketClass_class, "_g_reserved5", mrb_GLib_GSocketClass_get__g_reserved5, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSocketClass__g_reserved5_FIELD_WRITER
  mrb_define_method(mrb, GSocketClass_class, "_g_reserved5=", mrb_GLib_GSocketClass_set__g_reserved5, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSocketClass__g_reserved6_FIELD_READER
  mrb_define_method(mrb, GSocketClass_class, "_g_reserved6", mrb_GLib_GSocketClass_get__g_reserved6, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSocketClass__g_reserved6_FIELD_WRITER
  mrb_define_method(mrb, GSocketClass_class, "_g_reserved6=", mrb_GLib_GSocketClass_set__g_reserved6, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSocketClass__g_reserved7_FIELD_READER
  mrb_define_method(mrb, GSocketClass_class, "_g_reserved7", mrb_GLib_GSocketClass_get__g_reserved7, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSocketClass__g_reserved7_FIELD_WRITER
  mrb_define_method(mrb, GSocketClass_class, "_g_reserved7=", mrb_GLib_GSocketClass_set__g_reserved7, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSocketClass__g_reserved8_FIELD_READER
  mrb_define_method(mrb, GSocketClass_class, "_g_reserved8", mrb_GLib_GSocketClass_get__g_reserved8, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSocketClass__g_reserved8_FIELD_WRITER
  mrb_define_method(mrb, GSocketClass_class, "_g_reserved8=", mrb_GLib_GSocketClass_set__g_reserved8, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSocketClass__g_reserved9_FIELD_READER
  mrb_define_method(mrb, GSocketClass_class, "_g_reserved9", mrb_GLib_GSocketClass_get__g_reserved9, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSocketClass__g_reserved9_FIELD_WRITER
  mrb_define_method(mrb, GSocketClass_class, "_g_reserved9=", mrb_GLib_GSocketClass_set__g_reserved9, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSocketClass__g_reserved10_FIELD_READER
  mrb_define_method(mrb, GSocketClass_class, "_g_reserved10", mrb_GLib_GSocketClass_get__g_reserved10, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSocketClass__g_reserved10_FIELD_WRITER
  mrb_define_method(mrb, GSocketClass_class, "_g_reserved10=", mrb_GLib_GSocketClass_set__g_reserved10, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketClass::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
