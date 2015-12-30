#ifndef MRUBY_GLib_BOXING_HEADER
#define MRUBY_GLib_BOXING_HEADER

/*
 * Boxing declarations
 * -------------------
 *
 * These declarations are enabled by the macros in mruby_GLib_classes.h
 */

/*
* Extra wrapper over native pointer to indicate who owns this memory.
* (Either mruby, and it should be garage collected, or C, and it shouldn't be)
* Considered using the LSB of the pointer itself, but I don't think I can
* be assured that all memory is word-aligned (especially when C libraries
* implement their own memory management techniques like memory pools)
*/
typedef struct mruby_to_native_ref_ {
  /* If true, indicates that the object should be freed when
   * mruby GC's the ruby object containing this pointer. This
   * is set to true when an object is boxed via the `giftwrap`
   * or `gift_{type}_ptr_set` functions.
   */
  unsigned char belongs_to_ruby;

  /* A pointer to the native object */
  void* obj;

  /* For the convenience of the binding writer,
   * the data pointer can be used to associate arbitrary
   * data with a reference to a C object. This could
   * be a function pointer to invoke instead of `free` on GC,
   * a pointer back to the RObject, or even cast to an integer type
   * and used as a bit field. You get the idea...
   */
  void* data;
} mruby_to_native_ref;

#if BIND_GArray_TYPE
mrb_value
mruby_box__GArray(mrb_state* mrb, struct _GArray *unboxed);

mrb_value
mruby_giftwrap__GArray(mrb_state* mrb, struct _GArray *unboxed);

void
mruby_set__GArray_data_ptr(mrb_value obj, struct _GArray *unboxed);

void
mruby_gift__GArray_data_ptr(mrb_value obj, struct _GArray *unboxed);

struct _GArray *
mruby_unbox__GArray(mrb_value boxed);
#endif

#if BIND_GAsyncQueue_TYPE
mrb_value
mruby_box__GAsyncQueue(mrb_state* mrb, struct _GAsyncQueue *unboxed);

mrb_value
mruby_giftwrap__GAsyncQueue(mrb_state* mrb, struct _GAsyncQueue *unboxed);

void
mruby_set__GAsyncQueue_data_ptr(mrb_value obj, struct _GAsyncQueue *unboxed);

void
mruby_gift__GAsyncQueue_data_ptr(mrb_value obj, struct _GAsyncQueue *unboxed);

struct _GAsyncQueue *
mruby_unbox__GAsyncQueue(mrb_value boxed);
#endif

#if BIND_GBookmarkFile_TYPE
mrb_value
mruby_box__GBookmarkFile(mrb_state* mrb, struct _GBookmarkFile *unboxed);

mrb_value
mruby_giftwrap__GBookmarkFile(mrb_state* mrb, struct _GBookmarkFile *unboxed);

void
mruby_set__GBookmarkFile_data_ptr(mrb_value obj, struct _GBookmarkFile *unboxed);

void
mruby_gift__GBookmarkFile_data_ptr(mrb_value obj, struct _GBookmarkFile *unboxed);

struct _GBookmarkFile *
mruby_unbox__GBookmarkFile(mrb_value boxed);
#endif

#if BIND_GByteArray_TYPE
mrb_value
mruby_box__GByteArray(mrb_state* mrb, struct _GByteArray *unboxed);

mrb_value
mruby_giftwrap__GByteArray(mrb_state* mrb, struct _GByteArray *unboxed);

void
mruby_set__GByteArray_data_ptr(mrb_value obj, struct _GByteArray *unboxed);

void
mruby_gift__GByteArray_data_ptr(mrb_value obj, struct _GByteArray *unboxed);

struct _GByteArray *
mruby_unbox__GByteArray(mrb_value boxed);
#endif

#if BIND_GBytes_TYPE
mrb_value
mruby_box__GBytes(mrb_state* mrb, struct _GBytes *unboxed);

mrb_value
mruby_giftwrap__GBytes(mrb_state* mrb, struct _GBytes *unboxed);

void
mruby_set__GBytes_data_ptr(mrb_value obj, struct _GBytes *unboxed);

void
mruby_gift__GBytes_data_ptr(mrb_value obj, struct _GBytes *unboxed);

struct _GBytes *
mruby_unbox__GBytes(mrb_value boxed);
#endif

#if BIND_GChecksum_TYPE
mrb_value
mruby_box__GChecksum(mrb_state* mrb, struct _GChecksum *unboxed);

mrb_value
mruby_giftwrap__GChecksum(mrb_state* mrb, struct _GChecksum *unboxed);

void
mruby_set__GChecksum_data_ptr(mrb_value obj, struct _GChecksum *unboxed);

void
mruby_gift__GChecksum_data_ptr(mrb_value obj, struct _GChecksum *unboxed);

struct _GChecksum *
mruby_unbox__GChecksum(mrb_value boxed);
#endif

#if BIND_GCond_TYPE
mrb_value
mruby_box__GCond(mrb_state* mrb, struct _GCond *unboxed);

mrb_value
mruby_giftwrap__GCond(mrb_state* mrb, struct _GCond *unboxed);

void
mruby_set__GCond_data_ptr(mrb_value obj, struct _GCond *unboxed);

void
mruby_gift__GCond_data_ptr(mrb_value obj, struct _GCond *unboxed);

struct _GCond *
mruby_unbox__GCond(mrb_value boxed);
#endif

#if BIND_GData_TYPE
mrb_value
mruby_box__GData(mrb_state* mrb, struct _GData *unboxed);

mrb_value
mruby_giftwrap__GData(mrb_state* mrb, struct _GData *unboxed);

void
mruby_set__GData_data_ptr(mrb_value obj, struct _GData *unboxed);

