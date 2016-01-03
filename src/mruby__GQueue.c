/*
 * struct _GQueue
 * Defined in file gqueue.h @ line 36
 */

#include "mruby_GLib.h"

#if BIND_GQueue_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: GQueue::initialize */
/* sha: 173a1f7e4437dd7c460f7440bb047213b8c07903305b27c5af7a8e9f9e942f51 */
#if BIND_GQueue_INITIALIZE
mrb_value
mrb_GLib_GQueue_initialize(mrb_state* mrb, mrb_value self) {
  struct _GQueue* native_object = (struct _GQueue*)calloc(1, sizeof(struct _GQueue));
  mruby_giftwrap__GQueue_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GQueue::initialize */
/* sha: 4d6063308b2c76ec77a0d6273e16da4238cadafd2f529eaf043636131cfb4530 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GQueue::belongs_to_ruby */
/* sha: 915b5b4cec98e908affd1b89f44b55f8123db9a7fcc82886934a43d4e762b6cc */
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
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: GQueue::head_reader */
/* sha: fcd6dbd890d17d97c6945d1c2833324ccabab539d248a4c5e5d0c1729b36db71 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GQueue::head_writer */
/* sha: 6bccc7f8f1437a9f9a2156c6e3b38bc7f22e6e75661bf6e1f0ff9459254d1f84 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GQueue::tail_reader */
/* sha: c66ca429967e4c46ccc17350a94d0615d42abaf0c9be66d7bf6b2df9839b7c6d */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GQueue::tail_writer */
/* sha: f5a9adcc222881f48e8fd5cee4b856b02e16351aed6575a6258b1789d677d796 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GQueue::length_reader */
/* sha: d8baddd64dd055b8fc09bd08b5dfd9bd2d0d562268eca011494dcd87d200cd38 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GQueue::length_writer */
/* sha: 4979431968e66c15ddc9033ef52399034470642e9c5045d94cd5f6219d79e4c1 */
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
/* MRUBY_BINDING_END */


void mrb_GLib_GQueue_init(mrb_state* mrb) {
/* MRUBY_BINDING: GQueue::class_definition */
/* sha: d9c04552eb384efc3c7f1980ae7df83e4286527fa998031f931fa2c957730f51 */
  struct RClass* GQueue_class = mrb_define_class_under(mrb, GLib_module(mrb), "GQueue", mrb->object_class);
  MRB_SET_INSTANCE_TT(GQueue_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GQueue::class_method_definitions */
/* sha: d94c722da71d950bccca02bac5ed63b707b194e0912a78be79db7691fad00983 */
#if BIND_GQueue_INITIALIZE
  mrb_define_method(mrb, GQueue_class, "initialize", mrb_GLib_GQueue_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GQueue_class, "disown", mrb_GLib_GQueue_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GQueue_class, "belongs_to_ruby?", mrb_GLib_GQueue_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GQueue::attr_definitions */
/* sha: 54aff497bf8e94711f1f7db0c3610252311fda344c588999db2941c4170867e9 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GQueue::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
