/*
 * struct _GSimpleActionGroup
 * Defined in file giotypes.h @ line 48
 */

#include "mruby_GLib.h"

#if BIND_GSimpleActionGroup_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GSimpleActionGroup::initialize */
/* sha: 06eec3e98aa3ac24b485e94a081c026e04743faa4712a9c90459245d99844c11 */
#if BIND_GSimpleActionGroup_INITIALIZE
mrb_value
mrb_GLib_GSimpleActionGroup_initialize(mrb_state* mrb, mrb_value self) {
  struct _GSimpleActionGroup* native_object = (struct _GSimpleActionGroup*)calloc(1, sizeof(struct _GSimpleActionGroup));
  mruby_giftwrap__GSimpleActionGroup_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSimpleActionGroup::initialize */
/* sha: f3e805d31d77b56f30279ac8aa24a21634488dc5e588616717b750646612b9d3 */
mrb_value
mrb_GLib_GSimpleActionGroup_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSimpleActionGroup.disown only accepts objects of type GLib::GSimpleActionGroup");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSimpleActionGroup::belongs_to_ruby */
/* sha: 589f8cf7f663e58df0884864ac8e4b50b615b2f1031bd9d0ab36aba929443e88 */
mrb_value
mrb_GLib_GSimpleActionGroup_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSimpleActionGroup.belongs_to_ruby only accepts objects of type GLib::GSimpleActionGroup");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GSimpleActionGroup_init(mrb_state* mrb) {
  struct RClass* GSimpleActionGroup_class = mrb_define_class_under(mrb, GLib_module(mrb), "GSimpleActionGroup", mrb->object_class);
  MRB_SET_INSTANCE_TT(GSimpleActionGroup_class, MRB_TT_DATA);

#if BIND_GSimpleActionGroup_INITIALIZE
  mrb_define_method(mrb, GSimpleActionGroup_class, "initialize", mrb_GLib_GSimpleActionGroup_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GSimpleActionGroup_class, "disown", mrb_GLib_GSimpleActionGroup_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GSimpleActionGroup_class, "belongs_to_ruby?", mrb_GLib_GSimpleActionGroup_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
