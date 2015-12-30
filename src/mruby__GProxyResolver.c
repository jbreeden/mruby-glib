/*
 * struct _GProxyResolver
 * Defined in file giotypes.h @ line 243
 */

#include "mruby_GLib.h"

#if BIND_GProxyResolver_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GProxyResolver::initialize */
/* sha: 9fc12c65d7296ad0ed4df1780620ec20e842787923aacf37fd9a78f0eb84801a */
#if BIND_GProxyResolver_INITIALIZE
mrb_value
mrb_GLib_GProxyResolver_initialize(mrb_state* mrb, mrb_value self) {
  struct _GProxyResolver* native_object = (struct _GProxyResolver*)calloc(1, sizeof(struct _GProxyResolver));
  mruby_giftwrap__GProxyResolver_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GProxyResolver::initialize */
/* sha: 238ce851e802ec27f594af83a5d59707ed2bc90d7340fe33c985e69a800dd738 */
mrb_value
mrb_GLib_GProxyResolver_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GProxyResolver.disown only accepts objects of type GLib::GProxyResolver");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GProxyResolver::belongs_to_ruby */
/* sha: 5182e3ecca5f49c3cd3f0a063bf5a982521bd635999d7ef32fd551fbb28a4c88 */
mrb_value
mrb_GLib_GProxyResolver_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GProxyResolver.belongs_to_ruby only accepts objects of type GLib::GProxyResolver");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GProxyResolver_init(mrb_state* mrb) {
  struct RClass* GProxyResolver_class = mrb_define_class_under(mrb, GLib_module(mrb), "GProxyResolver", mrb->object_class);
  MRB_SET_INSTANCE_TT(GProxyResolver_class, MRB_TT_DATA);

#if BIND_GProxyResolver_INITIALIZE
  mrb_define_method(mrb, GProxyResolver_class, "initialize", mrb_GLib_GProxyResolver_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GProxyResolver_class, "disown", mrb_GLib_GProxyResolver_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GProxyResolver_class, "belongs_to_ruby?", mrb_GLib_GProxyResolver_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
