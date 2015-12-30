/*
 * struct _GActionMap
 * Defined in file giotypes.h @ line 51
 */

#include "mruby_GLib.h"

#if BIND_GActionMap_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GActionMap::initialize */
/* sha: 7988673f44f047fd12f28a5807e726cb5c169cbe36739da8ea85bc44ec4c907e */
#if BIND_GActionMap_INITIALIZE
mrb_value
mrb_GLib_GActionMap_initialize(mrb_state* mrb, mrb_value self) {
  struct _GActionMap* native_object = (struct _GActionMap*)calloc(1, sizeof(struct _GActionMap));
  mruby_giftwrap__GActionMap_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GActionMap::initialize */
/* sha: 525de5e389dbc3479f144a43fdf3b359b5d4338abea11522a0e120db5c4e5e04 */
mrb_value
mrb_GLib_GActionMap_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GActionMap.disown only accepts objects of type GLib::GActionMap");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GActionMap::belongs_to_ruby */
/* sha: ac043c47314eb565ea083ddaca73d644e0a631269e621f515b7b1e45e83cc3a9 */
mrb_value
mrb_GLib_GActionMap_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GActionMap.belongs_to_ruby only accepts objects of type GLib::GActionMap");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GActionMap_init(mrb_state* mrb) {
  struct RClass* GActionMap_class = mrb_define_class_under(mrb, GLib_module(mrb), "GActionMap", mrb->object_class);
  MRB_SET_INSTANCE_TT(GActionMap_class, MRB_TT_DATA);

#if BIND_GActionMap_INITIALIZE
  mrb_define_method(mrb, GActionMap_class, "initialize", mrb_GLib_GActionMap_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GActionMap_class, "disown", mrb_GLib_GActionMap_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GActionMap_class, "belongs_to_ruby?", mrb_GLib_GActionMap_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
