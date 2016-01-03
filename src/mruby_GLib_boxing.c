/*
 * Boxing Code (Generated)
 * =======================
 *
 * The code generator learns the data types declared in the C/C++ source files
 * it is run against, and generates this boxing, unboxing, and GC code.
 * 
 * Terms
 * ------
 *
 * ### Boxing
 * In general refers to wrapping a native object in an mrb_value.
 * 
 * ### Gift Wrapping
 * A specific type of boxing, indicating that the object belongs
 * to Ruby and should be free'd when the mrb_value is GC'ed.
 * 
 * ### Unboxing
 * Retrieving the wrapped native object from an mrb_value.
 *
 * Customizing
 * -----------
 * 
 * By default, all data types are assumed to be destructable by the `free`
 * function. To use a custom destructor for your type, tell CTypes with
 * `CTypes.set_destructor`.
 *
 * Example
 * ```
 * // I have `struct GError` objects from glib,
 * // which should be freed with `g_error_free`
 * CTypes.set_destructor('struct GError', 'g_error_free')
 * ```
 */
#include "mruby_GLib.h"


/* MRUBY_BINDING: GTestConfig_boxing */
/* sha: 0beb45ccc020ef37a615c21b3b1ffb056e186b62db00f4a8e32a53d6e11fbcec */
#if BIND_GTestConfig_TYPE
/*
 * Boxing implementation for GTestConfig
 */

static void free_GTestConfig(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type GTestConfig_data_type = {
   "GTestConfig", free_GTestConfig
};

mrb_value
mruby_box_GTestConfig(mrb_state* mrb, GTestConfig *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GTestConfig_class(mrb), &GTestConfig_data_type, box));
}

mrb_value
mruby_giftwrap_GTestConfig(mrb_state* mrb, GTestConfig *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GTestConfig_class(mrb), &GTestConfig_data_type, box));
}

void
mruby_set_GTestConfig_data_ptr(mrb_value obj, GTestConfig *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &GTestConfig_data_type);
}

void
mruby_gift_GTestConfig_data_ptr(mrb_value obj, GTestConfig *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &GTestConfig_data_type);
}

GTestConfig *
mruby_unbox_GTestConfig(mrb_value boxed) {
  return (GTestConfig *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestLogBuffer_boxing */
/* sha: 09ccccc2f7f69ebcd7c339d2c2a8215bf28c9c103c00f3e1f91a60fd1de13b75 */
#if BIND_GTestLogBuffer_TYPE
/*
 * Boxing implementation for GTestLogBuffer
 */

static void free_GTestLogBuffer(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type GTestLogBuffer_data_type = {
   "GTestLogBuffer", free_GTestLogBuffer
};

mrb_value
mruby_box_GTestLogBuffer(mrb_state* mrb, GTestLogBuffer *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GTestLogBuffer_class(mrb), &GTestLogBuffer_data_type, box));
}

mrb_value
mruby_giftwrap_GTestLogBuffer(mrb_state* mrb, GTestLogBuffer *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GTestLogBuffer_class(mrb), &GTestLogBuffer_data_type, box));
}

void
mruby_set_GTestLogBuffer_data_ptr(mrb_value obj, GTestLogBuffer *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &GTestLogBuffer_data_type);
}

void
mruby_gift_GTestLogBuffer_data_ptr(mrb_value obj, GTestLogBuffer *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &GTestLogBuffer_data_type);
}

GTestLogBuffer *
mruby_unbox_GTestLogBuffer(mrb_value boxed) {
  return (GTestLogBuffer *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestLogMsg_boxing */
/* sha: 89e77a8d2e84a395f5df4d9469f87256307e07687d2e5f34b62b3d320337e25d */
#if BIND_GTestLogMsg_TYPE
/*
 * Boxing implementation for GTestLogMsg
 */

static void free_GTestLogMsg(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type GTestLogMsg_data_type = {
   "GTestLogMsg", free_GTestLogMsg
};

mrb_value
mruby_box_GTestLogMsg(mrb_state* mrb, GTestLogMsg *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GTestLogMsg_class(mrb), &GTestLogMsg_data_type, box));
}

mrb_value
mruby_giftwrap_GTestLogMsg(mrb_state* mrb, GTestLogMsg *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GTestLogMsg_class(mrb), &GTestLogMsg_data_type, box));
}

void
mruby_set_GTestLogMsg_data_ptr(mrb_value obj, GTestLogMsg *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &GTestLogMsg_data_type);
}

void
mruby_gift_GTestLogMsg_data_ptr(mrb_value obj, GTestLogMsg *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &GTestLogMsg_data_type);
}

GTestLogMsg *
mruby_unbox_GTestLogMsg(mrb_value boxed) {
  return (GTestLogMsg *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestCase_boxing */
/* sha: 4c89fcb020b0b319dfbbf6ed7702f10d8b4dd7658fff1ceff561459f4aaa7386 */
#if BIND_GTestCase_TYPE
/*
 * Boxing implementation for struct GTestCase
 */

static void free_GTestCase(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type GTestCase_data_type = {
   "struct GTestCase", free_GTestCase
};

mrb_value
mruby_box_GTestCase(mrb_state* mrb, struct GTestCase *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GTestCase_class(mrb), &GTestCase_data_type, box));
}

mrb_value
mruby_giftwrap_GTestCase(mrb_state* mrb, struct GTestCase *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GTestCase_class(mrb), &GTestCase_data_type, box));
}

void
mruby_set_GTestCase_data_ptr(mrb_value obj, struct GTestCase *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &GTestCase_data_type);
}

void
mruby_gift_GTestCase_data_ptr(mrb_value obj, struct GTestCase *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &GTestCase_data_type);
}

struct GTestCase *
mruby_unbox_GTestCase(mrb_value boxed) {
  return (struct GTestCase *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTestSuite_boxing */
/* sha: ff2fe3884cc4ca0da1ed86b0ee6ad91cd8eab6d7427580ec56552902ef21395f */
#if BIND_GTestSuite_TYPE
/*
 * Boxing implementation for struct GTestSuite
 */

static void free_GTestSuite(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type GTestSuite_data_type = {
   "struct GTestSuite", free_GTestSuite
};

mrb_value
mruby_box_GTestSuite(mrb_state* mrb, struct GTestSuite *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GTestSuite_class(mrb), &GTestSuite_data_type, box));
}

mrb_value
mruby_giftwrap_GTestSuite(mrb_state* mrb, struct GTestSuite *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GTestSuite_class(mrb), &GTestSuite_data_type, box));
}

void
mruby_set_GTestSuite_data_ptr(mrb_value obj, struct GTestSuite *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &GTestSuite_data_type);
}

void
mruby_gift_GTestSuite_data_ptr(mrb_value obj, struct GTestSuite *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &GTestSuite_data_type);
}

struct GTestSuite *
mruby_unbox_GTestSuite(mrb_value boxed) {
  return (struct GTestSuite *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GArray_boxing */
/* sha: f653381c91ca6c0972080cc4881746e497a98080d070813de076eec1dd962be5 */
#if BIND_GArray_TYPE
/*
 * Boxing implementation for struct _GArray
 */

static void free__GArray(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GArray_data_type = {
   "struct _GArray", free__GArray
};

mrb_value
mruby_box__GArray(mrb_state* mrb, struct _GArray *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GArray_class(mrb), &_GArray_data_type, box));
}

mrb_value
mruby_giftwrap__GArray(mrb_state* mrb, struct _GArray *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GArray_class(mrb), &_GArray_data_type, box));
}

void
mruby_set__GArray_data_ptr(mrb_value obj, struct _GArray *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GArray_data_type);
}

void
mruby_gift__GArray_data_ptr(mrb_value obj, struct _GArray *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GArray_data_type);
}

struct _GArray *
mruby_unbox__GArray(mrb_value boxed) {
  return (struct _GArray *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GAsyncQueue_boxing */
/* sha: 2d18b8d40694a00e3701ab3a5db3d9383c6e1310f6718fcef879a28b8e526d09 */
#if BIND_GAsyncQueue_TYPE
/*
 * Boxing implementation for struct _GAsyncQueue
 */

static void free__GAsyncQueue(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GAsyncQueue_data_type = {
   "struct _GAsyncQueue", free__GAsyncQueue
};

mrb_value
mruby_box__GAsyncQueue(mrb_state* mrb, struct _GAsyncQueue *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GAsyncQueue_class(mrb), &_GAsyncQueue_data_type, box));
}

mrb_value
mruby_giftwrap__GAsyncQueue(mrb_state* mrb, struct _GAsyncQueue *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GAsyncQueue_class(mrb), &_GAsyncQueue_data_type, box));
}

void
mruby_set__GAsyncQueue_data_ptr(mrb_value obj, struct _GAsyncQueue *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GAsyncQueue_data_type);
}

void
mruby_gift__GAsyncQueue_data_ptr(mrb_value obj, struct _GAsyncQueue *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GAsyncQueue_data_type);
}

struct _GAsyncQueue *
mruby_unbox__GAsyncQueue(mrb_value boxed) {
  return (struct _GAsyncQueue *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GBookmarkFile_boxing */
/* sha: 910effc75f458209b575c9ae287137d344fcd43c42f7f70d0b3b99923f5dc480 */
#if BIND_GBookmarkFile_TYPE
/*
 * Boxing implementation for struct _GBookmarkFile
 */

static void free__GBookmarkFile(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GBookmarkFile_data_type = {
   "struct _GBookmarkFile", free__GBookmarkFile
};

mrb_value
mruby_box__GBookmarkFile(mrb_state* mrb, struct _GBookmarkFile *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GBookmarkFile_class(mrb), &_GBookmarkFile_data_type, box));
}

mrb_value
mruby_giftwrap__GBookmarkFile(mrb_state* mrb, struct _GBookmarkFile *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GBookmarkFile_class(mrb), &_GBookmarkFile_data_type, box));
}

void
mruby_set__GBookmarkFile_data_ptr(mrb_value obj, struct _GBookmarkFile *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GBookmarkFile_data_type);
}

void
mruby_gift__GBookmarkFile_data_ptr(mrb_value obj, struct _GBookmarkFile *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GBookmarkFile_data_type);
}

struct _GBookmarkFile *
mruby_unbox__GBookmarkFile(mrb_value boxed) {
  return (struct _GBookmarkFile *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GByteArray_boxing */
/* sha: 7c0f989f268dc84ce566d1c222aaa9011077e9aa3561e33e3bd9f610c85cb157 */
#if BIND_GByteArray_TYPE
/*
 * Boxing implementation for struct _GByteArray
 */

static void free__GByteArray(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GByteArray_data_type = {
   "struct _GByteArray", free__GByteArray
};

mrb_value
mruby_box__GByteArray(mrb_state* mrb, struct _GByteArray *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GByteArray_class(mrb), &_GByteArray_data_type, box));
}

mrb_value
mruby_giftwrap__GByteArray(mrb_state* mrb, struct _GByteArray *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GByteArray_class(mrb), &_GByteArray_data_type, box));
}

void
mruby_set__GByteArray_data_ptr(mrb_value obj, struct _GByteArray *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GByteArray_data_type);
}

void
mruby_gift__GByteArray_data_ptr(mrb_value obj, struct _GByteArray *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GByteArray_data_type);
}

struct _GByteArray *
mruby_unbox__GByteArray(mrb_value boxed) {
  return (struct _GByteArray *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GBytes_boxing */
/* sha: 6d9fc5632d1f3d37fa280a60d87cd8e4bbf389d0420b7f0871504e03f9e5087b */
#if BIND_GBytes_TYPE
/*
 * Boxing implementation for struct _GBytes
 */

static void free__GBytes(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GBytes_data_type = {
   "struct _GBytes", free__GBytes
};

mrb_value
mruby_box__GBytes(mrb_state* mrb, struct _GBytes *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GBytes_class(mrb), &_GBytes_data_type, box));
}

mrb_value
mruby_giftwrap__GBytes(mrb_state* mrb, struct _GBytes *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GBytes_class(mrb), &_GBytes_data_type, box));
}

void
mruby_set__GBytes_data_ptr(mrb_value obj, struct _GBytes *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GBytes_data_type);
}

void
mruby_gift__GBytes_data_ptr(mrb_value obj, struct _GBytes *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GBytes_data_type);
}

struct _GBytes *
mruby_unbox__GBytes(mrb_value boxed) {
  return (struct _GBytes *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GChecksum_boxing */
/* sha: 59da7a52a1ddb45cfbcaa0e9b4b8ad7912ae7edc9074dc9f1b7d837ab48df809 */
#if BIND_GChecksum_TYPE
/*
 * Boxing implementation for struct _GChecksum
 */

static void free__GChecksum(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GChecksum_data_type = {
   "struct _GChecksum", free__GChecksum
};

mrb_value
mruby_box__GChecksum(mrb_state* mrb, struct _GChecksum *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GChecksum_class(mrb), &_GChecksum_data_type, box));
}

mrb_value
mruby_giftwrap__GChecksum(mrb_state* mrb, struct _GChecksum *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GChecksum_class(mrb), &_GChecksum_data_type, box));
}

void
mruby_set__GChecksum_data_ptr(mrb_value obj, struct _GChecksum *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GChecksum_data_type);
}

void
mruby_gift__GChecksum_data_ptr(mrb_value obj, struct _GChecksum *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GChecksum_data_type);
}

struct _GChecksum *
mruby_unbox__GChecksum(mrb_value boxed) {
  return (struct _GChecksum *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GCond_boxing */
/* sha: c373f63bbe717e5b55c4c123586bdff1834f2dce9eba9dd2b55b0a9bc276e10c */
#if BIND_GCond_TYPE
/*
 * Boxing implementation for struct _GCond
 */

static void free__GCond(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GCond_data_type = {
   "struct _GCond", free__GCond
};

mrb_value
mruby_box__GCond(mrb_state* mrb, struct _GCond *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GCond_class(mrb), &_GCond_data_type, box));
}

mrb_value
mruby_giftwrap__GCond(mrb_state* mrb, struct _GCond *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GCond_class(mrb), &_GCond_data_type, box));
}

void
mruby_set__GCond_data_ptr(mrb_value obj, struct _GCond *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GCond_data_type);
}

void
mruby_gift__GCond_data_ptr(mrb_value obj, struct _GCond *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GCond_data_type);
}

struct _GCond *
mruby_unbox__GCond(mrb_value boxed) {
  return (struct _GCond *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GData_boxing */
/* sha: 44078b6e85b2feb0f2559ae720bfe63a5d0ca9a678da2062899b6eabebe00a41 */
#if BIND_GData_TYPE
/*
 * Boxing implementation for struct _GData
 */

static void free__GData(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GData_data_type = {
   "struct _GData", free__GData
};

mrb_value
mruby_box__GData(mrb_state* mrb, struct _GData *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GData_class(mrb), &_GData_data_type, box));
}

mrb_value
mruby_giftwrap__GData(mrb_state* mrb, struct _GData *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GData_class(mrb), &_GData_data_type, box));
}

