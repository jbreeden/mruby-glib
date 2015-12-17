/*
 * struct _GNode
 * Defined in file gnode.h @ line 36
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_GLib.h"

#if BIND_GNode_TYPE

/*
 * Class Methods
 */

#if BIND_GNode_INITIALIZE
mrb_value
mrb_GLib_GNode_initialize(mrb_state* mrb, mrb_value self) {
  struct _GNode* native_object = (struct _GNode*)malloc(sizeof(struct _GNode));
  mruby_gift_struct _GNode_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_GNode_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GNode.disown only accepts objects of type GLib::GNode");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_GNode_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GNode.belongs_to_ruby only accepts objects of type GLib::GNode");
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

#if BIND_GNode_data_FIELD_READER
/* get_data
 *
 * Return Type: gpointer
 */
mrb_value
mrb_GLib_GNode_get_data(mrb_state* mrb, mrb_value self) {
  struct _GNode * native_self = mruby_unbox_struct _GNode(self);

  gpointer native_field = native_self->data;

  mrb_value ruby_field = TODO_mruby_box_gpointer(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GNode_data_FIELD_WRITER
/* set_data
 *
 * Parameters:
 * - value: gpointer
 */
mrb_value
mrb_GLib_GNode_set_data(mrb_state* mrb, mrb_value self) {
  struct _GNode * native_self = mruby_unbox_struct _GNode(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_gpointer(ruby_field);

  gpointer native_field = TODO_mruby_unbox_gpointer(ruby_field);

  native_self->data = native_field;

  return ruby_field;
}
#endif

#if BIND_GNode_next_FIELD_READER
/* get_next
 *
 * Return Type: GNode *
 */
mrb_value
mrb_GLib_GNode_get_next(mrb_state* mrb, mrb_value self) {
  struct _GNode * native_self = mruby_unbox_struct _GNode(self);

  GNode * native_field = native_self->next;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box__GNode(mrb, native_field));

  return ruby_field;
}
#endif

#if BIND_GNode_next_FIELD_WRITER
/* set_next
 *
 * Parameters:
 * - value: GNode *
 */
mrb_value
mrb_GLib_GNode_set_next(mrb_state* mrb, mrb_value self) {
  struct _GNode * native_self = mruby_unbox_struct _GNode(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, GNode_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GNode expected");
    return mrb_nil_value();
  }

  GNode * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox__GNode(ruby_field));

  native_self->next = native_field;

  return ruby_field;
}
#endif

#if BIND_GNode_prev_FIELD_READER
/* get_prev
 *
 * Return Type: GNode *
 */
mrb_value
mrb_GLib_GNode_get_prev(mrb_state* mrb, mrb_value self) {
  struct _GNode * native_self = mruby_unbox_struct _GNode(self);

  GNode * native_field = native_self->prev;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box__GNode(mrb, native_field));

  return ruby_field;
}
#endif

#if BIND_GNode_prev_FIELD_WRITER
/* set_prev
 *
 * Parameters:
 * - value: GNode *
 */
mrb_value
mrb_GLib_GNode_set_prev(mrb_state* mrb, mrb_value self) {
  struct _GNode * native_self = mruby_unbox_struct _GNode(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, GNode_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GNode expected");
    return mrb_nil_value();
  }

  GNode * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox__GNode(ruby_field));

  native_self->prev = native_field;

  return ruby_field;
}
#endif

#if BIND_GNode_parent_FIELD_READER
/* get_parent
 *
 * Return Type: GNode *
 */
mrb_value
mrb_GLib_GNode_get_parent(mrb_state* mrb, mrb_value self) {
  struct _GNode * native_self = mruby_unbox_struct _GNode(self);

  GNode * native_field = native_self->parent;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box__GNode(mrb, native_field));

  return ruby_field;
}
#endif

#if BIND_GNode_parent_FIELD_WRITER
/* set_parent
 *
 * Parameters:
 * - value: GNode *
 */
mrb_value
mrb_GLib_GNode_set_parent(mrb_state* mrb, mrb_value self) {
  struct _GNode * native_self = mruby_unbox_struct _GNode(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, GNode_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GNode expected");
    return mrb_nil_value();
  }

  GNode * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox__GNode(ruby_field));

  native_self->parent = native_field;

  return ruby_field;
}
#endif

#if BIND_GNode_children_FIELD_READER
/* get_children
 *
 * Return Type: GNode *
 */
mrb_value
mrb_GLib_GNode_get_children(mrb_state* mrb, mrb_value self) {
  struct _GNode * native_self = mruby_unbox_struct _GNode(self);

  GNode * native_field = native_self->children;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box__GNode(mrb, native_field));

  return ruby_field;
}
#endif

#if BIND_GNode_children_FIELD_WRITER
/* set_children
 *
 * Parameters:
 * - value: GNode *
 */
mrb_value
mrb_GLib_GNode_set_children(mrb_state* mrb, mrb_value self) {
  struct _GNode * native_self = mruby_unbox_struct _GNode(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, GNode_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GNode expected");
    return mrb_nil_value();
  }

  GNode * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox__GNode(ruby_field));

  native_self->children = native_field;

  return ruby_field;
}
#endif


void mrb_GLib_GNode_init(mrb_state* mrb) {
  struct RClass* GNode_class = mrb_define_class_under(mrb, GLib_module(mrb), "GNode", mrb->object_class);
  MRB_SET_INSTANCE_TT(GNode_class, MRB_TT_DATA);

#if BIND_GNode_INITIALIZE
  mrb_define_method(mrb, GNode_class, "initialize", mrb_GLib_GNode_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GNode_class, "disown", mrb_GLib_GNode_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GNode_class, "belongs_to_ruby?", mrb_GLib_GNode_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GNode_data_FIELD_READER
  mrb_define_method(mrb, GNode_class, "data", mrb_GLib_GNode_get_data, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GNode_data_FIELD_WRITER
  mrb_define_method(mrb, GNode_class, "data=", mrb_GLib_GNode_set_data, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GNode_next_FIELD_READER
  mrb_define_method(mrb, GNode_class, "next", mrb_GLib_GNode_get_next, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GNode_next_FIELD_WRITER
  mrb_define_method(mrb, GNode_class, "next=", mrb_GLib_GNode_set_next, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GNode_prev_FIELD_READER
  mrb_define_method(mrb, GNode_class, "prev", mrb_GLib_GNode_get_prev, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GNode_prev_FIELD_WRITER
  mrb_define_method(mrb, GNode_class, "prev=", mrb_GLib_GNode_set_prev, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GNode_parent_FIELD_READER
  mrb_define_method(mrb, GNode_class, "parent", mrb_GLib_GNode_get_parent, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GNode_parent_FIELD_WRITER
  mrb_define_method(mrb, GNode_class, "parent=", mrb_GLib_GNode_set_parent, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GNode_children_FIELD_READER
  mrb_define_method(mrb, GNode_class, "children", mrb_GLib_GNode_get_children, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GNode_children_FIELD_WRITER
  mrb_define_method(mrb, GNode_class, "children=", mrb_GLib_GNode_set_children, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
