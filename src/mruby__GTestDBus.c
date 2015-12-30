/*
 * struct _GTestDBus
 * Defined in file giotypes.h @ line 551
 */

#include "mruby_GLib.h"

#if BIND_GTestDBus_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GTestDBus::initialize */
/* sha: 3f7bf1a264be562e45c3c56596e96aa6f7c27c795e57defe9dc3114a0577a953 */
#if BIND_GTestDBus_INITIALIZE
mrb_value
mrb_GLib_GTestDBus_initialize(mrb_state* mrb, mrb_value self) {
  struct _GTestDBus* native_object = (struct _GTestDBus*)calloc(1, sizeof(struct _GTestDBus));
  mruby_giftwrap__GTestDBus_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestDBus::initialize */
/* sha: 642842e395a48d53974503b764fe5160dd2875d3a56d38ca075b8569cc2403c6 */
mrb_value
mrb_GLib_GTestDBus_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTestDBus.disown only accepts objects of type GLib::GTestDBus");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestDBus::belongs_to_ruby */
/* sha: 5589f42ee304eaef2eff2444461c8dff039f7053638081563c3522926b49090b */
mrb_value
mrb_GLib_GTestDBus_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTestDBus.belongs_to_ruby only accepts objects of type GLib::GTestDBus");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GTestDBus_init(mrb_state* mrb) {
  struct RClass* GTestDBus_class = mrb_define_class_under(mrb, GLib_module(mrb), "GTestDBus", mrb->object_class);
  MRB_SET_INSTANCE_TT(GTestDBus_class, MRB_TT_DATA);

#if BIND_GTestDBus_INITIALIZE
  mrb_define_method(mrb, GTestDBus_class, "initialize", mrb_GLib_GTestDBus_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GTestDBus_class, "disown", mrb_GLib_GTestDBus_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GTestDBus_class, "belongs_to_ruby?", mrb_GLib_GTestDBus_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
