/*
 * struct _GRand
 * Defined in file grand.h @ line 36
 */

#include "mruby_GLib.h"

#if BIND_GRand_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GRand::initialize */
/* sha: 707d5aeefaf0efa8d1bd8fb72096e17189c98101bfcc4d332b82afbe49f2b8df */
#if BIND_GRand_INITIALIZE
mrb_value
mrb_GLib_GRand_initialize(mrb_state* mrb, mrb_value self) {
  struct _GRand* native_object = (struct _GRand*)calloc(1, sizeof(struct _GRand));
  mruby_giftwrap__GRand_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GRand::initialize */
/* sha: bce0d65d4295b7f91c00a115947beead5489c0ce35c3bef83ccf6a1f21b71e75 */
mrb_value
mrb_GLib_GRand_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GRand.disown only accepts objects of type GLib::GRand");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GRand::belongs_to_ruby */
/* sha: 6e26152bad2c6c97a11191b76d76d65479ef55bc9abebffe528010a68ea35eec */
mrb_value
mrb_GLib_GRand_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GRand.belongs_to_ruby only accepts objects of type GLib::GRand");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GRand_init(mrb_state* mrb) {
/* MRUBY_BINDING: GRand::class_definition */
/* sha: 699ff0de96b0781b6f08d46abdd17471c71769384839baeabf207fc29196aac7 */
  struct RClass* GRand_class = mrb_define_class_under(mrb, GLib_module(mrb), "GRand", mrb->object_class);
  MRB_SET_INSTANCE_TT(GRand_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GRand::class_method_definitions */
/* sha: c9a4f10b3c725539ab608581becadcc42fba978db38a54f383381abf771f40f7 */
#if BIND_GRand_INITIALIZE
  mrb_define_method(mrb, GRand_class, "initialize", mrb_GLib_GRand_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GRand_class, "disown", mrb_GLib_GRand_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GRand_class, "belongs_to_ruby?", mrb_GLib_GRand_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GRand::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GRand::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
