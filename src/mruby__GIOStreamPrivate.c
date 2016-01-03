/*
 * struct _GIOStreamPrivate
 * Defined in file giostream.h @ line 38
 */

#include "mruby_GLib.h"

#if BIND_GIOStreamPrivate_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GIOStreamPrivate::initialize */
/* sha: 450afd6f579af806267e66fb9998decc066e9bbf41a7f400ba727b6ee63cfbff */
#if BIND_GIOStreamPrivate_INITIALIZE
mrb_value
mrb_GLib_GIOStreamPrivate_initialize(mrb_state* mrb, mrb_value self) {
  struct _GIOStreamPrivate* native_object = (struct _GIOStreamPrivate*)calloc(1, sizeof(struct _GIOStreamPrivate));
  mruby_giftwrap__GIOStreamPrivate_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamPrivate::initialize */
/* sha: cbed6fe36c9b0d906127b8ceedb559b4b62ccc76bbefae761db5eaab20a42d28 */
mrb_value
mrb_GLib_GIOStreamPrivate_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GIOStreamPrivate.disown only accepts objects of type GLib::GIOStreamPrivate");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamPrivate::belongs_to_ruby */
/* sha: 2da41e5fd0e42aba1c3c3a46353ed5d7ba5170c71150b9dfe4a329d7169ee08a */
mrb_value
mrb_GLib_GIOStreamPrivate_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GIOStreamPrivate.belongs_to_ruby only accepts objects of type GLib::GIOStreamPrivate");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GIOStreamPrivate_init(mrb_state* mrb) {
/* MRUBY_BINDING: GIOStreamPrivate::class_definition */
/* sha: 9b297717edc6f03a47370fe59aa7b2d4e2ed5c9bb238100a35665bc690e0ad06 */
  struct RClass* GIOStreamPrivate_class = mrb_define_class_under(mrb, GLib_module(mrb), "GIOStreamPrivate", mrb->object_class);
  MRB_SET_INSTANCE_TT(GIOStreamPrivate_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamPrivate::class_method_definitions */
/* sha: ee4f2744dafbaf0ee28097de6d51e6d36e11cd5693c6c71799bcb0217bb33fdf */
#if BIND_GIOStreamPrivate_INITIALIZE
  mrb_define_method(mrb, GIOStreamPrivate_class, "initialize", mrb_GLib_GIOStreamPrivate_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GIOStreamPrivate_class, "disown", mrb_GLib_GIOStreamPrivate_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GIOStreamPrivate_class, "belongs_to_ruby?", mrb_GLib_GIOStreamPrivate_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamPrivate::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamPrivate::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
