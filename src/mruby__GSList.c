/*
 * struct _GSList
 * Defined in file gslist.h @ line 37
 */

#include "mruby_GLib.h"

#if BIND_GSList_TYPE

/*
 * Class Methods
 */

#if BIND_GSList_INITIALIZE
mrb_value
mrb_GLib_GSList_initialize(mrb_state* mrb, mrb_value self) {
  struct _GSList* native_object = (struct _GSList*)calloc(1, sizeof(struct _GSList));
  mruby_gift_struct _GSList_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_GSList_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSList.disown only accepts objects of type GLib::GSList");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_GSList_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSList.belongs_to_ruby only accepts objects of type GLib::GSList");
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

#if BIND_GSList_data_FIELD_READER
/* get_data
 *
 * Return Type: gpointer
 */
mrb_value
mrb_GLib_GSList_get_data(mrb_state* mrb, mrb_value self) {
  struct _GSList * native_self = mruby_unbox__GSList(self);

  gpointer native_data = native_self->data;

  mrb_value data = TODO_mruby_box_gpointer(mrb, native_data);

  return data;
}
#endif

#if BIND_GSList_data_FIELD_WRITER
/* set_data
 *
 * Parameters:
 * - value: gpointer
 */
mrb_value
mrb_GLib_GSList_set_data(mrb_state* mrb, mrb_value self) {
  struct _GSList * native_self = mruby_unbox__GSList(self);
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

#if BIND_GSList_next_FIELD_READER
/* get_next
 *
 * Return Type: GSList *
 */
mrb_value
mrb_GLib_GSList_get_next(mrb_state* mrb, mrb_value self) {
  struct _GSList * native_self = mruby_unbox__GSList(self);

  GSList * native_next = native_self->next;

  mrb_value next = (native_next == NULL ? mrb_nil_value() : mruby_box__GSList(mrb, native_next));

  return next;
}
#endif

#if BIND_GSList_next_FIELD_WRITER
/* set_next
 *
 * Parameters:
 * - value: GSList *
 */
mrb_value
mrb_GLib_GSList_set_next(mrb_state* mrb, mrb_value self) {
  struct _GSList * native_self = mruby_unbox__GSList(self);
  mrb_value next;

  mrb_get_args(mrb, "o", &next);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, next, GSList_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GSList expected");
    return mrb_nil_value();
  }

  GSList * native_next = (mrb_nil_p(next) ? NULL : mruby_unbox__GSList(next));

  native_self->next = native_next;
  

  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif


void mrb_GLib_GSList_init(mrb_state* mrb) {
  struct RClass* GSList_class = mrb_define_class_under(mrb, GLib_module(mrb), "GSList", mrb->object_class);
  MRB_SET_INSTANCE_TT(GSList_class, MRB_TT_DATA);

#if BIND_GSList_INITIALIZE
  mrb_define_method(mrb, GSList_class, "initialize", mrb_GLib_GSList_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GSList_class, "disown", mrb_GLib_GSList_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GSList_class, "belongs_to_ruby?", mrb_GLib_GSList_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GSList_data_FIELD_READER
  mrb_define_method(mrb, GSList_class, "data", mrb_GLib_GSList_get_data, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSList_data_FIELD_WRITER
  mrb_define_method(mrb, GSList_class, "data=", mrb_GLib_GSList_set_data, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSList_next_FIELD_READER
  mrb_define_method(mrb, GSList_class, "next", mrb_GLib_GSList_get_next, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSList_next_FIELD_WRITER
  mrb_define_method(mrb, GSList_class, "next=", mrb_GLib_GSList_set_next, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
