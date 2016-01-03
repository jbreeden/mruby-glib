/*
 * struct GTestCase
 * Defined in file gtestutils.h @ line 33
 */

#include "mruby_GLib.h"

#if BIND_GTestCase_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GTestCase::initialize */
/* sha: 90d61566155163d83883ce9533b282be8b1ad59ea1a4639536b80164fa334ffd */
#if BIND_GTestCase_INITIALIZE
mrb_value
mrb_GLib_GTestCase_initialize(mrb_state* mrb, mrb_value self) {
  struct GTestCase* native_object = (struct GTestCase*)calloc(1, sizeof(struct GTestCase));
  mruby_giftwrap_GTestCase_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestCase::initialize */
/* sha: 46beba37e76d685a983ada19d792f082eaf721f857ecda199b03b396afdd7f9e */
mrb_value
mrb_GLib_GTestCase_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTestCase.disown only accepts objects of type GLib::GTestCase");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestCase::belongs_to_ruby */
/* sha: 7233b2d577735a8772d6c1c2b3176e65fd9c5cb5ff55325fc4ce0287d74a50a6 */
mrb_value
mrb_GLib_GTestCase_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTestCase.belongs_to_ruby only accepts objects of type GLib::GTestCase");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GTestCase_init(mrb_state* mrb) {
/* MRUBY_BINDING: GTestCase::class_definition */
/* sha: 327676ab23a8085cdeee39f59f265b673b6f15c06e3ed13252a7a7cdc39efdd2 */
  struct RClass* GTestCase_class = mrb_define_class_under(mrb, GLib_module(mrb), "GTestCase", mrb->object_class);
  MRB_SET_INSTANCE_TT(GTestCase_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestCase::class_method_definitions */
/* sha: bb545205b7b8ee319030f63a89ba2d2252c805b7a682dc45ac97ba97bc808b67 */
#if BIND_GTestCase_INITIALIZE
  mrb_define_method(mrb, GTestCase_class, "initialize", mrb_GLib_GTestCase_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GTestCase_class, "disown", mrb_GLib_GTestCase_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GTestCase_class, "belongs_to_ruby?", mrb_GLib_GTestCase_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestCase::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestCase::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
