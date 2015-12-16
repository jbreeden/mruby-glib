/*
 * TODO: Update includes
 */
 #include "mruby_GLib.h"


#if BIND_GBSearchConfig_TYPE
/*
 * Boxing implementation for GBSearchConfig
 */

static void free_GBSearchConfig(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type GBSearchConfig_data_type = {
   "GBSearchConfig", free_GBSearchConfig
};

mrb_value
mruby_box_GBSearchConfig(mrb_state* mrb, GBSearchConfig *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GBSearchConfig_class(mrb), &GBSearchConfig_data_type, box));
}

mrb_value
mruby_giftwrap_GBSearchConfig(mrb_state* mrb, GBSearchConfig *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GBSearchConfig_class(mrb), &GBSearchConfig_data_type, box));
}

void
mruby_set_GBSearchConfig_data_ptr(mrb_value obj, GBSearchConfig *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &GBSearchConfig_data_type);
}

void
mruby_gift_GBSearchConfig_data_ptr(mrb_value obj, GBSearchConfig *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &GBSearchConfig_data_type);
}

GBSearchConfig *
mruby_unbox_GBSearchConfig(mrb_value boxed) {
  return (GBSearchConfig *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_GLibPrivateVTable_TYPE
/*
 * Boxing implementation for GLibPrivateVTable
 */

static void free_GLibPrivateVTable(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type GLibPrivateVTable_data_type = {
   "GLibPrivateVTable", free_GLibPrivateVTable
};

mrb_value
mruby_box_GLibPrivateVTable(mrb_state* mrb, GLibPrivateVTable *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GLibPrivateVTable_class(mrb), &GLibPrivateVTable_data_type, box));
}

mrb_value
mruby_giftwrap_GLibPrivateVTable(mrb_state* mrb, GLibPrivateVTable *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GLibPrivateVTable_class(mrb), &GLibPrivateVTable_data_type, box));
}

void
mruby_set_GLibPrivateVTable_data_ptr(mrb_value obj, GLibPrivateVTable *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &GLibPrivateVTable_data_type);
}

void
mruby_gift_GLibPrivateVTable_data_ptr(mrb_value obj, GLibPrivateVTable *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &GLibPrivateVTable_data_type);
}

GLibPrivateVTable *
mruby_unbox_GLibPrivateVTable(mrb_value boxed) {
  return (GLibPrivateVTable *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_GTestConfig_TYPE
/*
 * Boxing implementation for GTestConfig
 */

static void free_GTestConfig(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GTestLogBuffer_TYPE
/*
 * Boxing implementation for GTestLogBuffer
 */

static void free_GTestLogBuffer(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GTestLogMsg_TYPE
/*
 * Boxing implementation for GTestLogMsg
 */

static void free_GTestLogMsg(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GVariantMemberInfo_TYPE
/*
 * Boxing implementation for GVariantMemberInfo
 */

static void free_GVariantMemberInfo(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type GVariantMemberInfo_data_type = {
   "GVariantMemberInfo", free_GVariantMemberInfo
};

mrb_value
mruby_box_GVariantMemberInfo(mrb_state* mrb, GVariantMemberInfo *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GVariantMemberInfo_class(mrb), &GVariantMemberInfo_data_type, box));
}

mrb_value
mruby_giftwrap_GVariantMemberInfo(mrb_state* mrb, GVariantMemberInfo *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GVariantMemberInfo_class(mrb), &GVariantMemberInfo_data_type, box));
}

void
mruby_set_GVariantMemberInfo_data_ptr(mrb_value obj, GVariantMemberInfo *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &GVariantMemberInfo_data_type);
}

void
mruby_gift_GVariantMemberInfo_data_ptr(mrb_value obj, GVariantMemberInfo *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &GVariantMemberInfo_data_type);
}

GVariantMemberInfo *
mruby_unbox_GVariantMemberInfo(mrb_value boxed) {
  return (GVariantMemberInfo *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_GVariantSerialised_TYPE
/*
 * Boxing implementation for GVariantSerialised
 */

static void free_GVariantSerialised(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type GVariantSerialised_data_type = {
   "GVariantSerialised", free_GVariantSerialised
};

mrb_value
mruby_box_GVariantSerialised(mrb_state* mrb, GVariantSerialised *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GVariantSerialised_class(mrb), &GVariantSerialised_data_type, box));
}

mrb_value
mruby_giftwrap_GVariantSerialised(mrb_state* mrb, GVariantSerialised *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GVariantSerialised_class(mrb), &GVariantSerialised_data_type, box));
}

