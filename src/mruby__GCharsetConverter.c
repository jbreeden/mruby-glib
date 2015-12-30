/*
 * struct _GCharsetConverter
 * Defined in file giotypes.h @ line 39
 */

#include "mruby_GLib.h"

#if BIND_GCharsetConverter_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GCharsetConverter::initialize */
/* sha: 95ee9a492921e810f08b7ed20edc2785cdcb1415d635f5a2e15a809f9e279052 */
#if BIND_GCharsetConverter_INITIALIZE
mrb_value
mrb_GLib_GCharsetConverter_initialize(mrb_state* mrb, mrb_value self) {
  struct _GCharsetConverter* native_object = (struct _GCharsetConverter*)calloc(1, sizeof(struct _GCharsetConverter));
  mruby_giftwrap__GCharsetConverter_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GCharsetConverter::initialize */
/* sha: eaa3ef4805c1a44e8f4fa072ff3f5ac048c9537885f634da6dcbd5e1aa235620 */
mrb_value
mrb_GLib_GCharsetConverter_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GCharsetConverter.disown only accepts objects of type GLib::GCharsetConverter");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GCharsetConverter::belongs_to_ruby */
/* sha: 582635fe75546e30216b1a156d34925051262f92e80340bfe80075e34c153834 */
mrb_value
mrb_GLib_GCharsetConverter_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GCharsetConverter.belongs_to_ruby only accepts objects of type GLib::GCharsetConverter");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GCharsetConverter_init(mrb_state* mrb) {
  struct RClass* GCharsetConverter_class = mrb_define_class_under(mrb, GLib_module(mrb), "GCharsetConverter", mrb->object_class);
  MRB_SET_INSTANCE_TT(GCharsetConverter_class, MRB_TT_DATA);

#if BIND_GCharsetConverter_INITIALIZE
  mrb_define_method(mrb, GCharsetConverter_class, "initialize", mrb_GLib_GCharsetConverter_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GCharsetConverter_class, "disown", mrb_GLib_GCharsetConverter_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GCharsetConverter_class, "belongs_to_ruby?", mrb_GLib_GCharsetConverter_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