void
mruby_gift__GData_data_ptr(mrb_value obj, struct _GData *unboxed);

struct _GData *
mruby_unbox__GData(mrb_value boxed);
#endif

#if BIND_GDate_TYPE
mrb_value
mruby_box__GDate(mrb_state* mrb, struct _GDate *unboxed);

mrb_value
mruby_giftwrap__GDate(mrb_state* mrb, struct _GDate *unboxed);

void
mruby_set__GDate_data_ptr(mrb_value obj, struct _GDate *unboxed);

void
mruby_gift__GDate_data_ptr(mrb_value obj, struct _GDate *unboxed);

struct _GDate *
mruby_unbox__GDate(mrb_value boxed);
#endif

#if BIND_GDateTime_TYPE
mrb_value
mruby_box__GDateTime(mrb_state* mrb, struct _GDateTime *unboxed);

mrb_value
mruby_giftwrap__GDateTime(mrb_state* mrb, struct _GDateTime *unboxed);

void
mruby_set__GDateTime_data_ptr(mrb_value obj, struct _GDateTime *unboxed);

void
mruby_gift__GDateTime_data_ptr(mrb_value obj, struct _GDateTime *unboxed);

struct _GDateTime *
mruby_unbox__GDateTime(mrb_value boxed);
#endif

#if BIND_GDebugKey_TYPE
mrb_value
mruby_box__GDebugKey(mrb_state* mrb, struct _GDebugKey *unboxed);

mrb_value
mruby_giftwrap__GDebugKey(mrb_state* mrb, struct _GDebugKey *unboxed);

void
mruby_set__GDebugKey_data_ptr(mrb_value obj, struct _GDebugKey *unboxed);

void
mruby_gift__GDebugKey_data_ptr(mrb_value obj, struct _GDebugKey *unboxed);

struct _GDebugKey *
mruby_unbox__GDebugKey(mrb_value boxed);
#endif

#if BIND_GDir_TYPE
mrb_value
mruby_box__GDir(mrb_state* mrb, struct _GDir *unboxed);

mrb_value
mruby_giftwrap__GDir(mrb_state* mrb, struct _GDir *unboxed);

void
mruby_set__GDir_data_ptr(mrb_value obj, struct _GDir *unboxed);

void
mruby_gift__GDir_data_ptr(mrb_value obj, struct _GDir *unboxed);

struct _GDir *
mruby_unbox__GDir(mrb_value boxed);
#endif

#if BIND_GError_TYPE
mrb_value
mruby_box__GError(mrb_state* mrb, struct _GError *unboxed);

mrb_value
mruby_giftwrap__GError(mrb_state* mrb, struct _GError *unboxed);

void
mruby_set__GError_data_ptr(mrb_value obj, struct _GError *unboxed);

void
mruby_gift__GError_data_ptr(mrb_value obj, struct _GError *unboxed);

struct _GError *
mruby_unbox__GError(mrb_value boxed);
#endif

#if BIND_GFile_TYPE
mrb_value
mruby_box__GFile(mrb_state* mrb, struct _GFile *unboxed);

mrb_value
mruby_giftwrap__GFile(mrb_state* mrb, struct _GFile *unboxed);

void
mruby_set__GFile_data_ptr(mrb_value obj, struct _GFile *unboxed);

void
mruby_gift__GFile_data_ptr(mrb_value obj, struct _GFile *unboxed);

struct _GFile *
mruby_unbox__GFile(mrb_value boxed);
#endif

#if BIND_GFileIface_TYPE
mrb_value
mruby_box__GFileIface(mrb_state* mrb, struct _GFileIface *unboxed);

mrb_value
mruby_giftwrap__GFileIface(mrb_state* mrb, struct _GFileIface *unboxed);

void
mruby_set__GFileIface_data_ptr(mrb_value obj, struct _GFileIface *unboxed);

void
mruby_gift__GFileIface_data_ptr(mrb_value obj, struct _GFileIface *unboxed);

struct _GFileIface *
mruby_unbox__GFileIface(mrb_value boxed);
#endif

#if BIND_GFileInfo_TYPE
mrb_value
mruby_box__GFileInfo(mrb_state* mrb, struct _GFileInfo *unboxed);

mrb_value
mruby_giftwrap__GFileInfo(mrb_state* mrb, struct _GFileInfo *unboxed);

void
mruby_set__GFileInfo_data_ptr(mrb_value obj, struct _GFileInfo *unboxed);

void
mruby_gift__GFileInfo_data_ptr(mrb_value obj, struct _GFileInfo *unboxed);

struct _GFileInfo *
mruby_unbox__GFileInfo(mrb_value boxed);
#endif

#if BIND_GFileInfoClass_TYPE
mrb_value
mruby_box__GFileInfoClass(mrb_state* mrb, struct _GFileInfoClass *unboxed);

mrb_value
mruby_giftwrap__GFileInfoClass(mrb_state* mrb, struct _GFileInfoClass *unboxed);

void
mruby_set__GFileInfoClass_data_ptr(mrb_value obj, struct _GFileInfoClass *unboxed);

void
mruby_gift__GFileInfoClass_data_ptr(mrb_value obj, struct _GFileInfoClass *unboxed);

struct _GFileInfoClass *
mruby_unbox__GFileInfoClass(mrb_value boxed);
#endif

#if BIND_GHashTable_TYPE
mrb_value
mruby_box__GHashTable(mrb_state* mrb, struct _GHashTable *unboxed);

mrb_value
mruby_giftwrap__GHashTable(mrb_state* mrb, struct _GHashTable *unboxed);

void
mruby_set__GHashTable_data_ptr(mrb_value obj, struct _GHashTable *unboxed);

void
mruby_gift__GHashTable_data_ptr(mrb_value obj, struct _GHashTable *unboxed);

