/*
 * struct _GMappedFile
 * Defined in file gmappedfile.h @ line 32
 */

#include "mruby_GLib.h"

#if BIND_GMappedFile_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GMappedFile::initialize */
/* sha: 6966dfacf8d8744fffbdfe74e9a96b55cdcad97554f58f6710b01c54986666e0 */
#if BIND_GMappedFile_INITIALIZE
mrb_value
mrb_GLib_GMappedFile_initialize(mrb_state* mrb, mrb_value self) {
  struct _GMappedFile* native_object = (struct _GMappedFile*)calloc(1, sizeof(struct _GMappedFile));
  mruby_giftwrap__GMappedFile_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMappedFile::initialize */
/* sha: 009f288c7c2dc9f29f90b8f97c7fcf7b9c16d2803866084b80d6d991242d0d14 */
mrb_value
mrb_GLib_GMappedFile_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GMappedFile.disown only accepts objects of type GLib::GMappedFile");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMappedFile::belongs_to_ruby */
/* sha: d63bab55790e2bbe6e0823a1744373888441aafa7cc3a904132d83828a636dfe */
mrb_value
mrb_GLib_GMappedFile_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GMappedFile.belongs_to_ruby only accepts objects of type GLib::GMappedFile");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GMappedFile_init(mrb_state* mrb) {
  struct RClass* GMappedFile_class = mrb_define_class_under(mrb, GLib_module(mrb), "GMappedFile", mrb->object_class);
  MRB_SET_INSTANCE_TT(GMappedFile_class, MRB_TT_DATA);

#if BIND_GMappedFile_INITIALIZE
  mrb_define_method(mrb, GMappedFile_class, "initialize", mrb_GLib_GMappedFile_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GMappedFile_class, "disown", mrb_GLib_GMappedFile_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GMappedFile_class, "belongs_to_ruby?", mrb_GLib_GMappedFile_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
