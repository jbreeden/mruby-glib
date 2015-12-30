/*
 * struct _GMountOperation
 * Defined in file giotypes.h @ line 131
 */

#include "mruby_GLib.h"

#if BIND_GMountOperation_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GMountOperation::initialize */
/* sha: 1e72e73c249211649892bf91b6f91891e0db38ba3c867e5dbf1531a1d444b0d2 */
#if BIND_GMountOperation_INITIALIZE
mrb_value
mrb_GLib_GMountOperation_initialize(mrb_state* mrb, mrb_value self) {
  struct _GMountOperation* native_object = (struct _GMountOperation*)calloc(1, sizeof(struct _GMountOperation));
  mruby_giftwrap__GMountOperation_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMountOperation::initialize */
/* sha: cc700bade170c2075ec6f4f5fe49c5d2f0d93f1ee67e8f1d26d7a528c79ee7a6 */
mrb_value
mrb_GLib_GMountOperation_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GMountOperation.disown only accepts objects of type GLib::GMountOperation");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMountOperation::belongs_to_ruby */
/* sha: f3b8787ebac78a1bf0edaf8e1917ba1cc57236471f29aef6ce031f0098fce5f2 */
mrb_value
mrb_GLib_GMountOperation_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GMountOperation.belongs_to_ruby only accepts objects of type GLib::GMountOperation");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GMountOperation_init(mrb_state* mrb) {
  struct RClass* GMountOperation_class = mrb_define_class_under(mrb, GLib_module(mrb), "GMountOperation", mrb->object_class);
  MRB_SET_INSTANCE_TT(GMountOperation_class, MRB_TT_DATA);

#if BIND_GMountOperation_INITIALIZE
  mrb_define_method(mrb, GMountOperation_class, "initialize", mrb_GLib_GMountOperation_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GMountOperation_class, "disown", mrb_GLib_GMountOperation_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GMountOperation_class, "belongs_to_ruby?", mrb_GLib_GMountOperation_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
