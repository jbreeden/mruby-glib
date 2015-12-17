/*
 * decomposition
 * Defined in file gunidecomp.h @ line 2238
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_GLib.h"

#if BIND_Decomposition_TYPE

/*
 * Class Methods
 */

#if BIND_Decomposition_INITIALIZE
mrb_value
mrb_GLib_Decomposition_initialize(mrb_state* mrb, mrb_value self) {
  decomposition* native_object = (decomposition*)malloc(sizeof(decomposition));
  mruby_gift_decomposition_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_Decomposition_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::Decomposition.disown only accepts objects of type GLib::Decomposition");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_Decomposition_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::Decomposition.belongs_to_ruby only accepts objects of type GLib::Decomposition");
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

#if BIND_Decomposition_ch_FIELD_READER
/* get_ch
 *
 * Return Type: int
 */
mrb_value
mrb_GLib_Decomposition_get_ch(mrb_state* mrb, mrb_value self) {
  decomposition * native_self = mruby_unbox_decomposition(self);

  int native_field = native_self->ch;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_Decomposition_ch_FIELD_WRITER
/* set_ch
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_GLib_Decomposition_set_ch(mrb_state* mrb, mrb_value self) {
  decomposition * native_self = mruby_unbox_decomposition(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->ch = native_field;

  return ruby_field;
}
#endif

#if BIND_Decomposition_canon_offset_FIELD_READER
/* get_canon_offset
 *
 * Return Type: int
 */
mrb_value
mrb_GLib_Decomposition_get_canon_offset(mrb_state* mrb, mrb_value self) {
  decomposition * native_self = mruby_unbox_decomposition(self);

  int native_field = native_self->canon_offset;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_Decomposition_canon_offset_FIELD_WRITER
/* set_canon_offset
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_GLib_Decomposition_set_canon_offset(mrb_state* mrb, mrb_value self) {
  decomposition * native_self = mruby_unbox_decomposition(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->canon_offset = native_field;

  return ruby_field;
}
#endif

#if BIND_Decomposition_compat_offset_FIELD_READER
/* get_compat_offset
 *
 * Return Type: int
 */
mrb_value
mrb_GLib_Decomposition_get_compat_offset(mrb_state* mrb, mrb_value self) {
  decomposition * native_self = mruby_unbox_decomposition(self);

  int native_field = native_self->compat_offset;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_Decomposition_compat_offset_FIELD_WRITER
/* set_compat_offset
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_GLib_Decomposition_set_compat_offset(mrb_state* mrb, mrb_value self) {
  decomposition * native_self = mruby_unbox_decomposition(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->compat_offset = native_field;

  return ruby_field;
}
#endif


void mrb_GLib_Decomposition_init(mrb_state* mrb) {
  struct RClass* Decomposition_class = mrb_define_class_under(mrb, GLib_module(mrb), "Decomposition", mrb->object_class);
  MRB_SET_INSTANCE_TT(Decomposition_class, MRB_TT_DATA);

#if BIND_Decomposition_INITIALIZE
  mrb_define_method(mrb, Decomposition_class, "initialize", mrb_GLib_Decomposition_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Decomposition_class, "disown", mrb_GLib_Decomposition_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Decomposition_class, "belongs_to_ruby?", mrb_GLib_Decomposition_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_Decomposition_ch_FIELD_READER
  mrb_define_method(mrb, Decomposition_class, "ch", mrb_GLib_Decomposition_get_ch, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Decomposition_ch_FIELD_WRITER
  mrb_define_method(mrb, Decomposition_class, "ch=", mrb_GLib_Decomposition_set_ch, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Decomposition_canon_offset_FIELD_READER
  mrb_define_method(mrb, Decomposition_class, "canon_offset", mrb_GLib_Decomposition_get_canon_offset, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Decomposition_canon_offset_FIELD_WRITER
  mrb_define_method(mrb, Decomposition_class, "canon_offset=", mrb_GLib_Decomposition_set_canon_offset, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Decomposition_compat_offset_FIELD_READER
  mrb_define_method(mrb, Decomposition_class, "compat_offset", mrb_GLib_Decomposition_get_compat_offset, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Decomposition_compat_offset_FIELD_WRITER
  mrb_define_method(mrb, Decomposition_class, "compat_offset=", mrb_GLib_Decomposition_set_compat_offset, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