void
mruby_set_GVariantSerialised_data_ptr(mrb_value obj, GVariantSerialised *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &GVariantSerialised_data_type);
}

void
mruby_gift_GVariantSerialised_data_ptr(mrb_value obj, GVariantSerialised *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &GVariantSerialised_data_type);
}

GVariantSerialised *
mruby_unbox_GVariantSerialised(mrb_value boxed) {
  return (GVariantSerialised *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_Argument_TYPE
/*
 * Boxing implementation for argument
 */

static void free_argument(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type argument_data_type = {
   "argument", free_argument
};

mrb_value
mruby_box_argument(mrb_state* mrb, argument *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Argument_class(mrb), &argument_data_type, box));
}

mrb_value
mruby_giftwrap_argument(mrb_state* mrb, argument *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Argument_class(mrb), &argument_data_type, box));
}

void
mruby_set_argument_data_ptr(mrb_value obj, argument *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &argument_data_type);
}

void
mruby_gift_argument_data_ptr(mrb_value obj, argument *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &argument_data_type);
}

argument *
mruby_unbox_argument(mrb_value boxed) {
  return (argument *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_Arguments_TYPE
/*
 * Boxing implementation for arguments
 */

static void free_arguments(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type arguments_data_type = {
   "arguments", free_arguments
};

mrb_value
mruby_box_arguments(mrb_state* mrb, arguments *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Arguments_class(mrb), &arguments_data_type, box));
}

mrb_value
mruby_giftwrap_arguments(mrb_state* mrb, arguments *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Arguments_class(mrb), &arguments_data_type, box));
}

void
mruby_set_arguments_data_ptr(mrb_value obj, arguments *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &arguments_data_type);
}

void
mruby_gift_arguments_data_ptr(mrb_value obj, arguments *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &arguments_data_type);
}

arguments *
mruby_unbox_arguments(mrb_value boxed) {
  return (arguments *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_CharDirective_TYPE
/*
 * Boxing implementation for char_directive
 */

static void free_char_directive(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type char_directive_data_type = {
   "char_directive", free_char_directive
};

mrb_value
mruby_box_char_directive(mrb_state* mrb, char_directive *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, CharDirective_class(mrb), &char_directive_data_type, box));
}

mrb_value
mruby_giftwrap_char_directive(mrb_state* mrb, char_directive *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, CharDirective_class(mrb), &char_directive_data_type, box));
}

void
mruby_set_char_directive_data_ptr(mrb_value obj, char_directive *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &char_directive_data_type);
}

void
mruby_gift_char_directive_data_ptr(mrb_value obj, char_directive *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &char_directive_data_type);
}

char_directive *
mruby_unbox_char_directive(mrb_value boxed) {
  return (char_directive *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_CharDirectives_TYPE
/*
 * Boxing implementation for char_directives
 */

static void free_char_directives(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type char_directives_data_type = {
   "char_directives", free_char_directives
};

mrb_value
mruby_box_char_directives(mrb_state* mrb, char_directives *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, CharDirectives_class(mrb), &char_directives_data_type, box));
}

mrb_value
mruby_giftwrap_char_directives(mrb_state* mrb, char_directives *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, CharDirectives_class(mrb), &char_directives_data_type, box));
}

void
mruby_set_char_directives_data_ptr(mrb_value obj, char_directives *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &char_directives_data_type);
}

void
mruby_gift_char_directives_data_ptr(mrb_value obj, char_directives *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &char_directives_data_type);
}

char_directives *
mruby_unbox_char_directives(mrb_value boxed) {
  return (char_directives *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_Decomposition_TYPE
/*
 * Boxing implementation for decomposition
 */

static void free_decomposition(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type decomposition_data_type = {
   "decomposition", free_decomposition
};

mrb_value
mruby_box_decomposition(mrb_state* mrb, decomposition *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Decomposition_class(mrb), &decomposition_data_type, box));
}

mrb_value
mruby_giftwrap_decomposition(mrb_state* mrb, decomposition *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Decomposition_class(mrb), &decomposition_data_type, box));
}