void
mruby_set__GData_data_ptr(mrb_value obj, struct _GData *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GData_data_type);
}

void
mruby_gift__GData_data_ptr(mrb_value obj, struct _GData *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GData_data_type);
}

struct _GData *
mruby_unbox__GData(mrb_value boxed) {
  return (struct _GData *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDate_boxing */
/* sha: 3340f017ce5d81c586d9acad911f88026e379825daaef624f3cf1f32d6213a0b */
#if BIND_GDate_TYPE
/*
 * Boxing implementation for struct _GDate
 */

static void free__GDate(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GDate_data_type = {
   "struct _GDate", free__GDate
};

mrb_value
mruby_box__GDate(mrb_state* mrb, struct _GDate *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GDate_class(mrb), &_GDate_data_type, box));
}

mrb_value
mruby_giftwrap__GDate(mrb_state* mrb, struct _GDate *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GDate_class(mrb), &_GDate_data_type, box));
}

void
mruby_set__GDate_data_ptr(mrb_value obj, struct _GDate *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GDate_data_type);
}

void
mruby_gift__GDate_data_ptr(mrb_value obj, struct _GDate *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GDate_data_type);
}

struct _GDate *
mruby_unbox__GDate(mrb_value boxed) {
  return (struct _GDate *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDateTime_boxing */
/* sha: 6a5807c390ce46d805204d49b814ba537209db81249648502a8a62df48b52897 */
#if BIND_GDateTime_TYPE
/*
 * Boxing implementation for struct _GDateTime
 */

static void free__GDateTime(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GDateTime_data_type = {
   "struct _GDateTime", free__GDateTime
};

mrb_value
mruby_box__GDateTime(mrb_state* mrb, struct _GDateTime *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GDateTime_class(mrb), &_GDateTime_data_type, box));
}

mrb_value
mruby_giftwrap__GDateTime(mrb_state* mrb, struct _GDateTime *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GDateTime_class(mrb), &_GDateTime_data_type, box));
}

void
mruby_set__GDateTime_data_ptr(mrb_value obj, struct _GDateTime *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GDateTime_data_type);
}

void
mruby_gift__GDateTime_data_ptr(mrb_value obj, struct _GDateTime *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GDateTime_data_type);
}

struct _GDateTime *
mruby_unbox__GDateTime(mrb_value boxed) {
  return (struct _GDateTime *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDebugKey_boxing */
/* sha: 8f45774bd6dd41ab8326baf1d9dc692dd788f5b3413f4b9c2b4dd82788c35be0 */
#if BIND_GDebugKey_TYPE
/*
 * Boxing implementation for struct _GDebugKey
 */

static void free__GDebugKey(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GDebugKey_data_type = {
   "struct _GDebugKey", free__GDebugKey
};

mrb_value
mruby_box__GDebugKey(mrb_state* mrb, struct _GDebugKey *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GDebugKey_class(mrb), &_GDebugKey_data_type, box));
}

mrb_value
mruby_giftwrap__GDebugKey(mrb_state* mrb, struct _GDebugKey *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GDebugKey_class(mrb), &_GDebugKey_data_type, box));
}

void
mruby_set__GDebugKey_data_ptr(mrb_value obj, struct _GDebugKey *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GDebugKey_data_type);
}

void
mruby_gift__GDebugKey_data_ptr(mrb_value obj, struct _GDebugKey *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GDebugKey_data_type);
}

struct _GDebugKey *
mruby_unbox__GDebugKey(mrb_value boxed) {
  return (struct _GDebugKey *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GDir_boxing */
/* sha: 25e1003851ed001141ec98cf8b647f8def24b8e894afa46414e9e1075d563791 */
#if BIND_GDir_TYPE
/*
 * Boxing implementation for struct _GDir
 */

static void free__GDir(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GDir_data_type = {
   "struct _GDir", free__GDir
};

mrb_value
mruby_box__GDir(mrb_state* mrb, struct _GDir *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GDir_class(mrb), &_GDir_data_type, box));
}

mrb_value
mruby_giftwrap__GDir(mrb_state* mrb, struct _GDir *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GDir_class(mrb), &_GDir_data_type, box));
}

void
mruby_set__GDir_data_ptr(mrb_value obj, struct _GDir *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GDir_data_type);
}

void
mruby_gift__GDir_data_ptr(mrb_value obj, struct _GDir *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GDir_data_type);
}

struct _GDir *
mruby_unbox__GDir(mrb_value boxed) {
  return (struct _GDir *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GError_boxing */
/* sha: c308105439a26c6b00e1f2f0ada52bc3bedfb5309181b69cb96cbdb1455755f3 */
#if BIND_GError_TYPE
/*
 * Boxing implementation for struct _GError
 */

static void free__GError(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      g_error_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GError_data_type = {
   "struct _GError", free__GError
};

mrb_value
mruby_box__GError(mrb_state* mrb, struct _GError *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GError_class(mrb), &_GError_data_type, box));
}

mrb_value
mruby_giftwrap__GError(mrb_state* mrb, struct _GError *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GError_class(mrb), &_GError_data_type, box));
}

void
mruby_set__GError_data_ptr(mrb_value obj, struct _GError *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GError_data_type);
}

void
mruby_gift__GError_data_ptr(mrb_value obj, struct _GError *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GError_data_type);
}

struct _GError *
mruby_unbox__GError(mrb_value boxed) {
  return (struct _GError *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFile_boxing */
/* sha: ca3898cb94da0ce68ab71d6b2f0278cb429baa6a3eab5d54c6901b3d6046aea6 */
#if BIND_GFile_TYPE
/*
 * Boxing implementation for struct _GFile
 */

static void free__GFile(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      g_object_unref(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GFile_data_type = {
   "struct _GFile", free__GFile
};

mrb_value
mruby_box__GFile(mrb_state* mrb, struct _GFile *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GFile_class(mrb), &_GFile_data_type, box));
}

mrb_value
mruby_giftwrap__GFile(mrb_state* mrb, struct _GFile *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GFile_class(mrb), &_GFile_data_type, box));
}

void
mruby_set__GFile_data_ptr(mrb_value obj, struct _GFile *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GFile_data_type);
}

void
mruby_gift__GFile_data_ptr(mrb_value obj, struct _GFile *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GFile_data_type);
}

struct _GFile *
mruby_unbox__GFile(mrb_value boxed) {
  return (struct _GFile *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIOStream_boxing */
/* sha: 37a3b1a7e8a56536cc09fe2a97440c93053620a19e183f64b9435863ccc4d847 */
#if BIND_GFileIOStream_TYPE
/*
 * Boxing implementation for struct _GFileIOStream
 */

static void free__GFileIOStream(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      g_object_unref(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GFileIOStream_data_type = {
   "struct _GFileIOStream", free__GFileIOStream
};

mrb_value
mruby_box__GFileIOStream(mrb_state* mrb, struct _GFileIOStream *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GFileIOStream_class(mrb), &_GFileIOStream_data_type, box));
}

mrb_value
mruby_giftwrap__GFileIOStream(mrb_state* mrb, struct _GFileIOStream *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GFileIOStream_class(mrb), &_GFileIOStream_data_type, box));
}

void
mruby_set__GFileIOStream_data_ptr(mrb_value obj, struct _GFileIOStream *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GFileIOStream_data_type);
}

void
mruby_gift__GFileIOStream_data_ptr(mrb_value obj, struct _GFileIOStream *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GFileIOStream_data_type);
}

struct _GFileIOStream *
mruby_unbox__GFileIOStream(mrb_value boxed) {
  return (struct _GFileIOStream *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileIface_boxing */
/* sha: f5cf4f160a428a76bd080d4996812a3a11b23cdf8a5020110ab5535c9631219b */
#if BIND_GFileIface_TYPE
/*
 * Boxing implementation for struct _GFileIface
 */

static void free__GFileIface(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GFileIface_data_type = {
   "struct _GFileIface", free__GFileIface
};

mrb_value
mruby_box__GFileIface(mrb_state* mrb, struct _GFileIface *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GFileIface_class(mrb), &_GFileIface_data_type, box));
}

mrb_value
mruby_giftwrap__GFileIface(mrb_state* mrb, struct _GFileIface *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GFileIface_class(mrb), &_GFileIface_data_type, box));
}

void
mruby_set__GFileIface_data_ptr(mrb_value obj, struct _GFileIface *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GFileIface_data_type);
}

void
mruby_gift__GFileIface_data_ptr(mrb_value obj, struct _GFileIface *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GFileIface_data_type);
}

struct _GFileIface *
mruby_unbox__GFileIface(mrb_value boxed) {
  return (struct _GFileIface *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileInfo_boxing */
/* sha: 74afd46f9ac64cf8914088c47d7d9adf160e85be9c306006a4adb49e1fc1e56a */
#if BIND_GFileInfo_TYPE
/*
 * Boxing implementation for struct _GFileInfo
 */

static void free__GFileInfo(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      g_object_unref(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GFileInfo_data_type = {
   "struct _GFileInfo", free__GFileInfo
};

mrb_value
mruby_box__GFileInfo(mrb_state* mrb, struct _GFileInfo *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GFileInfo_class(mrb), &_GFileInfo_data_type, box));
}

mrb_value
mruby_giftwrap__GFileInfo(mrb_state* mrb, struct _GFileInfo *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GFileInfo_class(mrb), &_GFileInfo_data_type, box));
}

void
mruby_set__GFileInfo_data_ptr(mrb_value obj, struct _GFileInfo *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GFileInfo_data_type);
}

void
mruby_gift__GFileInfo_data_ptr(mrb_value obj, struct _GFileInfo *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GFileInfo_data_type);
}

struct _GFileInfo *
mruby_unbox__GFileInfo(mrb_value boxed) {
  return (struct _GFileInfo *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileInfoClass_boxing */
/* sha: 75653f9db9c3d163bea039336876e98bc275b854b685cae6317a8d8e65be4e3c */
#if BIND_GFileInfoClass_TYPE
/*
 * Boxing implementation for struct _GFileInfoClass
 */

static void free__GFileInfoClass(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GFileInfoClass_data_type = {
   "struct _GFileInfoClass", free__GFileInfoClass
};

mrb_value
mruby_box__GFileInfoClass(mrb_state* mrb, struct _GFileInfoClass *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GFileInfoClass_class(mrb), &_GFileInfoClass_data_type, box));
}

mrb_value
mruby_giftwrap__GFileInfoClass(mrb_state* mrb, struct _GFileInfoClass *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GFileInfoClass_class(mrb), &_GFileInfoClass_data_type, box));
}

void
mruby_set__GFileInfoClass_data_ptr(mrb_value obj, struct _GFileInfoClass *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GFileInfoClass_data_type);
}

void
mruby_gift__GFileInfoClass_data_ptr(mrb_value obj, struct _GFileInfoClass *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GFileInfoClass_data_type);
}

struct _GFileInfoClass *
mruby_unbox__GFileInfoClass(mrb_value boxed) {
  return (struct _GFileInfoClass *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileInputStream_boxing */
/* sha: dcf10aedc0cc02d6ab12ecf6c0d2a480b0f7d76f7d04c367e11a6f756c8217fa */
#if BIND_GFileInputStream_TYPE
/*
 * Boxing implementation for struct _GFileInputStream
 */

static void free__GFileInputStream(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      g_object_unref(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GFileInputStream_data_type = {
   "struct _GFileInputStream", free__GFileInputStream
};

mrb_value
mruby_box__GFileInputStream(mrb_state* mrb, struct _GFileInputStream *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GFileInputStream_class(mrb), &_GFileInputStream_data_type, box));
}

mrb_value
mruby_giftwrap__GFileInputStream(mrb_state* mrb, struct _GFileInputStream *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GFileInputStream_class(mrb), &_GFileInputStream_data_type, box));
}

void
mruby_set__GFileInputStream_data_ptr(mrb_value obj, struct _GFileInputStream *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GFileInputStream_data_type);
}

void
mruby_gift__GFileInputStream_data_ptr(mrb_value obj, struct _GFileInputStream *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GFileInputStream_data_type);
}

struct _GFileInputStream *
mruby_unbox__GFileInputStream(mrb_value boxed) {
  return (struct _GFileInputStream *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GFileOutputStream_boxing */
/* sha: f0d35ea91efcf2759590c2676207573ffd8a766387ff58be4de00d21f0c133ec */
#if BIND_GFileOutputStream_TYPE
/*
 * Boxing implementation for struct _GFileOutputStream
 */

static void free__GFileOutputStream(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      g_object_unref(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GFileOutputStream_data_type = {
   "struct _GFileOutputStream", free__GFileOutputStream
};

mrb_value
mruby_box__GFileOutputStream(mrb_state* mrb, struct _GFileOutputStream *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GFileOutputStream_class(mrb), &_GFileOutputStream_data_type, box));
}

mrb_value
mruby_giftwrap__GFileOutputStream(mrb_state* mrb, struct _GFileOutputStream *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GFileOutputStream_class(mrb), &_GFileOutputStream_data_type, box));
}

void
mruby_set__GFileOutputStream_data_ptr(mrb_value obj, struct _GFileOutputStream *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GFileOutputStream_data_type);
}

void
mruby_gift__GFileOutputStream_data_ptr(mrb_value obj, struct _GFileOutputStream *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GFileOutputStream_data_type);
}

struct _GFileOutputStream *
mruby_unbox__GFileOutputStream(mrb_value boxed) {
  return (struct _GFileOutputStream *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHashTable_boxing */
/* sha: 382df1017db14dbcc97de2fd1325404c3db609f83473e0f15a21f9efe6b4fdc3 */
#if BIND_GHashTable_TYPE
/*
 * Boxing implementation for struct _GHashTable
 */

static void free__GHashTable(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GHashTable_data_type = {
   "struct _GHashTable", free__GHashTable
};

mrb_value
mruby_box__GHashTable(mrb_state* mrb, struct _GHashTable *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GHashTable_class(mrb), &_GHashTable_data_type, box));
}

mrb_value
mruby_giftwrap__GHashTable(mrb_state* mrb, struct _GHashTable *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GHashTable_class(mrb), &_GHashTable_data_type, box));
}

void
mruby_set__GHashTable_data_ptr(mrb_value obj, struct _GHashTable *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GHashTable_data_type);
}

void
mruby_gift__GHashTable_data_ptr(mrb_value obj, struct _GHashTable *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GHashTable_data_type);
}