struct _GHashTable *
mruby_unbox__GHashTable(mrb_value boxed);
#endif

#if BIND_GHashTableIter_TYPE
mrb_value
mruby_box__GHashTableIter(mrb_state* mrb, struct _GHashTableIter *unboxed);

mrb_value
mruby_giftwrap__GHashTableIter(mrb_state* mrb, struct _GHashTableIter *unboxed);

void
mruby_set__GHashTableIter_data_ptr(mrb_value obj, struct _GHashTableIter *unboxed);

void
mruby_gift__GHashTableIter_data_ptr(mrb_value obj, struct _GHashTableIter *unboxed);

struct _GHashTableIter *
mruby_unbox__GHashTableIter(mrb_value boxed);
#endif

#if BIND_GHmac_TYPE
mrb_value
mruby_box__GHmac(mrb_state* mrb, struct _GHmac *unboxed);

mrb_value
mruby_giftwrap__GHmac(mrb_state* mrb, struct _GHmac *unboxed);

void
mruby_set__GHmac_data_ptr(mrb_value obj, struct _GHmac *unboxed);

void
mruby_gift__GHmac_data_ptr(mrb_value obj, struct _GHmac *unboxed);

struct _GHmac *
mruby_unbox__GHmac(mrb_value boxed);
#endif

#if BIND_GHook_TYPE
mrb_value
mruby_box__GHook(mrb_state* mrb, struct _GHook *unboxed);

mrb_value
mruby_giftwrap__GHook(mrb_state* mrb, struct _GHook *unboxed);

void
mruby_set__GHook_data_ptr(mrb_value obj, struct _GHook *unboxed);

void
mruby_gift__GHook_data_ptr(mrb_value obj, struct _GHook *unboxed);

struct _GHook *
mruby_unbox__GHook(mrb_value boxed);
#endif

#if BIND_GHookList_TYPE
mrb_value
mruby_box__GHookList(mrb_state* mrb, struct _GHookList *unboxed);

mrb_value
mruby_giftwrap__GHookList(mrb_state* mrb, struct _GHookList *unboxed);

void
mruby_set__GHookList_data_ptr(mrb_value obj, struct _GHookList *unboxed);

void
mruby_gift__GHookList_data_ptr(mrb_value obj, struct _GHookList *unboxed);

struct _GHookList *
mruby_unbox__GHookList(mrb_value boxed);
#endif

#if BIND_GIConv_TYPE
mrb_value
mruby_box__GIConv(mrb_state* mrb, struct _GIConv *unboxed);

mrb_value
mruby_giftwrap__GIConv(mrb_state* mrb, struct _GIConv *unboxed);

void
mruby_set__GIConv_data_ptr(mrb_value obj, struct _GIConv *unboxed);

void
mruby_gift__GIConv_data_ptr(mrb_value obj, struct _GIConv *unboxed);

struct _GIConv *
mruby_unbox__GIConv(mrb_value boxed);
#endif

#if BIND_GIOChannel_TYPE
mrb_value
mruby_box__GIOChannel(mrb_state* mrb, struct _GIOChannel *unboxed);

mrb_value
mruby_giftwrap__GIOChannel(mrb_state* mrb, struct _GIOChannel *unboxed);

void
mruby_set__GIOChannel_data_ptr(mrb_value obj, struct _GIOChannel *unboxed);

void
mruby_gift__GIOChannel_data_ptr(mrb_value obj, struct _GIOChannel *unboxed);

struct _GIOChannel *
mruby_unbox__GIOChannel(mrb_value boxed);
#endif

#if BIND_GIOFuncs_TYPE
mrb_value
mruby_box__GIOFuncs(mrb_state* mrb, struct _GIOFuncs *unboxed);

mrb_value
mruby_giftwrap__GIOFuncs(mrb_state* mrb, struct _GIOFuncs *unboxed);

void
mruby_set__GIOFuncs_data_ptr(mrb_value obj, struct _GIOFuncs *unboxed);

void
mruby_gift__GIOFuncs_data_ptr(mrb_value obj, struct _GIOFuncs *unboxed);

struct _GIOFuncs *
mruby_unbox__GIOFuncs(mrb_value boxed);
#endif

#if BIND_GKeyFile_TYPE
mrb_value
mruby_box__GKeyFile(mrb_state* mrb, struct _GKeyFile *unboxed);

mrb_value
mruby_giftwrap__GKeyFile(mrb_state* mrb, struct _GKeyFile *unboxed);

void
mruby_set__GKeyFile_data_ptr(mrb_value obj, struct _GKeyFile *unboxed);

void
mruby_gift__GKeyFile_data_ptr(mrb_value obj, struct _GKeyFile *unboxed);

struct _GKeyFile *
mruby_unbox__GKeyFile(mrb_value boxed);
#endif

#if BIND_GList_TYPE
mrb_value
mruby_box__GList(mrb_state* mrb, struct _GList *unboxed);

mrb_value
mruby_giftwrap__GList(mrb_state* mrb, struct _GList *unboxed);

void
mruby_set__GList_data_ptr(mrb_value obj, struct _GList *unboxed);

void
mruby_gift__GList_data_ptr(mrb_value obj, struct _GList *unboxed);

struct _GList *
mruby_unbox__GList(mrb_value boxed);
#endif

#if BIND_GMainContext_TYPE
mrb_value
mruby_box__GMainContext(mrb_state* mrb, struct _GMainContext *unboxed);

mrb_value
mruby_giftwrap__GMainContext(mrb_state* mrb, struct _GMainContext *unboxed);

void
mruby_set__GMainContext_data_ptr(mrb_value obj, struct _GMainContext *unboxed);

void
mruby_gift__GMainContext_data_ptr(mrb_value obj, struct _GMainContext *unboxed);

