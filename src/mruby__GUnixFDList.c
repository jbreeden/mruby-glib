/*
 * struct _GUnixFDList
 * Defined in file giotypes.h @ line 467
 */

#include "mruby_GLib.h"

#if BIND_GUnixFDList_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GUnixFDList::initialize */
/* sha: bc2c235a41ed60e45144c29fecd127af16c6392763d50e52f3b1c56e86bdbfd4 */
#if BIND_GUnixFDList_INITIALIZE
mrb_value
mrb_GLib_GUnixFDList_initialize(mrb_state* mrb, mrb_value self) {
  struct _GUnixFDList* native_object = (struct _GUnixFDList*)calloc(1, sizeof(struct _GUnixFDList));
  mruby_giftwrap__GUnixFDList_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GUnixFDList::initialize */
/* sha: ef582ce85fa615bbe9fe9a2966c993b13591014031aef827596eb9333afefec9 */
mrb_value
mrb_GLib_GUnixFDList_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GUnixFDList.disown only accepts objects of type GLib::GUnixFDList");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GUnixFDList::belongs_to_ruby */
/* sha: 55960a0445923ad3e4bcaad5d39124b1164ad42b4cb9ea9d89b9607c30c1a464 */
mrb_value
mrb_GLib_GUnixFDList_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GUnixFDList.belongs_to_ruby only accepts objects of type GLib::GUnixFDList");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GUnixFDList_init(mrb_state* mrb) {
  struct RClass* GUnixFDList_class = mrb_define_class_under(mrb, GLib_module(mrb), "GUnixFDList", mrb->object_class);
  MRB_SET_INSTANCE_TT(GUnixFDList_class, MRB_TT_DATA);

#if BIND_GUnixFDList_INITIALIZE
  mrb_define_method(mrb, GUnixFDList_class, "initialize", mrb_GLib_GUnixFDList_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GUnixFDList_class, "disown", mrb_GLib_GUnixFDList_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GUnixFDList_class, "belongs_to_ruby?", mrb_GLib_GUnixFDList_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
