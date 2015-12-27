/*
 * struct _GNode
 * Defined in file gnode.h @ line 36
 */

#include "mruby_GLib.h"

#if BIND_GNode_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GNode::initialize */
/* sha: 5057e89fea8b4e59686f4eeb0f8ae400d4477e646869ad5a196e74697d07902e */
#if BIND_GNode_INITIALIZE
mrb_value
mrb_GLib_GNode_initialize(mrb_state* mrb, mrb_value self) {
  struct _GNode* native_object = (struct _GNode*)calloc(1, sizeof(struct _GNode));
  mruby_giftwrap__GNode_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GNode::initialize */
/* sha: edea9923995b88805e8ac32f79262ad847bfc0c64e9b6499cc0e5e1e2259c07f */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GNode::belongs_to_ruby */
/* sha: 820dbae98aebe7276529cdd466aa1df636b3ef07e021ac87e5e27114439a7696 */
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
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: GNode::data_reader */
/* sha: bdd7ac11f9f8f2ba6c5e5c3f6eb3c3067fadd8b79c5cacbe68b10a99fdcbb3fc */
#if BIND_GNode_data_FIELD_READER
/* get_data
 *
 * Return Type: gpointer
 */
mrb_value
mrb_GLib_GNode_get_data(mrb_state* mrb, mrb_value self) {
  struct _GNode * native_self = mruby_unbox__GNode(self);

  gpointer native_data = native_self->data;

  mrb_value data = TODO_mruby_box_gpointer(mrb, native_data);

  return data;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GNode::data_writer */
/* sha: a06dd48feacdcbfd6565ad621e8c25f8692edd3d241e9a7f25e415a311a75272 */
#if BIND_GNode_data_FIELD_WRITER
/* set_data
 *
 * Parameters:
 * - value: gpointer
 */
mrb_value
mrb_GLib_GNode_set_data(mrb_state* mrb, mrb_value self) {
  struct _GNode * native_self = mruby_unbox__GNode(self);
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

/* MRUBY_BINDING: GNode::next_reader */
/* sha: 9679af499b3eeb0e3b92dacb8a932e4b92313c05b6a32490e8c2909505901c79 */
#if BIND_GNode_next_FIELD_READER
/* get_next
 *
 * Return Type: GNode *
 */
mrb_value
mrb_GLib_GNode_get_next(mrb_state* mrb, mrb_value self) {
  struct _GNode * native_self = mruby_unbox__GNode(self);

  GNode * native_next = native_self->next;

  mrb_value next = (native_next == NULL ? mrb_nil_value() : mruby_box__GNode(mrb, native_next));

  return next;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GNode::next_writer */
/* sha: d77fb4e5d90b169813fdaf5a92d2e4a1099cd299cbd5ce42b4c9e844dbb1fdfb */
#if BIND_GNode_next_FIELD_WRITER
/* set_next
 *
 * Parameters:
 * - value: GNode *
 */
mrb_value
mrb_GLib_GNode_set_next(mrb_state* mrb, mrb_value self) {
  struct _GNode * native_self = mruby_unbox__GNode(self);
  mrb_value next;

  mrb_get_args(mrb, "o", &next);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, next, GNode_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GNode expected");
    return mrb_nil_value();
  }

  GNode * native_next = (mrb_nil_p(next) ? NULL : mruby_unbox__GNode(next));

  native_self->next = native_next;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GNode::prev_reader */
/* sha: 2e1e47cd28f366707eb0f1a735f2abcbd294681d5df6965c06e0a041766a032a */
#if BIND_GNode_prev_FIELD_READER
/* get_prev
 *
 * Return Type: GNode *
 */
mrb_value
mrb_GLib_GNode_get_prev(mrb_state* mrb, mrb_value self) {
  struct _GNode * native_self = mruby_unbox__GNode(self);

  GNode * native_prev = native_self->prev;

  mrb_value prev = (native_prev == NULL ? mrb_nil_value() : mruby_box__GNode(mrb, native_prev));

  return prev;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GNode::prev_writer */
/* sha: 1f62f163b374a7f63cfaaa379a7d1883f1370b77b89adae0e10160a47364a949 */
#if BIND_GNode_prev_FIELD_WRITER
/* set_prev
 *
 * Parameters:
 * - value: GNode *
 */
mrb_value
mrb_GLib_GNode_set_prev(mrb_state* mrb, mrb_value self) {
  struct _GNode * native_self = mruby_unbox__GNode(self);
  mrb_value prev;

  mrb_get_args(mrb, "o", &prev);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, prev, GNode_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GNode expected");
    return mrb_nil_value();
  }

  GNode * native_prev = (mrb_nil_p(prev) ? NULL : mruby_unbox__GNode(prev));

  native_self->prev = native_prev;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GNode::parent_reader */
/* sha: edf7a94bfa226e2517f128178c2917f91d3da717a431668623accc4b8957cebc */
#if BIND_GNode_parent_FIELD_READER
/* get_parent
 *
 * Return Type: GNode *
 */
mrb_value
mrb_GLib_GNode_get_parent(mrb_state* mrb, mrb_value self) {
  struct _GNode * native_self = mruby_unbox__GNode(self);

  GNode * native_parent = native_self->parent;

  mrb_value parent = (native_parent == NULL ? mrb_nil_value() : mruby_box__GNode(mrb, native_parent));

  return parent;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GNode::parent_writer */
/* sha: 40bf4fff16e57e5f7f34613971aee582508751365abfc8400ab0d302fd927bd8 */
#if BIND_GNode_parent_FIELD_WRITER
/* set_parent
 *
 * Parameters:
 * - value: GNode *
 */
mrb_value
mrb_GLib_GNode_set_parent(mrb_state* mrb, mrb_value self) {
  struct _GNode * native_self = mruby_unbox__GNode(self);
  mrb_value parent;

  mrb_get_args(mrb, "o", &parent);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, parent, GNode_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GNode expected");
    return mrb_nil_value();
  }

  GNode * native_parent = (mrb_nil_p(parent) ? NULL : mruby_unbox__GNode(parent));

  native_self->parent = native_parent;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GNode::children_reader */
/* sha: 3c3c2c8fa2e4b3dd6c7373a76aee7fbec1ee4a578de3ce25d9ad3173547b5433 */
#if BIND_GNode_children_FIELD_READER
/* get_children
 *
 * Return Type: GNode *
 */
mrb_value
mrb_GLib_GNode_get_children(mrb_state* mrb, mrb_value self) {
  struct _GNode * native_self = mruby_unbox__GNode(self);

  GNode * native_children = native_self->children;

  mrb_value children = (native_children == NULL ? mrb_nil_value() : mruby_box__GNode(mrb, native_children));

  return children;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GNode::children_writer */
/* sha: 7cbbed9b1f22cfdbf77b00a1cd57542db18326f6b6a86c95ed0b6b3b9bb2dc15 */
#if BIND_GNode_children_FIELD_WRITER
/* set_children
 *
 * Parameters:
 * - value: GNode *
 */
mrb_value
mrb_GLib_GNode_set_children(mrb_state* mrb, mrb_value self) {
  struct _GNode * native_self = mruby_unbox__GNode(self);
  mrb_value children;

  mrb_get_args(mrb, "o", &children);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, children, GNode_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GNode expected");
    return mrb_nil_value();
  }

  GNode * native_children = (mrb_nil_p(children) ? NULL : mruby_unbox__GNode(children));

  native_self->children = native_children;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


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
