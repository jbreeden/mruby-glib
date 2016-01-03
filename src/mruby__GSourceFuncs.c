/*
 * struct _GSourceFuncs
 * Defined in file gmain.h @ line 130
 */

#include "mruby_GLib.h"

#if BIND_GSourceFuncs_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GSourceFuncs::initialize */
/* sha: 3ebcef515f6b3481ffcf8d2e423a43ac646ce96afe1ea35675205358bee5b0e7 */
#if BIND_GSourceFuncs_INITIALIZE
mrb_value
mrb_GLib_GSourceFuncs_initialize(mrb_state* mrb, mrb_value self) {
  struct _GSourceFuncs* native_object = (struct _GSourceFuncs*)calloc(1, sizeof(struct _GSourceFuncs));
  mruby_giftwrap__GSourceFuncs_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSourceFuncs::initialize */
/* sha: ff1597286257e5a706f74e050f7c1eca1a3ea031adbf7d768bb8c2b21421f324 */
mrb_value
mrb_GLib_GSourceFuncs_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSourceFuncs.disown only accepts objects of type GLib::GSourceFuncs");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSourceFuncs::belongs_to_ruby */
/* sha: ffa2515cfb5203ce6f2d410c61b587185e639f149d011513100013d0ec938942 */
mrb_value
mrb_GLib_GSourceFuncs_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSourceFuncs.belongs_to_ruby only accepts objects of type GLib::GSourceFuncs");
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

/* MRUBY_BINDING: GSourceFuncs::prepare_reader */
/* sha: 9622a4ca243d19481ab8d530d637e4b1a9b8ca87412912f4ead6d032407a6e97 */
#if BIND_GSourceFuncs_prepare_FIELD_READER
/* get_prepare
 *
 * Return Type: gboolean (*)(GSource *, gint *)
 */
mrb_value
mrb_GLib_GSourceFuncs_get_prepare(mrb_state* mrb, mrb_value self) {
  struct _GSourceFuncs * native_self = mruby_unbox__GSourceFuncs(self);

  gboolean (*)(GSource *, gint *) native_prepare = native_self->prepare;

  mrb_value prepare = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GSource_PTR_COMMA_gint_PTR_RPAREN(mrb, native_prepare);

  return prepare;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSourceFuncs::prepare_writer */
/* sha: 8a051cad487463be082eb79ed1a219f4b90847b706c3f5b9ed6c98fcfa2ed9b0 */
#if BIND_GSourceFuncs_prepare_FIELD_WRITER
/* set_prepare
 *
 * Parameters:
 * - value: gboolean (*)(GSource *, gint *)
 */
mrb_value
mrb_GLib_GSourceFuncs_set_prepare(mrb_state* mrb, mrb_value self) {
  struct _GSourceFuncs * native_self = mruby_unbox__GSourceFuncs(self);
  mrb_value prepare;

  mrb_get_args(mrb, "o", &prepare);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GSource_PTR_COMMA_gint_PTR_RPAREN(prepare);

  gboolean (*native_prepare)(GSource *, gint *) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GSource_PTR_COMMA_gint_PTR_RPAREN(prepare);

  native_self->prepare = native_prepare;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSourceFuncs::check_reader */
/* sha: 7399585808ad7b669e67ed4666d573a17154a9714fddc918f55d9ac18f8986b8 */
#if BIND_GSourceFuncs_check_FIELD_READER
/* get_check
 *
 * Return Type: gboolean (*)(GSource *)
 */
mrb_value
mrb_GLib_GSourceFuncs_get_check(mrb_state* mrb, mrb_value self) {
  struct _GSourceFuncs * native_self = mruby_unbox__GSourceFuncs(self);

  gboolean (*)(GSource *) native_check = native_self->check;

  mrb_value check = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GSource_PTR_RPAREN(mrb, native_check);

  return check;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSourceFuncs::check_writer */
/* sha: 69e0a41046f792214d2085f74c400367790e6af43d3c6c095401cf2be890faed */
#if BIND_GSourceFuncs_check_FIELD_WRITER
/* set_check
 *
 * Parameters:
 * - value: gboolean (*)(GSource *)
 */
mrb_value
mrb_GLib_GSourceFuncs_set_check(mrb_state* mrb, mrb_value self) {
  struct _GSourceFuncs * native_self = mruby_unbox__GSourceFuncs(self);
  mrb_value check;

  mrb_get_args(mrb, "o", &check);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GSource_PTR_RPAREN(check);

  gboolean (*native_check)(GSource *) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GSource_PTR_RPAREN(check);

  native_self->check = native_check;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSourceFuncs::dispatch_reader */
/* sha: 84716ac1e6e944ffeba2a2b20e9ca341ec906bfffdb1e4ac6d3d026eefdd0210 */
#if BIND_GSourceFuncs_dispatch_FIELD_READER
/* get_dispatch
 *
 * Return Type: gboolean (*)(GSource *, GSourceFunc, gpointer)
 */
mrb_value
mrb_GLib_GSourceFuncs_get_dispatch(mrb_state* mrb, mrb_value self) {
  struct _GSourceFuncs * native_self = mruby_unbox__GSourceFuncs(self);

  gboolean (*)(GSource *, GSourceFunc, gpointer) native_dispatch = native_self->dispatch;

  mrb_value dispatch = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GSource_PTR_COMMA_GSourceFuncCOMMA_gpointer_RPAREN(mrb, native_dispatch);

  return dispatch;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSourceFuncs::dispatch_writer */
/* sha: 6bcaef0c7894e10a20e4647a6edafebc72c816cc5519639cd675eee0fbfa36cc */
#if BIND_GSourceFuncs_dispatch_FIELD_WRITER
/* set_dispatch
 *
 * Parameters:
 * - value: gboolean (*)(GSource *, GSourceFunc, gpointer)
 */
mrb_value
mrb_GLib_GSourceFuncs_set_dispatch(mrb_state* mrb, mrb_value self) {
  struct _GSourceFuncs * native_self = mruby_unbox__GSourceFuncs(self);
  mrb_value dispatch;

  mrb_get_args(mrb, "o", &dispatch);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GSource_PTR_COMMA_GSourceFuncCOMMA_gpointer_RPAREN(dispatch);

  gboolean (*native_dispatch)(GSource *, GSourceFunc, gpointer) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GSource_PTR_COMMA_GSourceFuncCOMMA_gpointer_RPAREN(dispatch);

  native_self->dispatch = native_dispatch;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSourceFuncs::finalize_reader */
/* sha: 1c988d629174e6d9dbcf7567d5716169a9c8c766edbf985b6b1d3a4d00b16f36 */
#if BIND_GSourceFuncs_finalize_FIELD_READER
/* get_finalize
 *
 * Return Type: void (*)(GSource *)
 */
mrb_value
mrb_GLib_GSourceFuncs_get_finalize(mrb_state* mrb, mrb_value self) {
  struct _GSourceFuncs * native_self = mruby_unbox__GSourceFuncs(self);

  void (*)(GSource *) native_finalize = native_self->finalize;

  mrb_value finalize = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GSource_PTR_RPAREN(mrb, native_finalize);

  return finalize;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSourceFuncs::finalize_writer */
/* sha: 57a409746bb13b79545c29265ee97ac13604f694f19883a9279614855d9309bb */
#if BIND_GSourceFuncs_finalize_FIELD_WRITER
/* set_finalize
 *
 * Parameters:
 * - value: void (*)(GSource *)
 */
mrb_value
mrb_GLib_GSourceFuncs_set_finalize(mrb_state* mrb, mrb_value self) {
  struct _GSourceFuncs * native_self = mruby_unbox__GSourceFuncs(self);
  mrb_value finalize;

  mrb_get_args(mrb, "o", &finalize);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GSource_PTR_RPAREN(finalize);

  void (*native_finalize)(GSource *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GSource_PTR_RPAREN(finalize);

  native_self->finalize = native_finalize;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSourceFuncs::closure_callback_reader */
/* sha: 8c0bd28ab13aacd5fcbf0f153e44b262d9adb47b1ad01494225a92497e01e64e */
#if BIND_GSourceFuncs_closure_callback_FIELD_READER
/* get_closure_callback
 *
 * Return Type: GSourceFunc
 */
mrb_value
mrb_GLib_GSourceFuncs_get_closure_callback(mrb_state* mrb, mrb_value self) {
  struct _GSourceFuncs * native_self = mruby_unbox__GSourceFuncs(self);

  GSourceFunc native_closure_callback = native_self->closure_callback;

  mrb_value closure_callback = TODO_mruby_box_GSourceFunc(mrb, native_closure_callback);

  return closure_callback;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSourceFuncs::closure_callback_writer */
/* sha: dd0d6c51ed75e645515efd1f1529804382e2ac242700013f16fe95687c84316a */
#if BIND_GSourceFuncs_closure_callback_FIELD_WRITER
/* set_closure_callback
 *
 * Parameters:
 * - value: GSourceFunc
 */
mrb_value
mrb_GLib_GSourceFuncs_set_closure_callback(mrb_state* mrb, mrb_value self) {
  struct _GSourceFuncs * native_self = mruby_unbox__GSourceFuncs(self);
  mrb_value closure_callback;

  mrb_get_args(mrb, "o", &closure_callback);

  /* type checking */
  TODO_type_check_GSourceFunc(closure_callback);

  GSourceFunc native_closure_callback = TODO_mruby_unbox_GSourceFunc(closure_callback);

  native_self->closure_callback = native_closure_callback;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSourceFuncs::closure_marshal_reader */
/* sha: 2eb6d642c1ce83f77fcccd9a4440248ddb97a775617f3e232da33500338f1d34 */
#if BIND_GSourceFuncs_closure_marshal_FIELD_READER
/* get_closure_marshal
 *
 * Return Type: GSourceDummyMarshal
 */
mrb_value
mrb_GLib_GSourceFuncs_get_closure_marshal(mrb_state* mrb, mrb_value self) {
  struct _GSourceFuncs * native_self = mruby_unbox__GSourceFuncs(self);

  GSourceDummyMarshal native_closure_marshal = native_self->closure_marshal;

  mrb_value closure_marshal = TODO_mruby_box_GSourceDummyMarshal(mrb, native_closure_marshal);

  return closure_marshal;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSourceFuncs::closure_marshal_writer */
/* sha: 8d3d65c83898dacb40041c8272f7efff31684e48bcd1c6a6d3b12a215a6a428f */
#if BIND_GSourceFuncs_closure_marshal_FIELD_WRITER
/* set_closure_marshal
 *
 * Parameters:
 * - value: GSourceDummyMarshal
 */
mrb_value
mrb_GLib_GSourceFuncs_set_closure_marshal(mrb_state* mrb, mrb_value self) {
  struct _GSourceFuncs * native_self = mruby_unbox__GSourceFuncs(self);
  mrb_value closure_marshal;

  mrb_get_args(mrb, "o", &closure_marshal);

  /* type checking */
  TODO_type_check_GSourceDummyMarshal(closure_marshal);

  GSourceDummyMarshal native_closure_marshal = TODO_mruby_unbox_GSourceDummyMarshal(closure_marshal);

  native_self->closure_marshal = native_closure_marshal;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_GLib_GSourceFuncs_init(mrb_state* mrb) {
/* MRUBY_BINDING: GSourceFuncs::class_definition */
/* sha: ac4aef69e18d652e4731d71a7151614c169197e4ac4b9d1c3a2d67ec87d2aaf8 */
  struct RClass* GSourceFuncs_class = mrb_define_class_under(mrb, GLib_module(mrb), "GSourceFuncs", mrb->object_class);
  MRB_SET_INSTANCE_TT(GSourceFuncs_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSourceFuncs::class_method_definitions */
/* sha: cd56adf248d774a442fac1d911d8b29e049510e7e05a3770017abfb533445caf */
#if BIND_GSourceFuncs_INITIALIZE
  mrb_define_method(mrb, GSourceFuncs_class, "initialize", mrb_GLib_GSourceFuncs_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GSourceFuncs_class, "disown", mrb_GLib_GSourceFuncs_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GSourceFuncs_class, "belongs_to_ruby?", mrb_GLib_GSourceFuncs_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSourceFuncs::attr_definitions */
/* sha: e0567b4ff189054ff27f001a47de81f571559edd1df4c7d1ea72a2645099a213 */
  /*
   * Fields
   */
#if BIND_GSourceFuncs_prepare_FIELD_READER
  mrb_define_method(mrb, GSourceFuncs_class, "prepare", mrb_GLib_GSourceFuncs_get_prepare, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSourceFuncs_prepare_FIELD_WRITER
  mrb_define_method(mrb, GSourceFuncs_class, "prepare=", mrb_GLib_GSourceFuncs_set_prepare, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSourceFuncs_check_FIELD_READER
  mrb_define_method(mrb, GSourceFuncs_class, "check", mrb_GLib_GSourceFuncs_get_check, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSourceFuncs_check_FIELD_WRITER
  mrb_define_method(mrb, GSourceFuncs_class, "check=", mrb_GLib_GSourceFuncs_set_check, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSourceFuncs_dispatch_FIELD_READER
  mrb_define_method(mrb, GSourceFuncs_class, "dispatch", mrb_GLib_GSourceFuncs_get_dispatch, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSourceFuncs_dispatch_FIELD_WRITER
  mrb_define_method(mrb, GSourceFuncs_class, "dispatch=", mrb_GLib_GSourceFuncs_set_dispatch, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSourceFuncs_finalize_FIELD_READER
  mrb_define_method(mrb, GSourceFuncs_class, "finalize", mrb_GLib_GSourceFuncs_get_finalize, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSourceFuncs_finalize_FIELD_WRITER
  mrb_define_method(mrb, GSourceFuncs_class, "finalize=", mrb_GLib_GSourceFuncs_set_finalize, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSourceFuncs_closure_callback_FIELD_READER
  mrb_define_method(mrb, GSourceFuncs_class, "closure_callback", mrb_GLib_GSourceFuncs_get_closure_callback, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSourceFuncs_closure_callback_FIELD_WRITER
  mrb_define_method(mrb, GSourceFuncs_class, "closure_callback=", mrb_GLib_GSourceFuncs_set_closure_callback, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSourceFuncs_closure_marshal_FIELD_READER
  mrb_define_method(mrb, GSourceFuncs_class, "closure_marshal", mrb_GLib_GSourceFuncs_get_closure_marshal, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSourceFuncs_closure_marshal_FIELD_WRITER
  mrb_define_method(mrb, GSourceFuncs_class, "closure_marshal=", mrb_GLib_GSourceFuncs_set_closure_marshal, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSourceFuncs::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
