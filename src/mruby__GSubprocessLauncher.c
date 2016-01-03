/*
 * struct _GSubprocessLauncher
 * Defined in file dummy_decls.h @ line 13
 */

#include "mruby_GLib.h"

#if BIND_GSubprocessLauncher_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GSubprocessLauncher::initialize */
/* sha: 71109efbef9442c92cb1d434c5636b4383a74b4c3e4e0654fd2df84657910101 */
#if BIND_GSubprocessLauncher_INITIALIZE
mrb_value
mrb_GLib_GSubprocessLauncher_initialize(mrb_state* mrb, mrb_value self) {
  struct _GSubprocessLauncher* native_object = (struct _GSubprocessLauncher*)calloc(1, sizeof(struct _GSubprocessLauncher));
  mruby_giftwrap__GSubprocessLauncher_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSubprocessLauncher::initialize */
/* sha: 30340b027d13a69c255661bd218dfdfdc87b6af9997c591ef691c09001c8e033 */
mrb_value
mrb_GLib_GSubprocessLauncher_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSubprocessLauncher.disown only accepts objects of type GLib::GSubprocessLauncher");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSubprocessLauncher::belongs_to_ruby */
/* sha: bdc7c83ebc9f3c338ce6b35b28a20da924986178bb5376b9cd51c3d177bef260 */
mrb_value
mrb_GLib_GSubprocessLauncher_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSubprocessLauncher.belongs_to_ruby only accepts objects of type GLib::GSubprocessLauncher");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GSubprocessLauncher_init(mrb_state* mrb) {
/* MRUBY_BINDING: GSubprocessLauncher::class_definition */
/* sha: b04698a141e7f34ca5b86783f17e819fa9ebade570013b98de1945dfa84d8f2d */
  struct RClass* GSubprocessLauncher_class = mrb_define_class_under(mrb, GLib_module(mrb), "GSubprocessLauncher", mrb->object_class);
  MRB_SET_INSTANCE_TT(GSubprocessLauncher_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSubprocessLauncher::class_method_definitions */
/* sha: 5330391e393c7da347b2ba82a5d0afcd96c393f4265ca42354987a4574613c8e */
#if BIND_GSubprocessLauncher_INITIALIZE
  mrb_define_method(mrb, GSubprocessLauncher_class, "initialize", mrb_GLib_GSubprocessLauncher_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GSubprocessLauncher_class, "disown", mrb_GLib_GSubprocessLauncher_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GSubprocessLauncher_class, "belongs_to_ruby?", mrb_GLib_GSubprocessLauncher_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSubprocessLauncher::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSubprocessLauncher::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
