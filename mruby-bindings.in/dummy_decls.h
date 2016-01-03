#include "glib.h"

struct _GFile {};
struct _GFileInfo {};
struct _GInputStream {};
struct _GOutputStream {};
struct _GIOStream {};
struct _GFileInputStream {};
struct _GFileOutputStream {};
struct _GFileIOStream {};
struct _GSeekable {};
struct _GSubprocess {};
struct _GSubprocessLauncher {};

int
g_stat (const gchar *filename,
        GStatBuf *buf);

int
g_open (const gchar *filename,
        int flags,
        int mode);

int
g_creat (const gchar *filename,
         int mode);
         
int
g_rename (const gchar *oldfilename,
          const gchar *newfilename);

int g_mkdir(const gchar * filename,
            int mode);

int
g_stat (const gchar *filename,
        GStatBuf *buf);

int
g_stat (const gchar *filename,
        GStatBuf *buf);

int
g_remove (const gchar *filename);

FILE *
g_fopen (const gchar *filename,
         const gchar *mode);

FILE *
g_freopen (const gchar *filename,
           const gchar *mode,
           FILE *stream);

int
g_utime (const gchar *filename,
         struct utimbuf *utb);
