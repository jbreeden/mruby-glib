/*
 * struct _GTlsFileDatabase
 * Defined in file giotypes.h @ line 230
 */

#include "mruby_GLib.h"

#if BIND_GTlsFileDatabase_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GTlsFileDatabase::initialize */
/* sha: c4b9023038147f4cc960dbe953348a27c5437ae47c059ddd317b5fc64d4cf306 */
#if BIND_GTlsFileDatabase_INITIALIZE
mrb_value
mrb_GLib_GTlsFileDatabase_initialize(mrb_state* mrb, mrb_value self) {
  struct _GTlsFileDatabase* native_object = (struct _GTlsFileDatabase*)calloc(1, sizeof(struct _GTlsFileDatabase));
  mruby_giftwrap__GTlsFileDatabase_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTlsFileDatabase::initialize */
/* sha: e5fa5ff34c23f6efbce0584d62bc0e5931a43a8ce575431f026ccd73e05bf9b3 */
mrb_value
mrb_GLib_GTlsFileDatabase_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTlsFileDatabase.disown only accepts objects of type GLib::GTlsFileDatabase");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTlsFileDatabase::belongs_to_ruby */
/* sha: 6c0d754d3de9e7640a20d386746352d4f0fa945242f1255328313c85317f33c8 */
mrb_value
mrb_GLib_GTlsFileDatabase_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTlsFileDatabase.belongs_to_ruby only accepts objects of type GLib::GTlsFileDatabase");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GTlsFileDatabase_init(mrb_state* mrb) {
  struct RClass* GTlsFileDatabase_class = mrb_define_class_under(mrb, GLib_module(mrb), "GTlsFileDatabase", mrb->object_class);
  MRB_SET_INSTANCE_TT(GTlsFileDatabase_class, MRB_TT_DATA);

#if BIND_GTlsFileDatabase_INITIALIZE
  mrb_define_method(mrb, GTlsFileDatabase_class, "initialize", mrb_GLib_GTlsFileDatabase_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GTlsFileDatabase_class, "disown", mrb_GLib_GTlsFileDatabase_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GTlsFileDatabase_class, "belongs_to_ruby?", mrb_GLib_GTlsFileDatabase_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