struct _GHashTable *
mruby_unbox__GHashTable(mrb_value boxed) {
  return (struct _GHashTable *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHashTableIter_boxing */
/* sha: 9ce39aecd1b4951a1e11c5160f035ba177188ed02a4e0f70d21580ea9ad1130e */
#if BIND_GHashTableIter_TYPE
/*
 * Boxing implementation for struct _GHashTableIter
 */

static void free__GHashTableIter(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GHashTableIter_data_type = {
   "struct _GHashTableIter", free__GHashTableIter
};

mrb_value
mruby_box__GHashTableIter(mrb_state* mrb, struct _GHashTableIter *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GHashTableIter_class(mrb), &_GHashTableIter_data_type, box));
}

mrb_value
mruby_giftwrap__GHashTableIter(mrb_state* mrb, struct _GHashTableIter *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GHashTableIter_class(mrb), &_GHashTableIter_data_type, box));
}

void
mruby_set__GHashTableIter_data_ptr(mrb_value obj, struct _GHashTableIter *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GHashTableIter_data_type);
}

void
mruby_gift__GHashTableIter_data_ptr(mrb_value obj, struct _GHashTableIter *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GHashTableIter_data_type);
}

struct _GHashTableIter *
mruby_unbox__GHashTableIter(mrb_value boxed) {
  return (struct _GHashTableIter *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHmac_boxing */
/* sha: 9d4975a6c250f1e7f240c90c47c4ba93ccf940e8c1de56f5bafd3ca2e4f8d0a4 */
#if BIND_GHmac_TYPE
/*
 * Boxing implementation for struct _GHmac
 */

static void free__GHmac(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GHmac_data_type = {
   "struct _GHmac", free__GHmac
};

mrb_value
mruby_box__GHmac(mrb_state* mrb, struct _GHmac *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GHmac_class(mrb), &_GHmac_data_type, box));
}

mrb_value
mruby_giftwrap__GHmac(mrb_state* mrb, struct _GHmac *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GHmac_class(mrb), &_GHmac_data_type, box));
}

void
mruby_set__GHmac_data_ptr(mrb_value obj, struct _GHmac *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GHmac_data_type);
}

void
mruby_gift__GHmac_data_ptr(mrb_value obj, struct _GHmac *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GHmac_data_type);
}

struct _GHmac *
mruby_unbox__GHmac(mrb_value boxed) {
  return (struct _GHmac *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHook_boxing */
/* sha: 1b61fdee89c1192c55330e59a90e32258552470fccc35a2a74c8f0340faa0529 */
#if BIND_GHook_TYPE
/*
 * Boxing implementation for struct _GHook
 */

static void free__GHook(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GHook_data_type = {
   "struct _GHook", free__GHook
};

mrb_value
mruby_box__GHook(mrb_state* mrb, struct _GHook *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GHook_class(mrb), &_GHook_data_type, box));
}

mrb_value
mruby_giftwrap__GHook(mrb_state* mrb, struct _GHook *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GHook_class(mrb), &_GHook_data_type, box));
}

void
mruby_set__GHook_data_ptr(mrb_value obj, struct _GHook *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GHook_data_type);
}

void
mruby_gift__GHook_data_ptr(mrb_value obj, struct _GHook *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GHook_data_type);
}

struct _GHook *
mruby_unbox__GHook(mrb_value boxed) {
  return (struct _GHook *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GHookList_boxing */
/* sha: 903763faf58bf578140c0b2778c11fb0befc0e42424694e76069f61ce6fe96e5 */
#if BIND_GHookList_TYPE
/*
 * Boxing implementation for struct _GHookList
 */

static void free__GHookList(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GHookList_data_type = {
   "struct _GHookList", free__GHookList
};

mrb_value
mruby_box__GHookList(mrb_state* mrb, struct _GHookList *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GHookList_class(mrb), &_GHookList_data_type, box));
}

mrb_value
mruby_giftwrap__GHookList(mrb_state* mrb, struct _GHookList *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GHookList_class(mrb), &_GHookList_data_type, box));
}

void
mruby_set__GHookList_data_ptr(mrb_value obj, struct _GHookList *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GHookList_data_type);
}

void
mruby_gift__GHookList_data_ptr(mrb_value obj, struct _GHookList *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GHookList_data_type);
}

struct _GHookList *
mruby_unbox__GHookList(mrb_value boxed) {
  return (struct _GHookList *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIConv_boxing */
/* sha: 510da4b905087d9778d2785ad06236d8b6023ea8558a8515d127173bdbdc15ad */
#if BIND_GIConv_TYPE
/*
 * Boxing implementation for struct _GIConv
 */

static void free__GIConv(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GIConv_data_type = {
   "struct _GIConv", free__GIConv
};

mrb_value
mruby_box__GIConv(mrb_state* mrb, struct _GIConv *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GIConv_class(mrb), &_GIConv_data_type, box));
}

mrb_value
mruby_giftwrap__GIConv(mrb_state* mrb, struct _GIConv *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GIConv_class(mrb), &_GIConv_data_type, box));
}

void
mruby_set__GIConv_data_ptr(mrb_value obj, struct _GIConv *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GIConv_data_type);
}

void
mruby_gift__GIConv_data_ptr(mrb_value obj, struct _GIConv *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GIConv_data_type);
}

struct _GIConv *
mruby_unbox__GIConv(mrb_value boxed) {
  return (struct _GIConv *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOChannel_boxing */
/* sha: 6940bfc88456f3fe3b68d7c61f887ebc025e3003e3a078ef3b1c63bd7fd1bddd */
#if BIND_GIOChannel_TYPE
/*
 * Boxing implementation for struct _GIOChannel
 */

static void free__GIOChannel(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      g_io_channel_unref(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GIOChannel_data_type = {
   "struct _GIOChannel", free__GIOChannel
};

mrb_value
mruby_box__GIOChannel(mrb_state* mrb, struct _GIOChannel *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GIOChannel_class(mrb), &_GIOChannel_data_type, box));
}

mrb_value
mruby_giftwrap__GIOChannel(mrb_state* mrb, struct _GIOChannel *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GIOChannel_class(mrb), &_GIOChannel_data_type, box));
}

void
mruby_set__GIOChannel_data_ptr(mrb_value obj, struct _GIOChannel *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GIOChannel_data_type);
}

void
mruby_gift__GIOChannel_data_ptr(mrb_value obj, struct _GIOChannel *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GIOChannel_data_type);
}

struct _GIOChannel *
mruby_unbox__GIOChannel(mrb_value boxed) {
  return (struct _GIOChannel *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOFuncs_boxing */
/* sha: a41d493ca21e04f53d11a26f688e27e7eab88e90be53e766624309950b4bbee6 */
#if BIND_GIOFuncs_TYPE
/*
 * Boxing implementation for struct _GIOFuncs
 */

static void free__GIOFuncs(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GIOFuncs_data_type = {
   "struct _GIOFuncs", free__GIOFuncs
};

mrb_value
mruby_box__GIOFuncs(mrb_state* mrb, struct _GIOFuncs *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GIOFuncs_class(mrb), &_GIOFuncs_data_type, box));
}

mrb_value
mruby_giftwrap__GIOFuncs(mrb_state* mrb, struct _GIOFuncs *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GIOFuncs_class(mrb), &_GIOFuncs_data_type, box));
}

void
mruby_set__GIOFuncs_data_ptr(mrb_value obj, struct _GIOFuncs *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GIOFuncs_data_type);
}

void
mruby_gift__GIOFuncs_data_ptr(mrb_value obj, struct _GIOFuncs *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GIOFuncs_data_type);
}

struct _GIOFuncs *
mruby_unbox__GIOFuncs(mrb_value boxed) {
  return (struct _GIOFuncs *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStream_boxing */
/* sha: 6accdf5ead5bb0b9615e1e1a65bb509f09c13352c66e7ae4762da441201ee3e7 */
#if BIND_GIOStream_TYPE
/*
 * Boxing implementation for struct _GIOStream
 */

static void free__GIOStream(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      g_object_unref(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GIOStream_data_type = {
   "struct _GIOStream", free__GIOStream
};

mrb_value
mruby_box__GIOStream(mrb_state* mrb, struct _GIOStream *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GIOStream_class(mrb), &_GIOStream_data_type, box));
}

mrb_value
mruby_giftwrap__GIOStream(mrb_state* mrb, struct _GIOStream *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GIOStream_class(mrb), &_GIOStream_data_type, box));
}

void
mruby_set__GIOStream_data_ptr(mrb_value obj, struct _GIOStream *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GIOStream_data_type);
}

void
mruby_gift__GIOStream_data_ptr(mrb_value obj, struct _GIOStream *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GIOStream_data_type);
}

struct _GIOStream *
mruby_unbox__GIOStream(mrb_value boxed) {
  return (struct _GIOStream *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamClass_boxing */
/* sha: 817952796e9a99fd5c3a8418a2bcd524f3e93e09f35bd295eae916657cc4c1c6 */
#if BIND_GIOStreamClass_TYPE
/*
 * Boxing implementation for struct _GIOStreamClass
 */

static void free__GIOStreamClass(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GIOStreamClass_data_type = {
   "struct _GIOStreamClass", free__GIOStreamClass
};

mrb_value
mruby_box__GIOStreamClass(mrb_state* mrb, struct _GIOStreamClass *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GIOStreamClass_class(mrb), &_GIOStreamClass_data_type, box));
}

mrb_value
mruby_giftwrap__GIOStreamClass(mrb_state* mrb, struct _GIOStreamClass *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GIOStreamClass_class(mrb), &_GIOStreamClass_data_type, box));
}

void
mruby_set__GIOStreamClass_data_ptr(mrb_value obj, struct _GIOStreamClass *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GIOStreamClass_data_type);
}

void
mruby_gift__GIOStreamClass_data_ptr(mrb_value obj, struct _GIOStreamClass *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GIOStreamClass_data_type);
}

struct _GIOStreamClass *
mruby_unbox__GIOStreamClass(mrb_value boxed) {
  return (struct _GIOStreamClass *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GIOStreamPrivate_boxing */
/* sha: 08836d2271d132f2d64e0e484e83e380e51ed1832d173a7c635ae13aaafd2193 */
#if BIND_GIOStreamPrivate_TYPE
/*
 * Boxing implementation for struct _GIOStreamPrivate
 */

static void free__GIOStreamPrivate(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GIOStreamPrivate_data_type = {
   "struct _GIOStreamPrivate", free__GIOStreamPrivate
};

mrb_value
mruby_box__GIOStreamPrivate(mrb_state* mrb, struct _GIOStreamPrivate *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GIOStreamPrivate_class(mrb), &_GIOStreamPrivate_data_type, box));
}

mrb_value
mruby_giftwrap__GIOStreamPrivate(mrb_state* mrb, struct _GIOStreamPrivate *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GIOStreamPrivate_class(mrb), &_GIOStreamPrivate_data_type, box));
}

void
mruby_set__GIOStreamPrivate_data_ptr(mrb_value obj, struct _GIOStreamPrivate *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GIOStreamPrivate_data_type);
}

void
mruby_gift__GIOStreamPrivate_data_ptr(mrb_value obj, struct _GIOStreamPrivate *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GIOStreamPrivate_data_type);
}

struct _GIOStreamPrivate *
mruby_unbox__GIOStreamPrivate(mrb_value boxed) {
  return (struct _GIOStreamPrivate *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetAddress_boxing */
/* sha: afd3488bf00b2b1f826b4a348a07bca5a9a8fb2c01ee0c7a0047e3b5db64b171 */
#if BIND_GInetAddress_TYPE
/*
 * Boxing implementation for struct _GInetAddress
 */

static void free__GInetAddress(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GInetAddress_data_type = {
   "struct _GInetAddress", free__GInetAddress
};

mrb_value
mruby_box__GInetAddress(mrb_state* mrb, struct _GInetAddress *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GInetAddress_class(mrb), &_GInetAddress_data_type, box));
}

mrb_value
mruby_giftwrap__GInetAddress(mrb_state* mrb, struct _GInetAddress *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GInetAddress_class(mrb), &_GInetAddress_data_type, box));
}

void
mruby_set__GInetAddress_data_ptr(mrb_value obj, struct _GInetAddress *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GInetAddress_data_type);
}

void
mruby_gift__GInetAddress_data_ptr(mrb_value obj, struct _GInetAddress *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GInetAddress_data_type);
}

struct _GInetAddress *
mruby_unbox__GInetAddress(mrb_value boxed) {
  return (struct _GInetAddress *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetAddressClass_boxing */
/* sha: caf6737c53654e2c0a63d8cba67fda4ae458b8bbbde3e50a466c2402878f4257 */
#if BIND_GInetAddressClass_TYPE
/*
 * Boxing implementation for struct _GInetAddressClass
 */

static void free__GInetAddressClass(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GInetAddressClass_data_type = {
   "struct _GInetAddressClass", free__GInetAddressClass
};

mrb_value
mruby_box__GInetAddressClass(mrb_state* mrb, struct _GInetAddressClass *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GInetAddressClass_class(mrb), &_GInetAddressClass_data_type, box));
}

mrb_value
mruby_giftwrap__GInetAddressClass(mrb_state* mrb, struct _GInetAddressClass *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GInetAddressClass_class(mrb), &_GInetAddressClass_data_type, box));
}

void
mruby_set__GInetAddressClass_data_ptr(mrb_value obj, struct _GInetAddressClass *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GInetAddressClass_data_type);
}

void
mruby_gift__GInetAddressClass_data_ptr(mrb_value obj, struct _GInetAddressClass *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GInetAddressClass_data_type);
}

struct _GInetAddressClass *
mruby_unbox__GInetAddressClass(mrb_value boxed) {
  return (struct _GInetAddressClass *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetAddressPrivate_boxing */
/* sha: 38a1b5f3d8a1ba8c181845937ef97436260bca10ff855f0861a4e79d2c65a218 */
#if BIND_GInetAddressPrivate_TYPE
/*
 * Boxing implementation for struct _GInetAddressPrivate
 */

static void free__GInetAddressPrivate(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GInetAddressPrivate_data_type = {
   "struct _GInetAddressPrivate", free__GInetAddressPrivate
};

mrb_value
mruby_box__GInetAddressPrivate(mrb_state* mrb, struct _GInetAddressPrivate *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GInetAddressPrivate_class(mrb), &_GInetAddressPrivate_data_type, box));
}

mrb_value
mruby_giftwrap__GInetAddressPrivate(mrb_state* mrb, struct _GInetAddressPrivate *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GInetAddressPrivate_class(mrb), &_GInetAddressPrivate_data_type, box));
}

void
mruby_set__GInetAddressPrivate_data_ptr(mrb_value obj, struct _GInetAddressPrivate *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GInetAddressPrivate_data_type);
}