struct _GMainContext *
mruby_unbox__GMainContext(mrb_value boxed);
#endif

#if BIND_GMainLoop_TYPE
mrb_value
mruby_box__GMainLoop(mrb_state* mrb, struct _GMainLoop *unboxed);

mrb_value
mruby_giftwrap__GMainLoop(mrb_state* mrb, struct _GMainLoop *unboxed);

void
mruby_set__GMainLoop_data_ptr(mrb_value obj, struct _GMainLoop *unboxed);

void
mruby_gift__GMainLoop_data_ptr(mrb_value obj, struct _GMainLoop *unboxed);

struct _GMainLoop *
mruby_unbox__GMainLoop(mrb_value boxed);
#endif

#if BIND_GMappedFile_TYPE
mrb_value
mruby_box__GMappedFile(mrb_state* mrb, struct _GMappedFile *unboxed);

mrb_value
mruby_giftwrap__GMappedFile(mrb_state* mrb, struct _GMappedFile *unboxed);

void
mruby_set__GMappedFile_data_ptr(mrb_value obj, struct _GMappedFile *unboxed);

void
mruby_gift__GMappedFile_data_ptr(mrb_value obj, struct _GMappedFile *unboxed);

struct _GMappedFile *
mruby_unbox__GMappedFile(mrb_value boxed);
#endif

#if BIND_GMarkupParseContext_TYPE
mrb_value
mruby_box__GMarkupParseContext(mrb_state* mrb, struct _GMarkupParseContext *unboxed);

mrb_value
mruby_giftwrap__GMarkupParseContext(mrb_state* mrb, struct _GMarkupParseContext *unboxed);

void
mruby_set__GMarkupParseContext_data_ptr(mrb_value obj, struct _GMarkupParseContext *unboxed);

void
mruby_gift__GMarkupParseContext_data_ptr(mrb_value obj, struct _GMarkupParseContext *unboxed);

struct _GMarkupParseContext *
mruby_unbox__GMarkupParseContext(mrb_value boxed);
#endif

#if BIND_GMarkupParser_TYPE
mrb_value
mruby_box__GMarkupParser(mrb_state* mrb, struct _GMarkupParser *unboxed);

mrb_value
mruby_giftwrap__GMarkupParser(mrb_state* mrb, struct _GMarkupParser *unboxed);

void
mruby_set__GMarkupParser_data_ptr(mrb_value obj, struct _GMarkupParser *unboxed);

void
mruby_gift__GMarkupParser_data_ptr(mrb_value obj, struct _GMarkupParser *unboxed);

struct _GMarkupParser *
mruby_unbox__GMarkupParser(mrb_value boxed);
#endif

#if BIND_GMatchInfo_TYPE
mrb_value
mruby_box__GMatchInfo(mrb_state* mrb, struct _GMatchInfo *unboxed);

mrb_value
mruby_giftwrap__GMatchInfo(mrb_state* mrb, struct _GMatchInfo *unboxed);

void
mruby_set__GMatchInfo_data_ptr(mrb_value obj, struct _GMatchInfo *unboxed);

void
mruby_gift__GMatchInfo_data_ptr(mrb_value obj, struct _GMatchInfo *unboxed);

struct _GMatchInfo *
mruby_unbox__GMatchInfo(mrb_value boxed);
#endif

#if BIND_GMemVTable_TYPE
mrb_value
mruby_box__GMemVTable(mrb_state* mrb, struct _GMemVTable *unboxed);

mrb_value
mruby_giftwrap__GMemVTable(mrb_state* mrb, struct _GMemVTable *unboxed);

void
mruby_set__GMemVTable_data_ptr(mrb_value obj, struct _GMemVTable *unboxed);

void
mruby_gift__GMemVTable_data_ptr(mrb_value obj, struct _GMemVTable *unboxed);

struct _GMemVTable *
mruby_unbox__GMemVTable(mrb_value boxed);
#endif

#if BIND_GNode_TYPE
mrb_value
mruby_box__GNode(mrb_state* mrb, struct _GNode *unboxed);

mrb_value
mruby_giftwrap__GNode(mrb_state* mrb, struct _GNode *unboxed);

void
mruby_set__GNode_data_ptr(mrb_value obj, struct _GNode *unboxed);

void
mruby_gift__GNode_data_ptr(mrb_value obj, struct _GNode *unboxed);

struct _GNode *
mruby_unbox__GNode(mrb_value boxed);
#endif

#if BIND_GOnce_TYPE
mrb_value
mruby_box__GOnce(mrb_state* mrb, struct _GOnce *unboxed);

mrb_value
mruby_giftwrap__GOnce(mrb_state* mrb, struct _GOnce *unboxed);

void
mruby_set__GOnce_data_ptr(mrb_value obj, struct _GOnce *unboxed);

void
mruby_gift__GOnce_data_ptr(mrb_value obj, struct _GOnce *unboxed);

struct _GOnce *
mruby_unbox__GOnce(mrb_value boxed);
#endif

#if BIND_GOptionContext_TYPE
mrb_value
mruby_box__GOptionContext(mrb_state* mrb, struct _GOptionContext *unboxed);

mrb_value
mruby_giftwrap__GOptionContext(mrb_state* mrb, struct _GOptionContext *unboxed);

void
mruby_set__GOptionContext_data_ptr(mrb_value obj, struct _GOptionContext *unboxed);

void
mruby_gift__GOptionContext_data_ptr(mrb_value obj, struct _GOptionContext *unboxed);

struct _GOptionContext *
mruby_unbox__GOptionContext(mrb_value boxed);
#endif

#if BIND_GOptionEntry_TYPE
mrb_value
mruby_box__GOptionEntry(mrb_state* mrb, struct _GOptionEntry *unboxed);

