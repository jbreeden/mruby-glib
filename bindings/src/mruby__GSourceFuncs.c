/*
 * struct _GSourceFuncs
 * Defined in file gmain.h @ line 130
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_GLib.h"

#if BIND_GSourceFuncs_TYPE

/*
 * Class Methods
 */

#if BIND_GSourceFuncs_INITIALIZE
mrb_value
mrb_GLib_GSourceFuncs_initialize(mrb_state* mrb, mrb_value self) {
  struct _GSourceFuncs* native_object = (struct _GSourceFuncs*)malloc(sizeof(struct _GSourceFuncs));
  mruby_gift_struct _GSourceFuncs_data_ptr(self, native_object);
  return self;
}
#endif

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

/*
 * Fields
 */

#if BIND_GSourceFuncs_prepare_FIELD_READER
/* get_prepare
 *
 * Return Type: gboolean (*)(GSource *, gint *)
 */
mrb_value
mrb_GLib_GSourceFuncs_get_prepare(mrb_state* mrb, mrb_value self) {
  struct _GSourceFuncs * native_self = mruby_unbox_struct _GSourceFuncs(self);

  gboolean (*)(GSource *, gint *) native_field = native_self->prepare;

  mrb_value ruby_field = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GSource_PTR_COMMA_gint_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GSourceFuncs_prepare_FIELD_WRITER
/* set_prepare
 *
 * Parameters:
 * - value: gboolean (*)(GSource *, gint *)
 */
mrb_value
mrb_GLib_GSourceFuncs_set_prepare(mrb_state* mrb, mrb_value self) {
  struct _GSourceFuncs * native_self = mruby_unbox_struct _GSourceFuncs(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GSource_PTR_COMMA_gint_PTR_RPAREN(ruby_field);

  gboolean (*native_field)(GSource *, gint *) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GSource_PTR_COMMA_gint_PTR_RPAREN(ruby_field);

  native_self->prepare = native_field;

  return ruby_field;
}
#endif

#if BIND_GSourceFuncs_check_FIELD_READER
/* get_check
 *
 * Return Type: gboolean (*)(GSource *)
 */
mrb_value
mrb_GLib_GSourceFuncs_get_check(mrb_state* mrb, mrb_value self) {
  struct _GSourceFuncs * native_self = mruby_unbox_struct _GSourceFuncs(self);

  gboolean (*)(GSource *) native_field = native_self->check;

  mrb_value ruby_field = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GSource_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GSourceFuncs_check_FIELD_WRITER
/* set_check
 *
 * Parameters:
 * - value: gboolean (*)(GSource *)
 */
mrb_value
mrb_GLib_GSourceFuncs_set_check(mrb_state* mrb, mrb_value self) {
  struct _GSourceFuncs * native_self = mruby_unbox_struct _GSourceFuncs(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GSource_PTR_RPAREN(ruby_field);

  gboolean (*native_field)(GSource *) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GSource_PTR_RPAREN(ruby_field);

  native_self->check = native_field;

  return ruby_field;
}
#endif

#if BIND_GSourceFuncs_dispatch_FIELD_READER
/* get_dispatch
 *
 * Return Type: gboolean (*)(GSource *, GSourceFunc, gpointer)
 */
mrb_value
mrb_GLib_GSourceFuncs_get_dispatch(mrb_state* mrb, mrb_value self) {
  struct _GSourceFuncs * native_self = mruby_unbox_struct _GSourceFuncs(self);

  gboolean (*)(GSource *, GSourceFunc, gpointer) native_field = native_self->dispatch;

  mrb_value ruby_field = TODO_mruby_box_gboolean_LPAREN_PTR_RPAREN_LPAREN_GSource_PTR_COMMA_GSourceFuncCOMMA_gpointer_RPAREN(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GSourceFuncs_dispatch_FIELD_WRITER
/* set_dispatch
 *
 * Parameters:
 * - value: gboolean (*)(GSource *, GSourceFunc, gpointer)
 */
mrb_value
mrb_GLib_GSourceFuncs_set_dispatch(mrb_state* mrb, mrb_value self) {
  struct _GSourceFuncs * native_self = mruby_unbox_struct _GSourceFuncs(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_gboolean_LPAREN_PTR_RPAREN_LPAREN_GSource_PTR_COMMA_GSourceFuncCOMMA_gpointer_RPAREN(ruby_field);

  gboolean (*native_field)(GSource *, GSourceFunc, gpointer) = TODO_mruby_unbox_gboolean_LPAREN_PTR_RPAREN_LPAREN_GSource_PTR_COMMA_GSourceFuncCOMMA_gpointer_RPAREN(ruby_field);

  native_self->dispatch = native_field;

  return ruby_field;
}
#endif

#if BIND_GSourceFuncs_finalize_FIELD_READER
/* get_finalize
 *
 * Return Type: void (*)(GSource *)
 */
mrb_value
mrb_GLib_GSourceFuncs_get_finalize(mrb_state* mrb, mrb_value self) {
  struct _GSourceFuncs * native_self = mruby_unbox_struct _GSourceFuncs(self);

  void (*)(GSource *) native_field = native_self->finalize;

  mrb_value ruby_field = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_GSource_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GSourceFuncs_finalize_FIELD_WRITER
/* set_finalize
 *
 * Parameters:
 * - value: void (*)(GSource *)
 */
mrb_value
mrb_GLib_GSourceFuncs_set_finalize(mrb_state* mrb, mrb_value self) {
  struct _GSourceFuncs * native_self = mruby_unbox_struct _GSourceFuncs(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_GSource_PTR_RPAREN(ruby_field);

  void (*native_field)(GSource *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_GSource_PTR_RPAREN(ruby_field);

  native_self->finalize = native_field;

  return ruby_field;
}
#endif

#if BIND_GSourceFuncs_closure_callback_FIELD_READER
/* get_closure_callback
 *
 * Return Type: GSourceFunc
 */
mrb_value
mrb_GLib_GSourceFuncs_get_closure_callback(mrb_state* mrb, mrb_value self) {
  struct _GSourceFuncs * native_self = mruby_unbox_struct _GSourceFuncs(self);

  GSourceFunc native_field = native_self->closure_callback;

  mrb_value ruby_field = TODO_mruby_box_GSourceFunc(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GSourceFuncs_closure_callback_FIELD_WRITER
/* set_closure_callback
 *
 * Parameters:
 * - value: GSourceFunc
 */
mrb_value
mrb_GLib_GSourceFuncs_set_closure_callback(mrb_state* mrb, mrb_value self) {
  struct _GSourceFuncs * native_self = mruby_unbox_struct _GSourceFuncs(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_GSourceFunc(ruby_field);

  GSourceFunc native_field = TODO_mruby_unbox_GSourceFunc(ruby_field);

  native_self->closure_callback = native_field;

  return ruby_field;
}
#endif

#if BIND_GSourceFuncs_closure_marshal_FIELD_READER
/* get_closure_marshal
 *
 * Return Type: GSourceDummyMarshal
 */
mrb_value
mrb_GLib_GSourceFuncs_get_closure_marshal(mrb_state* mrb, mrb_value self) {
  struct _GSourceFuncs * native_self = mruby_unbox_struct _GSourceFuncs(self);

  GSourceDummyMarshal native_field = native_self->closure_marshal;

  mrb_value ruby_field = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GSourceFuncs_closure_marshal_FIELD_WRITER
/* set_closure_marshal
 *
 * Parameters:
 * - value: GSourceDummyMarshal
 */
mrb_value
mrb_GLib_GSourceFuncs_set_closure_marshal(mrb_state* mrb, mrb_value self) {
  struct _GSourceFuncs * native_self = mruby_unbox_struct _GSourceFuncs(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(ruby_field);

  void (*native_field)(void) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(ruby_field);

  native_self->closure_marshal = native_field;

  return ruby_field;
}
#endif


void mrb_GLib_GSourceFuncs_init(mrb_state* mrb) {
  struct RClass* GSourceFuncs_class = mrb_define_class_under(mrb, GLib_module(mrb), "GSourceFuncs", mrb->object_class);
  MRB_SET_INSTANCE_TT(GSourceFuncs_class, MRB_TT_DATA);

#if BIND_GSourceFuncs_INITIALIZE
  mrb_define_method(mrb, GSourceFuncs_class, "initialize", mrb_GLib_GSourceFuncs_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GSourceFuncs_class, "disown", mrb_GLib_GSourceFuncs_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GSourceFuncs_class, "belongs_to_ruby?", mrb_GLib_GSourceFuncs_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

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

}

#endif