void
mruby_gift__GInetAddressPrivate_data_ptr(mrb_value obj, struct _GInetAddressPrivate *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GInetAddressPrivate_data_type);
}

struct _GInetAddressPrivate *
mruby_unbox__GInetAddressPrivate(mrb_value boxed) {
  return (struct _GInetAddressPrivate *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetSocketAddress_boxing */
/* sha: 44135e15214568c2fa0a9ef74f92ef275957abd290d40ea1c8738fa8ff636b9d */
#if BIND_GInetSocketAddress_TYPE
/*
 * Boxing implementation for struct _GInetSocketAddress
 */

static void free__GInetSocketAddress(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GInetSocketAddress_data_type = {
   "struct _GInetSocketAddress", free__GInetSocketAddress
};

mrb_value
mruby_box__GInetSocketAddress(mrb_state* mrb, struct _GInetSocketAddress *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GInetSocketAddress_class(mrb), &_GInetSocketAddress_data_type, box));
}

mrb_value
mruby_giftwrap__GInetSocketAddress(mrb_state* mrb, struct _GInetSocketAddress *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GInetSocketAddress_class(mrb), &_GInetSocketAddress_data_type, box));
}

void
mruby_set__GInetSocketAddress_data_ptr(mrb_value obj, struct _GInetSocketAddress *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GInetSocketAddress_data_type);
}

void
mruby_gift__GInetSocketAddress_data_ptr(mrb_value obj, struct _GInetSocketAddress *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GInetSocketAddress_data_type);
}

struct _GInetSocketAddress *
mruby_unbox__GInetSocketAddress(mrb_value boxed) {
  return (struct _GInetSocketAddress *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetSocketAddressClass_boxing */
/* sha: 6012ee873dbf0ceaeea5619b05488d3d86a8c14dc66beb4ab35efc3d58a241cf */
#if BIND_GInetSocketAddressClass_TYPE
/*
 * Boxing implementation for struct _GInetSocketAddressClass
 */

static void free__GInetSocketAddressClass(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GInetSocketAddressClass_data_type = {
   "struct _GInetSocketAddressClass", free__GInetSocketAddressClass
};

mrb_value
mruby_box__GInetSocketAddressClass(mrb_state* mrb, struct _GInetSocketAddressClass *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GInetSocketAddressClass_class(mrb), &_GInetSocketAddressClass_data_type, box));
}

mrb_value
mruby_giftwrap__GInetSocketAddressClass(mrb_state* mrb, struct _GInetSocketAddressClass *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GInetSocketAddressClass_class(mrb), &_GInetSocketAddressClass_data_type, box));
}

void
mruby_set__GInetSocketAddressClass_data_ptr(mrb_value obj, struct _GInetSocketAddressClass *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GInetSocketAddressClass_data_type);
}

void
mruby_gift__GInetSocketAddressClass_data_ptr(mrb_value obj, struct _GInetSocketAddressClass *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GInetSocketAddressClass_data_type);
}

struct _GInetSocketAddressClass *
mruby_unbox__GInetSocketAddressClass(mrb_value boxed) {
  return (struct _GInetSocketAddressClass *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInetSocketAddressPrivate_boxing */
/* sha: f25e5f97194e87d6fce3c70deddac571ca64537de08028200aa77dfda2bde06f */
#if BIND_GInetSocketAddressPrivate_TYPE
/*
 * Boxing implementation for struct _GInetSocketAddressPrivate
 */

static void free__GInetSocketAddressPrivate(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GInetSocketAddressPrivate_data_type = {
   "struct _GInetSocketAddressPrivate", free__GInetSocketAddressPrivate
};

mrb_value
mruby_box__GInetSocketAddressPrivate(mrb_state* mrb, struct _GInetSocketAddressPrivate *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GInetSocketAddressPrivate_class(mrb), &_GInetSocketAddressPrivate_data_type, box));
}

mrb_value
mruby_giftwrap__GInetSocketAddressPrivate(mrb_state* mrb, struct _GInetSocketAddressPrivate *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GInetSocketAddressPrivate_class(mrb), &_GInetSocketAddressPrivate_data_type, box));
}

void
mruby_set__GInetSocketAddressPrivate_data_ptr(mrb_value obj, struct _GInetSocketAddressPrivate *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GInetSocketAddressPrivate_data_type);
}

void
mruby_gift__GInetSocketAddressPrivate_data_ptr(mrb_value obj, struct _GInetSocketAddressPrivate *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GInetSocketAddressPrivate_data_type);
}

struct _GInetSocketAddressPrivate *
mruby_unbox__GInetSocketAddressPrivate(mrb_value boxed) {
  return (struct _GInetSocketAddressPrivate *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStream_boxing */
/* sha: e87cf19d953e99778afdf5efe3fe533a4d67030dd3a14f1a22b16f8c46ca6064 */
#if BIND_GInputStream_TYPE
/*
 * Boxing implementation for struct _GInputStream
 */

static void free__GInputStream(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      g_object_unref(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GInputStream_data_type = {
   "struct _GInputStream", free__GInputStream
};

mrb_value
mruby_box__GInputStream(mrb_state* mrb, struct _GInputStream *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GInputStream_class(mrb), &_GInputStream_data_type, box));
}

mrb_value
mruby_giftwrap__GInputStream(mrb_state* mrb, struct _GInputStream *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GInputStream_class(mrb), &_GInputStream_data_type, box));
}

void
mruby_set__GInputStream_data_ptr(mrb_value obj, struct _GInputStream *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GInputStream_data_type);
}

void
mruby_gift__GInputStream_data_ptr(mrb_value obj, struct _GInputStream *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GInputStream_data_type);
}

struct _GInputStream *
mruby_unbox__GInputStream(mrb_value boxed) {
  return (struct _GInputStream *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStreamClass_boxing */
/* sha: 093d52540292956c255c4ecb3b3491b70b7291e5471fe76ae1b895dc634cdcfe */
#if BIND_GInputStreamClass_TYPE
/*
 * Boxing implementation for struct _GInputStreamClass
 */

static void free__GInputStreamClass(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GInputStreamClass_data_type = {
   "struct _GInputStreamClass", free__GInputStreamClass
};

mrb_value
mruby_box__GInputStreamClass(mrb_state* mrb, struct _GInputStreamClass *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GInputStreamClass_class(mrb), &_GInputStreamClass_data_type, box));
}

mrb_value
mruby_giftwrap__GInputStreamClass(mrb_state* mrb, struct _GInputStreamClass *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GInputStreamClass_class(mrb), &_GInputStreamClass_data_type, box));
}

void
mruby_set__GInputStreamClass_data_ptr(mrb_value obj, struct _GInputStreamClass *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GInputStreamClass_data_type);
}

void
mruby_gift__GInputStreamClass_data_ptr(mrb_value obj, struct _GInputStreamClass *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GInputStreamClass_data_type);
}

struct _GInputStreamClass *
mruby_unbox__GInputStreamClass(mrb_value boxed) {
  return (struct _GInputStreamClass *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GInputStreamPrivate_boxing */
/* sha: 6953622225b2e0910f4f10c603cfc74e2f20bf335e06e938128857fd4d38258b */
#if BIND_GInputStreamPrivate_TYPE
/*
 * Boxing implementation for struct _GInputStreamPrivate
 */

static void free__GInputStreamPrivate(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GInputStreamPrivate_data_type = {
   "struct _GInputStreamPrivate", free__GInputStreamPrivate
};

mrb_value
mruby_box__GInputStreamPrivate(mrb_state* mrb, struct _GInputStreamPrivate *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GInputStreamPrivate_class(mrb), &_GInputStreamPrivate_data_type, box));
}

mrb_value
mruby_giftwrap__GInputStreamPrivate(mrb_state* mrb, struct _GInputStreamPrivate *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GInputStreamPrivate_class(mrb), &_GInputStreamPrivate_data_type, box));
}

void
mruby_set__GInputStreamPrivate_data_ptr(mrb_value obj, struct _GInputStreamPrivate *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GInputStreamPrivate_data_type);
}

void
mruby_gift__GInputStreamPrivate_data_ptr(mrb_value obj, struct _GInputStreamPrivate *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GInputStreamPrivate_data_type);
}

struct _GInputStreamPrivate *
mruby_unbox__GInputStreamPrivate(mrb_value boxed) {
  return (struct _GInputStreamPrivate *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GKeyFile_boxing */
/* sha: de298523a8883aa345b9443fd917be8091a7fcad25e890d0017599a3bd3c8791 */
#if BIND_GKeyFile_TYPE
/*
 * Boxing implementation for struct _GKeyFile
 */

static void free__GKeyFile(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GKeyFile_data_type = {
   "struct _GKeyFile", free__GKeyFile
};

mrb_value
mruby_box__GKeyFile(mrb_state* mrb, struct _GKeyFile *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GKeyFile_class(mrb), &_GKeyFile_data_type, box));
}

mrb_value
mruby_giftwrap__GKeyFile(mrb_state* mrb, struct _GKeyFile *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GKeyFile_class(mrb), &_GKeyFile_data_type, box));
}

void
mruby_set__GKeyFile_data_ptr(mrb_value obj, struct _GKeyFile *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GKeyFile_data_type);
}

void
mruby_gift__GKeyFile_data_ptr(mrb_value obj, struct _GKeyFile *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GKeyFile_data_type);
}

struct _GKeyFile *
mruby_unbox__GKeyFile(mrb_value boxed) {
  return (struct _GKeyFile *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GList_boxing */
/* sha: e6379e8d2f374c507942696f74948f066601488ce1d92e24bbb94bd1c4b0cc6b */
#if BIND_GList_TYPE
/*
 * Boxing implementation for struct _GList
 */

static void free__GList(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GList_data_type = {
   "struct _GList", free__GList
};

mrb_value
mruby_box__GList(mrb_state* mrb, struct _GList *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GList_class(mrb), &_GList_data_type, box));
}

mrb_value
mruby_giftwrap__GList(mrb_state* mrb, struct _GList *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GList_class(mrb), &_GList_data_type, box));
}

void
mruby_set__GList_data_ptr(mrb_value obj, struct _GList *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GList_data_type);
}

void
mruby_gift__GList_data_ptr(mrb_value obj, struct _GList *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GList_data_type);
}

struct _GList *
mruby_unbox__GList(mrb_value boxed) {
  return (struct _GList *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMainContext_boxing */
/* sha: e2f2c6e27c6ef78c306cc6744551921c65df05c2b70978002f2b4cb9e3b29a8d */
#if BIND_GMainContext_TYPE
/*
 * Boxing implementation for struct _GMainContext
 */

static void free__GMainContext(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GMainContext_data_type = {
   "struct _GMainContext", free__GMainContext
};

mrb_value
mruby_box__GMainContext(mrb_state* mrb, struct _GMainContext *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GMainContext_class(mrb), &_GMainContext_data_type, box));
}

mrb_value
mruby_giftwrap__GMainContext(mrb_state* mrb, struct _GMainContext *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GMainContext_class(mrb), &_GMainContext_data_type, box));
}

void
mruby_set__GMainContext_data_ptr(mrb_value obj, struct _GMainContext *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GMainContext_data_type);
}

void
mruby_gift__GMainContext_data_ptr(mrb_value obj, struct _GMainContext *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GMainContext_data_type);
}

struct _GMainContext *
mruby_unbox__GMainContext(mrb_value boxed) {
  return (struct _GMainContext *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMainLoop_boxing */
/* sha: db9b066c27d202859f634346b5654bd44c3284abdd231bf1d59625962229f35f */
#if BIND_GMainLoop_TYPE
/*
 * Boxing implementation for struct _GMainLoop
 */

static void free__GMainLoop(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GMainLoop_data_type = {
   "struct _GMainLoop", free__GMainLoop
};

mrb_value
mruby_box__GMainLoop(mrb_state* mrb, struct _GMainLoop *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GMainLoop_class(mrb), &_GMainLoop_data_type, box));
}

mrb_value
mruby_giftwrap__GMainLoop(mrb_state* mrb, struct _GMainLoop *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GMainLoop_class(mrb), &_GMainLoop_data_type, box));
}

void
mruby_set__GMainLoop_data_ptr(mrb_value obj, struct _GMainLoop *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GMainLoop_data_type);
}

void
mruby_gift__GMainLoop_data_ptr(mrb_value obj, struct _GMainLoop *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GMainLoop_data_type);
}

struct _GMainLoop *
mruby_unbox__GMainLoop(mrb_value boxed) {
  return (struct _GMainLoop *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMappedFile_boxing */
/* sha: 775eed1e97eabc650c44daefa51fed455383862ed68f0c18ecea6dd8cce5ac1e */
#if BIND_GMappedFile_TYPE
/*
 * Boxing implementation for struct _GMappedFile
 */

static void free__GMappedFile(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GMappedFile_data_type = {
   "struct _GMappedFile", free__GMappedFile
};

mrb_value
mruby_box__GMappedFile(mrb_state* mrb, struct _GMappedFile *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GMappedFile_class(mrb), &_GMappedFile_data_type, box));
}

mrb_value
mruby_giftwrap__GMappedFile(mrb_state* mrb, struct _GMappedFile *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GMappedFile_class(mrb), &_GMappedFile_data_type, box));
}

void
mruby_set__GMappedFile_data_ptr(mrb_value obj, struct _GMappedFile *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GMappedFile_data_type);
}

void
mruby_gift__GMappedFile_data_ptr(mrb_value obj, struct _GMappedFile *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GMappedFile_data_type);
}

struct _GMappedFile *
mruby_unbox__GMappedFile(mrb_value boxed) {
  return (struct _GMappedFile *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMarkupParseContext_boxing */
/* sha: 96f7d5f7540d42b30a9779cca7a0aeb9922c3ac0135052b62222892bbe3e52e1 */
#if BIND_GMarkupParseContext_TYPE
/*
 * Boxing implementation for struct _GMarkupParseContext
 */

static void free__GMarkupParseContext(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GMarkupParseContext_data_type = {
   "struct _GMarkupParseContext", free__GMarkupParseContext
};

mrb_value
mruby_box__GMarkupParseContext(mrb_state* mrb, struct _GMarkupParseContext *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GMarkupParseContext_class(mrb), &_GMarkupParseContext_data_type, box));
}

mrb_value
mruby_giftwrap__GMarkupParseContext(mrb_state* mrb, struct _GMarkupParseContext *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GMarkupParseContext_class(mrb), &_GMarkupParseContext_data_type, box));
}

void
mruby_set__GMarkupParseContext_data_ptr(mrb_value obj, struct _GMarkupParseContext *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GMarkupParseContext_data_type);
}

