/*
 * struct _GList
 * Defined in file glist.h @ line 37
 */

#include "mruby_GLib.h"

#if BIND_GList_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GList::initialize */
/* sha: ac32aaf5da1b120ad48c30cef5e7235619486274a6776077644b0cf5c25332db */
#if BIND_GList_INITIALIZE
mrb_value
mrb_GLib_GList_initialize(mrb_state* mrb, mrb_value self) {
  struct _GList* native_object = (struct _GList*)calloc(1, sizeof(struct _GList));
  mruby_giftwrap__GList_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GList::initialize */
/* sha: 0b33f729b2b1f20aeac0b3f6214795538d040e7c45fcf1547b8776913cb32d88 */
mrb_value
mrb_GLib_GList_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GList.disown only accepts objects of type GLib::GList");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GList::belongs_to_ruby */
/* sha: 9f3894a190ec5ae37fc37599ce0c36466938c8359018d6e4e5969c3b0ceb85c5 */
mrb_value
mrb_GLib_GList_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GList.belongs_to_ruby only accepts objects of type GLib::GList");
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

/* MRUBY_BINDING: GList::data_reader */
/* sha: 8ca6a156f903328392f8c3c09bc6a28e67154b336c98515ee30ef97067705527 */
#if BIND_GList_data_FIELD_READER
/* get_data
 *
 * Return Type: gpointer
 */
mrb_value
mrb_GLib_GList_get_data(mrb_state* mrb, mrb_value self) {
  struct _GList * native_self = mruby_unbox__GList(self);

  gpointer native_data = native_self->data;

  mrb_value data = TODO_mruby_box_gpointer(mrb, native_data);

  return data;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GList::data_writer */
/* sha: 73b2073d9a8230287696e2bbf3620dbaa7ee66c01bf5dc6958edabdb2627ef35 */
#if BIND_GList_data_FIELD_WRITER
/* set_data
 *
 * Parameters:
 * - value: gpointer
 */
mrb_value
mrb_GLib_GList_set_data(mrb_state* mrb, mrb_value self) {
  struct _GList * native_self = mruby_unbox__GList(self);
  mrb_value data;

  mrb_get_args(mrb, "o", &data);

  /* type checking */
  TODO_type_check_gpointer(data);

  gpointer native_data = TODO_mruby_unbox_gpointer(data);

  native_self->data = native_data;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GList::next_reader */
/* sha: e65ad22e961bcee33a7ba7c29389f9bba5be27a532248044d10b2add6c64f3dd */
#if BIND_GList_next_FIELD_READER
/* get_next
 *
 * Return Type: GList *
 */
mrb_value
mrb_GLib_GList_get_next(mrb_state* mrb, mrb_value self) {
  struct _GList * native_self = mruby_unbox__GList(self);

  GList * native_next = native_self->next;

  mrb_value next = (native_next == NULL ? mrb_nil_value() : mruby_box__GList(mrb, native_next));

  return next;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GList::next_writer */
/* sha: d99b31518226f76673f31d21837d686e816d9a22f29ec2d10316beb2c889cfed */
#if BIND_GList_next_FIELD_WRITER
/* set_next
 *
 * Parameters:
 * - value: GList *
 */
mrb_value
mrb_GLib_GList_set_next(mrb_state* mrb, mrb_value self) {
  struct _GList * native_self = mruby_unbox__GList(self);
  mrb_value next;

  mrb_get_args(mrb, "o", &next);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, next, GList_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GList expected");
    return mrb_nil_value();
  }

  GList * native_next = (mrb_nil_p(next) ? NULL : mruby_unbox__GList(next));

  native_self->next = native_next;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GList::prev_reader */
/* sha: fd35733bb29edfbad5c1c9a8b170cc712c0a237492aa2bc75bd1dc2c9152b2f8 */
#if BIND_GList_prev_FIELD_READER
/* get_prev
 *
 * Return Type: GList *
 */
mrb_value
mrb_GLib_GList_get_prev(mrb_state* mrb, mrb_value self) {
  struct _GList * native_self = mruby_unbox__GList(self);

  GList * native_prev = native_self->prev;

  mrb_value prev = (native_prev == NULL ? mrb_nil_value() : mruby_box__GList(mrb, native_prev));

  return prev;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GList::prev_writer */
/* sha: 647d28c2ac06f2670f6624792c349d19fa03724a93fc03de6a49a22a68e0b5d9 */
#if BIND_GList_prev_FIELD_WRITER
/* set_prev
 *
 * Parameters:
 * - value: GList *
 */
mrb_value
mrb_GLib_GList_set_prev(mrb_state* mrb, mrb_value self) {
  struct _GList * native_self = mruby_unbox__GList(self);
  mrb_value prev;

  mrb_get_args(mrb, "o", &prev);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, prev, GList_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GList expected");
    return mrb_nil_value();
  }

  GList * native_prev = (mrb_nil_p(prev) ? NULL : mruby_unbox__GList(prev));

  native_self->prev = native_prev;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_GLib_GList_init(mrb_state* mrb) {
  struct RClass* GList_class = mrb_define_class_under(mrb, GLib_module(mrb), "GList", mrb->object_class);
  MRB_SET_INSTANCE_TT(GList_class, MRB_TT_DATA);

#if BIND_GList_INITIALIZE
  mrb_define_method(mrb, GList_class, "initialize", mrb_GLib_GList_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GList_class, "disown", mrb_GLib_GList_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GList_class, "belongs_to_ruby?", mrb_GLib_GList_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GList_data_FIELD_READER
  mrb_define_method(mrb, GList_class, "data", mrb_GLib_GList_get_data, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GList_data_FIELD_WRITER
  mrb_define_method(mrb, GList_class, "data=", mrb_GLib_GList_set_data, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GList_next_FIELD_READER
  mrb_define_method(mrb, GList_class, "next", mrb_GLib_GList_get_next, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GList_next_FIELD_WRITER
  mrb_define_method(mrb, GList_class, "next=", mrb_GLib_GList_set_next, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GList_prev_FIELD_READER
  mrb_define_method(mrb, GList_class, "prev", mrb_GLib_GList_get_prev, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GList_prev_FIELD_WRITER
  mrb_define_method(mrb, GList_class, "prev=", mrb_GLib_GList_set_prev, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
