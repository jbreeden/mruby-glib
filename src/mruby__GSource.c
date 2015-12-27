/*
 * struct _GSource
 * Defined in file gmain.h @ line 64
 */

#include "mruby_GLib.h"

#if BIND_GSource_TYPE

/*
 * Class Methods
 */

/* MRUBY_BINDING: GSource::initialize */
/* sha: 928196716bf965d155b1db2f0228618bdb87b48cb41d9792644239ee222081c9 */
#if BIND_GSource_INITIALIZE
mrb_value
mrb_GLib_GSource_initialize(mrb_state* mrb, mrb_value self) {
  struct _GSource* native_object = (struct _GSource*)calloc(1, sizeof(struct _GSource));
  mruby_giftwrap__GSource_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSource::initialize */
/* sha: da136cb4af3d30de605fd3edd597054ab7ad7b2929e5d38e8b12753172151b86 */
mrb_value
mrb_GLib_GSource_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSource.disown only accepts objects of type GLib::GSource");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSource::belongs_to_ruby */
/* sha: 101ced86eaa20f01f800dceeda0ca9030fa72f9ecb2cc8ee765c7040411425bb */
mrb_value
mrb_GLib_GSource_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GLib::GSource.belongs_to_ruby only accepts objects of type GLib::GSource");
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

/* MRUBY_BINDING: GSource::callback_data_reader */
/* sha: 1885aa31fa08e4ca7dc1630717603686a143ce639a8756bcfbdcbbff90ccceb0 */
#if BIND_GSource_callback_data_FIELD_READER
/* get_callback_data
 *
 * Return Type: gpointer
 */
mrb_value
mrb_GLib_GSource_get_callback_data(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox__GSource(self);

  gpointer native_callback_data = native_self->callback_data;

  mrb_value callback_data = TODO_mruby_box_gpointer(mrb, native_callback_data);

  return callback_data;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSource::callback_data_writer */
/* sha: b722adf7f9fbd415b6ebd11855e1f110c4502ab61a54901554a84f946647aec8 */
#if BIND_GSource_callback_data_FIELD_WRITER
/* set_callback_data
 *
 * Parameters:
 * - value: gpointer
 */
mrb_value
mrb_GLib_GSource_set_callback_data(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox__GSource(self);
  mrb_value callback_data;

  mrb_get_args(mrb, "o", &callback_data);

  /* type checking */
  TODO_type_check_gpointer(callback_data);

  gpointer native_callback_data = TODO_mruby_unbox_gpointer(callback_data);

  native_self->callback_data = native_callback_data;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSource::callback_funcs_reader */
/* sha: d96bfb2bc5613a3ff04f59c86ba6a698c2c9c767539799984c007476a68f08a8 */
#if BIND_GSource_callback_funcs_FIELD_READER
/* get_callback_funcs
 *
 * Return Type: GSourceCallbackFuncs *
 */
mrb_value
mrb_GLib_GSource_get_callback_funcs(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox__GSource(self);

  GSourceCallbackFuncs * native_callback_funcs = native_self->callback_funcs;

  mrb_value callback_funcs = (native_callback_funcs == NULL ? mrb_nil_value() : mruby_box__GSourceCallbackFuncs(mrb, native_callback_funcs));

  return callback_funcs;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSource::callback_funcs_writer */
/* sha: f73eab079ef05a8ef64db031574808949692a8146333d1e5c47bdd70ad0ccddb */
#if BIND_GSource_callback_funcs_FIELD_WRITER
/* set_callback_funcs
 *
 * Parameters:
 * - value: GSourceCallbackFuncs *
 */
mrb_value
mrb_GLib_GSource_set_callback_funcs(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox__GSource(self);
  mrb_value callback_funcs;

  mrb_get_args(mrb, "o", &callback_funcs);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, callback_funcs, GSourceCallbackFuncs_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GSourceCallbackFuncs expected");
    return mrb_nil_value();
  }

  GSourceCallbackFuncs * native_callback_funcs = (mrb_nil_p(callback_funcs) ? NULL : mruby_unbox__GSourceCallbackFuncs(callback_funcs));

  native_self->callback_funcs = native_callback_funcs;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSource::source_funcs_reader */
/* sha: 84496587e86c012877f8b2f82fa75a75b3ecf6e1cbe4c5b190458f4ab564bdad */
#if BIND_GSource_source_funcs_FIELD_READER
/* get_source_funcs
 *
 * Return Type: const GSourceFuncs *
 */
mrb_value
mrb_GLib_GSource_get_source_funcs(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox__GSource(self);

  const GSourceFuncs * native_source_funcs = native_self->source_funcs;

  mrb_value source_funcs = (native_source_funcs == NULL ? mrb_nil_value() : mruby_box__GSourceFuncs(mrb, native_source_funcs));

  return source_funcs;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSource::source_funcs_writer */
/* sha: 8b2578e52e829f073b470828998ee033169267c8bc7fbccfd28fbb641656837a */
#if BIND_GSource_source_funcs_FIELD_WRITER
/* set_source_funcs
 *
 * Parameters:
 * - value: const GSourceFuncs *
 */
mrb_value
mrb_GLib_GSource_set_source_funcs(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox__GSource(self);
  mrb_value source_funcs;

  mrb_get_args(mrb, "o", &source_funcs);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, source_funcs, GSourceFuncs_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GSourceFuncs expected");
    return mrb_nil_value();
  }

  const GSourceFuncs * native_source_funcs = (mrb_nil_p(source_funcs) ? NULL : mruby_unbox__GSourceFuncs(source_funcs));

  native_self->source_funcs = native_source_funcs;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSource::ref_count_reader */
/* sha: 24dfb31af888abd2fc3284e81ea3f3fa8c7853e1e90e5ff8389e8b454f341482 */
#if BIND_GSource_ref_count_FIELD_READER
/* get_ref_count
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GSource_get_ref_count(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox__GSource(self);

  guint native_ref_count = native_self->ref_count;

  mrb_value ref_count = mrb_fixnum_value(native_ref_count);

  return ref_count;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSource::ref_count_writer */
/* sha: 65d663017d88c50c30c3e5ee8e7a2ee267f190b9d13f44fb76a4c725a6676009 */
#if BIND_GSource_ref_count_FIELD_WRITER
/* set_ref_count
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GSource_set_ref_count(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox__GSource(self);
  mrb_int native_ref_count;

  mrb_get_args(mrb, "i", &native_ref_count);

  native_self->ref_count = native_ref_count;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSource::context_reader */
/* sha: 2d4c0e1a9d5457c58924827ab9077259eab5d17d49e6122d2e3ea1502ee4d734 */
#if BIND_GSource_context_FIELD_READER
/* get_context
 *
 * Return Type: GMainContext *
 */
mrb_value
mrb_GLib_GSource_get_context(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox__GSource(self);

  GMainContext * native_context = native_self->context;

  mrb_value context = (native_context == NULL ? mrb_nil_value() : mruby_box__GMainContext(mrb, native_context));

  return context;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSource::context_writer */
/* sha: b507598c6b78dc5549f6fddf06d9f5f9af144f3933eb3e2ee322636efad27c30 */
#if BIND_GSource_context_FIELD_WRITER
/* set_context
 *
 * Parameters:
 * - value: GMainContext *
 */
mrb_value
mrb_GLib_GSource_set_context(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox__GSource(self);
  mrb_value context;

  mrb_get_args(mrb, "o", &context);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, context, GMainContext_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GMainContext expected");
    return mrb_nil_value();
  }

  GMainContext * native_context = (mrb_nil_p(context) ? NULL : mruby_unbox__GMainContext(context));

  native_self->context = native_context;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSource::priority_reader */
/* sha: d21d58952e7d9f1fba4607ec44cc5f1fe105400ed1140d5b43a0ec2c80c7d8b7 */
#if BIND_GSource_priority_FIELD_READER
/* get_priority
 *
 * Return Type: gint
 */
mrb_value
mrb_GLib_GSource_get_priority(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox__GSource(self);

  gint native_priority = native_self->priority;

  mrb_value priority = mrb_fixnum_value(native_priority);

  return priority;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSource::priority_writer */
/* sha: eb71fbe6e16f266c0500cbbc3bcd38d20c0233b70f55da862e11b75a05cfa0ef */
#if BIND_GSource_priority_FIELD_WRITER
/* set_priority
 *
 * Parameters:
 * - value: gint
 */
mrb_value
mrb_GLib_GSource_set_priority(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox__GSource(self);
  mrb_int native_priority;

  mrb_get_args(mrb, "i", &native_priority);

  native_self->priority = native_priority;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSource::flags_reader */
/* sha: d0f53252f2791a95d8c93201221d3148eda6a51b5defbcfb681f3dd673431d99 */
#if BIND_GSource_flags_FIELD_READER
/* get_flags
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GSource_get_flags(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox__GSource(self);

  guint native_flags = native_self->flags;

  mrb_value flags = mrb_fixnum_value(native_flags);

  return flags;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSource::flags_writer */
/* sha: b6aed3e47b0443d54ef0805035e73988bb93ec76a2bce97be51a87acb3428e8b */
#if BIND_GSource_flags_FIELD_WRITER
/* set_flags
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GSource_set_flags(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox__GSource(self);
  mrb_int native_flags;

  mrb_get_args(mrb, "i", &native_flags);

  native_self->flags = native_flags;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSource::source_id_reader */
/* sha: c00982c8f18fa4c956d0b85ad462e299878250acf05b0e3cc8a412f6c838efd9 */
#if BIND_GSource_source_id_FIELD_READER
/* get_source_id
 *
 * Return Type: guint
 */
mrb_value
mrb_GLib_GSource_get_source_id(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox__GSource(self);

  guint native_source_id = native_self->source_id;

  mrb_value source_id = mrb_fixnum_value(native_source_id);

  return source_id;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSource::source_id_writer */
/* sha: 8a38cb54cbea7f915ab0e77c3e264e85ac3f8ec896bbf6b9f954c6f65317b97b */
#if BIND_GSource_source_id_FIELD_WRITER
/* set_source_id
 *
 * Parameters:
 * - value: guint
 */
mrb_value
mrb_GLib_GSource_set_source_id(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox__GSource(self);
  mrb_int native_source_id;

  mrb_get_args(mrb, "i", &native_source_id);

  native_self->source_id = native_source_id;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSource::poll_fds_reader */
/* sha: b3764e2874dc760e996ae677f43b35e8998a4116680c4fea2ca710a00d857d99 */
#if BIND_GSource_poll_fds_FIELD_READER
/* get_poll_fds
 *
 * Return Type: GSList *
 */
mrb_value
mrb_GLib_GSource_get_poll_fds(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox__GSource(self);

  GSList * native_poll_fds = native_self->poll_fds;

  mrb_value poll_fds = (native_poll_fds == NULL ? mrb_nil_value() : mruby_box__GSList(mrb, native_poll_fds));

  return poll_fds;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSource::poll_fds_writer */
/* sha: 9c9a2b656e33ea35b4edd5afc6a975812f27b049cfe2a4198698b2d605126f3b */
#if BIND_GSource_poll_fds_FIELD_WRITER
/* set_poll_fds
 *
 * Parameters:
 * - value: GSList *
 */
mrb_value
mrb_GLib_GSource_set_poll_fds(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox__GSource(self);
  mrb_value poll_fds;

  mrb_get_args(mrb, "o", &poll_fds);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, poll_fds, GSList_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GSList expected");
    return mrb_nil_value();
  }

  GSList * native_poll_fds = (mrb_nil_p(poll_fds) ? NULL : mruby_unbox__GSList(poll_fds));

  native_self->poll_fds = native_poll_fds;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSource::prev_reader */
/* sha: f80eda6ec15f24bda69ca9a47b8fbcf9529996a3079d7b72992400b701523831 */
#if BIND_GSource_prev_FIELD_READER
/* get_prev
 *
 * Return Type: GSource *
 */
mrb_value
mrb_GLib_GSource_get_prev(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox__GSource(self);

  GSource * native_prev = native_self->prev;

  mrb_value prev = (native_prev == NULL ? mrb_nil_value() : mruby_box__GSource(mrb, native_prev));

  return prev;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSource::prev_writer */
/* sha: dc055f1cd70d1d61a826033ee87b90714710765db3b307e21205d866b37c00ef */
#if BIND_GSource_prev_FIELD_WRITER
/* set_prev
 *
 * Parameters:
 * - value: GSource *
 */
mrb_value
mrb_GLib_GSource_set_prev(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox__GSource(self);
  mrb_value prev;

  mrb_get_args(mrb, "o", &prev);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, prev, GSource_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GSource expected");
    return mrb_nil_value();
  }

  GSource * native_prev = (mrb_nil_p(prev) ? NULL : mruby_unbox__GSource(prev));

  native_self->prev = native_prev;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSource::next_reader */
/* sha: 8f06cd5cea4be2ce3801ca53ac7764eaa0b1d1cb6edebcd661bb2bb85c34b29b */
#if BIND_GSource_next_FIELD_READER
/* get_next
 *
 * Return Type: GSource *
 */
mrb_value
mrb_GLib_GSource_get_next(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox__GSource(self);

  GSource * native_next = native_self->next;

  mrb_value next = (native_next == NULL ? mrb_nil_value() : mruby_box__GSource(mrb, native_next));

  return next;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSource::next_writer */
/* sha: 11949447d7ee45096c7cb17f13dc226b00d90cc4d416128ef38a1d7f19a0389a */
#if BIND_GSource_next_FIELD_WRITER
/* set_next
 *
 * Parameters:
 * - value: GSource *
 */
mrb_value
mrb_GLib_GSource_set_next(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox__GSource(self);
  mrb_value next;

  mrb_get_args(mrb, "o", &next);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, next, GSource_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GSource expected");
    return mrb_nil_value();
  }

  GSource * native_next = (mrb_nil_p(next) ? NULL : mruby_unbox__GSource(next));

  native_self->next = native_next;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSource::name_reader */
/* sha: ed402c1d00f994e1f702f751f4700b8c26aeea37c20f6d65fb97567fb3295bed */
#if BIND_GSource_name_FIELD_READER
/* get_name
 *
 * Return Type: char *
 */
mrb_value
mrb_GLib_GSource_get_name(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox__GSource(self);

  char * native_name = native_self->name;

  mrb_value name = TODO_mruby_box_char_PTR(mrb, native_name);

  return name;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSource::name_writer */
/* sha: 3a459ea23e7ca2aa5a91cd5e34bec1d9050b09cbcfbd98e1c0809bdffea8e5a1 */
#if BIND_GSource_name_FIELD_WRITER
/* set_name
 *
 * Parameters:
 * - value: char *
 */
mrb_value
mrb_GLib_GSource_set_name(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox__GSource(self);
  mrb_value name;

  mrb_get_args(mrb, "o", &name);

  /* type checking */
  TODO_type_check_char_PTR(name);

  char * native_name = TODO_mruby_unbox_char_PTR(name);

  native_self->name = native_name;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSource::priv_reader */
/* sha: 2def4a274df98e2f39fd7786061c050fc21928a75c8f77784c65aef3b44fc29c */
#if BIND_GSource_priv_FIELD_READER
/* get_priv
 *
 * Return Type: GSourcePrivate *
 */
mrb_value
mrb_GLib_GSource_get_priv(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox__GSource(self);

  GSourcePrivate * native_priv = native_self->priv;

  mrb_value priv = (native_priv == NULL ? mrb_nil_value() : mruby_box__GSourcePrivate(mrb, native_priv));

  return priv;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSource::priv_writer */
/* sha: 21b11dd8fe14f25e2c7e8b2787b82e1980127bc07be1cdb8313f5132c062b86c */
#if BIND_GSource_priv_FIELD_WRITER
/* set_priv
 *
 * Parameters:
 * - value: GSourcePrivate *
 */
mrb_value
mrb_GLib_GSource_set_priv(mrb_state* mrb, mrb_value self) {
  struct _GSource * native_self = mruby_unbox__GSource(self);
  mrb_value priv;

  mrb_get_args(mrb, "o", &priv);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, priv, GSourcePrivate_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "GSourcePrivate expected");
    return mrb_nil_value();
  }

  GSourcePrivate * native_priv = (mrb_nil_p(priv) ? NULL : mruby_unbox__GSourcePrivate(priv));

  native_self->priv = native_priv;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_GLib_GSource_init(mrb_state* mrb) {
  struct RClass* GSource_class = mrb_define_class_under(mrb, GLib_module(mrb), "GSource", mrb->object_class);
  MRB_SET_INSTANCE_TT(GSource_class, MRB_TT_DATA);

#if BIND_GSource_INITIALIZE
  mrb_define_method(mrb, GSource_class, "initialize", mrb_GLib_GSource_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, GSource_class, "disown", mrb_GLib_GSource_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, GSource_class, "belongs_to_ruby?", mrb_GLib_GSource_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_GSource_callback_data_FIELD_READER
  mrb_define_method(mrb, GSource_class, "callback_data", mrb_GLib_GSource_get_callback_data, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSource_callback_data_FIELD_WRITER
  mrb_define_method(mrb, GSource_class, "callback_data=", mrb_GLib_GSource_set_callback_data, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSource_callback_funcs_FIELD_READER
  mrb_define_method(mrb, GSource_class, "callback_funcs", mrb_GLib_GSource_get_callback_funcs, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSource_callback_funcs_FIELD_WRITER
  mrb_define_method(mrb, GSource_class, "callback_funcs=", mrb_GLib_GSource_set_callback_funcs, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSource_source_funcs_FIELD_READER
  mrb_define_method(mrb, GSource_class, "source_funcs", mrb_GLib_GSource_get_source_funcs, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSource_source_funcs_FIELD_WRITER
  mrb_define_method(mrb, GSource_class, "source_funcs=", mrb_GLib_GSource_set_source_funcs, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSource_ref_count_FIELD_READER
  mrb_define_method(mrb, GSource_class, "ref_count", mrb_GLib_GSource_get_ref_count, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSource_ref_count_FIELD_WRITER
  mrb_define_method(mrb, GSource_class, "ref_count=", mrb_GLib_GSource_set_ref_count, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSource_context_FIELD_READER
  mrb_define_method(mrb, GSource_class, "context", mrb_GLib_GSource_get_context, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSource_context_FIELD_WRITER
  mrb_define_method(mrb, GSource_class, "context=", mrb_GLib_GSource_set_context, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSource_priority_FIELD_READER
  mrb_define_method(mrb, GSource_class, "priority", mrb_GLib_GSource_get_priority, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSource_priority_FIELD_WRITER
  mrb_define_method(mrb, GSource_class, "priority=", mrb_GLib_GSource_set_priority, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSource_flags_FIELD_READER
  mrb_define_method(mrb, GSource_class, "flags", mrb_GLib_GSource_get_flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSource_flags_FIELD_WRITER
  mrb_define_method(mrb, GSource_class, "flags=", mrb_GLib_GSource_set_flags, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSource_source_id_FIELD_READER
  mrb_define_method(mrb, GSource_class, "source_id", mrb_GLib_GSource_get_source_id, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSource_source_id_FIELD_WRITER
  mrb_define_method(mrb, GSource_class, "source_id=", mrb_GLib_GSource_set_source_id, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSource_poll_fds_FIELD_READER
  mrb_define_method(mrb, GSource_class, "poll_fds", mrb_GLib_GSource_get_poll_fds, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSource_poll_fds_FIELD_WRITER
  mrb_define_method(mrb, GSource_class, "poll_fds=", mrb_GLib_GSource_set_poll_fds, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSource_prev_FIELD_READER
  mrb_define_method(mrb, GSource_class, "prev", mrb_GLib_GSource_get_prev, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSource_prev_FIELD_WRITER
  mrb_define_method(mrb, GSource_class, "prev=", mrb_GLib_GSource_set_prev, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSource_next_FIELD_READER
  mrb_define_method(mrb, GSource_class, "next", mrb_GLib_GSource_get_next, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSource_next_FIELD_WRITER
  mrb_define_method(mrb, GSource_class, "next=", mrb_GLib_GSource_set_next, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSource_name_FIELD_READER
  mrb_define_method(mrb, GSource_class, "name", mrb_GLib_GSource_get_name, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSource_name_FIELD_WRITER
  mrb_define_method(mrb, GSource_class, "name=", mrb_GLib_GSource_set_name, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_GSource_priv_FIELD_READER
  mrb_define_method(mrb, GSource_class, "priv", mrb_GLib_GSource_get_priv, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_GSource_priv_FIELD_WRITER
  mrb_define_method(mrb, GSource_class, "priv=", mrb_GLib_GSource_set_priv, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
