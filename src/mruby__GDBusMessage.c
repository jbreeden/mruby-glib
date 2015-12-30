/*
 * struct _GDBusMessage
 * Defined in file giotypes.h @ line 468
 */

#include "mruby_GLib.h"

#if BIND_GDBusMessage_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GDBusMessage::initialize */
/* sha: 14a6a1a3ee781bc2c5b2d2420fb7778760507b3c643f1f3d7ffee24788d61681 */
#if BIND_GDBusMessage_INITIALIZE
mrb_value
mrb_GLib_GDBusMessage_initialize(mrb_state* mrb, mrb_value self) {
  struct _GDBusMessage* native_object = (struct _GDBusMessage*)calloc(1, sizeof(struct _GDBusMessage));
  mruby_giftwrap__GDBusMessage_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusMessage::initialize */
/* sha: ca1a04832676c78f6fc8f7b85921323ab47af66af8a77942e4cdb21f2efb0e99 */
mrb_value
mrb_GLib_GDBusMessage_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusMessage.disown only accepts objects of type GLib::GDBusMessage");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDBusMessage::belongs_to_ruby */
/* sha: 7a8faaa826ac5252b2cbf08d99068d8d24a4009baf64b8c30f70661ff3f08ceb */
mrb_value
mrb_GLib_GDBusMessage_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDBusMessage.belongs_to_ruby only accepts objects of type GLib::GDBusMessage");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GDBusMessage_init(mrb_state* mrb) {
  struct RClass* GDBusMessage_class = mrb_define_class_under(mrb, GLib_module(mrb), "GDBusMessage", mrb->object_class);
  MRB_SET_INSTANCE_TT(GDBusMessage_class, MRB_TT_DATA);

#if BIND_GDBusMessage_INITIALIZE
  mrb_define_method(mrb, GDBusMessage_class, "initialize", mrb_GLib_GDBusMessage_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GDBusMessage_class, "disown", mrb_GLib_GDBusMessage_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GDBusMessage_class, "belongs_to_ruby?", mrb_GLib_GDBusMessage_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