mrb_value
mruby_giftwrap__GOptionEntry(mrb_state* mrb, struct _GOptionEntry *unboxed);

void
mruby_set__GOptionEntry_data_ptr(mrb_value obj, struct _GOptionEntry *unboxed);

void
mruby_gift__GOptionEntry_data_ptr(mrb_value obj, struct _GOptionEntry *unboxed);

struct _GOptionEntry *
mruby_unbox__GOptionEntry(mrb_value boxed);
#endif

#if BIND_GOptionGroup_TYPE
mrb_value
mruby_box__GOptionGroup(mrb_state* mrb, struct _GOptionGroup *unboxed);

mrb_value
mruby_giftwrap__GOptionGroup(mrb_state* mrb, struct _GOptionGroup *unboxed);

void
mruby_set__GOptionGroup_data_ptr(mrb_value obj, struct _GOptionGroup *unboxed);

void
mruby_gift__GOptionGroup_data_ptr(mrb_value obj, struct _GOptionGroup *unboxed);

struct _GOptionGroup *
mruby_unbox__GOptionGroup(mrb_value boxed);
#endif

#if BIND_GPatternSpec_TYPE
mrb_value
mruby_box__GPatternSpec(mrb_state* mrb, struct _GPatternSpec *unboxed);

mrb_value
mruby_giftwrap__GPatternSpec(mrb_state* mrb, struct _GPatternSpec *unboxed);

void
mruby_set__GPatternSpec_data_ptr(mrb_value obj, struct _GPatternSpec *unboxed);

void
mruby_gift__GPatternSpec_data_ptr(mrb_value obj, struct _GPatternSpec *unboxed);

struct _GPatternSpec *
mruby_unbox__GPatternSpec(mrb_value boxed);
#endif

#if BIND_GPollFD_TYPE
mrb_value
mruby_box__GPollFD(mrb_state* mrb, struct _GPollFD *unboxed);

mrb_value
mruby_giftwrap__GPollFD(mrb_state* mrb, struct _GPollFD *unboxed);

void
mruby_set__GPollFD_data_ptr(mrb_value obj, struct _GPollFD *unboxed);

void
mruby_gift__GPollFD_data_ptr(mrb_value obj, struct _GPollFD *unboxed);

struct _GPollFD *
mruby_unbox__GPollFD(mrb_value boxed);
#endif

#if BIND_GPrivate_TYPE
mrb_value
mruby_box__GPrivate(mrb_state* mrb, struct _GPrivate *unboxed);

mrb_value
mruby_giftwrap__GPrivate(mrb_state* mrb, struct _GPrivate *unboxed);

void
mruby_set__GPrivate_data_ptr(mrb_value obj, struct _GPrivate *unboxed);

void
mruby_gift__GPrivate_data_ptr(mrb_value obj, struct _GPrivate *unboxed);

struct _GPrivate *
mruby_unbox__GPrivate(mrb_value boxed);
#endif

#if BIND_GPtrArray_TYPE
mrb_value
mruby_box__GPtrArray(mrb_state* mrb, struct _GPtrArray *unboxed);

mrb_value
mruby_giftwrap__GPtrArray(mrb_state* mrb, struct _GPtrArray *unboxed);

void
mruby_set__GPtrArray_data_ptr(mrb_value obj, struct _GPtrArray *unboxed);

void
mruby_gift__GPtrArray_data_ptr(mrb_value obj, struct _GPtrArray *unboxed);

struct _GPtrArray *
mruby_unbox__GPtrArray(mrb_value boxed);
#endif

#if BIND_GQueue_TYPE
mrb_value
mruby_box__GQueue(mrb_state* mrb, struct _GQueue *unboxed);

mrb_value
mruby_giftwrap__GQueue(mrb_state* mrb, struct _GQueue *unboxed);

void
mruby_set__GQueue_data_ptr(mrb_value obj, struct _GQueue *unboxed);

void
mruby_gift__GQueue_data_ptr(mrb_value obj, struct _GQueue *unboxed);

struct _GQueue *
mruby_unbox__GQueue(mrb_value boxed);
#endif

#if BIND_GRand_TYPE
mrb_value
mruby_box__GRand(mrb_state* mrb, struct _GRand *unboxed);

mrb_value
mruby_giftwrap__GRand(mrb_state* mrb, struct _GRand *unboxed);

void
mruby_set__GRand_data_ptr(mrb_value obj, struct _GRand *unboxed);

void
mruby_gift__GRand_data_ptr(mrb_value obj, struct _GRand *unboxed);

struct _GRand *
mruby_unbox__GRand(mrb_value boxed);
#endif

#if BIND_GRecMutex_TYPE
mrb_value
mruby_box__GRecMutex(mrb_state* mrb, struct _GRecMutex *unboxed);

mrb_value
mruby_giftwrap__GRecMutex(mrb_state* mrb, struct _GRecMutex *unboxed);

void
mruby_set__GRecMutex_data_ptr(mrb_value obj, struct _GRecMutex *unboxed);

void
mruby_gift__GRecMutex_data_ptr(mrb_value obj, struct _GRecMutex *unboxed);

struct _GRecMutex *
mruby_unbox__GRecMutex(mrb_value boxed);
#endif

#if BIND_GRegex_TYPE
mrb_value
mruby_box__GRegex(mrb_state* mrb, struct _GRegex *unboxed);

mrb_value
mruby_giftwrap__GRegex(mrb_state* mrb, struct _GRegex *unboxed);

void
mruby_set__GRegex_data_ptr(mrb_value obj, struct _GRegex *unboxed);

void
mruby_gift__GRegex_data_ptr(mrb_value obj, struct _GRegex *unboxed);

struct _GRegex *
mruby_unbox__GRegex(mrb_value boxed);
#endif

