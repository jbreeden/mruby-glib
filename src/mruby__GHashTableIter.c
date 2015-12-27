/*
 * struct _GHashTableIter
 * Defined in file ghash.h @ line 43
 */

#include "mruby_GLib.h"

#if BIND_GHashTableIter_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GHashTableIter::initialize */
/* sha: b27a5c7b0e9f81b9a2f276b99411e36f1889e0abbb9fd88e823abf8ac04bb748 */
#if BIND_GHashTableIter_INITIALIZE
mrb_value
mrb_GLib_GHashTableIter_initialize(mrb_state* mrb, mrb_value self) {
  struct _GHashTableIter* native_object = (struct _GHashTableIter*)calloc(1, sizeof(struct _GHashTableIter));
  mruby_giftwrap__GHashTableIter_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHashTableIter::initialize */
/* sha: 23c878b5d2f0438b35c396faa11a96609197ba8a17d963dcb29232566c12a481 */
mrb_value
mrb_GLib_GHashTableIter_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GHashTableIter.disown only accepts objects of type GLib::GHashTableIter");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHashTableIter::belongs_to_ruby */
/* sha: b8f5c335539111db64b6271889aa99ec7a7ba749cc64e1639fcce8f593edffaf */
mrb_value
mrb_GLib_GHashTableIter_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GHashTableIter.belongs_to_ruby only accepts objects of type GLib::GHashTableIter");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: GHashTableIter::dummy1_reader */
/* sha: 10fa7a733ea95074f36ed1a03810101c7233573f5a7f0277cbf5a489b982d3de */
#if BIND_GHashTableIter_dummy1_FIELD_READER
/* get_dummy1
 *
 * Return Type: gpointer
 */
mrb_value
mrb_GLib_GHashTableIter_get_dummy1(mrb_state* mrb, mrb_value self) {
  struct _GHashTableIter * native_self = mruby_unbox__GHashTableIter(self);

  gpointer native_dummy1 = native_self->dummy1;

  mrb_value dummy1 = TODO_mruby_box_gpointer(mrb, native_dummy1);

  return dummy1;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHashTableIter::dummy1_writer */
/* sha: d754f9093075842ead53db7899e3fb60b9ebd9b1ac65d99827018c437a939196 */
#if BIND_GHashTableIter_dummy1_FIELD_WRITER
/* set_dummy1
 *
 * Parameters:
 * - value: gpointer
 */
mrb_value
mrb_GLib_GHashTableIter_set_dummy1(mrb_state* mrb, mrb_value self) {
  struct _GHashTableIter * native_self = mruby_unbox__GHashTableIter(self);
  mrb_value dummy1;

  mrb_get_args(mrb, "o", &dummy1);

  /* type checking */
  TODO_type_check_gpointer(dummy1);

  gpointer native_dummy1 = TODO_mruby_unbox_gpointer(dummy1);

  native_self->dummy1 = native_dummy1;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHashTableIter::dummy2_reader */
/* sha: 8d1706f08089c937b86787abc7138a3b9332e76b90f6c3698783a880ae831c5a */
#if BIND_GHashTableIter_dummy2_FIELD_READER
/* get_dummy2
 *
 * Return Type: gpointer
 */
mrb_value
mrb_GLib_GHashTableIter_get_dummy2(mrb_state* mrb, mrb_value self) {
  struct _GHashTableIter * native_self = mruby_unbox__GHashTableIter(self);

  gpointer native_dummy2 = native_self->dummy2;

  mrb_value dummy2 = TODO_mruby_box_gpointer(mrb, native_dummy2);

  return dummy2;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHashTableIter::dummy2_writer */
/* sha: d8b690e9191a9db38bf18faa31608c0bbf7dc2c1ee2f6a6cfd9da16c25fef453 */
#if BIND_GHashTableIter_dummy2_FIELD_WRITER
/* set_dummy2
 *
 * Parameters:
 * - value: gpointer
 */
mrb_value
mrb_GLib_GHashTableIter_set_dummy2(mrb_state* mrb, mrb_value self) {
  struct _GHashTableIter * native_self = mruby_unbox__GHashTableIter(self);
  mrb_value dummy2;

  mrb_get_args(mrb, "o", &dummy2);

  /* type checking */
  TODO_type_check_gpointer(dummy2);

  gpointer native_dummy2 = TODO_mruby_unbox_gpointer(dummy2);

  native_self->dummy2 = native_dummy2;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHashTableIter::dummy3_reader */
/* sha: ea3c46b70310e000a4f71f1df005637c8ce591ff7220f84a151398cc4188ecf8 */
#if BIND_GHashTableIter_dummy3_FIELD_READER
/* get_dummy3
 *
 * Return Type: gpointer
 */
mrb_value
mrb_GLib_GHashTableIter_get_dummy3(mrb_state* mrb, mrb_value self) {
  struct _GHashTableIter * native_self = mruby_unbox__GHashTableIter(self);

  gpointer native_dummy3 = native_self->dummy3;

  mrb_value dummy3 = TODO_mruby_box_gpointer(mrb, native_dummy3);

  return dummy3;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHashTableIter::dummy3_writer */
/* sha: edfcfbed3544c7261feebdcd6d78a7a5cf9e5c5f90db89ec7c371e8c5b515d38 */
#if BIND_GHashTableIter_dummy3_FIELD_WRITER
/* set_dummy3
 *
 * Parameters:
 * - value: gpointer
 */
mrb_value
mrb_GLib_GHashTableIter_set_dummy3(mrb_state* mrb, mrb_value self) {
  struct _GHashTableIter * native_self = mruby_unbox__GHashTableIter(self);
  mrb_value dummy3;

  mrb_get_args(mrb, "o", &dummy3);

  /* type checking */
  TODO_type_check_gpointer(dummy3);

  gpointer native_dummy3 = TODO_mruby_unbox_gpointer(dummy3);

  native_self->dummy3 = native_dummy3;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHashTableIter::dummy4_reader */
/* sha: 516f31d70e24b3c03fd5a0d94b42b16f9afbaf45b5b858859d7c1c503e636d83 */
#if BIND_GHashTableIter_dummy4_FIELD_READER
/* get_dummy4
 *
 * Return Type: int
 */
mrb_value
mrb_GLib_GHashTableIter_get_dummy4(mrb_state* mrb, mrb_value self) {
  struct _GHashTableIter * native_self = mruby_unbox__GHashTableIter(self);

  int native_dummy4 = native_self->dummy4;

  mrb_value dummy4 = mrb_fixnum_value(native_dummy4);

  return dummy4;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHashTableIter::dummy4_writer */
/* sha: fa8a7b0bca370fecfce1f88ccc162f8982fc342352dfd38e92df38f884975da1 */
#if BIND_GHashTableIter_dummy4_FIELD_WRITER
/* set_dummy4
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_GLib_GHashTableIter_set_dummy4(mrb_state* mrb, mrb_value self) {
  struct _GHashTableIter * native_self = mruby_unbox__GHashTableIter(self);
  mrb_int native_dummy4;

  mrb_get_args(mrb, "i", &native_dummy4);

  native_self->dummy4 = native_dummy4;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHashTableIter::dummy5_reader */
/* sha: c7a00a79b271c338409790dc2331cc127066e9584e719e36e93d31ac55b3565e */
#if BIND_GHashTableIter_dummy5_FIELD_READER
/* get_dummy5
 *
 * Return Type: gboolean
 */
mrb_value
mrb_GLib_GHashTableIter_get_dummy5(mrb_state* mrb, mrb_value self) {
  struct _GHashTableIter * native_self = mruby_unbox__GHashTableIter(self);

  gboolean native_dummy5 = native_self->dummy5;

  mrb_value dummy5 = mrb_bool_value(native_dummy5);

  return dummy5;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHashTableIter::dummy5_writer */
/* sha: 0b212b32f7bfa32383b2b8c19a646111545e381f3fe7f8ba815643864a6f9c09 */
#if BIND_GHashTableIter_dummy5_FIELD_WRITER
/* set_dummy5
 *
 * Parameters:
 * - value: gboolean
 */
mrb_value
mrb_GLib_GHashTableIter_set_dummy5(mrb_state* mrb, mrb_value self) {
  struct _GHashTableIter * native_self = mruby_unbox__GHashTableIter(self);
  mrb_bool native_dummy5;

  mrb_get_args(mrb, "b", &native_dummy5);

  native_self->dummy5 = native_dummy5;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHashTableIter::dummy6_reader */
/* sha: f9784ce3d200c19199aeb694a8f13085beffce0af81c072fc08ad283feb7959a */
#if BIND_GHashTableIter_dummy6_FIELD_READER
/* get_dummy6
 *
 * Return Type: gpointer
 */
mrb_value
mrb_GLib_GHashTableIter_get_dummy6(mrb_state* mrb, mrb_value self) {
  struct _GHashTableIter * native_self = mruby_unbox__GHashTableIter(self);

  gpointer native_dummy6 = native_self->dummy6;

  mrb_value dummy6 = TODO_mruby_box_gpointer(mrb, native_dummy6);

  return dummy6;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHashTableIter::dummy6_writer */
/* sha: 650c94895eb1238927eb9373219b20a22de3f3464c4d4c527f1da436676ec773 */
#if BIND_GHashTableIter_dummy6_FIELD_WRITER
/* set_dummy6
 *
 * Parameters:
 * - value: gpointer
 */
mrb_value
mrb_GLib_GHashTableIter_set_dummy6(mrb_state* mrb, mrb_value self) {
  struct _GHashTableIter * native_self = mruby_unbox__GHashTableIter(self);
  mrb_value dummy6;

  mrb_get_args(mrb, "o", &dummy6);

  /* type checking */
  TODO_type_check_gpointer(dummy6);

  gpointer native_dummy6 = TODO_mruby_unbox_gpointer(dummy6);

  native_self->dummy6 = native_dummy6;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_GLib_GHashTableIter_init(mrb_state* mrb) {
  struct RClass* GHashTableIter_class = mrb_define_class_under(mrb, GLib_module(mrb), "GHashTableIter", mrb->object_class);
  MRB_SET_INSTANCE_TT(GHashTableIter_class, MRB_TT_DATA);

#if BIND_GHashTableIter_INITIALIZE
  mrb_define_method(mrb, GHashTableIter_class, "initialize", mrb_GLib_GHashTableIter_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GHashTableIter_class, "disown", mrb_GLib_GHashTableIter_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GHashTableIter_class, "belongs_to_ruby?", mrb_GLib_GHashTableIter_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GHashTableIter_dummy1_FIELD_READER
  mrb_define_method(mrb, GHashTableIter_class, "dummy1", mrb_GLib_GHashTableIter_get_dummy1, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GHashTableIter_dummy1_FIELD_WRITER
  mrb_define_method(mrb, GHashTableIter_class, "dummy1=", mrb_GLib_GHashTableIter_set_dummy1, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GHashTableIter_dummy2_FIELD_READER
  mrb_define_method(mrb, GHashTableIter_class, "dummy2", mrb_GLib_GHashTableIter_get_dummy2, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GHashTableIter_dummy2_FIELD_WRITER
  mrb_define_method(mrb, GHashTableIter_class, "dummy2=", mrb_GLib_GHashTableIter_set_dummy2, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GHashTableIter_dummy3_FIELD_READER
  mrb_define_method(mrb, GHashTableIter_class, "dummy3", mrb_GLib_GHashTableIter_get_dummy3, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GHashTableIter_dummy3_FIELD_WRITER
  mrb_define_method(mrb, GHashTableIter_class, "dummy3=", mrb_GLib_GHashTableIter_set_dummy3, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GHashTableIter_dummy4_FIELD_READER
  mrb_define_method(mrb, GHashTableIter_class, "dummy4", mrb_GLib_GHashTableIter_get_dummy4, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GHashTableIter_dummy4_FIELD_WRITER
  mrb_define_method(mrb, GHashTableIter_class, "dummy4=", mrb_GLib_GHashTableIter_set_dummy4, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GHashTableIter_dummy5_FIELD_READER
  mrb_define_method(mrb, GHashTableIter_class, "dummy5", mrb_GLib_GHashTableIter_get_dummy5, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GHashTableIter_dummy5_FIELD_WRITER
  mrb_define_method(mrb, GHashTableIter_class, "dummy5=", mrb_GLib_GHashTableIter_set_dummy5, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GHashTableIter_dummy6_FIELD_READER
  mrb_define_method(mrb, GHashTableIter_class, "dummy6", mrb_GLib_GHashTableIter_get_dummy6, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GHashTableIter_dummy6_FIELD_WRITER
  mrb_define_method(mrb, GHashTableIter_class, "dummy6=", mrb_GLib_GHashTableIter_set_dummy6, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