void
mruby_gift__GMarkupParseContext_data_ptr(mrb_value obj, struct _GMarkupParseContext *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GMarkupParseContext_data_type);
}

struct _GMarkupParseContext *
mruby_unbox__GMarkupParseContext(mrb_value boxed) {
  return (struct _GMarkupParseContext *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMarkupParser_boxing */
/* sha: e98807ff1d50b6edf6904c717d008ca6d701fcd78456f61392b4f459cbffad98 */
#if BIND_GMarkupParser_TYPE
/*
 * Boxing implementation for struct _GMarkupParser
 */

static void free__GMarkupParser(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GMarkupParser_data_type = {
   "struct _GMarkupParser", free__GMarkupParser
};

mrb_value
mruby_box__GMarkupParser(mrb_state* mrb, struct _GMarkupParser *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GMarkupParser_class(mrb), &_GMarkupParser_data_type, box));
}

mrb_value
mruby_giftwrap__GMarkupParser(mrb_state* mrb, struct _GMarkupParser *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GMarkupParser_class(mrb), &_GMarkupParser_data_type, box));
}

void
mruby_set__GMarkupParser_data_ptr(mrb_value obj, struct _GMarkupParser *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GMarkupParser_data_type);
}

void
mruby_gift__GMarkupParser_data_ptr(mrb_value obj, struct _GMarkupParser *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GMarkupParser_data_type);
}

struct _GMarkupParser *
mruby_unbox__GMarkupParser(mrb_value boxed) {
  return (struct _GMarkupParser *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMatchInfo_boxing */
/* sha: 501b1dd901d2928c420a0e813d2c4c52830535e36b7b9fdf2848f85fc2f46b99 */
#if BIND_GMatchInfo_TYPE
/*
 * Boxing implementation for struct _GMatchInfo
 */

static void free__GMatchInfo(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      g_match_info_unref(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GMatchInfo_data_type = {
   "struct _GMatchInfo", free__GMatchInfo
};

mrb_value
mruby_box__GMatchInfo(mrb_state* mrb, struct _GMatchInfo *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GMatchInfo_class(mrb), &_GMatchInfo_data_type, box));
}

mrb_value
mruby_giftwrap__GMatchInfo(mrb_state* mrb, struct _GMatchInfo *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GMatchInfo_class(mrb), &_GMatchInfo_data_type, box));
}

void
mruby_set__GMatchInfo_data_ptr(mrb_value obj, struct _GMatchInfo *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GMatchInfo_data_type);
}

void
mruby_gift__GMatchInfo_data_ptr(mrb_value obj, struct _GMatchInfo *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GMatchInfo_data_type);
}

struct _GMatchInfo *
mruby_unbox__GMatchInfo(mrb_value boxed) {
  return (struct _GMatchInfo *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GMemVTable_boxing */
/* sha: 84e33b4d7d2a46cb4ff1418edf9374ab9d8525b1794d80dc16562e41442297ba */
#if BIND_GMemVTable_TYPE
/*
 * Boxing implementation for struct _GMemVTable
 */

static void free__GMemVTable(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GMemVTable_data_type = {
   "struct _GMemVTable", free__GMemVTable
};

mrb_value
mruby_box__GMemVTable(mrb_state* mrb, struct _GMemVTable *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GMemVTable_class(mrb), &_GMemVTable_data_type, box));
}

mrb_value
mruby_giftwrap__GMemVTable(mrb_state* mrb, struct _GMemVTable *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GMemVTable_class(mrb), &_GMemVTable_data_type, box));
}

void
mruby_set__GMemVTable_data_ptr(mrb_value obj, struct _GMemVTable *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GMemVTable_data_type);
}

void
mruby_gift__GMemVTable_data_ptr(mrb_value obj, struct _GMemVTable *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GMemVTable_data_type);
}

struct _GMemVTable *
mruby_unbox__GMemVTable(mrb_value boxed) {
  return (struct _GMemVTable *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GNode_boxing */
/* sha: a243f9b2f3ff206392354d02ace6f678ceaca7fdb2bb9158f562e27e77eeb22d */
#if BIND_GNode_TYPE
/*
 * Boxing implementation for struct _GNode
 */

static void free__GNode(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GNode_data_type = {
   "struct _GNode", free__GNode
};

mrb_value
mruby_box__GNode(mrb_state* mrb, struct _GNode *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GNode_class(mrb), &_GNode_data_type, box));
}

mrb_value
mruby_giftwrap__GNode(mrb_state* mrb, struct _GNode *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GNode_class(mrb), &_GNode_data_type, box));
}

void
mruby_set__GNode_data_ptr(mrb_value obj, struct _GNode *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GNode_data_type);
}

void
mruby_gift__GNode_data_ptr(mrb_value obj, struct _GNode *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GNode_data_type);
}

struct _GNode *
mruby_unbox__GNode(mrb_value boxed) {
  return (struct _GNode *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOnce_boxing */
/* sha: 5712751b374cef58cf7a5fe7ab043b9a91466a2200c19cb884563bbca6cfc767 */
#if BIND_GOnce_TYPE
/*
 * Boxing implementation for struct _GOnce
 */

static void free__GOnce(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GOnce_data_type = {
   "struct _GOnce", free__GOnce
};

mrb_value
mruby_box__GOnce(mrb_state* mrb, struct _GOnce *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GOnce_class(mrb), &_GOnce_data_type, box));
}

mrb_value
mruby_giftwrap__GOnce(mrb_state* mrb, struct _GOnce *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GOnce_class(mrb), &_GOnce_data_type, box));
}

void
mruby_set__GOnce_data_ptr(mrb_value obj, struct _GOnce *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GOnce_data_type);
}

void
mruby_gift__GOnce_data_ptr(mrb_value obj, struct _GOnce *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GOnce_data_type);
}

struct _GOnce *
mruby_unbox__GOnce(mrb_value boxed) {
  return (struct _GOnce *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOptionContext_boxing */
/* sha: c1a0697fade2ce8055dc2844abd2f66f4ec42d7157403359983a4bf0276c61d5 */
#if BIND_GOptionContext_TYPE
/*
 * Boxing implementation for struct _GOptionContext
 */

static void free__GOptionContext(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GOptionContext_data_type = {
   "struct _GOptionContext", free__GOptionContext
};

mrb_value
mruby_box__GOptionContext(mrb_state* mrb, struct _GOptionContext *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GOptionContext_class(mrb), &_GOptionContext_data_type, box));
}

mrb_value
mruby_giftwrap__GOptionContext(mrb_state* mrb, struct _GOptionContext *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GOptionContext_class(mrb), &_GOptionContext_data_type, box));
}

void
mruby_set__GOptionContext_data_ptr(mrb_value obj, struct _GOptionContext *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GOptionContext_data_type);
}

void
mruby_gift__GOptionContext_data_ptr(mrb_value obj, struct _GOptionContext *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GOptionContext_data_type);
}

struct _GOptionContext *
mruby_unbox__GOptionContext(mrb_value boxed) {
  return (struct _GOptionContext *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOptionEntry_boxing */
/* sha: 0ec42e80f799002904bf033aa2efe9c20a52b7ed097e4afe25fe968ef3086b62 */
#if BIND_GOptionEntry_TYPE
/*
 * Boxing implementation for struct _GOptionEntry
 */

static void free__GOptionEntry(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GOptionEntry_data_type = {
   "struct _GOptionEntry", free__GOptionEntry
};

mrb_value
mruby_box__GOptionEntry(mrb_state* mrb, struct _GOptionEntry *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GOptionEntry_class(mrb), &_GOptionEntry_data_type, box));
}

mrb_value
mruby_giftwrap__GOptionEntry(mrb_state* mrb, struct _GOptionEntry *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GOptionEntry_class(mrb), &_GOptionEntry_data_type, box));
}

void
mruby_set__GOptionEntry_data_ptr(mrb_value obj, struct _GOptionEntry *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GOptionEntry_data_type);
}

void
mruby_gift__GOptionEntry_data_ptr(mrb_value obj, struct _GOptionEntry *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GOptionEntry_data_type);
}

struct _GOptionEntry *
mruby_unbox__GOptionEntry(mrb_value boxed) {
  return (struct _GOptionEntry *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOptionGroup_boxing */
/* sha: 97d689e071dc8bc1d1e08125921de12589d8827736ada5d4cd670f65fc3c3c56 */
#if BIND_GOptionGroup_TYPE
/*
 * Boxing implementation for struct _GOptionGroup
 */

static void free__GOptionGroup(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GOptionGroup_data_type = {
   "struct _GOptionGroup", free__GOptionGroup
};

mrb_value
mruby_box__GOptionGroup(mrb_state* mrb, struct _GOptionGroup *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GOptionGroup_class(mrb), &_GOptionGroup_data_type, box));
}

mrb_value
mruby_giftwrap__GOptionGroup(mrb_state* mrb, struct _GOptionGroup *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GOptionGroup_class(mrb), &_GOptionGroup_data_type, box));
}

void
mruby_set__GOptionGroup_data_ptr(mrb_value obj, struct _GOptionGroup *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GOptionGroup_data_type);
}

void
mruby_gift__GOptionGroup_data_ptr(mrb_value obj, struct _GOptionGroup *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GOptionGroup_data_type);
}

struct _GOptionGroup *
mruby_unbox__GOptionGroup(mrb_value boxed) {
  return (struct _GOptionGroup *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStream_boxing */
/* sha: ec8e17bcf226de60c1227276f2e4a072549c36d84761512b1211dd2f7a5b5ff3 */
#if BIND_GOutputStream_TYPE
/*
 * Boxing implementation for struct _GOutputStream
 */

static void free__GOutputStream(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      g_object_unref(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GOutputStream_data_type = {
   "struct _GOutputStream", free__GOutputStream
};

mrb_value
mruby_box__GOutputStream(mrb_state* mrb, struct _GOutputStream *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GOutputStream_class(mrb), &_GOutputStream_data_type, box));
}

mrb_value
mruby_giftwrap__GOutputStream(mrb_state* mrb, struct _GOutputStream *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GOutputStream_class(mrb), &_GOutputStream_data_type, box));
}

void
mruby_set__GOutputStream_data_ptr(mrb_value obj, struct _GOutputStream *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GOutputStream_data_type);
}

void
mruby_gift__GOutputStream_data_ptr(mrb_value obj, struct _GOutputStream *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GOutputStream_data_type);
}

struct _GOutputStream *
mruby_unbox__GOutputStream(mrb_value boxed) {
  return (struct _GOutputStream *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamClass_boxing */
/* sha: 759baf32b2ed9efd9ef502cb9ac111c136dd6f3ade312a5d1526db7b15864c8d */
#if BIND_GOutputStreamClass_TYPE
/*
 * Boxing implementation for struct _GOutputStreamClass
 */

static void free__GOutputStreamClass(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GOutputStreamClass_data_type = {
   "struct _GOutputStreamClass", free__GOutputStreamClass
};

mrb_value
mruby_box__GOutputStreamClass(mrb_state* mrb, struct _GOutputStreamClass *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GOutputStreamClass_class(mrb), &_GOutputStreamClass_data_type, box));
}

mrb_value
mruby_giftwrap__GOutputStreamClass(mrb_state* mrb, struct _GOutputStreamClass *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GOutputStreamClass_class(mrb), &_GOutputStreamClass_data_type, box));
}

void
mruby_set__GOutputStreamClass_data_ptr(mrb_value obj, struct _GOutputStreamClass *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GOutputStreamClass_data_type);
}

void
mruby_gift__GOutputStreamClass_data_ptr(mrb_value obj, struct _GOutputStreamClass *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GOutputStreamClass_data_type);
}

struct _GOutputStreamClass *
mruby_unbox__GOutputStreamClass(mrb_value boxed) {
  return (struct _GOutputStreamClass *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GOutputStreamPrivate_boxing */
/* sha: 78465de0fbdb1cfb06bad96367ed0a5800eadab3c7f1b5e4bf912cd067eba800 */
#if BIND_GOutputStreamPrivate_TYPE
/*
 * Boxing implementation for struct _GOutputStreamPrivate
 */

static void free__GOutputStreamPrivate(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GOutputStreamPrivate_data_type = {
   "struct _GOutputStreamPrivate", free__GOutputStreamPrivate
};

mrb_value
mruby_box__GOutputStreamPrivate(mrb_state* mrb, struct _GOutputStreamPrivate *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GOutputStreamPrivate_class(mrb), &_GOutputStreamPrivate_data_type, box));
}

mrb_value
mruby_giftwrap__GOutputStreamPrivate(mrb_state* mrb, struct _GOutputStreamPrivate *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GOutputStreamPrivate_class(mrb), &_GOutputStreamPrivate_data_type, box));
}

void
mruby_set__GOutputStreamPrivate_data_ptr(mrb_value obj, struct _GOutputStreamPrivate *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GOutputStreamPrivate_data_type);
}

void
mruby_gift__GOutputStreamPrivate_data_ptr(mrb_value obj, struct _GOutputStreamPrivate *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GOutputStreamPrivate_data_type);
}

struct _GOutputStreamPrivate *
mruby_unbox__GOutputStreamPrivate(mrb_value boxed) {
  return (struct _GOutputStreamPrivate *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GPatternSpec_boxing */
/* sha: 19d7f9781334c197f03679286f6fc1235d28c741131b88b376d57eeb9aa0d42f */
#if BIND_GPatternSpec_TYPE
/*
 * Boxing implementation for struct _GPatternSpec
 */

static void free__GPatternSpec(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GPatternSpec_data_type = {
   "struct _GPatternSpec", free__GPatternSpec
};

mrb_value
mruby_box__GPatternSpec(mrb_state* mrb, struct _GPatternSpec *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GPatternSpec_class(mrb), &_GPatternSpec_data_type, box));
}

mrb_value
mruby_giftwrap__GPatternSpec(mrb_state* mrb, struct _GPatternSpec *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GPatternSpec_class(mrb), &_GPatternSpec_data_type, box));
}

void
mruby_set__GPatternSpec_data_ptr(mrb_value obj, struct _GPatternSpec *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GPatternSpec_data_type);
}

void
mruby_gift__GPatternSpec_data_ptr(mrb_value obj, struct _GPatternSpec *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GPatternSpec_data_type);
}

struct _GPatternSpec *
mruby_unbox__GPatternSpec(mrb_value boxed) {
  return (struct _GPatternSpec *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GPollFD_boxing */
/* sha: e8c446aa97421f69304ed135465627093e019d2c30b4fe7924ad1cd681216a6b */
#if BIND_GPollFD_TYPE
/*
 * Boxing implementation for struct _GPollFD
 */

static void free__GPollFD(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GPollFD_data_type = {
   "struct _GPollFD", free__GPollFD
};

mrb_value
mruby_box__GPollFD(mrb_state* mrb, struct _GPollFD *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GPollFD_class(mrb), &_GPollFD_data_type, box));
}

mrb_value
mruby_giftwrap__GPollFD(mrb_state* mrb, struct _GPollFD *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GPollFD_class(mrb), &_GPollFD_data_type, box));
}

