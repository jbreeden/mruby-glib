#ifndef GLib_HEADER
#define GLib_HEADER

/*
 * Header Files
 * ------------
 *
 * These are the header files that defined the
 * classes and functions for which bindings have
 * been generated. If any of these are not needed
 * they should be commented out.
 *
 * TODO: ONLY the filename is inserted here automatically.
 *       If the file is not directly on the include path,
 *       you will need to prepend the relative path.
 */

#include <stdlib.h>
#include "mruby.h"
#include "mruby/array.h"
#include "mruby/class.h"
#include "mruby/data.h"
#include "mruby/string.h"
#include "mruby/value.h"
#include "mruby/variable.h"

#include "glib.h"
#include "glib/gi18n.h"
#include "glib/gprintf.h"
#include "glib/gstdio.h"
#include "gio/gio.h"
#include "gio/giotypes.h"
#include <fcntl.h>


#include "mruby_GLib_functions.h"
#include "mruby_GLib_classes.h"
#include "mruby_GLib_boxing.h"

/*
 * RClass Macros
 * -------------
 *
 * Macros for retrieving the RClass*'s defined by this gem.
 */

#define GLib_module(mrb) mrb_module_get(mrb, "GLib")
#define GArray_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GArray")
#define GAsyncQueue_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GAsyncQueue")
#define GBookmarkFile_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GBookmarkFile")
#define GByteArray_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GByteArray")
#define GBytes_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GBytes")
#define GChecksum_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GChecksum")
#define GCond_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GCond")
#define GData_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GData")
#define GDate_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GDate")
#define GDateTime_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GDateTime")
#define GDebugKey_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GDebugKey")
#define GDir_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GDir")
#define GError_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GError")
#define GFile_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GFile")
#define GFileIface_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GFileIface")
#define GFileInfo_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GFileInfo")
#define GFileInfoClass_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GFileInfoClass")
#define GFileInputStream_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GFileInputStream")
#define GFileIOStream_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GFileIOStream")
#define GFileOutputStream_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GFileOutputStream")
#define GHashTable_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GHashTable")
#define GHashTableIter_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GHashTableIter")
#define GHmac_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GHmac")
#define GHook_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GHook")
#define GHookList_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GHookList")
#define GIConv_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GIConv")
#define GInetAddress_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GInetAddress")
#define GInetAddressClass_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GInetAddressClass")
#define GInetAddressPrivate_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GInetAddressPrivate")
#define GInetSocketAddress_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GInetSocketAddress")
#define GInetSocketAddressClass_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GInetSocketAddressClass")
#define GInetSocketAddressPrivate_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GInetSocketAddressPrivate")
#define GInputStream_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GInputStream")
#define GInputStreamClass_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GInputStreamClass")
#define GInputStreamPrivate_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GInputStreamPrivate")
#define GIOChannel_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GIOChannel")
#define GIOFuncs_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GIOFuncs")
#define GIOStream_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GIOStream")
#define GIOStreamClass_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GIOStreamClass")
#define GIOStreamPrivate_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GIOStreamPrivate")
#define GKeyFile_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GKeyFile")
#define GList_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GList")
#define GMainContext_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GMainContext")
#define GMainLoop_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GMainLoop")
#define GMappedFile_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GMappedFile")
#define GMarkupParseContext_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GMarkupParseContext")
#define GMarkupParser_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GMarkupParser")
#define GMatchInfo_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GMatchInfo")
#define GMemVTable_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GMemVTable")
#define GNode_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GNode")
#define GOnce_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GOnce")
#define GOptionContext_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GOptionContext")
#define GOptionEntry_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GOptionEntry")
#define GOptionGroup_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GOptionGroup")
#define GOutputStream_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GOutputStream")
#define GOutputStreamClass_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GOutputStreamClass")
#define GOutputStreamPrivate_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GOutputStreamPrivate")
#define GPatternSpec_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GPatternSpec")
#define GPollFD_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GPollFD")
#define GPrivate_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GPrivate")
#define GPtrArray_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GPtrArray")
#define GQueue_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GQueue")
#define GRand_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GRand")
#define GRecMutex_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GRecMutex")
#define GRegex_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GRegex")
#define GRWLock_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GRWLock")
#define GScanner_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GScanner")
#define GScannerConfig_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GScannerConfig")
#define GSeekable_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GSeekable")
#define GSeekableIface_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GSeekableIface")
#define GSequence_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GSequence")
#define GSequenceNode_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GSequenceNode")
#define GSList_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GSList")
#define GSocket_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GSocket")
#define GSocketAddress_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GSocketAddress")
#define GSocketAddressClass_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GSocketAddressClass")
#define GSocketClass_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GSocketClass")
#define GSocketPrivate_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GSocketPrivate")
#define GSource_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GSource")
#define GSourceCallbackFuncs_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GSourceCallbackFuncs")
#define GSourceFuncs_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GSourceFuncs")
#define GSourcePrivate_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GSourcePrivate")
#define GString_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GString")
#define GStringChunk_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GStringChunk")
#define GSubprocess_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GSubprocess")
#define GSubprocessLauncher_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GSubprocessLauncher")
#define GTestCase_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GTestCase")
#define GTestConfig_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GTestConfig")
#define GTestLogBuffer_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GTestLogBuffer")
#define GTestLogMsg_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GTestLogMsg")
#define GTestSuite_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GTestSuite")
#define GThread_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GThread")
#define GThreadPool_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GThreadPool")
#define GTimer_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GTimer")
#define GTimeVal_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GTimeVal")
#define GTimeZone_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GTimeZone")
#define GTrashStack_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GTrashStack")
#define GTree_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GTree")
#define GVariant_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GVariant")
#define GVariantBuilder_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GVariantBuilder")
#define GVariantDict_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GVariantDict")
#define GVariantIter_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GVariantIter")
#define GVariantType_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GVariantType")