void
mruby_set_decomposition_data_ptr(mrb_value obj, decomposition *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &decomposition_data_type);
}

void
mruby_gift_decomposition_data_ptr(mrb_value obj, decomposition *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &decomposition_data_type);
}

decomposition *
mruby_unbox_decomposition(mrb_value boxed) {
  return (decomposition *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_DecompositionStep_TYPE
/*
 * Boxing implementation for decomposition_step
 */

static void free_decomposition_step(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type decomposition_step_data_type = {
   "decomposition_step", free_decomposition_step
};

mrb_value
mruby_box_decomposition_step(mrb_state* mrb, decomposition_step *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, DecompositionStep_class(mrb), &decomposition_step_data_type, box));
}

mrb_value
mruby_giftwrap_decomposition_step(mrb_state* mrb, decomposition_step *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, DecompositionStep_class(mrb), &decomposition_step_data_type, box));
}

void
mruby_set_decomposition_step_data_ptr(mrb_value obj, decomposition_step *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &decomposition_step_data_type);
}

void
mruby_gift_decomposition_step_data_ptr(mrb_value obj, decomposition_step *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &decomposition_step_data_type);
}

decomposition_step *
mruby_unbox_decomposition_step(mrb_value boxed) {
  return (decomposition_step *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_GTestCase_TYPE
/*
 * Boxing implementation for struct GTestCase
 */

static void free_GTestCase(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GTestSuite_TYPE
/*
 * Boxing implementation for struct GTestSuite
 */

static void free_GTestSuite(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_Interval_TYPE
/*
 * Boxing implementation for struct Interval
 */

static void free_Interval(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type Interval_data_type = {
   "struct Interval", free_Interval
};

mrb_value
mruby_box_Interval(mrb_state* mrb, struct Interval *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Interval_class(mrb), &Interval_data_type, box));
}

mrb_value
mruby_giftwrap_Interval(mrb_state* mrb, struct Interval *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Interval_class(mrb), &Interval_data_type, box));
}

void
mruby_set_Interval_data_ptr(mrb_value obj, struct Interval *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &Interval_data_type);
}

void
mruby_gift_Interval_data_ptr(mrb_value obj, struct Interval *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &Interval_data_type);
}