void
mruby_set__GPollFD_data_ptr(mrb_value obj, struct _GPollFD *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GPollFD_data_type);
}

void
mruby_gift__GPollFD_data_ptr(mrb_value obj, struct _GPollFD *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GPollFD_data_type);
}

struct _GPollFD *
mruby_unbox__GPollFD(mrb_value boxed) {
  return (struct _GPollFD *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GPrivate_boxing */
/* sha: 54341de267153bcf4a35229901e9e898b72afcf5f09a6b66d580b862a490b249 */
#if BIND_GPrivate_TYPE
/*
 * Boxing implementation for struct _GPrivate
 */

static void free__GPrivate(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GPrivate_data_type = {
   "struct _GPrivate", free__GPrivate
};

mrb_value
mruby_box__GPrivate(mrb_state* mrb, struct _GPrivate *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GPrivate_class(mrb), &_GPrivate_data_type, box));
}

mrb_value
mruby_giftwrap__GPrivate(mrb_state* mrb, struct _GPrivate *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GPrivate_class(mrb), &_GPrivate_data_type, box));
}

void
mruby_set__GPrivate_data_ptr(mrb_value obj, struct _GPrivate *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GPrivate_data_type);
}

void
mruby_gift__GPrivate_data_ptr(mrb_value obj, struct _GPrivate *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GPrivate_data_type);
}

struct _GPrivate *
mruby_unbox__GPrivate(mrb_value boxed) {
  return (struct _GPrivate *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GPtrArray_boxing */
/* sha: 79ce6b44579383f1006403a38d6f8ddfb85a108d809fd079af5b72ae9f6287f9 */
#if BIND_GPtrArray_TYPE
/*
 * Boxing implementation for struct _GPtrArray
 */

static void free__GPtrArray(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GPtrArray_data_type = {
   "struct _GPtrArray", free__GPtrArray
};

mrb_value
mruby_box__GPtrArray(mrb_state* mrb, struct _GPtrArray *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GPtrArray_class(mrb), &_GPtrArray_data_type, box));
}

mrb_value
mruby_giftwrap__GPtrArray(mrb_state* mrb, struct _GPtrArray *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GPtrArray_class(mrb), &_GPtrArray_data_type, box));
}

void
mruby_set__GPtrArray_data_ptr(mrb_value obj, struct _GPtrArray *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GPtrArray_data_type);
}

void
mruby_gift__GPtrArray_data_ptr(mrb_value obj, struct _GPtrArray *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GPtrArray_data_type);
}

struct _GPtrArray *
mruby_unbox__GPtrArray(mrb_value boxed) {
  return (struct _GPtrArray *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GQueue_boxing */
/* sha: 398638ff69fde23cb11f119c608074b50d9839f6c7e33ff6c17cfbe79642bdc7 */
#if BIND_GQueue_TYPE
/*
 * Boxing implementation for struct _GQueue
 */

static void free__GQueue(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GQueue_data_type = {
   "struct _GQueue", free__GQueue
};

mrb_value
mruby_box__GQueue(mrb_state* mrb, struct _GQueue *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GQueue_class(mrb), &_GQueue_data_type, box));
}

mrb_value
mruby_giftwrap__GQueue(mrb_state* mrb, struct _GQueue *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GQueue_class(mrb), &_GQueue_data_type, box));
}

void
mruby_set__GQueue_data_ptr(mrb_value obj, struct _GQueue *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GQueue_data_type);
}

void
mruby_gift__GQueue_data_ptr(mrb_value obj, struct _GQueue *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GQueue_data_type);
}

struct _GQueue *
mruby_unbox__GQueue(mrb_value boxed) {
  return (struct _GQueue *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GRWLock_boxing */
/* sha: 619bcc3eab9a9d912edd8a952cd21b8637e3c50c621e33b290d8dd5032af8461 */
#if BIND_GRWLock_TYPE
/*
 * Boxing implementation for struct _GRWLock
 */

static void free__GRWLock(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GRWLock_data_type = {
   "struct _GRWLock", free__GRWLock
};

mrb_value
mruby_box__GRWLock(mrb_state* mrb, struct _GRWLock *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GRWLock_class(mrb), &_GRWLock_data_type, box));
}

mrb_value
mruby_giftwrap__GRWLock(mrb_state* mrb, struct _GRWLock *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GRWLock_class(mrb), &_GRWLock_data_type, box));
}

void
mruby_set__GRWLock_data_ptr(mrb_value obj, struct _GRWLock *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GRWLock_data_type);
}

void
mruby_gift__GRWLock_data_ptr(mrb_value obj, struct _GRWLock *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GRWLock_data_type);
}

struct _GRWLock *
mruby_unbox__GRWLock(mrb_value boxed) {
  return (struct _GRWLock *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GRand_boxing */
/* sha: 072d1d1baf6ed66b660ea646a6932917c27113905a933cbf10fa58b756b57edc */
#if BIND_GRand_TYPE
/*
 * Boxing implementation for struct _GRand
 */

static void free__GRand(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GRand_data_type = {
   "struct _GRand", free__GRand
};

mrb_value
mruby_box__GRand(mrb_state* mrb, struct _GRand *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GRand_class(mrb), &_GRand_data_type, box));
}

mrb_value
mruby_giftwrap__GRand(mrb_state* mrb, struct _GRand *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GRand_class(mrb), &_GRand_data_type, box));
}

void
mruby_set__GRand_data_ptr(mrb_value obj, struct _GRand *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GRand_data_type);
}

void
mruby_gift__GRand_data_ptr(mrb_value obj, struct _GRand *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GRand_data_type);
}

struct _GRand *
mruby_unbox__GRand(mrb_value boxed) {
  return (struct _GRand *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GRecMutex_boxing */
/* sha: 6340975aa53d53dec1dc4565f3f9f37f43c11a5e210a426254a5dde8e3ed0356 */
#if BIND_GRecMutex_TYPE
/*
 * Boxing implementation for struct _GRecMutex
 */

static void free__GRecMutex(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GRecMutex_data_type = {
   "struct _GRecMutex", free__GRecMutex
};

mrb_value
mruby_box__GRecMutex(mrb_state* mrb, struct _GRecMutex *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GRecMutex_class(mrb), &_GRecMutex_data_type, box));
}

mrb_value
mruby_giftwrap__GRecMutex(mrb_state* mrb, struct _GRecMutex *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GRecMutex_class(mrb), &_GRecMutex_data_type, box));
}

void
mruby_set__GRecMutex_data_ptr(mrb_value obj, struct _GRecMutex *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GRecMutex_data_type);
}

void
mruby_gift__GRecMutex_data_ptr(mrb_value obj, struct _GRecMutex *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GRecMutex_data_type);
}

struct _GRecMutex *
mruby_unbox__GRecMutex(mrb_value boxed) {
  return (struct _GRecMutex *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GRegex_boxing */
/* sha: 36fd819ef7469c7384ebdcf66206433f45e0ae96d21156ca11b1eab9655c221d */
#if BIND_GRegex_TYPE
/*
 * Boxing implementation for struct _GRegex
 */

static void free__GRegex(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      g_regex_unref(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GRegex_data_type = {
   "struct _GRegex", free__GRegex
};

mrb_value
mruby_box__GRegex(mrb_state* mrb, struct _GRegex *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GRegex_class(mrb), &_GRegex_data_type, box));
}

mrb_value
mruby_giftwrap__GRegex(mrb_state* mrb, struct _GRegex *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GRegex_class(mrb), &_GRegex_data_type, box));
}

void
mruby_set__GRegex_data_ptr(mrb_value obj, struct _GRegex *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GRegex_data_type);
}

void
mruby_gift__GRegex_data_ptr(mrb_value obj, struct _GRegex *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GRegex_data_type);
}

struct _GRegex *
mruby_unbox__GRegex(mrb_value boxed) {
  return (struct _GRegex *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSList_boxing */
/* sha: 41e1cc8ec7f4a675cf9079a941892c7183c02f5d1251b58bec4d86f878c94ff7 */
#if BIND_GSList_TYPE
/*
 * Boxing implementation for struct _GSList
 */

static void free__GSList(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GSList_data_type = {
   "struct _GSList", free__GSList
};

mrb_value
mruby_box__GSList(mrb_state* mrb, struct _GSList *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GSList_class(mrb), &_GSList_data_type, box));
}

mrb_value
mruby_giftwrap__GSList(mrb_state* mrb, struct _GSList *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GSList_class(mrb), &_GSList_data_type, box));
}

void
mruby_set__GSList_data_ptr(mrb_value obj, struct _GSList *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GSList_data_type);
}

void
mruby_gift__GSList_data_ptr(mrb_value obj, struct _GSList *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GSList_data_type);
}

struct _GSList *
mruby_unbox__GSList(mrb_value boxed) {
  return (struct _GSList *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScanner_boxing */
/* sha: 7227e0948a3346acc89fc17a64a9a292a647b63d060dffca26678d367764948b */
#if BIND_GScanner_TYPE
/*
 * Boxing implementation for struct _GScanner
 */

static void free__GScanner(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GScanner_data_type = {
   "struct _GScanner", free__GScanner
};

mrb_value
mruby_box__GScanner(mrb_state* mrb, struct _GScanner *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GScanner_class(mrb), &_GScanner_data_type, box));
}

mrb_value
mruby_giftwrap__GScanner(mrb_state* mrb, struct _GScanner *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GScanner_class(mrb), &_GScanner_data_type, box));
}

void
mruby_set__GScanner_data_ptr(mrb_value obj, struct _GScanner *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GScanner_data_type);
}

void
mruby_gift__GScanner_data_ptr(mrb_value obj, struct _GScanner *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GScanner_data_type);
}

struct _GScanner *
mruby_unbox__GScanner(mrb_value boxed) {
  return (struct _GScanner *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GScannerConfig_boxing */
/* sha: a96e1d8ed2293a1ae3fca381d2b8c7012cedc2f54c694ca121b1cb10609f9742 */
#if BIND_GScannerConfig_TYPE
/*
 * Boxing implementation for struct _GScannerConfig
 */

static void free__GScannerConfig(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GScannerConfig_data_type = {
   "struct _GScannerConfig", free__GScannerConfig
};

mrb_value
mruby_box__GScannerConfig(mrb_state* mrb, struct _GScannerConfig *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GScannerConfig_class(mrb), &_GScannerConfig_data_type, box));
}

mrb_value
mruby_giftwrap__GScannerConfig(mrb_state* mrb, struct _GScannerConfig *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GScannerConfig_class(mrb), &_GScannerConfig_data_type, box));
}

void
mruby_set__GScannerConfig_data_ptr(mrb_value obj, struct _GScannerConfig *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GScannerConfig_data_type);
}

void
mruby_gift__GScannerConfig_data_ptr(mrb_value obj, struct _GScannerConfig *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GScannerConfig_data_type);
}

struct _GScannerConfig *
mruby_unbox__GScannerConfig(mrb_value boxed) {
  return (struct _GScannerConfig *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSeekable_boxing */
/* sha: f4c2718c3eb3778188d6b62a2392736b03fd3a59895ce9fc5eb9553782095fbf */
#if BIND_GSeekable_TYPE
/*
 * Boxing implementation for struct _GSeekable
 */

static void free__GSeekable(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      g_object_unref(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GSeekable_data_type = {
   "struct _GSeekable", free__GSeekable
};

mrb_value
mruby_box__GSeekable(mrb_state* mrb, struct _GSeekable *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GSeekable_class(mrb), &_GSeekable_data_type, box));
}

mrb_value
mruby_giftwrap__GSeekable(mrb_state* mrb, struct _GSeekable *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GSeekable_class(mrb), &_GSeekable_data_type, box));
}

void
mruby_set__GSeekable_data_ptr(mrb_value obj, struct _GSeekable *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GSeekable_data_type);
}

void
mruby_gift__GSeekable_data_ptr(mrb_value obj, struct _GSeekable *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GSeekable_data_type);
}

struct _GSeekable *
mruby_unbox__GSeekable(mrb_value boxed) {
  return (struct _GSeekable *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSeekableIface_boxing */
/* sha: 2b83dfc33a0eabd2de23321e4e9be740c7953bcf9dfcb0f9990d85140e7d5843 */
#if BIND_GSeekableIface_TYPE
/*
 * Boxing implementation for struct _GSeekableIface
 */

static void free__GSeekableIface(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GSeekableIface_data_type = {
   "struct _GSeekableIface", free__GSeekableIface
};

mrb_value
mruby_box__GSeekableIface(mrb_state* mrb, struct _GSeekableIface *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GSeekableIface_class(mrb), &_GSeekableIface_data_type, box));
}

mrb_value
mruby_giftwrap__GSeekableIface(mrb_state* mrb, struct _GSeekableIface *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GSeekableIface_class(mrb), &_GSeekableIface_data_type, box));
}

void
mruby_set__GSeekableIface_data_ptr(mrb_value obj, struct _GSeekableIface *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GSeekableIface_data_type);
}

void
mruby_gift__GSeekableIface_data_ptr(mrb_value obj, struct _GSeekableIface *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GSeekableIface_data_type);
}

struct _GSeekableIface *
mruby_unbox__GSeekableIface(mrb_value boxed) {
  return (struct _GSeekableIface *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSequence_boxing */
/* sha: ad2e8902f2891a281dde88288c91611de01b82b436037daa2c35d7ab813ca840 */
#if BIND_GSequence_TYPE
/*
 * Boxing implementation for struct _GSequence
 */

static void free__GSequence(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GSequence_data_type = {
   "struct _GSequence", free__GSequence
};

mrb_value
mruby_box__GSequence(mrb_state* mrb, struct _GSequence *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GSequence_class(mrb), &_GSequence_data_type, box));
}

mrb_value
mruby_giftwrap__GSequence(mrb_state* mrb, struct _GSequence *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GSequence_class(mrb), &_GSequence_data_type, box));
}

void
mruby_set__GSequence_data_ptr(mrb_value obj, struct _GSequence *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GSequence_data_type);
}

void
mruby_gift__GSequence_data_ptr(mrb_value obj, struct _GSequence *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GSequence_data_type);
}