/*
 * Class initialization function declarations
 * ------------------------------------------
 *
 * These declarations are controlled by the macros in the
 * "Class Bindings Options" section above.
 */

#if BIND_GArray_TYPE
void mrb_GLib_GArray_init(mrb_state* mrb);
#endif
#if BIND_GAsyncQueue_TYPE
void mrb_GLib_GAsyncQueue_init(mrb_state* mrb);
#endif
#if BIND_GBookmarkFile_TYPE
void mrb_GLib_GBookmarkFile_init(mrb_state* mrb);
#endif
#if BIND_GByteArray_TYPE
void mrb_GLib_GByteArray_init(mrb_state* mrb);
#endif
#if BIND_GBytes_TYPE
void mrb_GLib_GBytes_init(mrb_state* mrb);
#endif
#if BIND_GChecksum_TYPE
void mrb_GLib_GChecksum_init(mrb_state* mrb);
#endif
#if BIND_GCond_TYPE
void mrb_GLib_GCond_init(mrb_state* mrb);
#endif
#if BIND_GData_TYPE
void mrb_GLib_GData_init(mrb_state* mrb);
#endif
#if BIND_GDate_TYPE
void mrb_GLib_GDate_init(mrb_state* mrb);
#endif
#if BIND_GDateTime_TYPE
void mrb_GLib_GDateTime_init(mrb_state* mrb);
#endif
#if BIND_GDebugKey_TYPE
void mrb_GLib_GDebugKey_init(mrb_state* mrb);
#endif
#if BIND_GDir_TYPE
void mrb_GLib_GDir_init(mrb_state* mrb);
#endif
#if BIND_GError_TYPE
void mrb_GLib_GError_init(mrb_state* mrb);
#endif
#if BIND_GFile_TYPE
void mrb_GLib_GFile_init(mrb_state* mrb);
#endif
#if BIND_GFileIface_TYPE
void mrb_GLib_GFileIface_init(mrb_state* mrb);
#endif
#if BIND_GFileInfo_TYPE
void mrb_GLib_GFileInfo_init(mrb_state* mrb);
#endif
#if BIND_GFileInfoClass_TYPE
void mrb_GLib_GFileInfoClass_init(mrb_state* mrb);
#endif
#if BIND_GFileInputStream_TYPE
void mrb_GLib_GFileInputStream_init(mrb_state* mrb);
#endif
#if BIND_GFileIOStream_TYPE
void mrb_GLib_GFileIOStream_init(mrb_state* mrb);
#endif
#if BIND_GFileOutputStream_TYPE
void mrb_GLib_GFileOutputStream_init(mrb_state* mrb);
#endif
#if BIND_GHashTable_TYPE
void mrb_GLib_GHashTable_init(mrb_state* mrb);
#endif
#if BIND_GHashTableIter_TYPE
void mrb_GLib_GHashTableIter_init(mrb_state* mrb);
#endif
#if BIND_GHmac_TYPE
void mrb_GLib_GHmac_init(mrb_state* mrb);
#endif
#if BIND_GHook_TYPE
void mrb_GLib_GHook_init(mrb_state* mrb);
#endif
#if BIND_GHookList_TYPE
void mrb_GLib_GHookList_init(mrb_state* mrb);
#endif
#if BIND_GIConv_TYPE
void mrb_GLib_GIConv_init(mrb_state* mrb);
#endif
#if BIND_GInetAddress_TYPE
void mrb_GLib_GInetAddress_init(mrb_state* mrb);
#endif
#if BIND_GInetAddressClass_TYPE
void mrb_GLib_GInetAddressClass_init(mrb_state* mrb);
#endif
#if BIND_GInetAddressPrivate_TYPE
void mrb_GLib_GInetAddressPrivate_init(mrb_state* mrb);
#endif
#if BIND_GInetSocketAddress_TYPE
void mrb_GLib_GInetSocketAddress_init(mrb_state* mrb);
#endif
#if BIND_GInetSocketAddressClass_TYPE
void mrb_GLib_GInetSocketAddressClass_init(mrb_state* mrb);
#endif
#if BIND_GInetSocketAddressPrivate_TYPE
void mrb_GLib_GInetSocketAddressPrivate_init(mrb_state* mrb);
#endif
#if BIND_GInputStream_TYPE
void mrb_GLib_GInputStream_init(mrb_state* mrb);
#endif
#if BIND_GInputStreamClass_TYPE
void mrb_GLib_GInputStreamClass_init(mrb_state* mrb);
#endif
#if BIND_GInputStreamPrivate_TYPE
void mrb_GLib_GInputStreamPrivate_init(mrb_state* mrb);
#endif
#if BIND_GIOChannel_TYPE
void mrb_GLib_GIOChannel_init(mrb_state* mrb);
#endif
#if BIND_GIOFuncs_TYPE
void mrb_GLib_GIOFuncs_init(mrb_state* mrb);
#endif
#if BIND_GIOStream_TYPE
void mrb_GLib_GIOStream_init(mrb_state* mrb);
#endif
#if BIND_GIOStreamClass_TYPE
void mrb_GLib_GIOStreamClass_init(mrb_state* mrb);
#endif
#if BIND_GIOStreamPrivate_TYPE
void mrb_GLib_GIOStreamPrivate_init(mrb_state* mrb);
#endif
#if BIND_GKeyFile_TYPE
void mrb_GLib_GKeyFile_init(mrb_state* mrb);
#endif
#if BIND_GList_TYPE
void mrb_GLib_GList_init(mrb_state* mrb);
#endif
#if BIND_GMainContext_TYPE
void mrb_GLib_GMainContext_init(mrb_state* mrb);
#endif
#if BIND_GMainLoop_TYPE
void mrb_GLib_GMainLoop_init(mrb_state* mrb);
#endif
#if BIND_GMappedFile_TYPE
void mrb_GLib_GMappedFile_init(mrb_state* mrb);
#endif
#if BIND_GMarkupParseContext_TYPE
void mrb_GLib_GMarkupParseContext_init(mrb_state* mrb);
#endif
#if BIND_GMarkupParser_TYPE
void mrb_GLib_GMarkupParser_init(mrb_state* mrb);
#endif
#if BIND_GMatchInfo_TYPE
void mrb_GLib_GMatchInfo_init(mrb_state* mrb);
#endif
#if BIND_GMemVTable_TYPE
void mrb_GLib_GMemVTable_init(mrb_state* mrb);
#endif
#if BIND_GNode_TYPE
void mrb_GLib_GNode_init(mrb_state* mrb);
#endif
#if BIND_GOnce_TYPE
void mrb_GLib_GOnce_init(mrb_state* mrb);
#endif
#if BIND_GOptionContext_TYPE
void mrb_GLib_GOptionContext_init(mrb_state* mrb);
#endif
#if BIND_GOptionEntry_TYPE
void mrb_GLib_GOptionEntry_init(mrb_state* mrb);
#endif
#if BIND_GOptionGroup_TYPE
void mrb_GLib_GOptionGroup_init(mrb_state* mrb);
#endif
#if BIND_GOutputStream_TYPE
void mrb_GLib_GOutputStream_init(mrb_state* mrb);
#endif
#if BIND_GOutputStreamClass_TYPE
void mrb_GLib_GOutputStreamClass_init(mrb_state* mrb);
#endif
#if BIND_GOutputStreamPrivate_TYPE
void mrb_GLib_GOutputStreamPrivate_init(mrb_state* mrb);
#endif
#if BIND_GPatternSpec_TYPE
void mrb_GLib_GPatternSpec_init(mrb_state* mrb);
#endif
#if BIND_GPollFD_TYPE
void mrb_GLib_GPollFD_init(mrb_state* mrb);
#endif
#if BIND_GPrivate_TYPE
void mrb_GLib_GPrivate_init(mrb_state* mrb);
#endif
#if BIND_GPtrArray_TYPE
void mrb_GLib_GPtrArray_init(mrb_state* mrb);
#endif
#if BIND_GQueue_TYPE
void mrb_GLib_GQueue_init(mrb_state* mrb);
#endif
#if BIND_GRand_TYPE
void mrb_GLib_GRand_init(mrb_state* mrb);
#endif
#if BIND_GRecMutex_TYPE
void mrb_GLib_GRecMutex_init(mrb_state* mrb);
#endif
#if BIND_GRegex_TYPE
void mrb_GLib_GRegex_init(mrb_state* mrb);
#endif
#if BIND_GRWLock_TYPE
void mrb_GLib_GRWLock_init(mrb_state* mrb);
#endif
#if BIND_GScanner_TYPE
void mrb_GLib_GScanner_init(mrb_state* mrb);
#endif
#if BIND_GScannerConfig_TYPE
void mrb_GLib_GScannerConfig_init(mrb_state* mrb);
#endif
#if BIND_GSeekable_TYPE
void mrb_GLib_GSeekable_init(mrb_state* mrb);
#endif
#if BIND_GSeekableIface_TYPE
void mrb_GLib_GSeekableIface_init(mrb_state* mrb);
#endif
#if BIND_GSequence_TYPE
void mrb_GLib_GSequence_init(mrb_state* mrb);
#endif
#if BIND_GSequenceNode_TYPE
void mrb_GLib_GSequenceNode_init(mrb_state* mrb);
#endif
#if BIND_GSList_TYPE
void mrb_GLib_GSList_init(mrb_state* mrb);
#endif
#if BIND_GSocket_TYPE
void mrb_GLib_GSocket_init(mrb_state* mrb);
#endif
#if BIND_GSocketAddress_TYPE
void mrb_GLib_GSocketAddress_init(mrb_state* mrb);
#endif
#if BIND_GSocketAddressClass_TYPE
void mrb_GLib_GSocketAddressClass_init(mrb_state* mrb);
#endif
#if BIND_GSocketClass_TYPE
void mrb_GLib_GSocketClass_init(mrb_state* mrb);
#endif
#if BIND_GSocketPrivate_TYPE
void mrb_GLib_GSocketPrivate_init(mrb_state* mrb);
#endif
#if BIND_GSource_TYPE
void mrb_GLib_GSource_init(mrb_state* mrb);
#endif
#if BIND_GSourceCallbackFuncs_TYPE
void mrb_GLib_GSourceCallbackFuncs_init(mrb_state* mrb);
#endif
#if BIND_GSourceFuncs_TYPE
void mrb_GLib_GSourceFuncs_init(mrb_state* mrb);
#endif
#if BIND_GSourcePrivate_TYPE
void mrb_GLib_GSourcePrivate_init(mrb_state* mrb);
#endif
#if BIND_GString_TYPE
void mrb_GLib_GString_init(mrb_state* mrb);
#endif
#if BIND_GStringChunk_TYPE
void mrb_GLib_GStringChunk_init(mrb_state* mrb);
#endif
#if BIND_GSubprocess_TYPE
void mrb_GLib_GSubprocess_init(mrb_state* mrb);
#endif
#if BIND_GSubprocessLauncher_TYPE
void mrb_GLib_GSubprocessLauncher_init(mrb_state* mrb);
#endif
#if BIND_GTestCase_TYPE
void mrb_GLib_GTestCase_init(mrb_state* mrb);
#endif
#if BIND_GTestConfig_TYPE
void mrb_GLib_GTestConfig_init(mrb_state* mrb);
#endif
#if BIND_GTestLogBuffer_TYPE
void mrb_GLib_GTestLogBuffer_init(mrb_state* mrb);
#endif
#if BIND_GTestLogMsg_TYPE
void mrb_GLib_GTestLogMsg_init(mrb_state* mrb);
#endif
#if BIND_GTestSuite_TYPE
void mrb_GLib_GTestSuite_init(mrb_state* mrb);
#endif
#if BIND_GThread_TYPE
void mrb_GLib_GThread_init(mrb_state* mrb);
#endif
#if BIND_GThreadPool_TYPE
void mrb_GLib_GThreadPool_init(mrb_state* mrb);
#endif
#if BIND_GTimer_TYPE
void mrb_GLib_GTimer_init(mrb_state* mrb);
#endif
#if BIND_GTimeVal_TYPE
void mrb_GLib_GTimeVal_init(mrb_state* mrb);
#endif
#if BIND_GTimeZone_TYPE
void mrb_GLib_GTimeZone_init(mrb_state* mrb);
#endif
#if BIND_GTrashStack_TYPE
void mrb_GLib_GTrashStack_init(mrb_state* mrb);
#endif
#if BIND_GTree_TYPE
void mrb_GLib_GTree_init(mrb_state* mrb);
#endif
#if BIND_GVariant_TYPE
void mrb_GLib_GVariant_init(mrb_state* mrb);
#endif
#if BIND_GVariantBuilder_TYPE
void mrb_GLib_GVariantBuilder_init(mrb_state* mrb);
#endif
#if BIND_GVariantDict_TYPE
void mrb_GLib_GVariantDict_init(mrb_state* mrb);
#endif
#if BIND_GVariantIter_TYPE
void mrb_GLib_GVariantIter_init(mrb_state* mrb);
#endif
#if BIND_GVariantType_TYPE
void mrb_GLib_GVariantType_init(mrb_state* mrb);
#endif

/*
 * Macro definition function declaration
 * -------------------------------------
 */
void mruby_GLib_define_macro_constants(mrb_state* mrb);

#endif
