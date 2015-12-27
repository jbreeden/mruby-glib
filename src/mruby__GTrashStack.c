/*
 * struct _GTrashStack
 * Defined in file gtrashstack.h @ line 36
 */

#include "mruby_GLib.h"

#if BIND_GTrashStack_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GTrashStack::initialize */
/* sha: d9351345fc11e9300a570cb331f48b6ca5fc3f5c5113cc4203606237250fa70c */
#if BIND_GTrashStack_INITIALIZE
mrb_value
mrb_GLib_GTrashStack_initialize(mrb_state* mrb, mrb_value self) {
  struct _GTrashStack* native_object = (struct _GTrashStack*)calloc(1, sizeof(struct _GTrashStack));
  mruby_giftwrap__GTrashStack_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTrashStack::initialize */
/* sha: 616e62104bd06133b5da30451648d96e83f3b731211d29bcedd50298de2a591c */
mrb_value
mrb_GLib_GTrashStack_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTrashStack.disown only accepts objects of type GLib::GTrashStack");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTrashStack::belongs_to_ruby */
/* sha: b7154f96e7fc15c70f4abbbebf10b8dfdee819c4526710c9ed8b6089e9e71c18 */
mrb_value
mrb_GLib_GTrashStack_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GTrashStack.belongs_to_ruby only accepts objects of type GLib::GTrashStack");
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

/* MRUBY_BINDING: GTrashStack::next_reader */
/* sha: 2a847172a70ae2bb235112bf15f03ddf827005c4938db97050b2364a11dc3e82 */
#if BIND_GTrashStack_next_FIELD_READER
/* get_next
 *
 * Return Type: GTrashStack *
 */
mrb_value
mrb_GLib_GTrashStack_get_next(mrb_state* mrb, mrb_value self) {
  struct _GTrashStack * native_self = mruby_unbox__GTrashStack(self);

  GTrashStack * native_next = native_self->next;

  mrb_value next = (native_next == NULL ? mrb_nil_value() : mruby_box__GTrashStack(mrb, native_next));

  return next;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTrashStack::next_writer */
/* sha: 7a9f5bba47d32f846218ab544c2e10d3cafad5c0f5c88eeded2f118c24779302 */
#if BIND_GTrashStack_next_FIELD_WRITER
/* set_next
 *
 * Parameters:
 * - value: GTrashStack *
 */
mrb_value
mrb_GLib_GTrashStack_set_next(mrb_state* mrb, mrb_value self) {
  struct _GTrashStack * native_self = mruby_unbox__GTrashStack(self);
  mrb_value next;

  mrb_get_args(mrb, "o", &next);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, next, GTrashStack_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GTrashStack expected");
    return mrb_nil_value();
  }

  GTrashStack * native_next = (mrb_nil_p(next) ? NULL : mruby_unbox__GTrashStack(next));

  native_self->next = native_next;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_GLib_GTrashStack_init(mrb_state* mrb) {
  struct RClass* GTrashStack_class = mrb_define_class_under(mrb, GLib_module(mrb), "GTrashStack", mrb->object_class);
  MRB_SET_INSTANCE_TT(GTrashStack_class, MRB_TT_DATA);

#if BIND_GTrashStack_INITIALIZE
  mrb_define_method(mrb, GTrashStack_class, "initialize", mrb_GLib_GTrashStack_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GTrashStack_class, "disown", mrb_GLib_GTrashStack_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GTrashStack_class, "belongs_to_ruby?", mrb_GLib_GTrashStack_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GTrashStack_next_FIELD_READER
  mrb_define_method(mrb, GTrashStack_class, "next", mrb_GLib_GTrashStack_get_next, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GTrashStack_next_FIELD_WRITER
  mrb_define_method(mrb, GTrashStack_class, "next=", mrb_GLib_GTrashStack_set_next, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
