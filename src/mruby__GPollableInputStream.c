/*
 * struct _GPollableInputStream
 * Defined in file giotypes.h @ line 138
 */

#include "mruby_GLib.h"

#if BIND_GPollableInputStream_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GPollableInputStream::initialize */
/* sha: bc4e6b0719e7070d115b5023b19825d8587526ef5d6a4fcc62cf80d392ced1bd */
#if BIND_GPollableInputStream_INITIALIZE
mrb_value
mrb_GLib_GPollableInputStream_initialize(mrb_state* mrb, mrb_value self) {
  struct _GPollableInputStream* native_object = (struct _GPollableInputStream*)calloc(1, sizeof(struct _GPollableInputStream));
  mruby_giftwrap__GPollableInputStream_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GPollableInputStream::initialize */
/* sha: a09f2059546afdcd2063366d491628563a64862291acf593907599410df0c397 */
mrb_value
mrb_GLib_GPollableInputStream_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GPollableInputStream.disown only accepts objects of type GLib::GPollableInputStream");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GPollableInputStream::belongs_to_ruby */
/* sha: 3ba8845080bc59c5b2759a54bd7aa8f69e2ed37cbbce7db86016c688f9c5dffe */
mrb_value
mrb_GLib_GPollableInputStream_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GPollableInputStream.belongs_to_ruby only accepts objects of type GLib::GPollableInputStream");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GPollableInputStream_init(mrb_state* mrb) {
  struct RClass* GPollableInputStream_class = mrb_define_class_under(mrb, GLib_module(mrb), "GPollableInputStream", mrb->object_class);
  MRB_SET_INSTANCE_TT(GPollableInputStream_class, MRB_TT_DATA);

#if BIND_GPollableInputStream_INITIALIZE
  mrb_define_method(mrb, GPollableInputStream_class, "initialize", mrb_GLib_GPollableInputStream_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GPollableInputStream_class, "disown", mrb_GLib_GPollableInputStream_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GPollableInputStream_class, "belongs_to_ruby?", mrb_GLib_GPollableInputStream_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
