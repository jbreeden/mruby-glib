/*
 * struct _GHashTableIter
 * Defined in file ghash.h @ line 43
 */

#include "mruby_GLib.h"

#if BIND_GHashTableIter_TYPE

/*
 * Class Methods
 */

#if BIND_GHashTableIter_INITIALIZE
mrb_value
mrb_GLib_GHashTableIter_initialize(mrb_state* mrb, mrb_value self) {
  struct _GHashTableIter* native_object = (struct _GHashTableIter*)calloc(1, sizeof(struct _GHashTableIter));
  mruby_giftwrap__GHashTableIter_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_GHashTableIter_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GHashTableIter.disown only accepts objects of type GLib::GHashTableIter");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_GHashTableIter_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GHashTableIter.belongs_to_ruby only accepts objects of type GLib::GHashTableIter");
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

#if BIND_GHashTableIter_dummy1_FIELD_READER
/* get_dummy1
 *
 * Return Type: gpointer
 */
mrb_value
mrb_GLib_GHashTableIter_get_dummy1(mrb_state* mrb, mrb_value self) {
  struct _GHashTableIter * native_self = mruby_unbox__GHashTableIter(self);

  gpointer native_dummy1 = native_self->dummy1;

  mrb_value dummy1 = TODO_mruby_box_gpointer(mrb, native_dummy1);

  return dummy1;
}
#endif

#if BIND_GHashTableIter_dummy1_FIELD_WRITER
/* set_dummy1
 *
 * Parameters:
 * - value: gpointer
 */
