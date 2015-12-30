/*
 * struct _GUnixCredentialsMessage
 * Defined in file giotypes.h @ line 466
 */

#include "mruby_GLib.h"

#if BIND_GUnixCredentialsMessage_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GUnixCredentialsMessage::initialize */
/* sha: 96dea8e0fefab8a65a80e21dc22e1f945ca840b0614fb35ca7a6f427ced6857c */
#if BIND_GUnixCredentialsMessage_INITIALIZE
mrb_value
mrb_GLib_GUnixCredentialsMessage_initialize(mrb_state* mrb, mrb_value self) {
  struct _GUnixCredentialsMessage* native_object = (struct _GUnixCredentialsMessage*)calloc(1, sizeof(struct _GUnixCredentialsMessage));
  mruby_giftwrap__GUnixCredentialsMessage_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GUnixCredentialsMessage::initialize */
/* sha: 9fa4863d034a674f2382c57cae7dcdaa7536bcd13837741479151514f26f2f2c */
mrb_value
mrb_GLib_GUnixCredentialsMessage_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GUnixCredentialsMessage.disown only accepts objects of type GLib::GUnixCredentialsMessage");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GUnixCredentialsMessage::belongs_to_ruby */
/* sha: 815f477a7df57363fdc2214dd78a2ac7fa5673706702a1d6ea1c7ddf671a96b9 */
mrb_value
mrb_GLib_GUnixCredentialsMessage_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GUnixCredentialsMessage.belongs_to_ruby only accepts objects of type GLib::GUnixCredentialsMessage");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GUnixCredentialsMessage_init(mrb_state* mrb) {
  struct RClass* GUnixCredentialsMessage_class = mrb_define_class_under(mrb, GLib_module(mrb), "GUnixCredentialsMessage", mrb->object_class);
  MRB_SET_INSTANCE_TT(GUnixCredentialsMessage_class, MRB_TT_DATA);

#if BIND_GUnixCredentialsMessage_INITIALIZE
  mrb_define_method(mrb, GUnixCredentialsMessage_class, "initialize", mrb_GLib_GUnixCredentialsMessage_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GUnixCredentialsMessage_class, "disown", mrb_GLib_GUnixCredentialsMessage_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GUnixCredentialsMessage_class, "belongs_to_ruby?", mrb_GLib_GUnixCredentialsMessage_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
