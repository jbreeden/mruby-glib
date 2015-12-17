/*
 * GVariantMemberInfo
 * Defined in file gvarianttypeinfo.h @ line 111
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_GLib.h"

#if BIND_GVariantMemberInfo_TYPE

/*
 * Class Methods
 */

#if BIND_GVariantMemberInfo_INITIALIZE
mrb_value
mrb_GLib_GVariantMemberInfo_initialize(mrb_state* mrb, mrb_value self) {
  GVariantMemberInfo* native_object = (GVariantMemberInfo*)malloc(sizeof(GVariantMemberInfo));
  mruby_gift_GVariantMemberInfo_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_GVariantMemberInfo_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GVariantMemberInfo.disown only accepts objects of type GLib::GVariantMemberInfo");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_GVariantMemberInfo_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GVariantMemberInfo.belongs_to_ruby only accepts objects of type GLib::GVariantMemberInfo");
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

#if BIND_GVariantMemberInfo_type_info_FIELD_READER
/* get_type_info
 *
 * Return Type: GVariantTypeInfo *
 */
mrb_value
mrb_GLib_GVariantMemberInfo_get_type_info(mrb_state* mrb, mrb_value self) {
  GVariantMemberInfo * native_self = mruby_unbox_GVariantMemberInfo(self);

  GVariantTypeInfo * native_field = native_self->type_info;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box__GVariantTypeInfo(mrb, native_field));

  return ruby_field;
}
#endif

#if BIND_GVariantMemberInfo_type_info_FIELD_WRITER
/* set_type_info
 *
 * Parameters:
 * - value: GVariantTypeInfo *
 */
mrb_value
mrb_GLib_GVariantMemberInfo_set_type_info(mrb_state* mrb, mrb_value self) {
  GVariantMemberInfo * native_self = mruby_unbox_GVariantMemberInfo(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, GVariantTypeInfo_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GVariantTypeInfo expected");
    return mrb_nil_value();
  }

  GVariantTypeInfo * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox__GVariantTypeInfo(ruby_field));

  native_self->type_info = native_field;

  return ruby_field;
}
#endif

#if BIND_GVariantMemberInfo_i_FIELD_READER
/* get_i
 *
 * Return Type: gsize
 */
