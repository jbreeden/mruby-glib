/*
 * struct _GConverter
 * Defined in file giotypes.h @ line 40
 */

#include "mruby_GLib.h"

#if BIND_GConverter_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GConverter::initialize */
/* sha: 37f7de0beccff645e64bd1fdd4b06de2aaa9da03d370eff7fe159569b2836547 */
#if BIND_GConverter_INITIALIZE
mrb_value
mrb_GLib_GConverter_initialize(mrb_state* mrb, mrb_value self) {
  struct _GConverter* native_object = (struct _GConverter*)calloc(1, sizeof(struct _GConverter));
  mruby_giftwrap__GConverter_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GConverter::initialize */
/* sha: 0739ada63d587ec4ab1132c189e9d5976c94154579d1b7b1694470429df6cafa */
mrb_value
mrb_GLib_GConverter_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GConverter.disown only accepts objects of type GLib::GConverter");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GConverter::belongs_to_ruby */
/* sha: 5e0c553ff5a7f44d1ffc8da2ea34421f72e7aadd5320fc868987be6e1b20adc4 */
mrb_value
mrb_GLib_GConverter_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GConverter.belongs_to_ruby only accepts objects of type GLib::GConverter");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GConverter_init(mrb_state* mrb) {
  struct RClass* GConverter_class = mrb_define_class_under(mrb, GLib_module(mrb), "GConverter", mrb->object_class);
  MRB_SET_INSTANCE_TT(GConverter_class, MRB_TT_DATA);

#if BIND_GConverter_INITIALIZE
  mrb_define_method(mrb, GConverter_class, "initialize", mrb_GLib_GConverter_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GConverter_class, "disown", mrb_GLib_GConverter_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GConverter_class, "belongs_to_ruby?", mrb_GLib_GConverter_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
