/*
 * struct _GTlsDatabase
 * Defined in file giotypes.h @ line 229
 */

#include "mruby_GLib.h"

#if BIND_GTlsDatabase_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GTlsDatabase::initialize */
/* sha: 3258c6254111774a3de36b370302470608d5f2f13a7eeadab09cb30361a2b618 */
#if BIND_GTlsDatabase_INITIALIZE
mrb_value
mrb_GLib_GTlsDatabase_initialize(mrb_state* mrb, mrb_value self) {
  struct _GTlsDatabase* native_object = (struct _GTlsDatabase*)calloc(1, sizeof(struct _GTlsDatabase));
  mruby_giftwrap__GTlsDatabase_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTlsDatabase::initialize */
/* sha: aac52da24409961ae46cb9d4be78a8411f6c9b70e95028f19a37cbfcbce7fd41 */
mrb_value
mrb_GLib_GTlsDatabase_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTlsDatabase.disown only accepts objects of type GLib::GTlsDatabase");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTlsDatabase::belongs_to_ruby */
/* sha: fbd63d8ba780e5931bf0223b3b025f55113eab5775e2608a36130470fe54c0c3 */
mrb_value
mrb_GLib_GTlsDatabase_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTlsDatabase.belongs_to_ruby only accepts objects of type GLib::GTlsDatabase");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GTlsDatabase_init(mrb_state* mrb) {
  struct RClass* GTlsDatabase_class = mrb_define_class_under(mrb, GLib_module(mrb), "GTlsDatabase", mrb->object_class);
  MRB_SET_INSTANCE_TT(GTlsDatabase_class, MRB_TT_DATA);

#if BIND_GTlsDatabase_INITIALIZE
  mrb_define_method(mrb, GTlsDatabase_class, "initialize", mrb_GLib_GTlsDatabase_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GTlsDatabase_class, "disown", mrb_GLib_GTlsDatabase_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GTlsDatabase_class, "belongs_to_ruby?", mrb_GLib_GTlsDatabase_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
