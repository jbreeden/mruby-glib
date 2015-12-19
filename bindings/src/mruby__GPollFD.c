/*
 * struct _GPollFD
 * Defined in file gpoll.h @ line 58
 */

#include "mruby_GLib.h"

#if BIND_GPollFD_TYPE

/*
 * Class Methods
 */

#if BIND_GPollFD_INITIALIZE
mrb_value
mrb_GLib_GPollFD_initialize(mrb_state* mrb, mrb_value self) {
  struct _GPollFD* native_object = (struct _GPollFD*)calloc(1, sizeof(struct _GPollFD));
  mruby_gift_struct _GPollFD_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_GPollFD_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GPollFD.disown only accepts objects of type GLib::GPollFD");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_GPollFD_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GPollFD.belongs_to_ruby only accepts objects of type GLib::GPollFD");
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

#if BIND_GPollFD_fd_FIELD_READER
/* get_fd
 *
 * Return Type: gint
 */
mrb_value
mrb_GLib_GPollFD_get_fd(mrb_state* mrb, mrb_value self) {
  struct _GPollFD * native_self = mruby_unbox__GPollFD(self);

  gint native_fd = native_self->fd;

  mrb_value fd = mrb_fixnum_value(native_fd);

  return fd;
}
#endif

#if BIND_GPollFD_fd_FIELD_WRITER
/* set_fd
 *
 * Parameters:
 * - value: gint
 */
mrb_value
mrb_GLib_GPollFD_set_fd(mrb_state* mrb, mrb_value self) {
  struct _GPollFD * native_self = mruby_unbox__GPollFD(self);
  mrb_int native_fd;

  mrb_get_args(mrb, "i", &native_fd);

  native_self->fd = native_fd;
  

  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GPollFD_events_FIELD_READER
/* get_events
 *
 * Return Type: gushort
 */
mrb_value
mrb_GLib_GPollFD_get_events(mrb_state* mrb, mrb_value self) {
  struct _GPollFD * native_self = mruby_unbox__GPollFD(self);

  gushort native_events = native_self->events;

  mrb_value events = mrb_fixnum_value(native_events);

  return events;
}
#endif

#if BIND_GPollFD_events_FIELD_WRITER
/* set_events
 *
 * Parameters:
 * - value: gushort
 */
mrb_value
mrb_GLib_GPollFD_set_events(mrb_state* mrb, mrb_value self) {
  struct _GPollFD * native_self = mruby_unbox__GPollFD(self);
  mrb_int native_events;

  mrb_get_args(mrb, "i", &native_events);

  native_self->events = native_events;
  

  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GPollFD_revents_FIELD_READER
/* get_revents
 *
 * Return Type: gushort
 */
mrb_value
mrb_GLib_GPollFD_get_revents(mrb_state* mrb, mrb_value self) {
  struct _GPollFD * native_self = mruby_unbox__GPollFD(self);

  gushort native_revents = native_self->revents;

  mrb_value revents = mrb_fixnum_value(native_revents);

  return revents;
}
#endif

#if BIND_GPollFD_revents_FIELD_WRITER
/* set_revents
 *
 * Parameters:
 * - value: gushort
 */
mrb_value
mrb_GLib_GPollFD_set_revents(mrb_state* mrb, mrb_value self) {
  struct _GPollFD * native_self = mruby_unbox__GPollFD(self);
  mrb_int native_revents;

  mrb_get_args(mrb, "i", &native_revents);

  native_self->revents = native_revents;
  

  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif


void mrb_GLib_GPollFD_init(mrb_state* mrb) {
  struct RClass* GPollFD_class = mrb_define_class_under(mrb, GLib_module(mrb), "GPollFD", mrb->object_class);
  MRB_SET_INSTANCE_TT(GPollFD_class, MRB_TT_DATA);

#if BIND_GPollFD_INITIALIZE
  mrb_define_method(mrb, GPollFD_class, "initialize", mrb_GLib_GPollFD_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GPollFD_class, "disown", mrb_GLib_GPollFD_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GPollFD_class, "belongs_to_ruby?", mrb_GLib_GPollFD_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GPollFD_fd_FIELD_READER
  mrb_define_method(mrb, GPollFD_class, "fd", mrb_GLib_GPollFD_get_fd, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GPollFD_fd_FIELD_WRITER
  mrb_define_method(mrb, GPollFD_class, "fd=", mrb_GLib_GPollFD_set_fd, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GPollFD_events_FIELD_READER
  mrb_define_method(mrb, GPollFD_class, "events", mrb_GLib_GPollFD_get_events, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GPollFD_events_FIELD_WRITER
  mrb_define_method(mrb, GPollFD_class, "events=", mrb_GLib_GPollFD_set_events, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GPollFD_revents_FIELD_READER
  mrb_define_method(mrb, GPollFD_class, "revents", mrb_GLib_GPollFD_get_revents, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GPollFD_revents_FIELD_WRITER
  mrb_define_method(mrb, GPollFD_class, "revents=", mrb_GLib_GPollFD_set_revents, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
