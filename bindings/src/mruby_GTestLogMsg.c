/*
 * GTestLogMsg
 * Defined in file gtestutils.h @ line 368
 */

#include "mruby_GLib.h"

#if BIND_GTestLogMsg_TYPE

/*
 * Class Methods
 */

#if BIND_GTestLogMsg_INITIALIZE
mrb_value
mrb_GLib_GTestLogMsg_initialize(mrb_state* mrb, mrb_value self) {
  GTestLogMsg* native_object = (GTestLogMsg*)calloc(1, sizeof(GTestLogMsg));
  mruby_gift_GTestLogMsg_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_GTestLogMsg_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTestLogMsg.disown only accepts objects of type GLib::GTestLogMsg");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_GTestLogMsg_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTestLogMsg.belongs_to_ruby only accepts objects of type GLib::GTestLogMsg");
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

#if BIND_GTestLogMsg_log_type_FIELD_READER
/* get_log_type
 *
 * Return Type: GTestLogType
 */
mrb_value
mrb_GLib_GTestLogMsg_get_log_type(mrb_state* mrb, mrb_value self) {
  GTestLogMsg * native_self = mruby_unbox_GTestLogMsg(self);

  GTestLogType native_log_type = native_self->log_type;

  mrb_value log_type = mrb_fixnum_value(native_log_type);

  return log_type;
}
#endif

#if BIND_GTestLogMsg_log_type_FIELD_WRITER
/* set_log_type
 *
 * Parameters:
 * - value: GTestLogType
 */
