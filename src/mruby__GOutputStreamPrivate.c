/*
 * struct _GOutputStreamPrivate
 * Defined in file goutputstream.h @ line 49
 */

#include "mruby_GLib.h"

#if BIND_GOutputStreamPrivate_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GOutputStreamPrivate::initialize */
/* sha: 7bcc66508ed3f52da550f9e3802e26190b3bd9987fa1a5eec54aa3b802807f18 */
#if BIND_GOutputStreamPrivate_INITIALIZE
mrb_value
mrb_GLib_GOutputStreamPrivate_initialize(mrb_state* mrb, mrb_value self) {
  struct _GOutputStreamPrivate* native_object = (struct _GOutputStreamPrivate*)calloc(1, sizeof(struct _GOutputStreamPrivate));
  mruby_giftwrap__GOutputStreamPrivate_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamPrivate::initialize */
/* sha: d0fc340fef5b345d50a9fd6e09ad6048618aaf2d6332e58d3b649be0613ec66f */
mrb_value
mrb_GLib_GOutputStreamPrivate_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GOutputStreamPrivate.disown only accepts objects of type GLib::GOutputStreamPrivate");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamPrivate::belongs_to_ruby */
/* sha: 0600e52a41446e30415166845a3ad28547ee6aec1ef96fed2dcff66f9f835a98 */
mrb_value
mrb_GLib_GOutputStreamPrivate_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GOutputStreamPrivate.belongs_to_ruby only accepts objects of type GLib::GOutputStreamPrivate");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GOutputStreamPrivate_init(mrb_state* mrb) {
/* MRUBY_BINDING: GOutputStreamPrivate::class_definition */
/* sha: 73e04280a5eca5974f9578c9a10ae97853bdbb098412df5eefea3a7ee25caab0 */
  struct RClass* GOutputStreamPrivate_class = mrb_define_class_under(mrb, GLib_module(mrb), "GOutputStreamPrivate", mrb->object_class);
  MRB_SET_INSTANCE_TT(GOutputStreamPrivate_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamPrivate::class_method_definitions */
/* sha: 5bd787a2dce507b10c43c78acc5618ec727dc0195f6feb9e99b03a28bddfea6a */
#if BIND_GOutputStreamPrivate_INITIALIZE
  mrb_define_method(mrb, GOutputStreamPrivate_class, "initialize", mrb_GLib_GOutputStreamPrivate_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GOutputStreamPrivate_class, "disown", mrb_GLib_GOutputStreamPrivate_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GOutputStreamPrivate_class, "belongs_to_ruby?", mrb_GLib_GOutputStreamPrivate_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamPrivate::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamPrivate::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
