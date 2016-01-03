/*
 * struct _GPrivate
 * Defined in file gthread.h @ line 55
 */

#include "mruby_GLib.h"

#if BIND_GPrivate_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GPrivate::initialize */
/* sha: 55aa2e3f9bcd6302d5cc0389616ea249eb896384b84bd3e5e76d0db5d3476dd5 */
#if BIND_GPrivate_INITIALIZE
mrb_value
mrb_GLib_GPrivate_initialize(mrb_state* mrb, mrb_value self) {
  struct _GPrivate* native_object = (struct _GPrivate*)calloc(1, sizeof(struct _GPrivate));
  mruby_giftwrap__GPrivate_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GPrivate::initialize */
/* sha: c0265cec252162f8d47be8061e8ddff6d20849aa54c04a260bcce79de39a3ac5 */
mrb_value
mrb_GLib_GPrivate_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GPrivate.disown only accepts objects of type GLib::GPrivate");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GPrivate::belongs_to_ruby */
/* sha: e4a007052cb1a68c29089688f2f4cedb2b53ddf2f5f355dac935806d1c3f48f7 */
mrb_value
mrb_GLib_GPrivate_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GPrivate.belongs_to_ruby only accepts objects of type GLib::GPrivate");
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

/* MRUBY_BINDING: GPrivate::p_reader */
/* sha: 52079274f4cbb3e37a1a392687c354ead7b88bd3bbc452ee83b10aaae3c652ff */
#if BIND_GPrivate_p_FIELD_READER
/* get_p
 *
 * Return Type: gpointer
 */
mrb_value
mrb_GLib_GPrivate_get_p(mrb_state* mrb, mrb_value self) {
  struct _GPrivate * native_self = mruby_unbox__GPrivate(self);

  gpointer native_p = native_self->p;

  mrb_value p = TODO_mruby_box_gpointer(mrb, native_p);

  return p;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GPrivate::p_writer */
/* sha: 64100234320005761c0eb415f0e73b3915462b3b07f5f7265ea9a400e3190000 */
#if BIND_GPrivate_p_FIELD_WRITER
/* set_p
 *
 * Parameters:
 * - value: gpointer
 */
mrb_value
mrb_GLib_GPrivate_set_p(mrb_state* mrb, mrb_value self) {
  struct _GPrivate * native_self = mruby_unbox__GPrivate(self);
  mrb_value p;

  mrb_get_args(mrb, "o", &p);

  /* type checking */
  TODO_type_check_gpointer(p);

  gpointer native_p = TODO_mruby_unbox_gpointer(p);

  native_self->p = native_p;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GPrivate::notify_reader */
/* sha: 4242ae850844c7282f0550e832f5b60c8372f353cfab26f9199edfacae92284f */
#if BIND_GPrivate_notify_FIELD_READER
/* get_notify
 *
 * Return Type: GDestroyNotify
 */
mrb_value
mrb_GLib_GPrivate_get_notify(mrb_state* mrb, mrb_value self) {
  struct _GPrivate * native_self = mruby_unbox__GPrivate(self);

  GDestroyNotify native_notify = native_self->notify;

  mrb_value notify = TODO_mruby_box_GDestroyNotify(mrb, native_notify);

  return notify;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GPrivate::notify_writer */
/* sha: 9c44d4f3ca7879e7b51aa48cb96025186d70d0160fdd2e6452865d86e4423d26 */
#if BIND_GPrivate_notify_FIELD_WRITER
/* set_notify
 *
 * Parameters:
 * - value: GDestroyNotify
 */
mrb_value
mrb_GLib_GPrivate_set_notify(mrb_state* mrb, mrb_value self) {
  struct _GPrivate * native_self = mruby_unbox__GPrivate(self);
  mrb_value notify;

  mrb_get_args(mrb, "o", &notify);

  /* type checking */
  TODO_type_check_GDestroyNotify(notify);

  GDestroyNotify native_notify = TODO_mruby_unbox_GDestroyNotify(notify);

  native_self->notify = native_notify;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GPrivate::future_reader */
/* sha: 5454bdb76bd442e1478cf0e845ab1737509b634bc9fb081b8748f2b38ce9e519 */
#if BIND_GPrivate_future_FIELD_READER
/* get_future
 *
 * Return Type: gpointer [2]
 */
mrb_value
mrb_GLib_GPrivate_get_future(mrb_state* mrb, mrb_value self) {
  struct _GPrivate * native_self = mruby_unbox__GPrivate(self);

  gpointer [2] native_future = native_self->future;

  mrb_value future = TODO_mruby_box_gpointer_[2](mrb, native_future);

  return future;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GPrivate::future_writer */
/* sha: c2d95a98d341184dbb70d4a2dbdbc70e186918984b2947a062e7d5555c36d429 */
#if BIND_GPrivate_future_FIELD_WRITER
/* set_future
 *
 * Parameters:
 * - value: gpointer [2]
 */
mrb_value
mrb_GLib_GPrivate_set_future(mrb_state* mrb, mrb_value self) {
  struct _GPrivate * native_self = mruby_unbox__GPrivate(self);
  mrb_value future;

  mrb_get_args(mrb, "o", &future);

  /* type checking */
  TODO_type_check_gpointer_[2](future);

  gpointer [2] native_future = TODO_mruby_unbox_gpointer_[2](future);

  native_self->future = native_future;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_GLib_GPrivate_init(mrb_state* mrb) {
/* MRUBY_BINDING: GPrivate::class_definition */
/* sha: fa6a96b169cdeabab82c601c0997e41baca21e9e1d680279d159daf2a483c103 */
  struct RClass* GPrivate_class = mrb_define_class_under(mrb, GLib_module(mrb), "GPrivate", mrb->object_class);
  MRB_SET_INSTANCE_TT(GPrivate_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GPrivate::class_method_definitions */
/* sha: 496e24dc989f101502b908e9ec363a4ae495d54c393a3c01e27b001c3300d724 */
#if BIND_GPrivate_INITIALIZE
  mrb_define_method(mrb, GPrivate_class, "initialize", mrb_GLib_GPrivate_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GPrivate_class, "disown", mrb_GLib_GPrivate_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GPrivate_class, "belongs_to_ruby?", mrb_GLib_GPrivate_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GPrivate::attr_definitions */
/* sha: 873a13d53cbd6e981b8d0f654155ef1074e399cabbb9d97cdad6b9705bbe1543 */
  /*
   * Fields
   */
#if BIND_GPrivate_p_FIELD_READER
  mrb_define_method(mrb, GPrivate_class, "p", mrb_GLib_GPrivate_get_p, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GPrivate_p_FIELD_WRITER
  mrb_define_method(mrb, GPrivate_class, "p=", mrb_GLib_GPrivate_set_p, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GPrivate_notify_FIELD_READER
  mrb_define_method(mrb, GPrivate_class, "notify", mrb_GLib_GPrivate_get_notify, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GPrivate_notify_FIELD_WRITER
  mrb_define_method(mrb, GPrivate_class, "notify=", mrb_GLib_GPrivate_set_notify, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GPrivate_future_FIELD_READER
  mrb_define_method(mrb, GPrivate_class, "future", mrb_GLib_GPrivate_get_future, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GPrivate_future_FIELD_WRITER
  mrb_define_method(mrb, GPrivate_class, "future=", mrb_GLib_GPrivate_set_future, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GPrivate::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
