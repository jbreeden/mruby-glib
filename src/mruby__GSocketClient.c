/*
 * struct _GSocketClient
 * Defined in file giotypes.h @ line 176
 */

#include "mruby_GLib.h"

#if BIND_GSocketClient_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GSocketClient::initialize */
/* sha: 3e48943d40019a3f4646117e3ed1a4450a6fbd3c496f51d6966b161e33411fab */
#if BIND_GSocketClient_INITIALIZE
mrb_value
mrb_GLib_GSocketClient_initialize(mrb_state* mrb, mrb_value self) {
  struct _GSocketClient* native_object = (struct _GSocketClient*)calloc(1, sizeof(struct _GSocketClient));
  mruby_giftwrap__GSocketClient_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketClient::initialize */
/* sha: 1544cdde9ba17cb33cb746d748a56465fc1cf64e6206068e268865130462fdf6 */
mrb_value
mrb_GLib_GSocketClient_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSocketClient.disown only accepts objects of type GLib::GSocketClient");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketClient::belongs_to_ruby */
/* sha: 387faf9767d6575e5b3aadd007314a4913facc260a5bed3f6ab0ad7fed52de69 */
mrb_value
mrb_GLib_GSocketClient_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSocketClient.belongs_to_ruby only accepts objects of type GLib::GSocketClient");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GSocketClient_init(mrb_state* mrb) {
  struct RClass* GSocketClient_class = mrb_define_class_under(mrb, GLib_module(mrb), "GSocketClient", mrb->object_class);
  MRB_SET_INSTANCE_TT(GSocketClient_class, MRB_TT_DATA);

#if BIND_GSocketClient_INITIALIZE
  mrb_define_method(mrb, GSocketClient_class, "initialize", mrb_GLib_GSocketClient_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GSocketClient_class, "disown", mrb_GLib_GSocketClient_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GSocketClient_class, "belongs_to_ruby?", mrb_GLib_GSocketClient_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