struct _GSequence *
mruby_unbox__GSequence(mrb_value boxed) {
  return (struct _GSequence *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSequenceNode_boxing */
/* sha: d8294019a49404c5e7544808e7698310740e6a91e8a79b432bd60c76a8452705 */
#if BIND_GSequenceNode_TYPE
/*
 * Boxing implementation for struct _GSequenceNode
 */

static void free__GSequenceNode(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GSequenceNode_data_type = {
   "struct _GSequenceNode", free__GSequenceNode
};

mrb_value
mruby_box__GSequenceNode(mrb_state* mrb, struct _GSequenceNode *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GSequenceNode_class(mrb), &_GSequenceNode_data_type, box));
}

mrb_value
mruby_giftwrap__GSequenceNode(mrb_state* mrb, struct _GSequenceNode *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GSequenceNode_class(mrb), &_GSequenceNode_data_type, box));
}

void
mruby_set__GSequenceNode_data_ptr(mrb_value obj, struct _GSequenceNode *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GSequenceNode_data_type);
}

void
mruby_gift__GSequenceNode_data_ptr(mrb_value obj, struct _GSequenceNode *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GSequenceNode_data_type);
}

struct _GSequenceNode *
mruby_unbox__GSequenceNode(mrb_value boxed) {
  return (struct _GSequenceNode *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocket_boxing */
/* sha: fbbb959448bd68b3a28acd13c399f0c228a91471c995ebf7d92d77fa58e86f08 */
#if BIND_GSocket_TYPE
/*
 * Boxing implementation for struct _GSocket
 */

static void free__GSocket(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GSocket_data_type = {
   "struct _GSocket", free__GSocket
};

mrb_value
mruby_box__GSocket(mrb_state* mrb, struct _GSocket *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GSocket_class(mrb), &_GSocket_data_type, box));
}

mrb_value
mruby_giftwrap__GSocket(mrb_state* mrb, struct _GSocket *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GSocket_class(mrb), &_GSocket_data_type, box));
}

void
mruby_set__GSocket_data_ptr(mrb_value obj, struct _GSocket *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GSocket_data_type);
}

void
mruby_gift__GSocket_data_ptr(mrb_value obj, struct _GSocket *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GSocket_data_type);
}

struct _GSocket *
mruby_unbox__GSocket(mrb_value boxed) {
  return (struct _GSocket *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketAddress_boxing */
/* sha: 1a577f7eb58d5ccb3a8a36d601d26f516ff5113ac5e3b84ca6ae55f927e9df26 */
#if BIND_GSocketAddress_TYPE
/*
 * Boxing implementation for struct _GSocketAddress
 */

static void free__GSocketAddress(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      g_object_unref(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GSocketAddress_data_type = {
   "struct _GSocketAddress", free__GSocketAddress
};

mrb_value
mruby_box__GSocketAddress(mrb_state* mrb, struct _GSocketAddress *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GSocketAddress_class(mrb), &_GSocketAddress_data_type, box));
}

mrb_value
mruby_giftwrap__GSocketAddress(mrb_state* mrb, struct _GSocketAddress *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GSocketAddress_class(mrb), &_GSocketAddress_data_type, box));
}

void
mruby_set__GSocketAddress_data_ptr(mrb_value obj, struct _GSocketAddress *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GSocketAddress_data_type);
}

void
mruby_gift__GSocketAddress_data_ptr(mrb_value obj, struct _GSocketAddress *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GSocketAddress_data_type);
}

struct _GSocketAddress *
mruby_unbox__GSocketAddress(mrb_value boxed) {
  return (struct _GSocketAddress *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketAddressClass_boxing */
/* sha: 1584b624c63474cc5c3d345a5e54c0e5a8215cfcec633b915fce35d644ff6317 */
#if BIND_GSocketAddressClass_TYPE
/*
 * Boxing implementation for struct _GSocketAddressClass
 */

static void free__GSocketAddressClass(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GSocketAddressClass_data_type = {
   "struct _GSocketAddressClass", free__GSocketAddressClass
};

mrb_value
mruby_box__GSocketAddressClass(mrb_state* mrb, struct _GSocketAddressClass *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GSocketAddressClass_class(mrb), &_GSocketAddressClass_data_type, box));
}

mrb_value
mruby_giftwrap__GSocketAddressClass(mrb_state* mrb, struct _GSocketAddressClass *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GSocketAddressClass_class(mrb), &_GSocketAddressClass_data_type, box));
}

void
mruby_set__GSocketAddressClass_data_ptr(mrb_value obj, struct _GSocketAddressClass *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GSocketAddressClass_data_type);
}

void
mruby_gift__GSocketAddressClass_data_ptr(mrb_value obj, struct _GSocketAddressClass *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GSocketAddressClass_data_type);
}

struct _GSocketAddressClass *
mruby_unbox__GSocketAddressClass(mrb_value boxed) {
  return (struct _GSocketAddressClass *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketClass_boxing */
/* sha: 599efa4dd4064fe61a03b60be50dd2a91cf27f4ed6a7e1a13f5a969c20b95e38 */
#if BIND_GSocketClass_TYPE
/*
 * Boxing implementation for struct _GSocketClass
 */

static void free__GSocketClass(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GSocketClass_data_type = {
   "struct _GSocketClass", free__GSocketClass
};

mrb_value
mruby_box__GSocketClass(mrb_state* mrb, struct _GSocketClass *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GSocketClass_class(mrb), &_GSocketClass_data_type, box));
}

mrb_value
mruby_giftwrap__GSocketClass(mrb_state* mrb, struct _GSocketClass *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GSocketClass_class(mrb), &_GSocketClass_data_type, box));
}

void
mruby_set__GSocketClass_data_ptr(mrb_value obj, struct _GSocketClass *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GSocketClass_data_type);
}

void
mruby_gift__GSocketClass_data_ptr(mrb_value obj, struct _GSocketClass *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GSocketClass_data_type);
}

struct _GSocketClass *
mruby_unbox__GSocketClass(mrb_value boxed) {
  return (struct _GSocketClass *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSocketPrivate_boxing */
/* sha: 00607e39f7ea7d6b9bfbe910af80de38f3ed5c4036e183f3a067842b95a5ba7b */
#if BIND_GSocketPrivate_TYPE
/*
 * Boxing implementation for struct _GSocketPrivate
 */

static void free__GSocketPrivate(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GSocketPrivate_data_type = {
   "struct _GSocketPrivate", free__GSocketPrivate
};

mrb_value
mruby_box__GSocketPrivate(mrb_state* mrb, struct _GSocketPrivate *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GSocketPrivate_class(mrb), &_GSocketPrivate_data_type, box));
}

mrb_value
mruby_giftwrap__GSocketPrivate(mrb_state* mrb, struct _GSocketPrivate *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GSocketPrivate_class(mrb), &_GSocketPrivate_data_type, box));
}

void
mruby_set__GSocketPrivate_data_ptr(mrb_value obj, struct _GSocketPrivate *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GSocketPrivate_data_type);
}

void
mruby_gift__GSocketPrivate_data_ptr(mrb_value obj, struct _GSocketPrivate *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GSocketPrivate_data_type);
}

struct _GSocketPrivate *
mruby_unbox__GSocketPrivate(mrb_value boxed) {
  return (struct _GSocketPrivate *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSource_boxing */
/* sha: 5921ac907e08b185249b0feedcf805c60f04fe0017090b96af13719e0b7744e2 */
#if BIND_GSource_TYPE
/*
 * Boxing implementation for struct _GSource
 */

static void free__GSource(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GSource_data_type = {
   "struct _GSource", free__GSource
};

mrb_value
mruby_box__GSource(mrb_state* mrb, struct _GSource *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GSource_class(mrb), &_GSource_data_type, box));
}

mrb_value
mruby_giftwrap__GSource(mrb_state* mrb, struct _GSource *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GSource_class(mrb), &_GSource_data_type, box));
}

void
mruby_set__GSource_data_ptr(mrb_value obj, struct _GSource *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GSource_data_type);
}

void
mruby_gift__GSource_data_ptr(mrb_value obj, struct _GSource *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GSource_data_type);
}

struct _GSource *
mruby_unbox__GSource(mrb_value boxed) {
  return (struct _GSource *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSourceCallbackFuncs_boxing */
/* sha: fe38a46f8c67a7b362d8f60f869c970b458c8acc127f3406c788d951027a61c1 */
#if BIND_GSourceCallbackFuncs_TYPE
/*
 * Boxing implementation for struct _GSourceCallbackFuncs
 */

static void free__GSourceCallbackFuncs(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GSourceCallbackFuncs_data_type = {
   "struct _GSourceCallbackFuncs", free__GSourceCallbackFuncs
};

mrb_value
mruby_box__GSourceCallbackFuncs(mrb_state* mrb, struct _GSourceCallbackFuncs *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GSourceCallbackFuncs_class(mrb), &_GSourceCallbackFuncs_data_type, box));
}

mrb_value
mruby_giftwrap__GSourceCallbackFuncs(mrb_state* mrb, struct _GSourceCallbackFuncs *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GSourceCallbackFuncs_class(mrb), &_GSourceCallbackFuncs_data_type, box));
}

void
mruby_set__GSourceCallbackFuncs_data_ptr(mrb_value obj, struct _GSourceCallbackFuncs *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GSourceCallbackFuncs_data_type);
}

void
mruby_gift__GSourceCallbackFuncs_data_ptr(mrb_value obj, struct _GSourceCallbackFuncs *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GSourceCallbackFuncs_data_type);
}

struct _GSourceCallbackFuncs *
mruby_unbox__GSourceCallbackFuncs(mrb_value boxed) {
  return (struct _GSourceCallbackFuncs *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSourceFuncs_boxing */
/* sha: 1c68608648dc114b1337a2f1dfab4aa5d53dfb21614c4c69918dcf083e3b7372 */
#if BIND_GSourceFuncs_TYPE
/*
 * Boxing implementation for struct _GSourceFuncs
 */

static void free__GSourceFuncs(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GSourceFuncs_data_type = {
   "struct _GSourceFuncs", free__GSourceFuncs
};

mrb_value
mruby_box__GSourceFuncs(mrb_state* mrb, struct _GSourceFuncs *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GSourceFuncs_class(mrb), &_GSourceFuncs_data_type, box));
}

mrb_value
mruby_giftwrap__GSourceFuncs(mrb_state* mrb, struct _GSourceFuncs *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GSourceFuncs_class(mrb), &_GSourceFuncs_data_type, box));
}

void
mruby_set__GSourceFuncs_data_ptr(mrb_value obj, struct _GSourceFuncs *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GSourceFuncs_data_type);
}

void
mruby_gift__GSourceFuncs_data_ptr(mrb_value obj, struct _GSourceFuncs *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GSourceFuncs_data_type);
}

struct _GSourceFuncs *
mruby_unbox__GSourceFuncs(mrb_value boxed) {
  return (struct _GSourceFuncs *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSourcePrivate_boxing */
/* sha: fdf01a1c287265e3df53d70e3f757c9bb74e1f6692f4ddf406b15f3437a4c2b4 */
#if BIND_GSourcePrivate_TYPE
/*
 * Boxing implementation for struct _GSourcePrivate
 */

static void free__GSourcePrivate(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GSourcePrivate_data_type = {
   "struct _GSourcePrivate", free__GSourcePrivate
};

mrb_value
mruby_box__GSourcePrivate(mrb_state* mrb, struct _GSourcePrivate *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GSourcePrivate_class(mrb), &_GSourcePrivate_data_type, box));
}

mrb_value
mruby_giftwrap__GSourcePrivate(mrb_state* mrb, struct _GSourcePrivate *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GSourcePrivate_class(mrb), &_GSourcePrivate_data_type, box));
}

void
mruby_set__GSourcePrivate_data_ptr(mrb_value obj, struct _GSourcePrivate *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GSourcePrivate_data_type);
}

void
mruby_gift__GSourcePrivate_data_ptr(mrb_value obj, struct _GSourcePrivate *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GSourcePrivate_data_type);
}

struct _GSourcePrivate *
mruby_unbox__GSourcePrivate(mrb_value boxed) {
  return (struct _GSourcePrivate *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GString_boxing */
/* sha: 3cdc42e0932b82613beb06c36ada7e31359def1954b57b6b1d504fecc082b872 */
#if BIND_GString_TYPE
/*
 * Boxing implementation for struct _GString
 */

static void free__GString(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GString_data_type = {
   "struct _GString", free__GString
};

mrb_value
mruby_box__GString(mrb_state* mrb, struct _GString *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GString_class(mrb), &_GString_data_type, box));
}

mrb_value
mruby_giftwrap__GString(mrb_state* mrb, struct _GString *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GString_class(mrb), &_GString_data_type, box));
}

void
mruby_set__GString_data_ptr(mrb_value obj, struct _GString *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GString_data_type);
}

void
mruby_gift__GString_data_ptr(mrb_value obj, struct _GString *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GString_data_type);
}

struct _GString *
mruby_unbox__GString(mrb_value boxed) {
  return (struct _GString *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GStringChunk_boxing */
/* sha: d635b07802ffab9e34751dd8c8aca34606b09c57e98f730b40c0adaca7469c49 */
#if BIND_GStringChunk_TYPE
/*
 * Boxing implementation for struct _GStringChunk
 */

static void free__GStringChunk(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GStringChunk_data_type = {
   "struct _GStringChunk", free__GStringChunk
};

mrb_value
mruby_box__GStringChunk(mrb_state* mrb, struct _GStringChunk *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GStringChunk_class(mrb), &_GStringChunk_data_type, box));
}

mrb_value
mruby_giftwrap__GStringChunk(mrb_state* mrb, struct _GStringChunk *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GStringChunk_class(mrb), &_GStringChunk_data_type, box));
}

void
mruby_set__GStringChunk_data_ptr(mrb_value obj, struct _GStringChunk *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GStringChunk_data_type);
}

void
mruby_gift__GStringChunk_data_ptr(mrb_value obj, struct _GStringChunk *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GStringChunk_data_type);
}

struct _GStringChunk *
mruby_unbox__GStringChunk(mrb_value boxed) {
  return (struct _GStringChunk *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSubprocess_boxing */
/* sha: 906608d9c23854159a46995f7480d2432883323d04beb3467ab756d7d471f515 */
#if BIND_GSubprocess_TYPE
/*
 * Boxing implementation for struct _GSubprocess
 */

static void free__GSubprocess(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      g_object_unref(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GSubprocess_data_type = {
   "struct _GSubprocess", free__GSubprocess
};

mrb_value
mruby_box__GSubprocess(mrb_state* mrb, struct _GSubprocess *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GSubprocess_class(mrb), &_GSubprocess_data_type, box));
}

mrb_value
mruby_giftwrap__GSubprocess(mrb_state* mrb, struct _GSubprocess *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GSubprocess_class(mrb), &_GSubprocess_data_type, box));
}

void
mruby_set__GSubprocess_data_ptr(mrb_value obj, struct _GSubprocess *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GSubprocess_data_type);
}

