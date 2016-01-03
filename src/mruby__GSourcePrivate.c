/*
 * struct _GSourcePrivate
 * Defined in file gmain.h @ line 65
 */

#include "mruby_GLib.h"

#if BIND_GSourcePrivate_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GSourcePrivate::initialize */
/* sha: cdd4b638cf6f4059403b0034449b31a551b6f7be4619aa55cba6c9f7d4182fa9 */
#if BIND_GSourcePrivate_INITIALIZE
mrb_value
mrb_GLib_GSourcePrivate_initialize(mrb_state* mrb, mrb_value self) {
  struct _GSourcePrivate* native_object = (struct _GSourcePrivate*)calloc(1, sizeof(struct _GSourcePrivate));
  mruby_giftwrap__GSourcePrivate_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSourcePrivate::initialize */
/* sha: 3480946841c86caf8ba05b1ec6c73fc28e8b7f2527827e4f37516afb8630eddc */
mrb_value
mrb_GLib_GSourcePrivate_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSourcePrivate.disown only accepts objects of type GLib::GSourcePrivate");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSourcePrivate::belongs_to_ruby */
/* sha: 76a697247d49fbce50e4e2cab31f4ffd45bc04dbf88e0585fe53683213cf8876 */
mrb_value
mrb_GLib_GSourcePrivate_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSourcePrivate.belongs_to_ruby only accepts objects of type GLib::GSourcePrivate");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GSourcePrivate_init(mrb_state* mrb) {
/* MRUBY_BINDING: GSourcePrivate::class_definition */
/* sha: f45666f28299d30ab9891a155cb27d5f6595444e662860f01ae4416a42df8a50 */
  struct RClass* GSourcePrivate_class = mrb_define_class_under(mrb, GLib_module(mrb), "GSourcePrivate", mrb->object_class);
  MRB_SET_INSTANCE_TT(GSourcePrivate_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSourcePrivate::class_method_definitions */
/* sha: 2c1e25a367d2652409cc47e41a63007a259c7e8c0256f72a04d5bb7e7acdb3bf */
#if BIND_GSourcePrivate_INITIALIZE
  mrb_define_method(mrb, GSourcePrivate_class, "initialize", mrb_GLib_GSourcePrivate_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GSourcePrivate_class, "disown", mrb_GLib_GSourcePrivate_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GSourcePrivate_class, "belongs_to_ruby?", mrb_GLib_GSourcePrivate_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSourcePrivate::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSourcePrivate::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
