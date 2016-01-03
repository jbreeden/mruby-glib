/*
 * struct _GFileIOStream
 * Defined in file dummy_decls.h @ line 10
 */

#include "mruby_GLib.h"

#if BIND_GFileIOStream_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GFileIOStream::initialize */
/* sha: f4fd6f26f0d682217f00e306f71d8d2fa3189142bd6805f47560a64b2fdabda6 */
#if BIND_GFileIOStream_INITIALIZE
mrb_value
mrb_GLib_GFileIOStream_initialize(mrb_state* mrb, mrb_value self) {
  struct _GFileIOStream* native_object = (struct _GFileIOStream*)calloc(1, sizeof(struct _GFileIOStream));
  mruby_giftwrap__GFileIOStream_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIOStream::initialize */
/* sha: 5792ba1e6b73f61d0574a885ba90c35b936d5fb5ab7500354cf57f7b0b9e5ac4 */
mrb_value
mrb_GLib_GFileIOStream_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GFileIOStream.disown only accepts objects of type GLib::GFileIOStream");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIOStream::belongs_to_ruby */
/* sha: 80c2f2d7400d859e5bab6066c693b19dc3b6f54ebac6d4860e23eef3eda3d4ac */
mrb_value
mrb_GLib_GFileIOStream_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GFileIOStream.belongs_to_ruby only accepts objects of type GLib::GFileIOStream");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GFileIOStream_init(mrb_state* mrb) {
/* MRUBY_BINDING: GFileIOStream::class_definition */
/* sha: d48d6407808dc580abb86d62952b3ddc0692b8b8d3942633c866306269aa7d3c */
  struct RClass* GFileIOStream_class = mrb_define_class_under(mrb, GLib_module(mrb), "GFileIOStream", mrb->object_class);
  MRB_SET_INSTANCE_TT(GFileIOStream_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIOStream::class_method_definitions */
/* sha: eb983c97d27ad2dc1651097a3fe49ec0c8e7ae43c4d3907d23604fb4e264395a */
#if BIND_GFileIOStream_INITIALIZE
  mrb_define_method(mrb, GFileIOStream_class, "initialize", mrb_GLib_GFileIOStream_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GFileIOStream_class, "disown", mrb_GLib_GFileIOStream_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GFileIOStream_class, "belongs_to_ruby?", mrb_GLib_GFileIOStream_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIOStream::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIOStream::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
