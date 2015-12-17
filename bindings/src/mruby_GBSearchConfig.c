/*
 * GBSearchConfig
 * Defined in file gbsearcharray.h @ line 48
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_GLib.h"

#if BIND_GBSearchConfig_TYPE

/*
 * Class Methods
 */

#if BIND_GBSearchConfig_INITIALIZE
mrb_value
mrb_GLib_GBSearchConfig_initialize(mrb_state* mrb, mrb_value self) {
  GBSearchConfig* native_object = (GBSearchConfig*)malloc(sizeof(GBSearchConfig));
  mruby_gift_GBSearchConfig_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_GLib_GBSearchConfig_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GBSearchConfig.disown only accepts objects of type GLib::GBSearchConfig");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_GLib_GBSearchConfig_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GBSearchConfig.belongs_to_ruby only accepts objects of type GLib::GBSearchConfig");
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

#if BIND_GBSearchConfig_sizeof_node_FIELD_READER
/* get_sizeof_node
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GBSearchConfig_get_sizeof_node(mrb_state* mrb, mrb_value self) {
  GBSearchConfig * native_self = mruby_unbox_GBSearchConfig(self);

  guint native_field = native_self->sizeof_node;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GBSearchConfig_sizeof_node_FIELD_WRITER
/* set_sizeof_node
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GBSearchConfig_set_sizeof_node(mrb_state* mrb, mrb_value self) {
  GBSearchConfig * native_self = mruby_unbox_GBSearchConfig(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = mrb_fixnum(ruby_field);

  native_self->sizeof_node = native_field;

  return ruby_field;
}
#endif

#if BIND_GBSearchConfig_cmp_nodes_FIELD_READER
/* get_cmp_nodes
 *
 * Return Type: GBSearchCompareFunc
 */
mrb_value
mrb_GLib_GBSearchConfig_get_cmp_nodes(mrb_state* mrb, mrb_value self) {
  GBSearchConfig * native_self = mruby_unbox_GBSearchConfig(self);

  GBSearchCompareFunc native_field = native_self->cmp_nodes;

  mrb_value ruby_field = TODO_mruby_box_GBSearchCompareFunc(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_GBSearchConfig_cmp_nodes_FIELD_WRITER
/* set_cmp_nodes
 *
 * Parameters:
 * - value: GBSearchCompareFunc
 */
mrb_value
mrb_GLib_GBSearchConfig_set_cmp_nodes(mrb_state* mrb, mrb_value self) {
  GBSearchConfig * native_self = mruby_unbox_GBSearchConfig(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_GBSearchCompareFunc(ruby_field);

  GBSearchCompareFunc native_field = TODO_mruby_unbox_GBSearchCompareFunc(ruby_field);

  native_self->cmp_nodes = native_field;

  return ruby_field;
}
#endif

#if BIND_GBSearchConfig_flags_FIELD_READER
/* get_flags
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GBSearchConfig_get_flags(mrb_state* mrb, mrb_value self) {
  GBSearchConfig * native_self = mruby_unbox_GBSearchConfig(self);

  guint native_field = native_self->flags;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_GBSearchConfig_flags_FIELD_WRITER
/* set_flags
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GBSearchConfig_set_flags(mrb_state* mrb, mrb_value self) {
  GBSearchConfig * native_self = mruby_unbox_GBSearchConfig(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = mrb_fixnum(ruby_field);

  native_self->flags = native_field;

  return ruby_field;
}
#endif


void mrb_GLib_GBSearchConfig_init(mrb_state* mrb) {
  struct RClass* GBSearchConfig_class = mrb_define_class_under(mrb, GLib_module(mrb), "GBSearchConfig", mrb->object_class);
  MRB_SET_INSTANCE_TT(GBSearchConfig_class, MRB_TT_DATA);

#if BIND_GBSearchConfig_INITIALIZE
  mrb_define_method(mrb, GBSearchConfig_class, "initialize", mrb_GLib_GBSearchConfig_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GBSearchConfig_class, "disown", mrb_GLib_GBSearchConfig_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GBSearchConfig_class, "belongs_to_ruby?", mrb_GLib_GBSearchConfig_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GBSearchConfig_sizeof_node_FIELD_READER
  mrb_define_method(mrb, GBSearchConfig_class, "sizeof_node", mrb_GLib_GBSearchConfig_get_sizeof_node, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GBSearchConfig_sizeof_node_FIELD_WRITER
  mrb_define_method(mrb, GBSearchConfig_class, "sizeof_node=", mrb_GLib_GBSearchConfig_set_sizeof_node, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GBSearchConfig_cmp_nodes_FIELD_READER
  mrb_define_method(mrb, GBSearchConfig_class, "cmp_nodes", mrb_GLib_GBSearchConfig_get_cmp_nodes, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GBSearchConfig_cmp_nodes_FIELD_WRITER
  mrb_define_method(mrb, GBSearchConfig_class, "cmp_nodes=", mrb_GLib_GBSearchConfig_set_cmp_nodes, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GBSearchConfig_flags_FIELD_READER
  mrb_define_method(mrb, GBSearchConfig_class, "flags", mrb_GLib_GBSearchConfig_get_flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GBSearchConfig_flags_FIELD_WRITER
  mrb_define_method(mrb, GBSearchConfig_class, "flags=", mrb_GLib_GBSearchConfig_set_flags, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