struct Interval *
mruby_unbox_Interval(mrb_value boxed) {
  return (struct Interval *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_GArray_TYPE
/*
 * Boxing implementation for struct _GArray
 */

static void free__GArray(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GAsyncQueue_TYPE
/*
 * Boxing implementation for struct _GAsyncQueue
 */

static void free__GAsyncQueue(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GBookmarkFile_TYPE
/*
 * Boxing implementation for struct _GBookmarkFile
 */

static void free__GBookmarkFile(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GByteArray_TYPE
/*
 * Boxing implementation for struct _GByteArray
 */

static void free__GByteArray(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GBytes_TYPE
/*
 * Boxing implementation for struct _GBytes
 */

static void free__GBytes(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GChecksum_TYPE
/*
 * Boxing implementation for struct _GChecksum
 */

static void free__GChecksum(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GCond_TYPE
/*
 * Boxing implementation for struct _GCond
 */

static void free__GCond(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GData_TYPE
/*
 * Boxing implementation for struct _GData
 */

static void free__GData(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GDate_TYPE
/*
 * Boxing implementation for struct _GDate
 */

static void free__GDate(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GDateTime_TYPE
/*
 * Boxing implementation for struct _GDateTime
 */

static void free__GDateTime(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GDebugKey_TYPE
/*
 * Boxing implementation for struct _GDebugKey
 */

static void free__GDebugKey(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GDir_TYPE
/*
 * Boxing implementation for struct _GDir
 */

static void free__GDir(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GError_TYPE
/*
 * Boxing implementation for struct _GError
 */

static void free__GError(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
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

#if BIND_GHashTable_TYPE
/*
 * Boxing implementation for struct _GHashTable
 */

static void free__GHashTable(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GHashTableIter_TYPE
/*
 * Boxing implementation for struct _GHashTableIter
 */

static void free__GHashTableIter(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GHmac_TYPE
/*
 * Boxing implementation for struct _GHmac
 */

static void free__GHmac(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GHook_TYPE
/*
 * Boxing implementation for struct _GHook
 */

static void free__GHook(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GHookList_TYPE
/*
 * Boxing implementation for struct _GHookList
 */

static void free__GHookList(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GIConv_TYPE
/*
 * Boxing implementation for struct _GIConv
 */

static void free__GIConv(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GIOChannel_TYPE
/*
 * Boxing implementation for struct _GIOChannel
 */

static void free__GIOChannel(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
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

#if BIND_GIOFuncs_TYPE
/*
 * Boxing implementation for struct _GIOFuncs
 */

static void free__GIOFuncs(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GKeyFile_TYPE
/*
 * Boxing implementation for struct _GKeyFile
 */

static void free__GKeyFile(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GList_TYPE
/*
 * Boxing implementation for struct _GList
 */

static void free__GList(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GMainContext_TYPE
/*
 * Boxing implementation for struct _GMainContext
 */

static void free__GMainContext(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GMainLoop_TYPE
/*
 * Boxing implementation for struct _GMainLoop
 */

static void free__GMainLoop(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GMappedFile_TYPE
/*
 * Boxing implementation for struct _GMappedFile
 */

static void free__GMappedFile(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GMarkupParseContext_TYPE
/*
 * Boxing implementation for struct _GMarkupParseContext
 */

static void free__GMarkupParseContext(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GMarkupParser_TYPE
/*
 * Boxing implementation for struct _GMarkupParser
 */

static void free__GMarkupParser(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GMatchInfo_TYPE
/*
 * Boxing implementation for struct _GMatchInfo
 */

static void free__GMatchInfo(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
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

#if BIND_GMemVTable_TYPE
/*
 * Boxing implementation for struct _GMemVTable
 */

static void free__GMemVTable(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GNode_TYPE
/*
 * Boxing implementation for struct _GNode
 */

static void free__GNode(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GOnce_TYPE
/*
 * Boxing implementation for struct _GOnce
 */

static void free__GOnce(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GOptionContext_TYPE
/*
 * Boxing implementation for struct _GOptionContext
 */

static void free__GOptionContext(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GOptionEntry_TYPE
/*
 * Boxing implementation for struct _GOptionEntry
 */

static void free__GOptionEntry(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GOptionGroup_TYPE
/*
 * Boxing implementation for struct _GOptionGroup
 */

static void free__GOptionGroup(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GPatternSpec_TYPE
/*
 * Boxing implementation for struct _GPatternSpec
 */

static void free__GPatternSpec(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GPollFD_TYPE
/*
 * Boxing implementation for struct _GPollFD
 */

static void free__GPollFD(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GPrivate_TYPE
/*
 * Boxing implementation for struct _GPrivate
 */

static void free__GPrivate(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GPtrArray_TYPE
/*
 * Boxing implementation for struct _GPtrArray
 */

static void free__GPtrArray(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GQueue_TYPE
/*
 * Boxing implementation for struct _GQueue
 */

static void free__GQueue(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GRWLock_TYPE
/*
 * Boxing implementation for struct _GRWLock
 */

static void free__GRWLock(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GRand_TYPE
/*
 * Boxing implementation for struct _GRand
 */

static void free__GRand(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GRealThread_TYPE
/*
 * Boxing implementation for struct _GRealThread
 */

static void free__GRealThread(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GRealThread_data_type = {
   "struct _GRealThread", free__GRealThread
};

mrb_value
mruby_box__GRealThread(mrb_state* mrb, struct _GRealThread *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GRealThread_class(mrb), &_GRealThread_data_type, box));
}

mrb_value
mruby_giftwrap__GRealThread(mrb_state* mrb, struct _GRealThread *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GRealThread_class(mrb), &_GRealThread_data_type, box));
}

void
mruby_set__GRealThread_data_ptr(mrb_value obj, struct _GRealThread *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GRealThread_data_type);
}

void
mruby_gift__GRealThread_data_ptr(mrb_value obj, struct _GRealThread *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GRealThread_data_type);
}

struct _GRealThread *
mruby_unbox__GRealThread(mrb_value boxed) {
  return (struct _GRealThread *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_GRecMutex_TYPE
/*
 * Boxing implementation for struct _GRecMutex
 */

static void free__GRecMutex(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GRegex_TYPE
/*
 * Boxing implementation for struct _GRegex
 */

static void free__GRegex(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
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

#if BIND_GSList_TYPE
/*
 * Boxing implementation for struct _GSList
 */

static void free__GSList(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GScanner_TYPE
/*
 * Boxing implementation for struct _GScanner
 */

static void free__GScanner(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GScannerConfig_TYPE
/*
 * Boxing implementation for struct _GScannerConfig
 */

static void free__GScannerConfig(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GSequence_TYPE
/*
 * Boxing implementation for struct _GSequence
 */

static void free__GSequence(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GSequenceNode_TYPE
/*
 * Boxing implementation for struct _GSequenceNode
 */

static void free__GSequenceNode(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GSource_TYPE
/*
 * Boxing implementation for struct _GSource
 */

static void free__GSource(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GSourceCallbackFuncs_TYPE
/*
 * Boxing implementation for struct _GSourceCallbackFuncs
 */

static void free__GSourceCallbackFuncs(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GSourceFuncs_TYPE
/*
 * Boxing implementation for struct _GSourceFuncs
 */

static void free__GSourceFuncs(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GSourcePrivate_TYPE
/*
 * Boxing implementation for struct _GSourcePrivate
 */

static void free__GSourcePrivate(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GString_TYPE
/*
 * Boxing implementation for struct _GString
 */

static void free__GString(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GStringChunk_TYPE
/*
 * Boxing implementation for struct _GStringChunk
 */

static void free__GStringChunk(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GThread_TYPE
/*
 * Boxing implementation for struct _GThread
 */

static void free__GThread(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GThreadPool_TYPE
/*
 * Boxing implementation for struct _GThreadPool
 */

static void free__GThreadPool(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GTimeVal_TYPE
/*
 * Boxing implementation for struct _GTimeVal
 */

static void free__GTimeVal(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GTimeZone_TYPE
/*
 * Boxing implementation for struct _GTimeZone
 */

static void free__GTimeZone(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GTimer_TYPE
/*
 * Boxing implementation for struct _GTimer
 */

static void free__GTimer(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GTrashStack_TYPE
/*
 * Boxing implementation for struct _GTrashStack
 */

static void free__GTrashStack(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GTree_TYPE
/*
 * Boxing implementation for struct _GTree
 */

static void free__GTree(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GVariant_TYPE
/*
 * Boxing implementation for struct _GVariant
 */

static void free__GVariant(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GVariantBuilder_TYPE
/*
 * Boxing implementation for struct _GVariantBuilder
 */

static void free__GVariantBuilder(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GVariantDict_TYPE
/*
 * Boxing implementation for struct _GVariantDict
 */

static void free__GVariantDict(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GVariantIter_TYPE
/*
 * Boxing implementation for struct _GVariantIter
 */

static void free__GVariantIter(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GVariantType_TYPE
/*
 * Boxing implementation for struct _GVariantType
 */

static void free__GVariantType(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
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

#if BIND_GVariantTypeInfo_TYPE
/*
 * Boxing implementation for struct _GVariantTypeInfo
 */

static void free__GVariantTypeInfo(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GVariantTypeInfo_data_type = {
   "struct _GVariantTypeInfo", free__GVariantTypeInfo
};

mrb_value
mruby_box__GVariantTypeInfo(mrb_state* mrb, struct _GVariantTypeInfo *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GVariantTypeInfo_class(mrb), &_GVariantTypeInfo_data_type, box));
}

mrb_value
mruby_giftwrap__GVariantTypeInfo(mrb_state* mrb, struct _GVariantTypeInfo *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GVariantTypeInfo_class(mrb), &_GVariantTypeInfo_data_type, box));
}

void
mruby_set__GVariantTypeInfo_data_ptr(mrb_value obj, struct _GVariantTypeInfo *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GVariantTypeInfo_data_type);
}

void
mruby_gift__GVariantTypeInfo_data_ptr(mrb_value obj, struct _GVariantTypeInfo *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GVariantTypeInfo_data_type);
}

struct _GVariantTypeInfo *
mruby_unbox__GVariantTypeInfo(mrb_value boxed) {
  return (struct _GVariantTypeInfo *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_GWakeup_TYPE
/*
 * Boxing implementation for struct _GWakeup
 */

static void free__GWakeup(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type _GWakeup_data_type = {
   "struct _GWakeup", free__GWakeup
};

mrb_value
mruby_box__GWakeup(mrb_state* mrb, struct _GWakeup *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, GWakeup_class(mrb), &_GWakeup_data_type, box));
}

mrb_value
mruby_giftwrap__GWakeup(mrb_state* mrb, struct _GWakeup *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, GWakeup_class(mrb), &_GWakeup_data_type, box));
}

void
mruby_set__GWakeup_data_ptr(mrb_value obj, struct _GWakeup *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GWakeup_data_type);
}

void
mruby_gift__GWakeup_data_ptr(mrb_value obj, struct _GWakeup *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_GWakeup_data_type);
}

struct _GWakeup *
mruby_unbox__GWakeup(mrb_value boxed) {
  return (struct _GWakeup *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_LocaleEntry_TYPE
/*
 * Boxing implementation for struct locale_entry
 */

static void free_locale_entry(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type locale_entry_data_type = {
   "struct locale_entry", free_locale_entry
};

mrb_value
mruby_box_locale_entry(mrb_state* mrb, struct locale_entry *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, LocaleEntry_class(mrb), &locale_entry_data_type, box));
}

mrb_value
mruby_giftwrap_locale_entry(mrb_state* mrb, struct locale_entry *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, LocaleEntry_class(mrb), &locale_entry_data_type, box));
}

void
mruby_set_locale_entry_data_ptr(mrb_value obj, struct locale_entry *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &locale_entry_data_type);
}

void
mruby_gift_locale_entry_data_ptr(mrb_value obj, struct locale_entry *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &locale_entry_data_type);
}

struct locale_entry *
mruby_unbox_locale_entry(mrb_value boxed) {
  return (struct locale_entry *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_MappingEntry_TYPE
/*
 * Boxing implementation for struct mapping_entry
 */

static void free_mapping_entry(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type mapping_entry_data_type = {
   "struct mapping_entry", free_mapping_entry
};

mrb_value
mruby_box_mapping_entry(mrb_state* mrb, struct mapping_entry *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, MappingEntry_class(mrb), &mapping_entry_data_type, box));
}

mrb_value
mruby_giftwrap_mapping_entry(mrb_state* mrb, struct mapping_entry *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, MappingEntry_class(mrb), &mapping_entry_data_type, box));
}

void
mruby_set_mapping_entry_data_ptr(mrb_value obj, struct mapping_entry *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &mapping_entry_data_type);
}

void
mruby_gift_mapping_entry_data_ptr(mrb_value obj, struct mapping_entry *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &mapping_entry_data_type);
}

struct mapping_entry *
mruby_unbox_mapping_entry(mrb_value boxed) {
  return (struct mapping_entry *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_MappingRange_TYPE
/*
 * Boxing implementation for struct mapping_range
 */

static void free_mapping_range(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type mapping_range_data_type = {
   "struct mapping_range", free_mapping_range
};

mrb_value
mruby_box_mapping_range(mrb_state* mrb, struct mapping_range *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, MappingRange_class(mrb), &mapping_range_data_type, box));
}

mrb_value
mruby_giftwrap_mapping_range(mrb_state* mrb, struct mapping_range *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, MappingRange_class(mrb), &mapping_range_data_type, box));
}

void
mruby_set_mapping_range_data_ptr(mrb_value obj, struct mapping_range *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &mapping_range_data_type);
}

void
mruby_gift_mapping_range_data_ptr(mrb_value obj, struct mapping_range *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &mapping_range_data_type);
}

struct mapping_range *
mruby_unbox_mapping_range(mrb_value boxed) {
  return (struct mapping_range *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