#if BIND_GRWLock_TYPE
mrb_value
mruby_box__GRWLock(mrb_state* mrb, struct _GRWLock *unboxed);

mrb_value
mruby_giftwrap__GRWLock(mrb_state* mrb, struct _GRWLock *unboxed);

void
mruby_set__GRWLock_data_ptr(mrb_value obj, struct _GRWLock *unboxed);

void
mruby_gift__GRWLock_data_ptr(mrb_value obj, struct _GRWLock *unboxed);

struct _GRWLock *
mruby_unbox__GRWLock(mrb_value boxed);
#endif

#if BIND_GScanner_TYPE
mrb_value
mruby_box__GScanner(mrb_state* mrb, struct _GScanner *unboxed);

mrb_value
mruby_giftwrap__GScanner(mrb_state* mrb, struct _GScanner *unboxed);

void
mruby_set__GScanner_data_ptr(mrb_value obj, struct _GScanner *unboxed);

void
mruby_gift__GScanner_data_ptr(mrb_value obj, struct _GScanner *unboxed);

struct _GScanner *
mruby_unbox__GScanner(mrb_value boxed);
#endif

#if BIND_GScannerConfig_TYPE
mrb_value
mruby_box__GScannerConfig(mrb_state* mrb, struct _GScannerConfig *unboxed);

mrb_value
mruby_giftwrap__GScannerConfig(mrb_state* mrb, struct _GScannerConfig *unboxed);

void
mruby_set__GScannerConfig_data_ptr(mrb_value obj, struct _GScannerConfig *unboxed);

void
mruby_gift__GScannerConfig_data_ptr(mrb_value obj, struct _GScannerConfig *unboxed);

struct _GScannerConfig *
mruby_unbox__GScannerConfig(mrb_value boxed);
#endif

#if BIND_GSequence_TYPE
mrb_value
mruby_box__GSequence(mrb_state* mrb, struct _GSequence *unboxed);

mrb_value
mruby_giftwrap__GSequence(mrb_state* mrb, struct _GSequence *unboxed);

void
mruby_set__GSequence_data_ptr(mrb_value obj, struct _GSequence *unboxed);

void
mruby_gift__GSequence_data_ptr(mrb_value obj, struct _GSequence *unboxed);

struct _GSequence *
mruby_unbox__GSequence(mrb_value boxed);
#endif

#if BIND_GSequenceNode_TYPE
mrb_value
mruby_box__GSequenceNode(mrb_state* mrb, struct _GSequenceNode *unboxed);

mrb_value
mruby_giftwrap__GSequenceNode(mrb_state* mrb, struct _GSequenceNode *unboxed);

void
mruby_set__GSequenceNode_data_ptr(mrb_value obj, struct _GSequenceNode *unboxed);

void
mruby_gift__GSequenceNode_data_ptr(mrb_value obj, struct _GSequenceNode *unboxed);

struct _GSequenceNode *
mruby_unbox__GSequenceNode(mrb_value boxed);
#endif

#if BIND_GSList_TYPE
mrb_value
mruby_box__GSList(mrb_state* mrb, struct _GSList *unboxed);

mrb_value
mruby_giftwrap__GSList(mrb_state* mrb, struct _GSList *unboxed);

void
mruby_set__GSList_data_ptr(mrb_value obj, struct _GSList *unboxed);

void
mruby_gift__GSList_data_ptr(mrb_value obj, struct _GSList *unboxed);

struct _GSList *
mruby_unbox__GSList(mrb_value boxed);
#endif

#if BIND_GSource_TYPE
mrb_value
mruby_box__GSource(mrb_state* mrb, struct _GSource *unboxed);

mrb_value
mruby_giftwrap__GSource(mrb_state* mrb, struct _GSource *unboxed);

void
mruby_set__GSource_data_ptr(mrb_value obj, struct _GSource *unboxed);

void
mruby_gift__GSource_data_ptr(mrb_value obj, struct _GSource *unboxed);

struct _GSource *
mruby_unbox__GSource(mrb_value boxed);
#endif

#if BIND_GSourceCallbackFuncs_TYPE
mrb_value
mruby_box__GSourceCallbackFuncs(mrb_state* mrb, struct _GSourceCallbackFuncs *unboxed);

mrb_value
mruby_giftwrap__GSourceCallbackFuncs(mrb_state* mrb, struct _GSourceCallbackFuncs *unboxed);

void
mruby_set__GSourceCallbackFuncs_data_ptr(mrb_value obj, struct _GSourceCallbackFuncs *unboxed);

void
mruby_gift__GSourceCallbackFuncs_data_ptr(mrb_value obj, struct _GSourceCallbackFuncs *unboxed);

struct _GSourceCallbackFuncs *
mruby_unbox__GSourceCallbackFuncs(mrb_value boxed);
#endif

#if BIND_GSourceFuncs_TYPE
mrb_value
mruby_box__GSourceFuncs(mrb_state* mrb, struct _GSourceFuncs *unboxed);

mrb_value
mruby_giftwrap__GSourceFuncs(mrb_state* mrb, struct _GSourceFuncs *unboxed);

void
mruby_set__GSourceFuncs_data_ptr(mrb_value obj, struct _GSourceFuncs *unboxed);

void
mruby_gift__GSourceFuncs_data_ptr(mrb_value obj, struct _GSourceFuncs *unboxed);

struct _GSourceFuncs *
mruby_unbox__GSourceFuncs(mrb_value boxed);
#endif

#if BIND_GSourcePrivate_TYPE
mrb_value
mruby_box__GSourcePrivate(mrb_state* mrb, struct _GSourcePrivate *unboxed);

mrb_value
mruby_giftwrap__GSourcePrivate(mrb_state* mrb, struct _GSourcePrivate *unboxed);

