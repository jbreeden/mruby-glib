/*
 * struct _GHashTable
 * Defined in file ghash.h @ line 37
 */

#include "mruby_GLib.h"

#if BIND_GHashTable_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GHashTable::initialize */
/* sha: 97b83c19f0a93a9693ba6db3d34400909b3c2a1d3850bea573b7783563966125 */
#if BIND_GHashTable_INITIALIZE
mrb_value
mrb_GLib_GHashTable_initialize(mrb_state* mrb, mrb_value self) {
  struct _GHashTable* native_object = (struct _GHashTable*)calloc(1, sizeof(struct _GHashTable));
  mruby_giftwrap__GHashTable_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHashTable::initialize */
/* sha: ec656b7045444a4af3c6e1865ab84214cc86c023c022a0a58d75081916155953 */
mrb_value
mrb_GLib_GHashTable_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GHashTable.disown only accepts objects of type GLib::GHashTable");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHashTable::belongs_to_ruby */
/* sha: ba59f342d1a8d34263921b1d55268d93c5a5b255b1ca605a846893e6791e78d4 */
mrb_value
mrb_GLib_GHashTable_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GHashTable.belongs_to_ruby only accepts objects of type GLib::GHashTable");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GHashTable_init(mrb_state* mrb) {
  struct RClass* GHashTable_class = mrb_define_class_under(mrb, GLib_module(mrb), "GHashTable", mrb->object_class);
  MRB_SET_INSTANCE_TT(GHashTable_class, MRB_TT_DATA);

#if BIND_GHashTable_INITIALIZE
  mrb_define_method(mrb, GHashTable_class, "initialize", mrb_GLib_GHashTable_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GHashTable_class, "disown", mrb_GLib_GHashTable_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GHashTable_class, "belongs_to_ruby?", mrb_GLib_GHashTable_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
