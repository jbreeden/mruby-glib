/*
 * struct _GSocketControlMessage
 * Defined in file giotypes.h @ line 168
 */

#include "mruby_GLib.h"

#if BIND_GSocketControlMessage_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GSocketControlMessage::initialize */
/* sha: 81704a53651add8d58c6fad05ddc2e9cb698c8091a15cd3afdd6588e45bb5b70 */
#if BIND_GSocketControlMessage_INITIALIZE
mrb_value
mrb_GLib_GSocketControlMessage_initialize(mrb_state* mrb, mrb_value self) {
  struct _GSocketControlMessage* native_object = (struct _GSocketControlMessage*)calloc(1, sizeof(struct _GSocketControlMessage));
  mruby_giftwrap__GSocketControlMessage_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketControlMessage::initialize */
/* sha: 0724d15bc5a146df2412cccff19ec7ee70d0fec6d42d1a3ecd8bf0a252e49af3 */
mrb_value
mrb_GLib_GSocketControlMessage_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSocketControlMessage.disown only accepts objects of type GLib::GSocketControlMessage");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketControlMessage::belongs_to_ruby */
/* sha: 47099d5e0b9cf6a793b05cc7bf7113fa199ca451916b0cb686800c16f85764a5 */
mrb_value
mrb_GLib_GSocketControlMessage_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSocketControlMessage.belongs_to_ruby only accepts objects of type GLib::GSocketControlMessage");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GSocketControlMessage_init(mrb_state* mrb) {
  struct RClass* GSocketControlMessage_class = mrb_define_class_under(mrb, GLib_module(mrb), "GSocketControlMessage", mrb->object_class);
  MRB_SET_INSTANCE_TT(GSocketControlMessage_class, MRB_TT_DATA);

#if BIND_GSocketControlMessage_INITIALIZE
  mrb_define_method(mrb, GSocketControlMessage_class, "initialize", mrb_GLib_GSocketControlMessage_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GSocketControlMessage_class, "disown", mrb_GLib_GSocketControlMessage_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GSocketControlMessage_class, "belongs_to_ruby?", mrb_GLib_GSocketControlMessage_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