void
mruby_set__GSourcePrivate_data_ptr(mrb_value obj, struct _GSourcePrivate *unboxed);

void
mruby_gift__GSourcePrivate_data_ptr(mrb_value obj, struct _GSourcePrivate *unboxed);

struct _GSourcePrivate *
mruby_unbox__GSourcePrivate(mrb_value boxed);
#endif

#if BIND_GString_TYPE
mrb_value
mruby_box__GString(mrb_state* mrb, struct _GString *unboxed);

mrb_value
mruby_giftwrap__GString(mrb_state* mrb, struct _GString *unboxed);

void
mruby_set__GString_data_ptr(mrb_value obj, struct _GString *unboxed);

void
mruby_gift__GString_data_ptr(mrb_value obj, struct _GString *unboxed);

struct _GString *
mruby_unbox__GString(mrb_value boxed);
#endif

#if BIND_GStringChunk_TYPE
mrb_value
mruby_box__GStringChunk(mrb_state* mrb, struct _GStringChunk *unboxed);

mrb_value
mruby_giftwrap__GStringChunk(mrb_state* mrb, struct _GStringChunk *unboxed);

void
mruby_set__GStringChunk_data_ptr(mrb_value obj, struct _GStringChunk *unboxed);

void
mruby_gift__GStringChunk_data_ptr(mrb_value obj, struct _GStringChunk *unboxed);

struct _GStringChunk *
mruby_unbox__GStringChunk(mrb_value boxed);
#endif

#if BIND_GTestCase_TYPE
mrb_value
mruby_box_GTestCase(mrb_state* mrb, struct GTestCase *unboxed);

mrb_value
mruby_giftwrap_GTestCase(mrb_state* mrb, struct GTestCase *unboxed);

void
mruby_set_GTestCase_data_ptr(mrb_value obj, struct GTestCase *unboxed);

void
mruby_gift_GTestCase_data_ptr(mrb_value obj, struct GTestCase *unboxed);

struct GTestCase *
mruby_unbox_GTestCase(mrb_value boxed);
#endif

#if BIND_GTestConfig_TYPE
mrb_value
mruby_box_GTestConfig(mrb_state* mrb, GTestConfig *unboxed);

mrb_value
mruby_giftwrap_GTestConfig(mrb_state* mrb, GTestConfig *unboxed);

void
mruby_set_GTestConfig_data_ptr(mrb_value obj, GTestConfig *unboxed);

void
mruby_gift_GTestConfig_data_ptr(mrb_value obj, GTestConfig *unboxed);

GTestConfig *
mruby_unbox_GTestConfig(mrb_value boxed);
#endif

#if BIND_GTestLogBuffer_TYPE
mrb_value
mruby_box_GTestLogBuffer(mrb_state* mrb, GTestLogBuffer *unboxed);

mrb_value
mruby_giftwrap_GTestLogBuffer(mrb_state* mrb, GTestLogBuffer *unboxed);

void
mruby_set_GTestLogBuffer_data_ptr(mrb_value obj, GTestLogBuffer *unboxed);

void
mruby_gift_GTestLogBuffer_data_ptr(mrb_value obj, GTestLogBuffer *unboxed);

GTestLogBuffer *
mruby_unbox_GTestLogBuffer(mrb_value boxed);
#endif

#if BIND_GTestLogMsg_TYPE
mrb_value
mruby_box_GTestLogMsg(mrb_state* mrb, GTestLogMsg *unboxed);

mrb_value
mruby_giftwrap_GTestLogMsg(mrb_state* mrb, GTestLogMsg *unboxed);

void
mruby_set_GTestLogMsg_data_ptr(mrb_value obj, GTestLogMsg *unboxed);

void
mruby_gift_GTestLogMsg_data_ptr(mrb_value obj, GTestLogMsg *unboxed);

GTestLogMsg *
mruby_unbox_GTestLogMsg(mrb_value boxed);
#endif

#if BIND_GTestSuite_TYPE
mrb_value
mruby_box_GTestSuite(mrb_state* mrb, struct GTestSuite *unboxed);

mrb_value
mruby_giftwrap_GTestSuite(mrb_state* mrb, struct GTestSuite *unboxed);

void
mruby_set_GTestSuite_data_ptr(mrb_value obj, struct GTestSuite *unboxed);

void
mruby_gift_GTestSuite_data_ptr(mrb_value obj, struct GTestSuite *unboxed);

struct GTestSuite *
mruby_unbox_GTestSuite(mrb_value boxed);
#endif

#if BIND_GThread_TYPE
mrb_value
mruby_box__GThread(mrb_state* mrb, struct _GThread *unboxed);

mrb_value
mruby_giftwrap__GThread(mrb_state* mrb, struct _GThread *unboxed);

void
mruby_set__GThread_data_ptr(mrb_value obj, struct _GThread *unboxed);

void
mruby_gift__GThread_data_ptr(mrb_value obj, struct _GThread *unboxed);

struct _GThread *
mruby_unbox__GThread(mrb_value boxed);
#endif

#if BIND_GThreadPool_TYPE
mrb_value
mruby_box__GThreadPool(mrb_state* mrb, struct _GThreadPool *unboxed);

mrb_value
mruby_giftwrap__GThreadPool(mrb_state* mrb, struct _GThreadPool *unboxed);

void
mruby_set__GThreadPool_data_ptr(mrb_value obj, struct _GThreadPool *unboxed);

void
mruby_gift__GThreadPool_data_ptr(mrb_value obj, struct _GThreadPool *unboxed);

struct _GThreadPool *
mruby_unbox__GThreadPool(mrb_value boxed);
#endif

#if BIND_GTimer_TYPE
mrb_value
mruby_box__GTimer(mrb_state* mrb, struct _GTimer *unboxed);

