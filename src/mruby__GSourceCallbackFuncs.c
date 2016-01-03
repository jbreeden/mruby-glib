/*
 * struct _GSourceCallbackFuncs
 * Defined in file gmain.h @ line 77
 */

#include "mruby_GLib.h"

#if BIND_GSourceCallbackFuncs_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GSourceCallbackFuncs::initialize */
/* sha: d3e9ed3daae07a1bc0a8fe4b8e52c220d53175c669ac8d44cd608c8662c3cd3a */
#if BIND_GSourceCallbackFuncs_INITIALIZE
mrb_value
mrb_GLib_GSourceCallbackFuncs_initialize(mrb_state* mrb, mrb_value self) {
  struct _GSourceCallbackFuncs* native_object = (struct _GSourceCallbackFuncs*)calloc(1, sizeof(struct _GSourceCallbackFuncs));
  mruby_giftwrap__GSourceCallbackFuncs_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSourceCallbackFuncs::initialize */
/* sha: f9fc74aa45fbfcfddd2f94b7870fc625abaa6899b4b6a7cca9bdd002daa89b3b */
mrb_value
mrb_GLib_GSourceCallbackFuncs_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSourceCallbackFuncs.disown only accepts objects of type GLib::GSourceCallbackFuncs");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSourceCallbackFuncs::belongs_to_ruby */
/* sha: 84ffdfd15e5046929c12506d2e07c29b5c16d1fb65d3a2b69c85cb084568cd29 */
mrb_value
mrb_GLib_GSourceCallbackFuncs_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSourceCallbackFuncs.belongs_to_ruby only accepts objects of type GLib::GSourceCallbackFuncs");
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

/* MRUBY_BINDING: GSourceCallbackFuncs::ref_reader */
/* sha: 12ecc336b0343c66b230cd80ca7e9c170eb171ef20917951d3b94a2370f8e9c6 */
#if BIND_GSourceCallbackFuncs_ref_FIELD_READER
/* get_ref
 *
 * Return Type: void (*)(gpointer)
 */
mrb_value
mrb_GLib_GSourceCallbackFuncs_get_ref(mrb_state* mrb, mrb_value self) {
  struct _GSourceCallbackFuncs * native_self = mruby_unbox__GSourceCallbackFuncs(self);

  void (*)(gpointer) native_ref = native_self->ref;

  mrb_value ref = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_gpointer_RPAREN(mrb, native_ref);

  return ref;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSourceCallbackFuncs::ref_writer */
/* sha: b0e76b04eb97c2cba1a2404e19b1b5e595ebd5c665866f370fecf54bfee50418 */
#if BIND_GSourceCallbackFuncs_ref_FIELD_WRITER
/* set_ref
 *
 * Parameters:
 * - value: void (*)(gpointer)
 */
mrb_value
mrb_GLib_GSourceCallbackFuncs_set_ref(mrb_state* mrb, mrb_value self) {
  struct _GSourceCallbackFuncs * native_self = mruby_unbox__GSourceCallbackFuncs(self);
  mrb_value ref;

  mrb_get_args(mrb, "o", &ref);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_gpointer_RPAREN(ref);

  void (*native_ref)(gpointer) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_gpointer_RPAREN(ref);

  native_self->ref = native_ref;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSourceCallbackFuncs::unref_reader */
/* sha: 38f972aecf595507a3d4351ac09e78d0c5291ee5c86a5d4cfcc818065b07af7e */
#if BIND_GSourceCallbackFuncs_unref_FIELD_READER
/* get_unref
 *
 * Return Type: void (*)(gpointer)
 */
mrb_value
mrb_GLib_GSourceCallbackFuncs_get_unref(mrb_state* mrb, mrb_value self) {
  struct _GSourceCallbackFuncs * native_self = mruby_unbox__GSourceCallbackFuncs(self);

  void (*)(gpointer) native_unref = native_self->unref;

  mrb_value unref = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_gpointer_RPAREN(mrb, native_unref);

  return unref;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSourceCallbackFuncs::unref_writer */
/* sha: 0f1c237466b1e30ec4b1c26fcdb2d9e3108a34f31b69029351c549867bc33855 */
#if BIND_GSourceCallbackFuncs_unref_FIELD_WRITER
/* set_unref
 *
 * Parameters:
 * - value: void (*)(gpointer)
 */
mrb_value
mrb_GLib_GSourceCallbackFuncs_set_unref(mrb_state* mrb, mrb_value self) {
  struct _GSourceCallbackFuncs * native_self = mruby_unbox__GSourceCallbackFuncs(self);
  mrb_value unref;

  mrb_get_args(mrb, "o", &unref);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_gpointer_RPAREN(unref);

  void (*native_unref)(gpointer) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_gpointer_RPAREN(unref);

  native_self->unref = native_unref;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSourceCallbackFuncs::get_reader */
/* sha: 501fb3f3c74fb14f582985b7244f47c77ecf71c17e13e53fbff8b81cb39c58db */
#if BIND_GSourceCallbackFuncs_get_FIELD_READER
/* get_get
 *
 * Return Type: void (*)(gpointer, GSource *, GSourceFunc *, gpointer *)
 */
mrb_value
mrb_GLib_GSourceCallbackFuncs_get_get(mrb_state* mrb, mrb_value self) {
  struct _GSourceCallbackFuncs * native_self = mruby_unbox__GSourceCallbackFuncs(self);

  void (*)(gpointer, GSource *, GSourceFunc *, gpointer *) native_get = native_self->get;

  mrb_value get = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_gpointerCOMMA_GSource_PTR_COMMA_GSourceFunc_PTR_COMMA_gpointer_PTR_RPAREN(mrb, native_get);

  return get;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSourceCallbackFuncs::get_writer */
/* sha: 9a46afd445104ef1a04235c3b64f9a4c525b2246362f82a1a41180be4bf39231 */
#if BIND_GSourceCallbackFuncs_get_FIELD_WRITER
/* set_get
 *
 * Parameters:
 * - value: void (*)(gpointer, GSource *, GSourceFunc *, gpointer *)
 */
mrb_value
mrb_GLib_GSourceCallbackFuncs_set_get(mrb_state* mrb, mrb_value self) {
  struct _GSourceCallbackFuncs * native_self = mruby_unbox__GSourceCallbackFuncs(self);
  mrb_value get;

  mrb_get_args(mrb, "o", &get);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_gpointerCOMMA_GSource_PTR_COMMA_GSourceFunc_PTR_COMMA_gpointer_PTR_RPAREN(get);

  void (*native_get)(gpointer, GSource *, GSourceFunc *, gpointer *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_gpointerCOMMA_GSource_PTR_COMMA_GSourceFunc_PTR_COMMA_gpointer_PTR_RPAREN(get);

  native_self->get = native_get;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_GLib_GSourceCallbackFuncs_init(mrb_state* mrb) {
/* MRUBY_BINDING: GSourceCallbackFuncs::class_definition */
/* sha: f4e85019e99502ff0e9a2d125fd1c7c94a8db9ca4a597fd8ed33fd9a915050bf */
  struct RClass* GSourceCallbackFuncs_class = mrb_define_class_under(mrb, GLib_module(mrb), "GSourceCallbackFuncs", mrb->object_class);
  MRB_SET_INSTANCE_TT(GSourceCallbackFuncs_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSourceCallbackFuncs::class_method_definitions */
/* sha: f46161c562f0c619273e998b313548276c7605b1479fc6d90ba061ca3979a063 */
#if BIND_GSourceCallbackFuncs_INITIALIZE
  mrb_define_method(mrb, GSourceCallbackFuncs_class, "initialize", mrb_GLib_GSourceCallbackFuncs_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GSourceCallbackFuncs_class, "disown", mrb_GLib_GSourceCallbackFuncs_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GSourceCallbackFuncs_class, "belongs_to_ruby?", mrb_GLib_GSourceCallbackFuncs_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSourceCallbackFuncs::attr_definitions */
/* sha: fcb6e1d60c19fad128510c9a0ea1ee32c5e493a9635e5016cee04baab9a1bcee */
  /*
   * Fields
   */
#if BIND_GSourceCallbackFuncs_ref_FIELD_READER
  mrb_define_method(mrb, GSourceCallbackFuncs_class, "ref", mrb_GLib_GSourceCallbackFuncs_get_ref, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSourceCallbackFuncs_ref_FIELD_WRITER
  mrb_define_method(mrb, GSourceCallbackFuncs_class, "ref=", mrb_GLib_GSourceCallbackFuncs_set_ref, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSourceCallbackFuncs_unref_FIELD_READER
  mrb_define_method(mrb, GSourceCallbackFuncs_class, "unref", mrb_GLib_GSourceCallbackFuncs_get_unref, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSourceCallbackFuncs_unref_FIELD_WRITER
  mrb_define_method(mrb, GSourceCallbackFuncs_class, "unref=", mrb_GLib_GSourceCallbackFuncs_set_unref, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSourceCallbackFuncs_get_FIELD_READER
  mrb_define_method(mrb, GSourceCallbackFuncs_class, "get", mrb_GLib_GSourceCallbackFuncs_get_get, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSourceCallbackFuncs_get_FIELD_WRITER
  mrb_define_method(mrb, GSourceCallbackFuncs_class, "get=", mrb_GLib_GSourceCallbackFuncs_set_get, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSourceCallbackFuncs::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
