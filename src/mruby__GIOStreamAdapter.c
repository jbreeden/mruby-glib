/*
 * struct _GIOStreamAdapter
 * Defined in file giotypes.h @ line 119
 */

#include "mruby_GLib.h"

#if BIND_GIOStreamAdapter_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GIOStreamAdapter::initialize */
/* sha: 0ba8d4d3e857a83ac342abba94a1a5061df8fc4128eb57564a9e596f3851973e */
#if BIND_GIOStreamAdapter_INITIALIZE
mrb_value
mrb_GLib_GIOStreamAdapter_initialize(mrb_state* mrb, mrb_value self) {
  struct _GIOStreamAdapter* native_object = (struct _GIOStreamAdapter*)calloc(1, sizeof(struct _GIOStreamAdapter));
  mruby_giftwrap__GIOStreamAdapter_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamAdapter::initialize */
/* sha: fea3e38202cf08c85d2556e6eec8635dbe11f552dc4747019bf2ec8f304d0be7 */
mrb_value
mrb_GLib_GIOStreamAdapter_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GIOStreamAdapter.disown only accepts objects of type GLib::GIOStreamAdapter");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamAdapter::belongs_to_ruby */
/* sha: 644e5473a3b95aaf19a525ba3acc2974f165b7b4e56abdd78a5208b28af4ef47 */
mrb_value
mrb_GLib_GIOStreamAdapter_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GIOStreamAdapter.belongs_to_ruby only accepts objects of type GLib::GIOStreamAdapter");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GIOStreamAdapter_init(mrb_state* mrb) {
  struct RClass* GIOStreamAdapter_class = mrb_define_class_under(mrb, GLib_module(mrb), "GIOStreamAdapter", mrb->object_class);
  MRB_SET_INSTANCE_TT(GIOStreamAdapter_class, MRB_TT_DATA);

#if BIND_GIOStreamAdapter_INITIALIZE
  mrb_define_method(mrb, GIOStreamAdapter_class, "initialize", mrb_GLib_GIOStreamAdapter_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GIOStreamAdapter_class, "disown", mrb_GLib_GIOStreamAdapter_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GIOStreamAdapter_class, "belongs_to_ruby?", mrb_GLib_GIOStreamAdapter_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
