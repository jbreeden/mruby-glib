/*
 * struct _GPollFD
 * Defined in file gpoll.h @ line 58
 */

#include "mruby_GLib.h"

#if BIND_GPollFD_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GPollFD::initialize */
/* sha: d560de80a3e3e9e7297e2cf62f23b7020d94c3a008d7441576a2633b7b77cc41 */
#if BIND_GPollFD_INITIALIZE
mrb_value
mrb_GLib_GPollFD_initialize(mrb_state* mrb, mrb_value self) {
  struct _GPollFD* native_object = (struct _GPollFD*)calloc(1, sizeof(struct _GPollFD));
  mruby_giftwrap__GPollFD_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GPollFD::initialize */
/* sha: 6cf06571932ac38ee3ea95eab232e4c7e7ecb35579859f412a13cce1f2883e4c */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GPollFD::belongs_to_ruby */
/* sha: 965bb443548bc84e8c97b417bddaf381792eceb29732b04acd35d02cb261cfae */
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
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: GPollFD::fd_reader */
/* sha: d2a48d1360beccdcf38029e197ed2ab3e7a710063ffc2035b74626575a00f946 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GPollFD::fd_writer */
/* sha: 59422a3b9226a12bc3a4bcb1d4cda1e20242bf42fdc5005ec7b5c23ea3902230 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GPollFD::events_reader */
/* sha: b293e5d3c5cc8e20c28ac19853f6e7e750fcdb47b68253ebe386e4d34f864104 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GPollFD::events_writer */
/* sha: 4f10771fe7b0be9b48e787f94736069cc699e9fd1654b6b219503a58df78a621 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GPollFD::revents_reader */
/* sha: 137c424624e74ebf6e48d766edb0e78593d3920b81d576e65d554106d8707e65 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GPollFD::revents_writer */
/* sha: d8b44df1370eb59f48a49095d9721deb5a55e6da51a8f143508991d3bea2ef0e */
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
/* MRUBY_BINDING_END */


void mrb_GLib_GPollFD_init(mrb_state* mrb) {
/* MRUBY_BINDING: GPollFD::class_definition */
/* sha: e41a146f53b118804c42dd6ece45c40673a8ba19fef5677e5c4f395c11368e64 */
  struct RClass* GPollFD_class = mrb_define_class_under(mrb, GLib_module(mrb), "GPollFD", mrb->object_class);
  MRB_SET_INSTANCE_TT(GPollFD_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GPollFD::class_method_definitions */
/* sha: ffa372afc095e60cbdb0d49631e1950c3e65f7b6e1a302e70873c1be3ae65510 */
#if BIND_GPollFD_INITIALIZE
  mrb_define_method(mrb, GPollFD_class, "initialize", mrb_GLib_GPollFD_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GPollFD_class, "disown", mrb_GLib_GPollFD_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GPollFD_class, "belongs_to_ruby?", mrb_GLib_GPollFD_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GPollFD::attr_definitions */
/* sha: 0310d17902d6451ddc1279bae8362d2e0eee84d874fd6bffede93855bdb8afb4 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GPollFD::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
