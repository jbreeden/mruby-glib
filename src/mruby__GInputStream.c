/*
 * struct _GInputStream
 * Defined in file ginputstream.h @ line 47
 */

#include "mruby_GLib.h"

#if BIND_GInputStream_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GInputStream::initialize */
/* sha: 1704c2de7887035b30970a124536e709042cb104e06c156d2a3d89594e21fc6a */
#if BIND_GInputStream_INITIALIZE
mrb_value
mrb_GLib_GInputStream_initialize(mrb_state* mrb, mrb_value self) {
  struct _GInputStream* native_object = (struct _GInputStream*)calloc(1, sizeof(struct _GInputStream));
  mruby_giftwrap__GInputStream_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStream::initialize */
/* sha: d72ca4cc769f236d44a4c5d0cbce950b1b202e4404af47b719ceb0c661dd7af9 */
mrb_value
mrb_GLib_GInputStream_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GInputStream.disown only accepts objects of type GLib::GInputStream");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStream::belongs_to_ruby */
/* sha: c587bc21fbc9afadaa8ddb58fafef6a0d3eeaf44b05fa7745f8b3316195ab409 */
mrb_value
mrb_GLib_GInputStream_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GInputStream.belongs_to_ruby only accepts objects of type GLib::GInputStream");
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

/* MRUBY_BINDING: GInputStream::parent_instance_reader */
/* sha: bda38bda8ad1f5f4bab301c569a64da7866323d28e601898c797cb879647ee4f */
#if BIND_GInputStream_parent_instance_FIELD_READER
/* get_parent_instance
 *
 * Return Type: GObject
 */
mrb_value
mrb_GLib_GInputStream_get_parent_instance(mrb_state* mrb, mrb_value self) {
  struct _GInputStream * native_self = mruby_unbox__GInputStream(self);

  GObject native_parent_instance = native_self->parent_instance;

  mrb_value parent_instance = TODO_mruby_box_GObject(mrb, native_parent_instance);

  return parent_instance;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStream::parent_instance_writer */
/* sha: e2d316a9d54ec5be7332bfe5162e165385b8426e9b97dce1fa42a7cf0dc816bf */
#if BIND_GInputStream_parent_instance_FIELD_WRITER
/* set_parent_instance
 *
 * Parameters:
 * - value: GObject
 */
mrb_value
mrb_GLib_GInputStream_set_parent_instance(mrb_state* mrb, mrb_value self) {
  struct _GInputStream * native_self = mruby_unbox__GInputStream(self);
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

/* MRUBY_BINDING: GInputStream::priv_reader */
/* sha: 06cea0959f4e4642b638a324dbf98e4cb677f0e0d12b7b4d5a37d2544e4eae3c */
#if BIND_GInputStream_priv_FIELD_READER
/* get_priv
 *
 * Return Type: GInputStreamPrivate *
 */
mrb_value
mrb_GLib_GInputStream_get_priv(mrb_state* mrb, mrb_value self) {
  struct _GInputStream * native_self = mruby_unbox__GInputStream(self);

  GInputStreamPrivate * native_priv = native_self->priv;

  mrb_value priv = (native_priv == NULL ? mrb_nil_value() : mruby_box__GInputStreamPrivate(mrb, native_priv));

  return priv;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStream::priv_writer */
/* sha: 61f8367c41ae7af46cd57e4148da5998b8e2ba27d6692def92ccd382e114b086 */
#if BIND_GInputStream_priv_FIELD_WRITER
/* set_priv
 *
 * Parameters:
 * - value: GInputStreamPrivate *
 */
mrb_value
mrb_GLib_GInputStream_set_priv(mrb_state* mrb, mrb_value self) {
  struct _GInputStream * native_self = mruby_unbox__GInputStream(self);
  mrb_value priv;

  mrb_get_args(mrb, "o", &priv);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, priv, GInputStreamPrivate_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GInputStreamPrivate expected");
    return mrb_nil_value();
  }

  GInputStreamPrivate * native_priv = (mrb_nil_p(priv) ? NULL : mruby_unbox__GInputStreamPrivate(priv));

  native_self->priv = native_priv;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_GLib_GInputStream_init(mrb_state* mrb) {
/* MRUBY_BINDING: GInputStream::class_definition */
/* sha: d99e10500c290eed4a99c2133288f59bfaeb595e9cdfa499dbe48fb5300ac2bd */
  struct RClass* GInputStream_class = mrb_define_class_under(mrb, GLib_module(mrb), "GInputStream", mrb->object_class);
  MRB_SET_INSTANCE_TT(GInputStream_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStream::class_method_definitions */
/* sha: 4a8ff6973744e2b623ac6a16f2b575d5068be83398bd5bc43194ab68207cecac */
#if BIND_GInputStream_INITIALIZE
  mrb_define_method(mrb, GInputStream_class, "initialize", mrb_GLib_GInputStream_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GInputStream_class, "disown", mrb_GLib_GInputStream_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GInputStream_class, "belongs_to_ruby?", mrb_GLib_GInputStream_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStream::attr_definitions */
/* sha: 2fc8bc3fbc56295ceca5777bb3fc149d38e2585878b1a9b0e0ab06c94d4fa79e */
  /*
   * Fields
   */
#if BIND_GInputStream_parent_instance_FIELD_READER
  mrb_define_method(mrb, GInputStream_class, "parent_instance", mrb_GLib_GInputStream_get_parent_instance, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GInputStream_parent_instance_FIELD_WRITER
  mrb_define_method(mrb, GInputStream_class, "parent_instance=", mrb_GLib_GInputStream_set_parent_instance, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GInputStream_priv_FIELD_READER
  mrb_define_method(mrb, GInputStream_class, "priv", mrb_GLib_GInputStream_get_priv, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GInputStream_priv_FIELD_WRITER
  mrb_define_method(mrb, GInputStream_class, "priv=", mrb_GLib_GInputStream_set_priv, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStream::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
