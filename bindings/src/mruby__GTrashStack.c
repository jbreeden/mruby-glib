/*
 * struct _GTrashStack
 * Defined in file gtrashstack.h @ line 36
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_GLib.h"

#if BIND_GTrashStack_TYPE

/*
 * Class Methods
 */

#if BIND_GTrashStack_INITIALIZE
mrb_value
mrb_GLib_GTrashStack_initialize(mrb_state* mrb, mrb_value self) {
  struct _GTrashStack* native_object = (struct _GTrashStack*)malloc(sizeof(struct _GTrashStack));
  mruby_gift_struct _GTrashStack_data_ptr(self, native_object);
  return self;
}
#endif

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

/*
 * Fields
 */

#if BIND_GTrashStack_next_FIELD_READER
/* get_next
 *
 * Return Type: GTrashStack *
 */
mrb_value
mrb_GLib_GTrashStack_get_next(mrb_state* mrb, mrb_value self) {
  struct _GTrashStack * native_self = mruby_unbox_struct _GTrashStack(self);

  GTrashStack * native_field = native_self->next;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box__GTrashStack(mrb, native_field));

  return ruby_field;
}
#endif

#if BIND_GTrashStack_next_FIELD_WRITER
/* set_next
 *
 * Parameters:
 * - value: GTrashStack *
 */
mrb_value
mrb_GLib_GTrashStack_set_next(mrb_state* mrb, mrb_value self) {
  struct _GTrashStack * native_self = mruby_unbox_struct _GTrashStack(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, GTrashStack_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GTrashStack expected");
    return mrb_nil_value();
  }

  GTrashStack * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox__GTrashStack(ruby_field));

  native_self->next = native_field;

  return ruby_field;
}
#endif


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
