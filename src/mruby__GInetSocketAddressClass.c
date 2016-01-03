/*
 * struct _GInetSocketAddressClass
 * Defined in file ginetsocketaddress.h @ line 40
 */

#include "mruby_GLib.h"

#if BIND_GInetSocketAddressClass_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GInetSocketAddressClass::initialize */
/* sha: 2b80e0c27571516d74a325a1e725e520e78e3bd1e2e9c1a28afd324278a16cd0 */
#if BIND_GInetSocketAddressClass_INITIALIZE
mrb_value
mrb_GLib_GInetSocketAddressClass_initialize(mrb_state* mrb, mrb_value self) {
  struct _GInetSocketAddressClass* native_object = (struct _GInetSocketAddressClass*)calloc(1, sizeof(struct _GInetSocketAddressClass));
  mruby_giftwrap__GInetSocketAddressClass_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetSocketAddressClass::initialize */
/* sha: 943311aab773f3046c011004327f876794d5f1f5e7a73db061f6be1e400fb212 */
mrb_value
mrb_GLib_GInetSocketAddressClass_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GInetSocketAddressClass.disown only accepts objects of type GLib::GInetSocketAddressClass");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetSocketAddressClass::belongs_to_ruby */
/* sha: c736d2ba21d27aa8dd0688939fa38e505b5a330a38948b458f81d497e90b6f4a */
mrb_value
mrb_GLib_GInetSocketAddressClass_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GInetSocketAddressClass.belongs_to_ruby only accepts objects of type GLib::GInetSocketAddressClass");
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

/* MRUBY_BINDING: GInetSocketAddressClass::parent_class_reader */
/* sha: 66b8275ea5507f4b7fd3378fe63c4c86d3a0028f6dd9df898606bc3269896c35 */
#if BIND_GInetSocketAddressClass_parent_class_FIELD_READER
/* get_parent_class
 *
 * Return Type: GSocketAddressClass
 */
mrb_value
mrb_GLib_GInetSocketAddressClass_get_parent_class(mrb_state* mrb, mrb_value self) {
  struct _GInetSocketAddressClass * native_self = mruby_unbox__GInetSocketAddressClass(self);

  GSocketAddressClass native_parent_class = native_self->parent_class;

  mrb_value parent_class = TODO_mruby_box_GSocketAddressClass(mrb, native_parent_class);

  return parent_class;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetSocketAddressClass::parent_class_writer */
/* sha: 9f0f851dba4a084cd76d5fb4d8bb4c6bd2e61b329424c419351cc996a1e52297 */
#if BIND_GInetSocketAddressClass_parent_class_FIELD_WRITER
/* set_parent_class
 *
 * Parameters:
 * - value: GSocketAddressClass
 */
mrb_value
mrb_GLib_GInetSocketAddressClass_set_parent_class(mrb_state* mrb, mrb_value self) {
  struct _GInetSocketAddressClass * native_self = mruby_unbox__GInetSocketAddressClass(self);
  mrb_value parent_class;

  mrb_get_args(mrb, "o", &parent_class);

  /* type checking */
  TODO_type_check_GSocketAddressClass(parent_class);

  GSocketAddressClass native_parent_class = TODO_mruby_unbox_GSocketAddressClass(parent_class);

  native_self->parent_class = native_parent_class;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_GLib_GInetSocketAddressClass_init(mrb_state* mrb) {
/* MRUBY_BINDING: GInetSocketAddressClass::class_definition */
/* sha: 3ccca466bc03532b833a886609f825c82e0ce20ce9b5224d5c580aa6776b1229 */
  struct RClass* GInetSocketAddressClass_class = mrb_define_class_under(mrb, GLib_module(mrb), "GInetSocketAddressClass", mrb->object_class);
  MRB_SET_INSTANCE_TT(GInetSocketAddressClass_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetSocketAddressClass::class_method_definitions */
/* sha: 9882178bd0796fb549509ae744d25fbec26b59d2a0d96f9b588dbf242ecb0787 */
#if BIND_GInetSocketAddressClass_INITIALIZE
  mrb_define_method(mrb, GInetSocketAddressClass_class, "initialize", mrb_GLib_GInetSocketAddressClass_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GInetSocketAddressClass_class, "disown", mrb_GLib_GInetSocketAddressClass_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GInetSocketAddressClass_class, "belongs_to_ruby?", mrb_GLib_GInetSocketAddressClass_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetSocketAddressClass::attr_definitions */
/* sha: 9c920c64bcf75074aae5ea21dd546e3c7093d43740db10ec1cf99ea24fca2708 */
  /*
   * Fields
   */
#if BIND_GInetSocketAddressClass_parent_class_FIELD_READER
  mrb_define_method(mrb, GInetSocketAddressClass_class, "parent_class", mrb_GLib_GInetSocketAddressClass_get_parent_class, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GInetSocketAddressClass_parent_class_FIELD_WRITER
  mrb_define_method(mrb, GInetSocketAddressClass_class, "parent_class=", mrb_GLib_GInetSocketAddressClass_set_parent_class, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetSocketAddressClass::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
