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

#include "mruby_GLib_functions.h"
#include "mruby_GLib_classes.h"
#include "mruby_GLib_boxing.h"
#include <stdlib.h>
#include "mruby.h"
#include "mruby/array.h"
#include "mruby/class.h"
#include "mruby/data.h"
#include "mruby/string.h"
#include "mruby/value.h"
#include "mruby/variable.h"
#include "g-gnulib.h"
#include "galloca.h"
#include "garray.h"
#include "gasyncqueue.h"
#include "gasyncqueueprivate.h"
#include "gatomic.h"
#include "gbacktrace.h"
#include "gbase64.h"
#include "gbitlock.h"
#include "gbookmarkfile.h"
#include "gbsearcharray.h"
#include "gbytes.h"
#include "gcharset.h"
#include "gcharsetprivate.h"
#include "gchecksum.h"
#include "gconstructor.h"
#include "gconvert.h"
#include "gdataset.h"
#include "gdatasetprivate.h"
#include "gdate.h"
#include "gdatetime.h"
#include "gdir.h"
#include "genviron.h"
#include "gerror.h"
#include "gfileutils.h"
#include "ggettext.h"
#include "ghash.h"
#include "ghmac.h"
#include "ghook.h"
#include "ghostutils.h"
#include "gi18n-lib.h"
#include "gi18n.h"
#include "giochannel.h"
#include "gkeyfile.h"
#include "glib-autocleanups.h"
#include "glib-init.h"
#include "glib-object.h"
#include "glib-private.h"
#include "glib-unix.h"
#include "glib.h"
#include "glib_trace.h"
#include "glibconfig.h"
#include "glibintl.h"
#include "glist.h"
#include "gmacros.h"
#include "gmain-internal.h"
#include "gmain.h"
#include "gmappedfile.h"
#include "gmarkup.h"
#include "gmem.h"
#include "gmessages.h"
#include "gmirroringtable.h"
#include "gnode.h"
#include "goption.h"
#include "gpattern.h"
#include "gpoll.h"
#include "gprimes.h"
#include "gprintf.h"
#include "gprintfint.h"
#include "gqsort.h"
#include "gquark.h"
#include "gqueue.h"
#include "grand.h"
#include "gregex.h"
#include "gscanner.h"
#include "gscripttable.h"
#include "gsequence.h"
#include "gshell.h"
#include "gslice.h"
#include "gslist.h"
#include "gspawn.h"
#include "gstdio.h"
#include "gstrfuncs.h"
#include "gstring.h"
#include "gstringchunk.h"
#include "gtestutils.h"
#include "gthread.h"
#include "gthreadpool.h"
#include "gthreadprivate.h"
#include "gtimer.h"
#include "gtimezone.h"
#include "gtranslit-data.h"
#include "gtrashstack.h"
#include "gtree.h"
#include "gtypes.h"
#include "gunibreak.h"
#include "gunichartables.h"
#include "gunicode.h"
#include "gunicodeprivate.h"
#include "gunicomp.h"
#include "gunidecomp.h"
#include "gurifuncs.h"
#include "gutils.h"
#include "gvariant-core.h"
#include "gvariant-internal.h"
#include "gvariant-serialiser.h"
#include "gvariant.h"
#include "gvarianttype.h"
#include "gvarianttypeinfo.h"
#include "gversion.h"
#include "gversionmacros.h"
#include "gwakeup.h"
#include "gwin32.h"
#include "packtab.h"
#include "printf-args.h"
#include "printf-parse.h"
#include "printf.h"
#include "vasnprintf.h"
#include "verify.h"
#include "xsize.h"

/*
 * RClass Macros
 * -------------
 *
 * Macros for retrieving the RClass*'s defined by this gem.
 */

