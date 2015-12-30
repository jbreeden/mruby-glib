/*
 * struct _GDebugKey
 * Defined in file gutils.h @ line 186
 */

#include "mruby_GLib.h"

#if BIND_GDebugKey_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GDebugKey::initialize */
/* sha: a49e9b99500d39718aa31d948f720ec7289b944d2c134859fe2b5378101d2ab8 */
#if BIND_GDebugKey_INITIALIZE
mrb_value
mrb_GLib_GDebugKey_initialize(mrb_state* mrb, mrb_value self) {
  struct _GDebugKey* native_object = (struct _GDebugKey*)calloc(1, sizeof(struct _GDebugKey));
  mruby_giftwrap__GDebugKey_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDebugKey::initialize */
/* sha: d63d75ed17d35bde8eef24a23f5741acd20e2a684fab70c450bf123789f70483 */
mrb_value
mrb_GLib_GDebugKey_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDebugKey.disown only accepts objects of type GLib::GDebugKey");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDebugKey::belongs_to_ruby */
/* sha: a8eb181ac591718a979af02d8b27a6b8635ef2873c744b0f7fc93c045673fb35 */
mrb_value
mrb_GLib_GDebugKey_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDebugKey.belongs_to_ruby only accepts objects of type GLib::GDebugKey");
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

/* MRUBY_BINDING: GDebugKey::key_reader */
/* sha: a4f25ad01c9e44d83ca4aff5de4cde36ec0b641661135ecae1c177d7cfab5617 */
#if BIND_GDebugKey_key_FIELD_READER
/* get_key
 *
 * Return Type: const gchar *
 */
mrb_value
mrb_GLib_GDebugKey_get_key(mrb_state* mrb, mrb_value self) {
  struct _GDebugKey * native_self = mruby_unbox__GDebugKey(self);

  const gchar * native_key = native_self->key;

  mrb_value key = native_key == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_key);

  return key;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDebugKey::key_writer */
/* sha: 2b8352c61d3ddca4b5b515ccb7b158a74622c785d4e1be2f7c1103d50cb29751 */
#if BIND_GDebugKey_key_FIELD_WRITER
/* set_key
 *
 * Parameters:
 * - value: const gchar *
 */
mrb_value
mrb_GLib_GDebugKey_set_key(mrb_state* mrb, mrb_value self) {
  struct _GDebugKey * native_self = mruby_unbox__GDebugKey(self);
  char * native_key = NULL;

  mrb_get_args(mrb, "z", &native_key);

  native_self->key = native_key;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDebugKey::value_reader */
/* sha: b669e0863a100db70aead52a654ade74ce5ce8d22d87dbeca183401cc0744dda */
#if BIND_GDebugKey_value_FIELD_READER
/* get_value
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GDebugKey_get_value(mrb_state* mrb, mrb_value self) {
  struct _GDebugKey * native_self = mruby_unbox__GDebugKey(self);

  guint native_value = native_self->value;

  mrb_value value = mrb_fixnum_value(native_value);

  return value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDebugKey::value_writer */
/* sha: e242595c36440bfaf0b3b6ca206fe81fdf1175ca99036f0642a2f5ff99734c1b */
#if BIND_GDebugKey_value_FIELD_WRITER
/* set_value
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GDebugKey_set_value(mrb_state* mrb, mrb_value self) {
  struct _GDebugKey * native_self = mruby_unbox__GDebugKey(self);
  mrb_int native_value;

  mrb_get_args(mrb, "i", &native_value);

  native_self->value = native_value;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_GLib_GDebugKey_init(mrb_state* mrb) {
  struct RClass* GDebugKey_class = mrb_define_class_under(mrb, GLib_module(mrb), "GDebugKey", mrb->object_class);
  MRB_SET_INSTANCE_TT(GDebugKey_class, MRB_TT_DATA);

#if BIND_GDebugKey_INITIALIZE
  mrb_define_method(mrb, GDebugKey_class, "initialize", mrb_GLib_GDebugKey_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GDebugKey_class, "disown", mrb_GLib_GDebugKey_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GDebugKey_class, "belongs_to_ruby?", mrb_GLib_GDebugKey_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GDebugKey_key_FIELD_READER
  mrb_define_method(mrb, GDebugKey_class, "key", mrb_GLib_GDebugKey_get_key, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GDebugKey_key_FIELD_WRITER
  mrb_define_method(mrb, GDebugKey_class, "key=", mrb_GLib_GDebugKey_set_key, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GDebugKey_value_FIELD_READER
  mrb_define_method(mrb, GDebugKey_class, "value", mrb_GLib_GDebugKey_get_value, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GDebugKey_value_FIELD_WRITER
  mrb_define_method(mrb, GDebugKey_class, "value=", mrb_GLib_GDebugKey_set_value, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
