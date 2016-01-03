/*
 * struct _GMatchInfo
 * Defined in file gregex.h @ line 423
 */

#include "mruby_GLib.h"

#if BIND_GMatchInfo_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GMatchInfo::initialize */
/* sha: 054442772137ccf8c2bc56234b6d10cbd4216b1fb0b2755576903db5b6bd0db2 */
#if BIND_GMatchInfo_INITIALIZE
mrb_value
mrb_GLib_GMatchInfo_initialize(mrb_state* mrb, mrb_value self) {
  struct _GMatchInfo* native_object = (struct _GMatchInfo*)calloc(1, sizeof(struct _GMatchInfo));
  mruby_giftwrap__GMatchInfo_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMatchInfo::initialize */
/* sha: 776df74dac7a77d977856c71b0de514435424011a594db18cd1424e2dea05e0e */
mrb_value
mrb_GLib_GMatchInfo_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GMatchInfo.disown only accepts objects of type GLib::GMatchInfo");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMatchInfo::belongs_to_ruby */
/* sha: d5566b5476114959ac827315f3ef94358bd5d41f05b109f7c3681e557268b45d */
mrb_value
mrb_GLib_GMatchInfo_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GMatchInfo.belongs_to_ruby only accepts objects of type GLib::GMatchInfo");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_GLib_GMatchInfo_init(mrb_state* mrb) {
/* MRUBY_BINDING: GMatchInfo::class_definition */
/* sha: d7b282e9d28a640ec0a08e826e078aed92f54ff29ae1d2c6a566aff0db10813d */
  struct RClass* GMatchInfo_class = mrb_define_class_under(mrb, GLib_module(mrb), "GMatchInfo", mrb->object_class);
  MRB_SET_INSTANCE_TT(GMatchInfo_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMatchInfo::class_method_definitions */
/* sha: 2a3ef4a5d2173eaf86adf623a9a5b48f48a39cf49000c9219e35839f601b1741 */
#if BIND_GMatchInfo_INITIALIZE
  mrb_define_method(mrb, GMatchInfo_class, "initialize", mrb_GLib_GMatchInfo_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GMatchInfo_class, "disown", mrb_GLib_GMatchInfo_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GMatchInfo_class, "belongs_to_ruby?", mrb_GLib_GMatchInfo_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMatchInfo::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMatchInfo::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
