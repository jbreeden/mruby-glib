/*
 * struct _GTimeVal
 * Defined in file gtypes.h @ line 449
 */

#include "mruby_GLib.h"

#if BIND_GTimeVal_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GTimeVal::initialize */
/* sha: b2da67fc1e9de0d4c2bd2cc4676c3959fc41f891984c8e68577cfd58b66bce8f */
#if BIND_GTimeVal_INITIALIZE
mrb_value
mrb_GLib_GTimeVal_initialize(mrb_state* mrb, mrb_value self) {
  struct _GTimeVal* native_object = (struct _GTimeVal*)calloc(1, sizeof(struct _GTimeVal));
  mruby_giftwrap__GTimeVal_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTimeVal::initialize */
/* sha: 864a66a276484459113d9c6c4e3e84569bcd0f5899c1a73ff768ef9d7ed726bc */
mrb_value
mrb_GLib_GTimeVal_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTimeVal.disown only accepts objects of type GLib::GTimeVal");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTimeVal::belongs_to_ruby */
/* sha: c68e1d0d8ac8b6eb69768937cdf9df4b963b046e250a9e7d89788b37d5f726a1 */
mrb_value
mrb_GLib_GTimeVal_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTimeVal.belongs_to_ruby only accepts objects of type GLib::GTimeVal");
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

/* MRUBY_BINDING: GTimeVal::tv_sec_reader */
/* sha: 68c4c3def6e76969ed8918f8446ee2f20dbd531209eae26b3fb5ba40638de70c */
#if BIND_GTimeVal_tv_sec_FIELD_READER
/* get_tv_sec
 *
 * Return Type: glong
 */
mrb_value
mrb_GLib_GTimeVal_get_tv_sec(mrb_state* mrb, mrb_value self) {
  struct _GTimeVal * native_self = mruby_unbox__GTimeVal(self);

  glong native_tv_sec = native_self->tv_sec;

  mrb_value tv_sec = mrb_fixnum_value(native_tv_sec);

  return tv_sec;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTimeVal::tv_sec_writer */
/* sha: bec3b36701d93b81c684c1dec2d32ef00e0d992babf9c20962407d8ecf9a2b64 */
#if BIND_GTimeVal_tv_sec_FIELD_WRITER
/* set_tv_sec
 *
 * Parameters:
 * - value: glong
 */
mrb_value
mrb_GLib_GTimeVal_set_tv_sec(mrb_state* mrb, mrb_value self) {
  struct _GTimeVal * native_self = mruby_unbox__GTimeVal(self);
  mrb_int native_tv_sec;

  mrb_get_args(mrb, "i", &native_tv_sec);

  native_self->tv_sec = native_tv_sec;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTimeVal::tv_usec_reader */
/* sha: 771bf499ca69eed60adf6722d5b60541e3cd6ea40c3b505908521bc71e4b573c */
#if BIND_GTimeVal_tv_usec_FIELD_READER
/* get_tv_usec
 *
 * Return Type: glong
 */
mrb_value
mrb_GLib_GTimeVal_get_tv_usec(mrb_state* mrb, mrb_value self) {
  struct _GTimeVal * native_self = mruby_unbox__GTimeVal(self);

  glong native_tv_usec = native_self->tv_usec;

  mrb_value tv_usec = mrb_fixnum_value(native_tv_usec);

  return tv_usec;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTimeVal::tv_usec_writer */
/* sha: a15049bc9c4f8c4ec19a240052aefe6897e5706a78e4bdc3f8b88d6bab25b79f */
#if BIND_GTimeVal_tv_usec_FIELD_WRITER
/* set_tv_usec
 *
 * Parameters:
 * - value: glong
 */
mrb_value
mrb_GLib_GTimeVal_set_tv_usec(mrb_state* mrb, mrb_value self) {
  struct _GTimeVal * native_self = mruby_unbox__GTimeVal(self);
  mrb_int native_tv_usec;

  mrb_get_args(mrb, "i", &native_tv_usec);

  native_self->tv_usec = native_tv_usec;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_GLib_GTimeVal_init(mrb_state* mrb) {
  struct RClass* GTimeVal_class = mrb_define_class_under(mrb, GLib_module(mrb), "GTimeVal", mrb->object_class);
  MRB_SET_INSTANCE_TT(GTimeVal_class, MRB_TT_DATA);

#if BIND_GTimeVal_INITIALIZE
  mrb_define_method(mrb, GTimeVal_class, "initialize", mrb_GLib_GTimeVal_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GTimeVal_class, "disown", mrb_GLib_GTimeVal_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GTimeVal_class, "belongs_to_ruby?", mrb_GLib_GTimeVal_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GTimeVal_tv_sec_FIELD_READER
  mrb_define_method(mrb, GTimeVal_class, "tv_sec", mrb_GLib_GTimeVal_get_tv_sec, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GTimeVal_tv_sec_FIELD_WRITER
  mrb_define_method(mrb, GTimeVal_class, "tv_sec=", mrb_GLib_GTimeVal_set_tv_sec, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GTimeVal_tv_usec_FIELD_READER
  mrb_define_method(mrb, GTimeVal_class, "tv_usec", mrb_GLib_GTimeVal_get_tv_usec, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GTimeVal_tv_usec_FIELD_WRITER
  mrb_define_method(mrb, GTimeVal_class, "tv_usec=", mrb_GLib_GTimeVal_set_tv_usec, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
