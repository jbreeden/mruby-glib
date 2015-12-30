/*
 * struct _GDataInputStream
 * Defined in file giotypes.h @ line 43
 */

#include "mruby_GLib.h"

#if BIND_GDataInputStream_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GDataInputStream::initialize */
/* sha: c520381cda75f87a25468179696b0efcd3d7be6b6af5d6ca3e64faa542f7c188 */
#if BIND_GDataInputStream_INITIALIZE
mrb_value
mrb_GLib_GDataInputStream_initialize(mrb_state* mrb, mrb_value self) {
  struct _GDataInputStream* native_object = (struct _GDataInputStream*)calloc(1, sizeof(struct _GDataInputStream));
  mruby_giftwrap__GDataInputStream_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDataInputStream::initialize */
/* sha: 0dcd6c8aaf1d978c6df3f9c28c3f4a3c5a59b281d2cc501cc1eb3e61351053b7 */
mrb_value
mrb_GLib_GDataInputStream_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDataInputStream.disown only accepts objects of type GLib::GDataInputStream");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDataInputStream::belongs_to_ruby */
/* sha: 3cdab1e8f24ac51af3e5adc5adaf3bd1de00decb024831b480a8e8a4c0c33332 */
mrb_value
mrb_GLib_GDataInputStream_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDataInputStream.belongs_to_ruby only accepts objects of type GLib::GDataInputStream");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GDataInputStream_init(mrb_state* mrb) {
  struct RClass* GDataInputStream_class = mrb_define_class_under(mrb, GLib_module(mrb), "GDataInputStream", mrb->object_class);
  MRB_SET_INSTANCE_TT(GDataInputStream_class, MRB_TT_DATA);

#if BIND_GDataInputStream_INITIALIZE
  mrb_define_method(mrb, GDataInputStream_class, "initialize", mrb_GLib_GDataInputStream_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GDataInputStream_class, "disown", mrb_GLib_GDataInputStream_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GDataInputStream_class, "belongs_to_ruby?", mrb_GLib_GDataInputStream_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
