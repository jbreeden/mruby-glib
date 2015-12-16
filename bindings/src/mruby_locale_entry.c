/*
 * struct locale_entry
 * Defined in file gtranslit-data.h @ line 11
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_GLib.h"

#if BIND_LocaleEntry_TYPE

/*
 * Class Methods
 */

#if BIND_LocaleEntry_INITIALIZE
mrb_value
mrb_GLib_LocaleEntry_initialize(mrb_state* mrb, mrb_value self) {
  struct locale_entry* native_object = (struct locale_entry*)malloc(sizeof(struct locale_entry));
  mruby_gift_struct locale_entry_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_LocaleEntry_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::LocaleEntry.disown only accepts objects of type GLib::LocaleEntry");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_LocaleEntry_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::LocaleEntry.belongs_to_ruby only accepts objects of type GLib::LocaleEntry");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}


void mrb_GLib_LocaleEntry_init(mrb_state* mrb) {
  RClass* LocaleEntry_class = mrb_define_class_under(mrb, GLib_module(mrb), "LocaleEntry", mrb->object_class);
  MRB_SET_INSTANCE_TT(LocaleEntry_class, MRB_TT_DATA);

#if BIND_LocaleEntry_INITIALIZE
  mrb_define_method(mrb, LocaleEntry_class, "initialize", mrb_GLib_LocaleEntry_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, LocaleEntry_class, "disown", mrb_GLib_LocaleEntry_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, LocaleEntry_class, "belongs_to_ruby?", mrb_GLib_LocaleEntry_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
