/*
 * struct _GList
 * Defined in file glist.h @ line 37
 */

#include "mruby_GLib.h"

#if BIND_GList_TYPE

/*
 * Class Methods
 */

#if BIND_GList_INITIALIZE
mrb_value
mrb_GLib_GList_initialize(mrb_state* mrb, mrb_value self) {
  struct _GList* native_object = (struct _GList*)calloc(1, sizeof(struct _GList));
  mruby_giftwrap__GList_data_ptr(self, native_object);
  return self;
}
#endif

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

/*
 * Fields
 */

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