mrb_value
mruby_giftwrap__GTimer(mrb_state* mrb, struct _GTimer *unboxed);

void
mruby_set__GTimer_data_ptr(mrb_value obj, struct _GTimer *unboxed);

void
mruby_gift__GTimer_data_ptr(mrb_value obj, struct _GTimer *unboxed);

struct _GTimer *
mruby_unbox__GTimer(mrb_value boxed);
#endif

#if BIND_GTimeVal_TYPE
mrb_value
mruby_box__GTimeVal(mrb_state* mrb, struct _GTimeVal *unboxed);

mrb_value
mruby_giftwrap__GTimeVal(mrb_state* mrb, struct _GTimeVal *unboxed);

void
mruby_set__GTimeVal_data_ptr(mrb_value obj, struct _GTimeVal *unboxed);

void
mruby_gift__GTimeVal_data_ptr(mrb_value obj, struct _GTimeVal *unboxed);

struct _GTimeVal *
mruby_unbox__GTimeVal(mrb_value boxed);
#endif

#if BIND_GTimeZone_TYPE
mrb_value
mruby_box__GTimeZone(mrb_state* mrb, struct _GTimeZone *unboxed);

mrb_value
mruby_giftwrap__GTimeZone(mrb_state* mrb, struct _GTimeZone *unboxed);

void
mruby_set__GTimeZone_data_ptr(mrb_value obj, struct _GTimeZone *unboxed);

void
mruby_gift__GTimeZone_data_ptr(mrb_value obj, struct _GTimeZone *unboxed);

struct _GTimeZone *
mruby_unbox__GTimeZone(mrb_value boxed);
#endif

#if BIND_GTrashStack_TYPE
mrb_value
mruby_box__GTrashStack(mrb_state* mrb, struct _GTrashStack *unboxed);

mrb_value
mruby_giftwrap__GTrashStack(mrb_state* mrb, struct _GTrashStack *unboxed);

void
mruby_set__GTrashStack_data_ptr(mrb_value obj, struct _GTrashStack *unboxed);

void
mruby_gift__GTrashStack_data_ptr(mrb_value obj, struct _GTrashStack *unboxed);

struct _GTrashStack *
mruby_unbox__GTrashStack(mrb_value boxed);
#endif

#if BIND_GTree_TYPE
mrb_value
mruby_box__GTree(mrb_state* mrb, struct _GTree *unboxed);

mrb_value
mruby_giftwrap__GTree(mrb_state* mrb, struct _GTree *unboxed);

void
mruby_set__GTree_data_ptr(mrb_value obj, struct _GTree *unboxed);

void
mruby_gift__GTree_data_ptr(mrb_value obj, struct _GTree *unboxed);

struct _GTree *
mruby_unbox__GTree(mrb_value boxed);
#endif

#if BIND_GVariant_TYPE
mrb_value
mruby_box__GVariant(mrb_state* mrb, struct _GVariant *unboxed);

mrb_value
mruby_giftwrap__GVariant(mrb_state* mrb, struct _GVariant *unboxed);

void
mruby_set__GVariant_data_ptr(mrb_value obj, struct _GVariant *unboxed);

void
mruby_gift__GVariant_data_ptr(mrb_value obj, struct _GVariant *unboxed);

struct _GVariant *
mruby_unbox__GVariant(mrb_value boxed);
#endif

#if BIND_GVariantBuilder_TYPE
mrb_value
mruby_box__GVariantBuilder(mrb_state* mrb, struct _GVariantBuilder *unboxed);

mrb_value
mruby_giftwrap__GVariantBuilder(mrb_state* mrb, struct _GVariantBuilder *unboxed);

void
mruby_set__GVariantBuilder_data_ptr(mrb_value obj, struct _GVariantBuilder *unboxed);

void
mruby_gift__GVariantBuilder_data_ptr(mrb_value obj, struct _GVariantBuilder *unboxed);

struct _GVariantBuilder *
mruby_unbox__GVariantBuilder(mrb_value boxed);
#endif

#if BIND_GVariantDict_TYPE
mrb_value
mruby_box__GVariantDict(mrb_state* mrb, struct _GVariantDict *unboxed);

mrb_value
mruby_giftwrap__GVariantDict(mrb_state* mrb, struct _GVariantDict *unboxed);

void
mruby_set__GVariantDict_data_ptr(mrb_value obj, struct _GVariantDict *unboxed);

void
mruby_gift__GVariantDict_data_ptr(mrb_value obj, struct _GVariantDict *unboxed);

struct _GVariantDict *
mruby_unbox__GVariantDict(mrb_value boxed);
#endif

#if BIND_GVariantIter_TYPE
mrb_value
mruby_box__GVariantIter(mrb_state* mrb, struct _GVariantIter *unboxed);

mrb_value
mruby_giftwrap__GVariantIter(mrb_state* mrb, struct _GVariantIter *unboxed);

void
mruby_set__GVariantIter_data_ptr(mrb_value obj, struct _GVariantIter *unboxed);

void
mruby_gift__GVariantIter_data_ptr(mrb_value obj, struct _GVariantIter *unboxed);

struct _GVariantIter *
mruby_unbox__GVariantIter(mrb_value boxed);
#endif

#if BIND_GVariantType_TYPE
mrb_value
mruby_box__GVariantType(mrb_state* mrb, struct _GVariantType *unboxed);

mrb_value
mruby_giftwrap__GVariantType(mrb_state* mrb, struct _GVariantType *unboxed);

void
mruby_set__GVariantType_data_ptr(mrb_value obj, struct _GVariantType *unboxed);

void
mruby_gift__GVariantType_data_ptr(mrb_value obj, struct _GVariantType *unboxed);

struct _GVariantType *
mruby_unbox__GVariantType(mrb_value boxed);
#endif


#endif
