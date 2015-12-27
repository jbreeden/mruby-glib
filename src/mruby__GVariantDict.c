/*
 * struct _GVariantDict
 * Defined in file gvariant.h @ line 404
 */

#include "mruby_GLib.h"

#if BIND_GVariantDict_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GVariantDict::initialize */
/* sha: 660e1078cc8957466240cb86f1c358ec0c2eb7a5b7f59d697e67e16a55c80da1 */
#if BIND_GVariantDict_INITIALIZE
mrb_value
mrb_GLib_GVariantDict_initialize(mrb_state* mrb, mrb_value self) {
  struct _GVariantDict* native_object = (struct _GVariantDict*)calloc(1, sizeof(struct _GVariantDict));
  mruby_giftwrap__GVariantDict_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GVariantDict::initialize */
/* sha: 11831e839a76c3ba0209563600043ce7c4c85b30f90e826761851affaec466e5 */
mrb_value
mrb_GLib_GVariantDict_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GVariantDict.disown only accepts objects of type GLib::GVariantDict");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GVariantDict::belongs_to_ruby */
/* sha: 4791adf6a66ea9e83ad344a463fc295e614109f3eea399b131e0775e0e8abb26 */
mrb_value
mrb_GLib_GVariantDict_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GVariantDict.belongs_to_ruby only accepts objects of type GLib::GVariantDict");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: GVariantDict::x_reader */
/* sha: 39030fd3f245464bf67c658cbae270be382c8b618beb4edcffd2b4155493d4cf */
#if BIND_GVariantDict_x_FIELD_READER
/* get_x
 *
 * Return Type: gsize [16]
 */
mrb_value
mrb_GLib_GVariantDict_get_x(mrb_state* mrb, mrb_value self) {
  struct _GVariantDict * native_self = mruby_unbox__GVariantDict(self);

  gsize [16] native_x = native_self->x;

  mrb_value x = TODO_mruby_box_gsize_[16](mrb, native_x);

  return x;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GVariantDict::x_writer */
/* sha: 1a66bd77645d1236a6eebae8d9a458e1557b9b415fcd262946f525fde2496d7e */
#if BIND_GVariantDict_x_FIELD_WRITER
/* set_x
 *
 * Parameters:
 * - value: gsize [16]
 */
mrb_value
mrb_GLib_GVariantDict_set_x(mrb_state* mrb, mrb_value self) {
  struct _GVariantDict * native_self = mruby_unbox__GVariantDict(self);
  mrb_value x;

  mrb_get_args(mrb, "o", &x);

  /* type checking */
  TODO_type_check_gsize_[16](x);

  gsize [16] native_x = TODO_mruby_unbox_gsize_[16](x);

  native_self->x = native_x;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_GLib_GVariantDict_init(mrb_state* mrb) {
  struct RClass* GVariantDict_class = mrb_define_class_under(mrb, GLib_module(mrb), "GVariantDict", mrb->object_class);
  MRB_SET_INSTANCE_TT(GVariantDict_class, MRB_TT_DATA);

#if BIND_GVariantDict_INITIALIZE
  mrb_define_method(mrb, GVariantDict_class, "initialize", mrb_GLib_GVariantDict_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GVariantDict_class, "disown", mrb_GLib_GVariantDict_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GVariantDict_class, "belongs_to_ruby?", mrb_GLib_GVariantDict_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GVariantDict_x_FIELD_READER
  mrb_define_method(mrb, GVariantDict_class, "x", mrb_GLib_GVariantDict_get_x, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GVariantDict_x_FIELD_WRITER
  mrb_define_method(mrb, GVariantDict_class, "x=", mrb_GLib_GVariantDict_set_x, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
