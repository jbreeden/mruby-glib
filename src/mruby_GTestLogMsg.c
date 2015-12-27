/*
 * GTestLogMsg
 * Defined in file gtestutils.h @ line 368
 */

#include "mruby_GLib.h"

#if BIND_GTestLogMsg_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GTestLogMsg::initialize */
/* sha: 0e8029ee3fdab635da964b08c513a236e7e4e08f05bd045d0883120b241d6160 */
#if BIND_GTestLogMsg_INITIALIZE
mrb_value
mrb_GLib_GTestLogMsg_initialize(mrb_state* mrb, mrb_value self) {
  GTestLogMsg* native_object = (GTestLogMsg*)calloc(1, sizeof(GTestLogMsg));
  mruby_giftwrap_GTestLogMsg_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestLogMsg::initialize */
/* sha: 37f15f91b0f30a731f5dbf5184f402ac7b791aa444459cda837acce8e6b58d43 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestLogMsg::belongs_to_ruby */
/* sha: dd2a28d2bba2adfccaec6fb26f440dad5853e4091cdb928afaa35f552a90642f */
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
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: GTestLogMsg::log_type_reader */
/* sha: 24630eaf835300a01e878eb3f279c1f3874d5d81b4e777e996ed039710915ecd */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestLogMsg::log_type_writer */
/* sha: 4cc60eadc66636448660d9d9d3eaa2f8a84bd3a5b12bcbbdd060327eb5889e2b */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestLogMsg::n_strings_reader */
/* sha: 66501b25037c1797c983f2a74e2511ee2e6e2b04e98972a355b2168e1c8eab1b */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestLogMsg::n_strings_writer */
/* sha: dea0700ca691e86aff79094b7ad1f5c9d32b9e129fe98bd0f1393b419fc650ef */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestLogMsg::strings_reader */
/* sha: 3a5b51aba96e1016c716e9cfadf58d44802a102d04a52193dcd635a1e234db59 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestLogMsg::strings_writer */
/* sha: d6bd86e577f6d96c714d4554574a0c6e40bf5ea842e1b412ed0473d2359d65c8 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestLogMsg::n_nums_reader */
/* sha: 5f52de6191d2c7029710f279d5e24b171f1c39935a76f269b79a81ba028c87a8 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestLogMsg::n_nums_writer */
/* sha: 5c9b9c9b517e21ae87f6f9c4f22764373bfa00bfa6c64fea1c0b7e853404da65 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestLogMsg::nums_reader */
/* sha: 264ac9e0ffa2d8769423646e91a93b29117d79181c5fe5610560301a85ae556f */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestLogMsg::nums_writer */
/* sha: 57823cd18b3bd4d4fd47d5be69a18d319cadca8c4b84581e352715e552d4bb10 */
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
/* MRUBY_BINDING_END */


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