mrb_value
mrb_GLib_GVariantMemberInfo_get_i(mrb_state* mrb, mrb_value self) {
  GVariantMemberInfo * native_self = mruby_unbox_GVariantMemberInfo(self);

  gsize native_field = native_self->i;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GVariantMemberInfo_i_FIELD_WRITER
/* set_i
 *
 * Parameters:
 * - value: gsize
 */
mrb_value
mrb_GLib_GVariantMemberInfo_set_i(mrb_state* mrb, mrb_value self) {
  GVariantMemberInfo * native_self = mruby_unbox_GVariantMemberInfo(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned long native_field = mrb_fixnum(ruby_field);

  native_self->i = native_field;

  return ruby_field;
}
#endif

#if BIND_GVariantMemberInfo_a_FIELD_READER
/* get_a
 *
 * Return Type: gsize
 */
mrb_value
mrb_GLib_GVariantMemberInfo_get_a(mrb_state* mrb, mrb_value self) {
  GVariantMemberInfo * native_self = mruby_unbox_GVariantMemberInfo(self);

  gsize native_field = native_self->a;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GVariantMemberInfo_a_FIELD_WRITER
/* set_a
 *
 * Parameters:
 * - value: gsize
 */
mrb_value
mrb_GLib_GVariantMemberInfo_set_a(mrb_state* mrb, mrb_value self) {
  GVariantMemberInfo * native_self = mruby_unbox_GVariantMemberInfo(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned long native_field = mrb_fixnum(ruby_field);

  native_self->a = native_field;

  return ruby_field;
}
#endif

#if BIND_GVariantMemberInfo_b_FIELD_READER
/* get_b
 *
 * Return Type: gint8
 */
mrb_value
mrb_GLib_GVariantMemberInfo_get_b(mrb_state* mrb, mrb_value self) {
  GVariantMemberInfo * native_self = mruby_unbox_GVariantMemberInfo(self);

  gint8 native_field = native_self->b;

  mrb_value ruby_field = TODO_mruby_box_gint8(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GVariantMemberInfo_b_FIELD_WRITER
/* set_b
 *
 * Parameters:
 * - value: gint8
 */
mrb_value
mrb_GLib_GVariantMemberInfo_set_b(mrb_state* mrb, mrb_value self) {
  GVariantMemberInfo * native_self = mruby_unbox_GVariantMemberInfo(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_gint8(ruby_field);

  gint8 native_field = TODO_mruby_unbox_gint8(ruby_field);

  native_self->b = native_field;

  return ruby_field;
}
#endif

#if BIND_GVariantMemberInfo_c_FIELD_READER
/* get_c
 *
 * Return Type: gint8
 */
mrb_value
mrb_GLib_GVariantMemberInfo_get_c(mrb_state* mrb, mrb_value self) {
  GVariantMemberInfo * native_self = mruby_unbox_GVariantMemberInfo(self);

  gint8 native_field = native_self->c;

  mrb_value ruby_field = TODO_mruby_box_gint8(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GVariantMemberInfo_c_FIELD_WRITER
/* set_c
 *
 * Parameters:
 * - value: gint8
 */
mrb_value
mrb_GLib_GVariantMemberInfo_set_c(mrb_state* mrb, mrb_value self) {
  GVariantMemberInfo * native_self = mruby_unbox_GVariantMemberInfo(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_gint8(ruby_field);

  gint8 native_field = TODO_mruby_unbox_gint8(ruby_field);

  native_self->c = native_field;

  return ruby_field;
}
#endif

#if BIND_GVariantMemberInfo_ending_type_FIELD_READER
/* get_ending_type
 *
 * Return Type: guint8
 */
mrb_value
mrb_GLib_GVariantMemberInfo_get_ending_type(mrb_state* mrb, mrb_value self) {
  GVariantMemberInfo * native_self = mruby_unbox_GVariantMemberInfo(self);

  guint8 native_field = native_self->ending_type;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GVariantMemberInfo_ending_type_FIELD_WRITER
/* set_ending_type
 *
 * Parameters:
 * - value: guint8
 */
mrb_value
mrb_GLib_GVariantMemberInfo_set_ending_type(mrb_state* mrb, mrb_value self) {
  GVariantMemberInfo * native_self = mruby_unbox_GVariantMemberInfo(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned char native_field = mrb_fixnum(ruby_field);

  native_self->ending_type = native_field;

  return ruby_field;
}
#endif


void mrb_GLib_GVariantMemberInfo_init(mrb_state* mrb) {
  struct RClass* GVariantMemberInfo_class = mrb_define_class_under(mrb, GLib_module(mrb), "GVariantMemberInfo", mrb->object_class);
  MRB_SET_INSTANCE_TT(GVariantMemberInfo_class, MRB_TT_DATA);

#if BIND_GVariantMemberInfo_INITIALIZE
  mrb_define_method(mrb, GVariantMemberInfo_class, "initialize", mrb_GLib_GVariantMemberInfo_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GVariantMemberInfo_class, "disown", mrb_GLib_GVariantMemberInfo_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GVariantMemberInfo_class, "belongs_to_ruby?", mrb_GLib_GVariantMemberInfo_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GVariantMemberInfo_type_info_FIELD_READER
  mrb_define_method(mrb, GVariantMemberInfo_class, "type_info", mrb_GLib_GVariantMemberInfo_get_type_info, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GVariantMemberInfo_type_info_FIELD_WRITER
  mrb_define_method(mrb, GVariantMemberInfo_class, "type_info=", mrb_GLib_GVariantMemberInfo_set_type_info, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GVariantMemberInfo_i_FIELD_READER
  mrb_define_method(mrb, GVariantMemberInfo_class, "i", mrb_GLib_GVariantMemberInfo_get_i, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GVariantMemberInfo_i_FIELD_WRITER
  mrb_define_method(mrb, GVariantMemberInfo_class, "i=", mrb_GLib_GVariantMemberInfo_set_i, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GVariantMemberInfo_a_FIELD_READER
  mrb_define_method(mrb, GVariantMemberInfo_class, "a", mrb_GLib_GVariantMemberInfo_get_a, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GVariantMemberInfo_a_FIELD_WRITER
  mrb_define_method(mrb, GVariantMemberInfo_class, "a=", mrb_GLib_GVariantMemberInfo_set_a, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GVariantMemberInfo_b_FIELD_READER
  mrb_define_method(mrb, GVariantMemberInfo_class, "b", mrb_GLib_GVariantMemberInfo_get_b, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GVariantMemberInfo_b_FIELD_WRITER
  mrb_define_method(mrb, GVariantMemberInfo_class, "b=", mrb_GLib_GVariantMemberInfo_set_b, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GVariantMemberInfo_c_FIELD_READER
  mrb_define_method(mrb, GVariantMemberInfo_class, "c", mrb_GLib_GVariantMemberInfo_get_c, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GVariantMemberInfo_c_FIELD_WRITER
  mrb_define_method(mrb, GVariantMemberInfo_class, "c=", mrb_GLib_GVariantMemberInfo_set_c, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GVariantMemberInfo_ending_type_FIELD_READER
  mrb_define_method(mrb, GVariantMemberInfo_class, "ending_type", mrb_GLib_GVariantMemberInfo_get_ending_type, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GVariantMemberInfo_ending_type_FIELD_WRITER
  mrb_define_method(mrb, GVariantMemberInfo_class, "ending_type=", mrb_GLib_GVariantMemberInfo_set_ending_type, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