mrb_value
mrb_GLib_GHashTableIter_set_dummy1(mrb_state* mrb, mrb_value self) {
  struct _GHashTableIter * native_self = mruby_unbox__GHashTableIter(self);
  mrb_value dummy1;

  mrb_get_args(mrb, "o", &dummy1);

  /* type checking */
  TODO_type_check_gpointer(dummy1);

  gpointer native_dummy1 = TODO_mruby_unbox_gpointer(dummy1);

  native_self->dummy1 = native_dummy1;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GHashTableIter_dummy2_FIELD_READER
/* get_dummy2
 *
 * Return Type: gpointer
 */
mrb_value
mrb_GLib_GHashTableIter_get_dummy2(mrb_state* mrb, mrb_value self) {
  struct _GHashTableIter * native_self = mruby_unbox__GHashTableIter(self);

  gpointer native_dummy2 = native_self->dummy2;

  mrb_value dummy2 = TODO_mruby_box_gpointer(mrb, native_dummy2);

  return dummy2;
}
#endif

#if BIND_GHashTableIter_dummy2_FIELD_WRITER
/* set_dummy2
 *
 * Parameters:
 * - value: gpointer
 */
mrb_value
mrb_GLib_GHashTableIter_set_dummy2(mrb_state* mrb, mrb_value self) {
  struct _GHashTableIter * native_self = mruby_unbox__GHashTableIter(self);
  mrb_value dummy2;

  mrb_get_args(mrb, "o", &dummy2);

  /* type checking */
  TODO_type_check_gpointer(dummy2);

  gpointer native_dummy2 = TODO_mruby_unbox_gpointer(dummy2);

  native_self->dummy2 = native_dummy2;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GHashTableIter_dummy3_FIELD_READER
/* get_dummy3
 *
 * Return Type: gpointer
 */
mrb_value
mrb_GLib_GHashTableIter_get_dummy3(mrb_state* mrb, mrb_value self) {
  struct _GHashTableIter * native_self = mruby_unbox__GHashTableIter(self);

  gpointer native_dummy3 = native_self->dummy3;

  mrb_value dummy3 = TODO_mruby_box_gpointer(mrb, native_dummy3);

  return dummy3;
}
#endif

#if BIND_GHashTableIter_dummy3_FIELD_WRITER
/* set_dummy3
 *
 * Parameters:
 * - value: gpointer
 */
mrb_value
mrb_GLib_GHashTableIter_set_dummy3(mrb_state* mrb, mrb_value self) {
  struct _GHashTableIter * native_self = mruby_unbox__GHashTableIter(self);
  mrb_value dummy3;

  mrb_get_args(mrb, "o", &dummy3);

  /* type checking */
  TODO_type_check_gpointer(dummy3);

  gpointer native_dummy3 = TODO_mruby_unbox_gpointer(dummy3);

  native_self->dummy3 = native_dummy3;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GHashTableIter_dummy4_FIELD_READER
/* get_dummy4
 *
 * Return Type: int
 */
mrb_value
mrb_GLib_GHashTableIter_get_dummy4(mrb_state* mrb, mrb_value self) {
  struct _GHashTableIter * native_self = mruby_unbox__GHashTableIter(self);

  int native_dummy4 = native_self->dummy4;

  mrb_value dummy4 = mrb_fixnum_value(native_dummy4);

  return dummy4;
}
#endif

#if BIND_GHashTableIter_dummy4_FIELD_WRITER
/* set_dummy4
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_GLib_GHashTableIter_set_dummy4(mrb_state* mrb, mrb_value self) {
  struct _GHashTableIter * native_self = mruby_unbox__GHashTableIter(self);
  mrb_int native_dummy4;

  mrb_get_args(mrb, "i", &native_dummy4);

  native_self->dummy4 = native_dummy4;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GHashTableIter_dummy5_FIELD_READER
/* get_dummy5
 *
 * Return Type: gboolean
 */
mrb_value
mrb_GLib_GHashTableIter_get_dummy5(mrb_state* mrb, mrb_value self) {
  struct _GHashTableIter * native_self = mruby_unbox__GHashTableIter(self);

  gboolean native_dummy5 = native_self->dummy5;

  mrb_value dummy5 = mrb_bool_value(native_dummy5);

  return dummy5;
}
#endif

#if BIND_GHashTableIter_dummy5_FIELD_WRITER
/* set_dummy5
 *
 * Parameters:
 * - value: gboolean
 */
mrb_value
mrb_GLib_GHashTableIter_set_dummy5(mrb_state* mrb, mrb_value self) {
  struct _GHashTableIter * native_self = mruby_unbox__GHashTableIter(self);
  mrb_bool native_dummy5;

  mrb_get_args(mrb, "b", &native_dummy5);

  native_self->dummy5 = native_dummy5;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GHashTableIter_dummy6_FIELD_READER
/* get_dummy6
 *
 * Return Type: gpointer
 */
mrb_value
mrb_GLib_GHashTableIter_get_dummy6(mrb_state* mrb, mrb_value self) {
  struct _GHashTableIter * native_self = mruby_unbox__GHashTableIter(self);

  gpointer native_dummy6 = native_self->dummy6;

  mrb_value dummy6 = TODO_mruby_box_gpointer(mrb, native_dummy6);

  return dummy6;
}
#endif

#if BIND_GHashTableIter_dummy6_FIELD_WRITER
/* set_dummy6
 *
 * Parameters:
 * - value: gpointer
 */
mrb_value
mrb_GLib_GHashTableIter_set_dummy6(mrb_state* mrb, mrb_value self) {
  struct _GHashTableIter * native_self = mruby_unbox__GHashTableIter(self);
  mrb_value dummy6;

  mrb_get_args(mrb, "o", &dummy6);

  /* type checking */
  TODO_type_check_gpointer(dummy6);

  gpointer native_dummy6 = TODO_mruby_unbox_gpointer(dummy6);

  native_self->dummy6 = native_dummy6;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif


void mrb_GLib_GHashTableIter_init(mrb_state* mrb) {
  struct RClass* GHashTableIter_class = mrb_define_class_under(mrb, GLib_module(mrb), "GHashTableIter", mrb->object_class);
  MRB_SET_INSTANCE_TT(GHashTableIter_class, MRB_TT_DATA);

#if BIND_GHashTableIter_INITIALIZE
  mrb_define_method(mrb, GHashTableIter_class, "initialize", mrb_GLib_GHashTableIter_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GHashTableIter_class, "disown", mrb_GLib_GHashTableIter_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GHashTableIter_class, "belongs_to_ruby?", mrb_GLib_GHashTableIter_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GHashTableIter_dummy1_FIELD_READER
  mrb_define_method(mrb, GHashTableIter_class, "dummy1", mrb_GLib_GHashTableIter_get_dummy1, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GHashTableIter_dummy1_FIELD_WRITER
  mrb_define_method(mrb, GHashTableIter_class, "dummy1=", mrb_GLib_GHashTableIter_set_dummy1, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GHashTableIter_dummy2_FIELD_READER
  mrb_define_method(mrb, GHashTableIter_class, "dummy2", mrb_GLib_GHashTableIter_get_dummy2, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GHashTableIter_dummy2_FIELD_WRITER
  mrb_define_method(mrb, GHashTableIter_class, "dummy2=", mrb_GLib_GHashTableIter_set_dummy2, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GHashTableIter_dummy3_FIELD_READER
  mrb_define_method(mrb, GHashTableIter_class, "dummy3", mrb_GLib_GHashTableIter_get_dummy3, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GHashTableIter_dummy3_FIELD_WRITER
  mrb_define_method(mrb, GHashTableIter_class, "dummy3=", mrb_GLib_GHashTableIter_set_dummy3, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GHashTableIter_dummy4_FIELD_READER
  mrb_define_method(mrb, GHashTableIter_class, "dummy4", mrb_GLib_GHashTableIter_get_dummy4, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GHashTableIter_dummy4_FIELD_WRITER
  mrb_define_method(mrb, GHashTableIter_class, "dummy4=", mrb_GLib_GHashTableIter_set_dummy4, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GHashTableIter_dummy5_FIELD_READER
  mrb_define_method(mrb, GHashTableIter_class, "dummy5", mrb_GLib_GHashTableIter_get_dummy5, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GHashTableIter_dummy5_FIELD_WRITER
  mrb_define_method(mrb, GHashTableIter_class, "dummy5=", mrb_GLib_GHashTableIter_set_dummy5, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GHashTableIter_dummy6_FIELD_READER
  mrb_define_method(mrb, GHashTableIter_class, "dummy6", mrb_GLib_GHashTableIter_get_dummy6, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GHashTableIter_dummy6_FIELD_WRITER
  mrb_define_method(mrb, GHashTableIter_class, "dummy6=", mrb_GLib_GHashTableIter_set_dummy6, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