mrb_value
mrb_GLib_GTestLogMsg_set_log_type(mrb_state* mrb, mrb_value self) {
  GTestLogMsg * native_self = mruby_unbox_GTestLogMsg(self);
  mrb_int native_log_type;

  mrb_get_args(mrb, "i", &native_log_type);

  native_self->log_type = native_log_type;
  

  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GTestLogMsg_n_strings_FIELD_READER
/* get_n_strings
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GTestLogMsg_get_n_strings(mrb_state* mrb, mrb_value self) {
  GTestLogMsg * native_self = mruby_unbox_GTestLogMsg(self);

  guint native_n_strings = native_self->n_strings;

  mrb_value n_strings = mrb_fixnum_value(native_n_strings);

  return n_strings;
}
#endif

#if BIND_GTestLogMsg_n_strings_FIELD_WRITER
/* set_n_strings
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GTestLogMsg_set_n_strings(mrb_state* mrb, mrb_value self) {
  GTestLogMsg * native_self = mruby_unbox_GTestLogMsg(self);
  mrb_int native_n_strings;

  mrb_get_args(mrb, "i", &native_n_strings);

  native_self->n_strings = native_n_strings;
  

  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GTestLogMsg_strings_FIELD_READER
/* get_strings
 *
 * Return Type: gchar **
 */
mrb_value
mrb_GLib_GTestLogMsg_get_strings(mrb_state* mrb, mrb_value self) {
  GTestLogMsg * native_self = mruby_unbox_GTestLogMsg(self);

  gchar ** native_strings = native_self->strings;

  mrb_value strings = TODO_mruby_box_gchar_PTR_PTR(mrb, native_strings);

  return strings;
}
#endif

#if BIND_GTestLogMsg_strings_FIELD_WRITER
/* set_strings
 *
 * Parameters:
 * - value: gchar **
 */
mrb_value
mrb_GLib_GTestLogMsg_set_strings(mrb_state* mrb, mrb_value self) {
  GTestLogMsg * native_self = mruby_unbox_GTestLogMsg(self);
  mrb_value strings;

  mrb_get_args(mrb, "o", &strings);

  /* type checking */
  TODO_type_check_gchar_PTR_PTR(strings);

  gchar ** native_strings = TODO_mruby_unbox_gchar_PTR_PTR(strings);

  native_self->strings = native_strings;
  

  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GTestLogMsg_n_nums_FIELD_READER
/* get_n_nums
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GTestLogMsg_get_n_nums(mrb_state* mrb, mrb_value self) {
  GTestLogMsg * native_self = mruby_unbox_GTestLogMsg(self);

  guint native_n_nums = native_self->n_nums;

  mrb_value n_nums = mrb_fixnum_value(native_n_nums);

  return n_nums;
}
#endif

#if BIND_GTestLogMsg_n_nums_FIELD_WRITER
/* set_n_nums
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GTestLogMsg_set_n_nums(mrb_state* mrb, mrb_value self) {
  GTestLogMsg * native_self = mruby_unbox_GTestLogMsg(self);
  mrb_int native_n_nums;

  mrb_get_args(mrb, "i", &native_n_nums);

  native_self->n_nums = native_n_nums;
  

  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GTestLogMsg_nums_FIELD_READER
/* get_nums
 *
 * Return Type: long double *
 */
mrb_value
mrb_GLib_GTestLogMsg_get_nums(mrb_state* mrb, mrb_value self) {
  GTestLogMsg * native_self = mruby_unbox_GTestLogMsg(self);

  long double * native_nums = native_self->nums;

  mrb_value nums = TODO_mruby_box_long_double_PTR(mrb, native_nums);

  return nums;
}
#endif

#if BIND_GTestLogMsg_nums_FIELD_WRITER
/* set_nums
 *
 * Parameters:
 * - value: long double *
 */
mrb_value
mrb_GLib_GTestLogMsg_set_nums(mrb_state* mrb, mrb_value self) {
  GTestLogMsg * native_self = mruby_unbox_GTestLogMsg(self);
  mrb_value nums;

  mrb_get_args(mrb, "o", &nums);

  /* type checking */
  TODO_type_check_long_double_PTR(nums);

  long double * native_nums = TODO_mruby_unbox_long_double_PTR(nums);

  native_self->nums = native_nums;
  

  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif


void mrb_GLib_GTestLogMsg_init(mrb_state* mrb) {
  struct RClass* GTestLogMsg_class = mrb_define_class_under(mrb, GLib_module(mrb), "GTestLogMsg", mrb->object_class);
  MRB_SET_INSTANCE_TT(GTestLogMsg_class, MRB_TT_DATA);

#if BIND_GTestLogMsg_INITIALIZE
  mrb_define_method(mrb, GTestLogMsg_class, "initialize", mrb_GLib_GTestLogMsg_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GTestLogMsg_class, "disown", mrb_GLib_GTestLogMsg_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GTestLogMsg_class, "belongs_to_ruby?", mrb_GLib_GTestLogMsg_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GTestLogMsg_log_type_FIELD_READER
  mrb_define_method(mrb, GTestLogMsg_class, "log_type", mrb_GLib_GTestLogMsg_get_log_type, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GTestLogMsg_log_type_FIELD_WRITER
  mrb_define_method(mrb, GTestLogMsg_class, "log_type=", mrb_GLib_GTestLogMsg_set_log_type, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GTestLogMsg_n_strings_FIELD_READER
  mrb_define_method(mrb, GTestLogMsg_class, "n_strings", mrb_GLib_GTestLogMsg_get_n_strings, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GTestLogMsg_n_strings_FIELD_WRITER
  mrb_define_method(mrb, GTestLogMsg_class, "n_strings=", mrb_GLib_GTestLogMsg_set_n_strings, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GTestLogMsg_strings_FIELD_READER
  mrb_define_method(mrb, GTestLogMsg_class, "strings", mrb_GLib_GTestLogMsg_get_strings, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GTestLogMsg_strings_FIELD_WRITER
  mrb_define_method(mrb, GTestLogMsg_class, "strings=", mrb_GLib_GTestLogMsg_set_strings, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GTestLogMsg_n_nums_FIELD_READER
  mrb_define_method(mrb, GTestLogMsg_class, "n_nums", mrb_GLib_GTestLogMsg_get_n_nums, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GTestLogMsg_n_nums_FIELD_WRITER
  mrb_define_method(mrb, GTestLogMsg_class, "n_nums=", mrb_GLib_GTestLogMsg_set_n_nums, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GTestLogMsg_nums_FIELD_READER
  mrb_define_method(mrb, GTestLogMsg_class, "nums", mrb_GLib_GTestLogMsg_get_nums, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GTestLogMsg_nums_FIELD_WRITER
  mrb_define_method(mrb, GTestLogMsg_class, "nums=", mrb_GLib_GTestLogMsg_set_nums, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
