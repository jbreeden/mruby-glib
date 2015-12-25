/*
 * struct _GDebugKey
 * Defined in file gutils.h @ line 186
 */

#include "mruby_GLib.h"

#if BIND_GDebugKey_TYPE

/*
 * Class Methods
 */

#if BIND_GDebugKey_INITIALIZE
mrb_value
mrb_GLib_GDebugKey_initialize(mrb_state* mrb, mrb_value self) {
  struct _GDebugKey* native_object = (struct _GDebugKey*)calloc(1, sizeof(struct _GDebugKey));
  mruby_giftwrap__GDebugKey_data_ptr(self, native_object);
  return self;
}
#endif

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

/*
 * Fields
 */

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

  mrb_get_args(mrb, "z!", &native_key);

  native_self->key = native_key;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

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
