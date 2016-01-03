/*
 * struct _GDateTime
 * Defined in file gdatetime.h @ line 99
 */

#include "mruby_GLib.h"

#if BIND_GDateTime_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GDateTime::initialize */
/* sha: 28f4313b47ed0408ce7195e432680acf94ab674abe707944ec228427f91e9484 */
#if BIND_GDateTime_INITIALIZE
mrb_value
mrb_GLib_GDateTime_initialize(mrb_state* mrb, mrb_value self) {
  struct _GDateTime* native_object = (struct _GDateTime*)calloc(1, sizeof(struct _GDateTime));
  mruby_giftwrap__GDateTime_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDateTime::initialize */
/* sha: ae598174dd0cf98a36a40f892df305884e4ea382c10fa160c41bfdcebe24599a */
mrb_value
mrb_GLib_GDateTime_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDateTime.disown only accepts objects of type GLib::GDateTime");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDateTime::belongs_to_ruby */
/* sha: ac45c4bf7a27e0fe9184d479887d5231a42eddec8bb069cad6fb3b278cb2b218 */
mrb_value
mrb_GLib_GDateTime_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GDateTime.belongs_to_ruby only accepts objects of type GLib::GDateTime");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GDateTime_init(mrb_state* mrb) {
/* MRUBY_BINDING: GDateTime::class_definition */
/* sha: ffe7095c66b6ef60a6542eeebe83698e5d2a2d9a43900fc5e82779b4021829fa */
  struct RClass* GDateTime_class = mrb_define_class_under(mrb, GLib_module(mrb), "GDateTime", mrb->object_class);
  MRB_SET_INSTANCE_TT(GDateTime_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDateTime::class_method_definitions */
/* sha: 811140d619e4f34e4ca806f4761880aca8ddc4b757605b53d3d4e64edef033ee */
#if BIND_GDateTime_INITIALIZE
  mrb_define_method(mrb, GDateTime_class, "initialize", mrb_GLib_GDateTime_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GDateTime_class, "disown", mrb_GLib_GDateTime_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GDateTime_class, "belongs_to_ruby?", mrb_GLib_GDateTime_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDateTime::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDateTime::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