#define GLib_module(mrb) mrb_module_get(mrb, "GLib")
#define Argument_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "Argument")
#define Arguments_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "Arguments")
#define CharDirective_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "CharDirective")
#define CharDirectives_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "CharDirectives")
#define Decomposition_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "Decomposition")
#define DecompositionStep_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "DecompositionStep")
#define GBSearchConfig_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GBSearchConfig")
#define GLibPrivateVTable_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GLibPrivateVTable")
#define GTestConfig_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GTestConfig")
#define GTestLogBuffer_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GTestLogBuffer")
#define GTestLogMsg_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GTestLogMsg")
#define GVariantMemberInfo_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GVariantMemberInfo")
#define GVariantSerialised_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GVariantSerialised")
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
#define GHashTable_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GHashTable")
#define GHashTableIter_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GHashTableIter")
#define GHmac_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GHmac")
#define GHook_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GHook")
#define GHookList_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GHookList")
#define GIConv_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GIConv")
#define GIOChannel_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GIOChannel")
#define GIOFuncs_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GIOFuncs")
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
#define GPatternSpec_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GPatternSpec")
#define GPollFD_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GPollFD")
#define GPrivate_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GPrivate")
#define GPtrArray_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GPtrArray")
#define GQueue_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GQueue")
#define GRand_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GRand")
#define GRealThread_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GRealThread")
#define GRecMutex_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GRecMutex")
#define GRegex_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GRegex")
#define GRWLock_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GRWLock")
#define GScanner_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GScanner")
#define GScannerConfig_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GScannerConfig")
#define GSequence_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GSequence")
#define GSequenceNode_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GSequenceNode")
#define GSList_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GSList")
#define GSource_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GSource")
#define GSourceCallbackFuncs_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GSourceCallbackFuncs")
#define GSourceFuncs_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GSourceFuncs")
#define GSourcePrivate_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GSourcePrivate")
#define GString_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GString")
#define GStringChunk_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GStringChunk")
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
#define GVariantTypeInfo_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GVariantTypeInfo")
#define GWakeup_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GWakeup")
#define GTestCase_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GTestCase")
#define GTestSuite_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "GTestSuite")
#define Interval_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "Interval")
#define LocaleEntry_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "LocaleEntry")
#define MappingEntry_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "MappingEntry")
#define MappingRange_class(mrb) mrb_class_get_under(mrb, GLib_module(mrb), "MappingRange")

/*
 * Class initialization function declarations
 * ------------------------------------------
 *
 * These declarations are controlled by the macros in the
 * "Class Bindings Options" section above.
 */

#if BIND_Argument_TYPE
void mrb_GLib_Argument_init(mrb_state* mrb);
#endif
#if BIND_Arguments_TYPE
void mrb_GLib_Arguments_init(mrb_state* mrb);
#endif
#if BIND_CharDirective_TYPE
void mrb_GLib_CharDirective_init(mrb_state* mrb);
#endif
#if BIND_CharDirectives_TYPE
void mrb_GLib_CharDirectives_init(mrb_state* mrb);
#endif
#if BIND_Decomposition_TYPE
void mrb_GLib_Decomposition_init(mrb_state* mrb);
#endif
#if BIND_DecompositionStep_TYPE
void mrb_GLib_DecompositionStep_init(mrb_state* mrb);
#endif
#if BIND_GBSearchConfig_TYPE
void mrb_GLib_GBSearchConfig_init(mrb_state* mrb);
#endif
#if BIND_GLibPrivateVTable_TYPE
void mrb_GLib_GLibPrivateVTable_init(mrb_state* mrb);
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
#if BIND_GVariantMemberInfo_TYPE
void mrb_GLib_GVariantMemberInfo_init(mrb_state* mrb);
#endif
#if BIND_GVariantSerialised_TYPE
void mrb_GLib_GVariantSerialised_init(mrb_state* mrb);
#endif
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
#if BIND_GIOChannel_TYPE
void mrb_GLib_GIOChannel_init(mrb_state* mrb);
#endif
#if BIND_GIOFuncs_TYPE
void mrb_GLib_GIOFuncs_init(mrb_state* mrb);
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
#if BIND_GRealThread_TYPE
void mrb_GLib_GRealThread_init(mrb_state* mrb);
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
#if BIND_GSequence_TYPE
void mrb_GLib_GSequence_init(mrb_state* mrb);
#endif
#if BIND_GSequenceNode_TYPE
void mrb_GLib_GSequenceNode_init(mrb_state* mrb);
#endif
#if BIND_GSList_TYPE
void mrb_GLib_GSList_init(mrb_state* mrb);
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
#if BIND_GVariantTypeInfo_TYPE
void mrb_GLib_GVariantTypeInfo_init(mrb_state* mrb);
#endif
#if BIND_GWakeup_TYPE
void mrb_GLib_GWakeup_init(mrb_state* mrb);
#endif
#if BIND_GTestCase_TYPE
void mrb_GLib_GTestCase_init(mrb_state* mrb);
#endif
#if BIND_GTestSuite_TYPE
void mrb_GLib_GTestSuite_init(mrb_state* mrb);
#endif
#if BIND_Interval_TYPE
void mrb_GLib_Interval_init(mrb_state* mrb);
#endif
#if BIND_LocaleEntry_TYPE
void mrb_GLib_LocaleEntry_init(mrb_state* mrb);
#endif
#if BIND_MappingEntry_TYPE
void mrb_GLib_MappingEntry_init(mrb_state* mrb);
#endif
#if BIND_MappingRange_TYPE
void mrb_GLib_MappingRange_init(mrb_state* mrb);
#endif

/*
 * Macro definition function declaration
 * -------------------------------------
 */
void mruby_GLib_define_macro_constants(mrb_state* mrb);

#endif