void
mruby_gift__GSubprocess_data_ptr(mrb_value obj, struct _GSubprocess *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GSubprocess_data_type);
}

struct _GSubprocess *
mruby_unbox__GSubprocess(mrb_value boxed) {
  return (struct _GSubprocess *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GSubprocessLauncher_boxing */
/* sha: c963f20f6456ded8461571c58b0507e0859335d83ad72767f2df39305868f22c */
#if BIND_GSubprocessLauncher_TYPE
/*
 * Boxing implementation for struct _GSubprocessLauncher
 */

static void free__GSubprocessLauncher(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GSubprocessLauncher_data_type = {
   "struct _GSubprocessLauncher", free__GSubprocessLauncher
};

mrb_value
mruby_box__GSubprocessLauncher(mrb_state* mrb, struct _GSubprocessLauncher *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GSubprocessLauncher_class(mrb), &_GSubprocessLauncher_data_type, box));
}

mrb_value
mruby_giftwrap__GSubprocessLauncher(mrb_state* mrb, struct _GSubprocessLauncher *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GSubprocessLauncher_class(mrb), &_GSubprocessLauncher_data_type, box));
}

void
mruby_set__GSubprocessLauncher_data_ptr(mrb_value obj, struct _GSubprocessLauncher *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GSubprocessLauncher_data_type);
}

void
mruby_gift__GSubprocessLauncher_data_ptr(mrb_value obj, struct _GSubprocessLauncher *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GSubprocessLauncher_data_type);
}

struct _GSubprocessLauncher *
mruby_unbox__GSubprocessLauncher(mrb_value boxed) {
  return (struct _GSubprocessLauncher *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GThread_boxing */
/* sha: 2d6c1bbda8590564bf69cde562e513fb3b0532ebdfe1129226b7d5f70ebd8e2e */
#if BIND_GThread_TYPE
/*
 * Boxing implementation for struct _GThread
 */

static void free__GThread(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GThread_data_type = {
   "struct _GThread", free__GThread
};

mrb_value
mruby_box__GThread(mrb_state* mrb, struct _GThread *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GThread_class(mrb), &_GThread_data_type, box));
}

mrb_value
mruby_giftwrap__GThread(mrb_state* mrb, struct _GThread *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GThread_class(mrb), &_GThread_data_type, box));
}

void
mruby_set__GThread_data_ptr(mrb_value obj, struct _GThread *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GThread_data_type);
}

void
mruby_gift__GThread_data_ptr(mrb_value obj, struct _GThread *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GThread_data_type);
}

struct _GThread *
mruby_unbox__GThread(mrb_value boxed) {
  return (struct _GThread *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GThreadPool_boxing */
/* sha: 20dab2b63e672d645b93fbcbb5138a0a290b11dc18a0aaef4a8435e0d9d756db */
#if BIND_GThreadPool_TYPE
/*
 * Boxing implementation for struct _GThreadPool
 */

static void free__GThreadPool(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GThreadPool_data_type = {
   "struct _GThreadPool", free__GThreadPool
};

mrb_value
mruby_box__GThreadPool(mrb_state* mrb, struct _GThreadPool *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GThreadPool_class(mrb), &_GThreadPool_data_type, box));
}

mrb_value
mruby_giftwrap__GThreadPool(mrb_state* mrb, struct _GThreadPool *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GThreadPool_class(mrb), &_GThreadPool_data_type, box));
}

void
mruby_set__GThreadPool_data_ptr(mrb_value obj, struct _GThreadPool *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GThreadPool_data_type);
}

void
mruby_gift__GThreadPool_data_ptr(mrb_value obj, struct _GThreadPool *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GThreadPool_data_type);
}

struct _GThreadPool *
mruby_unbox__GThreadPool(mrb_value boxed) {
  return (struct _GThreadPool *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTimeVal_boxing */
/* sha: e407643e39f704c443861f200d45826545ef5bdd0b4a9e854cc384856678fa38 */
#if BIND_GTimeVal_TYPE
/*
 * Boxing implementation for struct _GTimeVal
 */

static void free__GTimeVal(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GTimeVal_data_type = {
   "struct _GTimeVal", free__GTimeVal
};

mrb_value
mruby_box__GTimeVal(mrb_state* mrb, struct _GTimeVal *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GTimeVal_class(mrb), &_GTimeVal_data_type, box));
}

mrb_value
mruby_giftwrap__GTimeVal(mrb_state* mrb, struct _GTimeVal *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GTimeVal_class(mrb), &_GTimeVal_data_type, box));
}

void
mruby_set__GTimeVal_data_ptr(mrb_value obj, struct _GTimeVal *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GTimeVal_data_type);
}

void
mruby_gift__GTimeVal_data_ptr(mrb_value obj, struct _GTimeVal *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GTimeVal_data_type);
}

struct _GTimeVal *
mruby_unbox__GTimeVal(mrb_value boxed) {
  return (struct _GTimeVal *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTimeZone_boxing */
/* sha: 5f78468b92f6a455ded224268e9cfbea5883b361bd2650fb4cebf7cf59ac34c0 */
#if BIND_GTimeZone_TYPE
/*
 * Boxing implementation for struct _GTimeZone
 */

static void free__GTimeZone(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GTimeZone_data_type = {
   "struct _GTimeZone", free__GTimeZone
};

mrb_value
mruby_box__GTimeZone(mrb_state* mrb, struct _GTimeZone *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GTimeZone_class(mrb), &_GTimeZone_data_type, box));
}

mrb_value
mruby_giftwrap__GTimeZone(mrb_state* mrb, struct _GTimeZone *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GTimeZone_class(mrb), &_GTimeZone_data_type, box));
}

void
mruby_set__GTimeZone_data_ptr(mrb_value obj, struct _GTimeZone *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GTimeZone_data_type);
}

void
mruby_gift__GTimeZone_data_ptr(mrb_value obj, struct _GTimeZone *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GTimeZone_data_type);
}

struct _GTimeZone *
mruby_unbox__GTimeZone(mrb_value boxed) {
  return (struct _GTimeZone *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTimer_boxing */
/* sha: 371e3b09408c341e7c9eadebddadd9618c8269bf0b02a435855873941649d7af */
#if BIND_GTimer_TYPE
/*
 * Boxing implementation for struct _GTimer
 */

static void free__GTimer(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GTimer_data_type = {
   "struct _GTimer", free__GTimer
};

mrb_value
mruby_box__GTimer(mrb_state* mrb, struct _GTimer *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GTimer_class(mrb), &_GTimer_data_type, box));
}

mrb_value
mruby_giftwrap__GTimer(mrb_state* mrb, struct _GTimer *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GTimer_class(mrb), &_GTimer_data_type, box));
}

void
mruby_set__GTimer_data_ptr(mrb_value obj, struct _GTimer *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GTimer_data_type);
}

void
mruby_gift__GTimer_data_ptr(mrb_value obj, struct _GTimer *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GTimer_data_type);
}

struct _GTimer *
mruby_unbox__GTimer(mrb_value boxed) {
  return (struct _GTimer *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTrashStack_boxing */
/* sha: 1245c6fbc2414f6970cf230c56403f042a6e8571a3d971667ed7d1543e96d7d0 */
#if BIND_GTrashStack_TYPE
/*
 * Boxing implementation for struct _GTrashStack
 */

static void free__GTrashStack(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GTrashStack_data_type = {
   "struct _GTrashStack", free__GTrashStack
};

mrb_value
mruby_box__GTrashStack(mrb_state* mrb, struct _GTrashStack *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GTrashStack_class(mrb), &_GTrashStack_data_type, box));
}

mrb_value
mruby_giftwrap__GTrashStack(mrb_state* mrb, struct _GTrashStack *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GTrashStack_class(mrb), &_GTrashStack_data_type, box));
}

void
mruby_set__GTrashStack_data_ptr(mrb_value obj, struct _GTrashStack *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GTrashStack_data_type);
}

void
mruby_gift__GTrashStack_data_ptr(mrb_value obj, struct _GTrashStack *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GTrashStack_data_type);
}

struct _GTrashStack *
mruby_unbox__GTrashStack(mrb_value boxed) {
  return (struct _GTrashStack *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GTree_boxing */
/* sha: e8927922388c570005907531acb16110834057240ed3863c1c8b0219c8aca307 */
#if BIND_GTree_TYPE
/*
 * Boxing implementation for struct _GTree
 */

static void free__GTree(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GTree_data_type = {
   "struct _GTree", free__GTree
};

mrb_value
mruby_box__GTree(mrb_state* mrb, struct _GTree *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GTree_class(mrb), &_GTree_data_type, box));
}

mrb_value
mruby_giftwrap__GTree(mrb_state* mrb, struct _GTree *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GTree_class(mrb), &_GTree_data_type, box));
}

void
mruby_set__GTree_data_ptr(mrb_value obj, struct _GTree *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GTree_data_type);
}

void
mruby_gift__GTree_data_ptr(mrb_value obj, struct _GTree *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GTree_data_type);
}

struct _GTree *
mruby_unbox__GTree(mrb_value boxed) {
  return (struct _GTree *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GVariant_boxing */
/* sha: b6623f37d8364bccbaa4b2b9b508b617e178384e38720ec0a7ff8849c1fb9df3 */
#if BIND_GVariant_TYPE
/*
 * Boxing implementation for struct _GVariant
 */

static void free__GVariant(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GVariant_data_type = {
   "struct _GVariant", free__GVariant
};

mrb_value
mruby_box__GVariant(mrb_state* mrb, struct _GVariant *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GVariant_class(mrb), &_GVariant_data_type, box));
}

mrb_value
mruby_giftwrap__GVariant(mrb_state* mrb, struct _GVariant *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GVariant_class(mrb), &_GVariant_data_type, box));
}

void
mruby_set__GVariant_data_ptr(mrb_value obj, struct _GVariant *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GVariant_data_type);
}

void
mruby_gift__GVariant_data_ptr(mrb_value obj, struct _GVariant *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GVariant_data_type);
}

struct _GVariant *
mruby_unbox__GVariant(mrb_value boxed) {
  return (struct _GVariant *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GVariantBuilder_boxing */
/* sha: 7c83b8e63da61a80b0ce9f4d52ee1f49f064b58c2b3c8763ba0c1f4ea3f99449 */
#if BIND_GVariantBuilder_TYPE
/*
 * Boxing implementation for struct _GVariantBuilder
 */

static void free__GVariantBuilder(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GVariantBuilder_data_type = {
   "struct _GVariantBuilder", free__GVariantBuilder
};

mrb_value
mruby_box__GVariantBuilder(mrb_state* mrb, struct _GVariantBuilder *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GVariantBuilder_class(mrb), &_GVariantBuilder_data_type, box));
}

mrb_value
mruby_giftwrap__GVariantBuilder(mrb_state* mrb, struct _GVariantBuilder *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GVariantBuilder_class(mrb), &_GVariantBuilder_data_type, box));
}

void
mruby_set__GVariantBuilder_data_ptr(mrb_value obj, struct _GVariantBuilder *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GVariantBuilder_data_type);
}

void
mruby_gift__GVariantBuilder_data_ptr(mrb_value obj, struct _GVariantBuilder *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GVariantBuilder_data_type);
}

struct _GVariantBuilder *
mruby_unbox__GVariantBuilder(mrb_value boxed) {
  return (struct _GVariantBuilder *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GVariantDict_boxing */
/* sha: c64b88db168399fb381040c25700ca2a60d5b52d6393d3023be0cc4596716e10 */
#if BIND_GVariantDict_TYPE
/*
 * Boxing implementation for struct _GVariantDict
 */

static void free__GVariantDict(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GVariantDict_data_type = {
   "struct _GVariantDict", free__GVariantDict
};

mrb_value
mruby_box__GVariantDict(mrb_state* mrb, struct _GVariantDict *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GVariantDict_class(mrb), &_GVariantDict_data_type, box));
}

mrb_value
mruby_giftwrap__GVariantDict(mrb_state* mrb, struct _GVariantDict *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GVariantDict_class(mrb), &_GVariantDict_data_type, box));
}

void
mruby_set__GVariantDict_data_ptr(mrb_value obj, struct _GVariantDict *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GVariantDict_data_type);
}

void
mruby_gift__GVariantDict_data_ptr(mrb_value obj, struct _GVariantDict *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GVariantDict_data_type);
}

struct _GVariantDict *
mruby_unbox__GVariantDict(mrb_value boxed) {
  return (struct _GVariantDict *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GVariantIter_boxing */
/* sha: aea3c3c055d8575bfe07ad0d0d7bc515f92862519389b698674fa8ba18a9c468 */
#if BIND_GVariantIter_TYPE
/*
 * Boxing implementation for struct _GVariantIter
 */

static void free__GVariantIter(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GVariantIter_data_type = {
   "struct _GVariantIter", free__GVariantIter
};

mrb_value
mruby_box__GVariantIter(mrb_state* mrb, struct _GVariantIter *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GVariantIter_class(mrb), &_GVariantIter_data_type, box));
}

mrb_value
mruby_giftwrap__GVariantIter(mrb_state* mrb, struct _GVariantIter *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GVariantIter_class(mrb), &_GVariantIter_data_type, box));
}

void
mruby_set__GVariantIter_data_ptr(mrb_value obj, struct _GVariantIter *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GVariantIter_data_type);
}

void
mruby_gift__GVariantIter_data_ptr(mrb_value obj, struct _GVariantIter *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GVariantIter_data_type);
}

struct _GVariantIter *
mruby_unbox__GVariantIter(mrb_value boxed) {
  return (struct _GVariantIter *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: GVariantType_boxing */
/* sha: 8aa7aaf44e5a4e798398116039f26bf7bb681e448dbc64ca821fdc5b169f32e9 */
#if BIND_GVariantType_TYPE
/*
 * Boxing implementation for struct _GVariantType
 */

static void free__GVariantType(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GVariantType_data_type = {
   "struct _GVariantType", free__GVariantType
};

mrb_value
mruby_box__GVariantType(mrb_state* mrb, struct _GVariantType *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GVariantType_class(mrb), &_GVariantType_data_type, box));
}

mrb_value
mruby_giftwrap__GVariantType(mrb_state* mrb, struct _GVariantType *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GVariantType_class(mrb), &_GVariantType_data_type, box));
}

void
mruby_set__GVariantType_data_ptr(mrb_value obj, struct _GVariantType *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GVariantType_data_type);
}

void
mruby_gift__GVariantType_data_ptr(mrb_value obj, struct _GVariantType *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GVariantType_data_type);
}

struct _GVariantType *
mruby_unbox__GVariantType(mrb_value boxed) {
  return (struct _GVariantType *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

