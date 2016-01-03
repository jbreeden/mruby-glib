/*
 * struct _GMarkupParseContext
 * Defined in file gmarkup.h @ line 113
 */

#include "mruby_GLib.h"

#if BIND_GMarkupParseContext_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GMarkupParseContext::initialize */
/* sha: e2a8e0f41645948da79e0190a58f6704f18f405c62772a521a3056be714ff7ca */
#if BIND_GMarkupParseContext_INITIALIZE
mrb_value
mrb_GLib_GMarkupParseContext_initialize(mrb_state* mrb, mrb_value self) {
  struct _GMarkupParseContext* native_object = (struct _GMarkupParseContext*)calloc(1, sizeof(struct _GMarkupParseContext));
  mruby_giftwrap__GMarkupParseContext_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMarkupParseContext::initialize */
/* sha: dbe77a76e71d0abaebeb58de7bf684c7e785d00ed325bc77d637671123c4a07d */
mrb_value
mrb_GLib_GMarkupParseContext_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GMarkupParseContext.disown only accepts objects of type GLib::GMarkupParseContext");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMarkupParseContext::belongs_to_ruby */
/* sha: 57e9341972a34da52b9f1d471df6e1f7bdd4cd74736c0e25ab786baf9dbbe73b */
mrb_value
mrb_GLib_GMarkupParseContext_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GMarkupParseContext.belongs_to_ruby only accepts objects of type GLib::GMarkupParseContext");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GMarkupParseContext_init(mrb_state* mrb) {
/* MRUBY_BINDING: GMarkupParseContext::class_definition */
/* sha: 3d6ec0de42b74130946a2982f59a39667ede0287c23467586c8532cba769f69e */
  struct RClass* GMarkupParseContext_class = mrb_define_class_under(mrb, GLib_module(mrb), "GMarkupParseContext", mrb->object_class);
  MRB_SET_INSTANCE_TT(GMarkupParseContext_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMarkupParseContext::class_method_definitions */
/* sha: 278fb0090f2647ecbc04e0e057b5183b526bacf64e014d90a6a32aad68afef83 */
#if BIND_GMarkupParseContext_INITIALIZE
  mrb_define_method(mrb, GMarkupParseContext_class, "initialize", mrb_GLib_GMarkupParseContext_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GMarkupParseContext_class, "disown", mrb_GLib_GMarkupParseContext_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GMarkupParseContext_class, "belongs_to_ruby?", mrb_GLib_GMarkupParseContext_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMarkupParseContext::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMarkupParseContext::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
