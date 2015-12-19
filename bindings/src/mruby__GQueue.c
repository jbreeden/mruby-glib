/*
 * struct _GQueue
 * Defined in file gqueue.h @ line 36
 */

#include "mruby_GLib.h"

#if BIND_GQueue_TYPE

/*
 * Class Methods
 */

#if BIND_GQueue_INITIALIZE
mrb_value
mrb_GLib_GQueue_initialize(mrb_state* mrb, mrb_value self) {
  struct _GQueue* native_object = (struct _GQueue*)calloc(1, sizeof(struct _GQueue));
  mruby_gift_struct _GQueue_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_GQueue_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GQueue.disown only accepts objects of type GLib::GQueue");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_GQueue_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GQueue.belongs_to_ruby only accepts objects of type GLib::GQueue");
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

#if BIND_GQueue_head_FIELD_READER
/* get_head
 *
 * Return Type: GList *
 */
mrb_value
mrb_GLib_GQueue_get_head(mrb_state* mrb, mrb_value self) {
  struct _GQueue * native_self = mruby_unbox__GQueue(self);

  GList * native_head = native_self->head;

  mrb_value head = (native_head == NULL ? mrb_nil_value() : mruby_box__GList(mrb, native_head));

  return head;
}
#endif

#if BIND_GQueue_head_FIELD_WRITER
/* set_head
 *
 * Parameters:
 * - value: GList *
 */
mrb_value
mrb_GLib_GQueue_set_head(mrb_state* mrb, mrb_value self) {
  struct _GQueue * native_self = mruby_unbox__GQueue(self);
  mrb_value head;

  mrb_get_args(mrb, "o", &head);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, head, GList_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GList expected");
    return mrb_nil_value();
  }

  GList * native_head = (mrb_nil_p(head) ? NULL : mruby_unbox__GList(head));

  native_self->head = native_head;
  

  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GQueue_tail_FIELD_READER
/* get_tail
 *
 * Return Type: GList *
 */
mrb_value
mrb_GLib_GQueue_get_tail(mrb_state* mrb, mrb_value self) {
  struct _GQueue * native_self = mruby_unbox__GQueue(self);

  GList * native_tail = native_self->tail;

  mrb_value tail = (native_tail == NULL ? mrb_nil_value() : mruby_box__GList(mrb, native_tail));

  return tail;
}
#endif

#if BIND_GQueue_tail_FIELD_WRITER
/* set_tail
 *
 * Parameters:
 * - value: GList *
 */
mrb_value
mrb_GLib_GQueue_set_tail(mrb_state* mrb, mrb_value self) {
  struct _GQueue * native_self = mruby_unbox__GQueue(self);
  mrb_value tail;

  mrb_get_args(mrb, "o", &tail);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, tail, GList_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GList expected");
    return mrb_nil_value();
  }

  GList * native_tail = (mrb_nil_p(tail) ? NULL : mruby_unbox__GList(tail));

  native_self->tail = native_tail;
  

  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_GQueue_length_FIELD_READER
/* get_length
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GQueue_get_length(mrb_state* mrb, mrb_value self) {
  struct _GQueue * native_self = mruby_unbox__GQueue(self);

  guint native_length = native_self->length;

  mrb_value length = mrb_fixnum_value(native_length);

  return length;
}
#endif

#if BIND_GQueue_length_FIELD_WRITER
/* set_length
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GQueue_set_length(mrb_state* mrb, mrb_value self) {
  struct _GQueue * native_self = mruby_unbox__GQueue(self);
  mrb_int native_length;

  mrb_get_args(mrb, "i", &native_length);

  native_self->length = native_length;
  

  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif


void mrb_GLib_GQueue_init(mrb_state* mrb) {
  struct RClass* GQueue_class = mrb_define_class_under(mrb, GLib_module(mrb), "GQueue", mrb->object_class);
  MRB_SET_INSTANCE_TT(GQueue_class, MRB_TT_DATA);

#if BIND_GQueue_INITIALIZE
  mrb_define_method(mrb, GQueue_class, "initialize", mrb_GLib_GQueue_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GQueue_class, "disown", mrb_GLib_GQueue_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GQueue_class, "belongs_to_ruby?", mrb_GLib_GQueue_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GQueue_head_FIELD_READER
  mrb_define_method(mrb, GQueue_class, "head", mrb_GLib_GQueue_get_head, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GQueue_head_FIELD_WRITER
  mrb_define_method(mrb, GQueue_class, "head=", mrb_GLib_GQueue_set_head, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GQueue_tail_FIELD_READER
  mrb_define_method(mrb, GQueue_class, "tail", mrb_GLib_GQueue_get_tail, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GQueue_tail_FIELD_WRITER
  mrb_define_method(mrb, GQueue_class, "tail=", mrb_GLib_GQueue_set_tail, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GQueue_length_FIELD_READER
  mrb_define_method(mrb, GQueue_class, "length", mrb_GLib_GQueue_get_length, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GQueue_length_FIELD_WRITER
  mrb_define_method(mrb, GQueue_class, "length=", mrb_GLib_GQueue_set_length, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
