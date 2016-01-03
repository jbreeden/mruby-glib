/*
 * struct _GSocketAddress
 * Defined in file gsocketaddress.h @ line 42
 */

#include "mruby_GLib.h"

#if BIND_GSocketAddress_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GSocketAddress::initialize */
/* sha: 805e389b7d280c3b2c53e6d4642fb717805bfcb2131cc35309f3837765fa0c88 */
#if BIND_GSocketAddress_INITIALIZE
mrb_value
mrb_GLib_GSocketAddress_initialize(mrb_state* mrb, mrb_value self) {
  struct _GSocketAddress* native_object = (struct _GSocketAddress*)calloc(1, sizeof(struct _GSocketAddress));
  mruby_giftwrap__GSocketAddress_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketAddress::initialize */
/* sha: 881fda1ede0abc4fa5260c5ad69ec9b6c4bdd3b8b548d9425211f9eea8dbd098 */
mrb_value
mrb_GLib_GSocketAddress_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSocketAddress.disown only accepts objects of type GLib::GSocketAddress");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketAddress::belongs_to_ruby */
/* sha: 25ad86af6b10788d6bbfc2989c547370a3071988b068e4298de5adffdcf8d7aa */
mrb_value
mrb_GLib_GSocketAddress_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSocketAddress.belongs_to_ruby only accepts objects of type GLib::GSocketAddress");
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

/* MRUBY_BINDING: GSocketAddress::parent_instance_reader */
/* sha: 78283281780843f19adabb42bc5495ea56ace01ea7d02a745538283dfc155ca9 */
#if BIND_GSocketAddress_parent_instance_FIELD_READER
/* get_parent_instance
 *
 * Return Type: GObject
 */
mrb_value
mrb_GLib_GSocketAddress_get_parent_instance(mrb_state* mrb, mrb_value self) {
  struct _GSocketAddress * native_self = mruby_unbox__GSocketAddress(self);

  GObject native_parent_instance = native_self->parent_instance;

  mrb_value parent_instance = TODO_mruby_box_GObject(mrb, native_parent_instance);

  return parent_instance;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketAddress::parent_instance_writer */
/* sha: 16ac34b614e3458639f20562540aab3c408bd343f42e5225fdc7af857ea18c02 */
#if BIND_GSocketAddress_parent_instance_FIELD_WRITER
/* set_parent_instance
 *
 * Parameters:
 * - value: GObject
 */
mrb_value
mrb_GLib_GSocketAddress_set_parent_instance(mrb_state* mrb, mrb_value self) {
  struct _GSocketAddress * native_self = mruby_unbox__GSocketAddress(self);
  mrb_value parent_instance;

  mrb_get_args(mrb, "o", &parent_instance);

  /* type checking */
  TODO_type_check_GObject(parent_instance);

  GObject native_parent_instance = TODO_mruby_unbox_GObject(parent_instance);

  native_self->parent_instance = native_parent_instance;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_GLib_GSocketAddress_init(mrb_state* mrb) {
/* MRUBY_BINDING: GSocketAddress::class_definition */
/* sha: 9568775162c9203e26ef9a8c971e00f0187523ddf672d930d6118529d0f5bdbe */
  struct RClass* GSocketAddress_class = mrb_define_class_under(mrb, GLib_module(mrb), "GSocketAddress", mrb->object_class);
  MRB_SET_INSTANCE_TT(GSocketAddress_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketAddress::class_method_definitions */
/* sha: 1caf0e19e18e579f50484057a1a3f0c4d94341ccc2b073a6b27f7b0ea74e0e74 */
#if BIND_GSocketAddress_INITIALIZE
  mrb_define_method(mrb, GSocketAddress_class, "initialize", mrb_GLib_GSocketAddress_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GSocketAddress_class, "disown", mrb_GLib_GSocketAddress_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GSocketAddress_class, "belongs_to_ruby?", mrb_GLib_GSocketAddress_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketAddress::attr_definitions */
/* sha: 5a6fd36379414a96c80735f94a19287e755d29ba8fa712d13baa21c06a0f2efe */
  /*
   * Fields
   */
#if BIND_GSocketAddress_parent_instance_FIELD_READER
  mrb_define_method(mrb, GSocketAddress_class, "parent_instance", mrb_GLib_GSocketAddress_get_parent_instance, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSocketAddress_parent_instance_FIELD_WRITER
  mrb_define_method(mrb, GSocketAddress_class, "parent_instance=", mrb_GLib_GSocketAddress_set_parent_instance, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketAddress::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
