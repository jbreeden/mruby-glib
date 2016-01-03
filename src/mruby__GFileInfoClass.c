/*
 * struct _GFileInfoClass
 * Defined in file gfileinfo.h @ line 44
 */

#include "mruby_GLib.h"

#if BIND_GFileInfoClass_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GFileInfoClass::initialize */
/* sha: 0aaa93d50d5196cb7572bdf75410b7b9e342b3c5863a3411d8179eb3554214b2 */
#if BIND_GFileInfoClass_INITIALIZE
mrb_value
mrb_GLib_GFileInfoClass_initialize(mrb_state* mrb, mrb_value self) {
  struct _GFileInfoClass* native_object = (struct _GFileInfoClass*)calloc(1, sizeof(struct _GFileInfoClass));
  mruby_giftwrap__GFileInfoClass_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileInfoClass::initialize */
/* sha: 0ccd04dc707334d4f812d8178b1dfe6abd8c87e3a3844c5cdb2af15a80403d7b */
mrb_value
mrb_GLib_GFileInfoClass_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GFileInfoClass.disown only accepts objects of type GLib::GFileInfoClass");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileInfoClass::belongs_to_ruby */
/* sha: 10dc3477b0484576e76bd7d796c7216448e5d11ca0037a2f5958c685febec032 */
mrb_value
mrb_GLib_GFileInfoClass_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GFileInfoClass.belongs_to_ruby only accepts objects of type GLib::GFileInfoClass");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GFileInfoClass_init(mrb_state* mrb) {
/* MRUBY_BINDING: GFileInfoClass::class_definition */
/* sha: 39b7dafb760582e51210c8046d16fdad4c071e7830118317ab2e4494a2fecf87 */
  struct RClass* GFileInfoClass_class = mrb_define_class_under(mrb, GLib_module(mrb), "GFileInfoClass", mrb->object_class);
  MRB_SET_INSTANCE_TT(GFileInfoClass_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileInfoClass::class_method_definitions */
/* sha: fd321149085916a2555707bdefb5b9bb3f411b08d5f165558784160f5867f955 */
#if BIND_GFileInfoClass_INITIALIZE
  mrb_define_method(mrb, GFileInfoClass_class, "initialize", mrb_GLib_GFileInfoClass_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GFileInfoClass_class, "disown", mrb_GLib_GFileInfoClass_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GFileInfoClass_class, "belongs_to_ruby?", mrb_GLib_GFileInfoClass_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileInfoClass::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileInfoClass::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
