#include "mruby_GLib.h"

void
mruby_GLib_define_macro_constants(mrb_state* mrb) {
#ifdef FALSE
  do {
    mrb_value macro = mrb_bool_value(FALSE);
    mrb_define_const(mrb, GLib_module(mrb), "FALSE", macro);
  } while (0);
#endif
#ifdef G_ASCII_DTOSTR_BUF_SIZE
  do {
    mrb_value macro = mrb_fixnum_value(G_ASCII_DTOSTR_BUF_SIZE);
    mrb_define_const(mrb, GLib_module(mrb), "G_ASCII_DTOSTR_BUF_SIZE", macro);
  } while (0);
#endif
#ifdef G_BIG_ENDIAN
  do {
    mrb_value macro = mrb_fixnum_value(G_BIG_ENDIAN);
    mrb_define_const(mrb, GLib_module(mrb), "G_BIG_ENDIAN", macro);
  } while (0);
#endif
#ifdef G_BOOKMARK_FILE_ERROR
  do {
    mrb_value macro = mrb_fixnum_value(G_BOOKMARK_FILE_ERROR);
    mrb_define_const(mrb, GLib_module(mrb), "G_BOOKMARK_FILE_ERROR", macro);
  } while (0);
#endif
#ifdef G_CONVERT_ERROR
  do {
    mrb_value macro = mrb_fixnum_value(G_CONVERT_ERROR);
    mrb_define_const(mrb, GLib_module(mrb), "G_CONVERT_ERROR", macro);
  } while (0);
#endif
#ifdef G_DATALIST_FLAGS_MASK
  do {
    mrb_value macro = mrb_fixnum_value(G_DATALIST_FLAGS_MASK);
    mrb_define_const(mrb, GLib_module(mrb), "G_DATALIST_FLAGS_MASK", macro);
  } while (0);
#endif
#ifdef G_DATE_BAD_DAY
  do {
    mrb_value macro = mrb_fixnum_value(G_DATE_BAD_DAY);
    mrb_define_const(mrb, GLib_module(mrb), "G_DATE_BAD_DAY", macro);
  } while (0);
#endif
#ifdef G_DATE_BAD_JULIAN
  do {
    mrb_value macro = mrb_fixnum_value(G_DATE_BAD_JULIAN);
    mrb_define_const(mrb, GLib_module(mrb), "G_DATE_BAD_JULIAN", macro);
  } while (0);
#endif
#ifdef G_DATE_BAD_YEAR
  do {
    mrb_value macro = mrb_fixnum_value(G_DATE_BAD_YEAR);
    mrb_define_const(mrb, GLib_module(mrb), "G_DATE_BAD_YEAR", macro);
  } while (0);
#endif
#ifdef G_DIR_SEPARATOR
  do {
    mrb_value macro = mrb_fixnum_value(G_DIR_SEPARATOR);
    mrb_define_const(mrb, GLib_module(mrb), "G_DIR_SEPARATOR", macro);
  } while (0);
#endif
#ifdef G_E
  do {
    mrb_value macro = mrb_float_value(mrb, G_E);
    mrb_define_const(mrb, GLib_module(mrb), "G_E", macro);
  } while (0);
#endif
#ifdef G_HOOK_FLAG_USER_SHIFT
  do {
    mrb_value macro = mrb_fixnum_value(G_HOOK_FLAG_USER_SHIFT);
    mrb_define_const(mrb, GLib_module(mrb), "G_HOOK_FLAG_USER_SHIFT", macro);
  } while (0);
#endif
#ifdef G_IEEE754_DOUBLE_BIAS
  do {
    mrb_value macro = mrb_fixnum_value(G_IEEE754_DOUBLE_BIAS);
    mrb_define_const(mrb, GLib_module(mrb), "G_IEEE754_DOUBLE_BIAS", macro);
  } while (0);
#endif
#ifdef G_IEEE754_FLOAT_BIAS
  do {
    mrb_value macro = mrb_fixnum_value(G_IEEE754_FLOAT_BIAS);
    mrb_define_const(mrb, GLib_module(mrb), "G_IEEE754_FLOAT_BIAS", macro);
  } while (0);
#endif
#ifdef G_IO_CHANNEL_ERROR
  do {
    mrb_value macro = mrb_fixnum_value(G_IO_CHANNEL_ERROR);
    mrb_define_const(mrb, GLib_module(mrb), "G_IO_CHANNEL_ERROR", macro);
  } while (0);
#endif
#ifdef G_LITTLE_ENDIAN
  do {
    mrb_value macro = mrb_fixnum_value(G_LITTLE_ENDIAN);
    mrb_define_const(mrb, GLib_module(mrb), "G_LITTLE_ENDIAN", macro);
  } while (0);
#endif
#ifdef G_LN10
  do {
    mrb_value macro = mrb_float_value(mrb, G_LN10);
    mrb_define_const(mrb, GLib_module(mrb), "G_LN10", macro);
  } while (0);
#endif
#ifdef G_LN2
  do {
    mrb_value macro = mrb_float_value(mrb, G_LN2);
    mrb_define_const(mrb, GLib_module(mrb), "G_LN2", macro);
  } while (0);
#endif
#ifdef G_LOG_2_BASE_10
  do {
    mrb_value macro = mrb_float_value(mrb, G_LOG_2_BASE_10);
    mrb_define_const(mrb, GLib_module(mrb), "G_LOG_2_BASE_10", macro);
  } while (0);
#endif
#ifdef G_LOG_DOMAIN
  do {
    mrb_value macro = mrb_fixnum_value(G_LOG_DOMAIN);
    mrb_define_const(mrb, GLib_module(mrb), "G_LOG_DOMAIN", macro);
  } while (0);
#endif
#ifdef G_LOG_FATAL_MASK
  do {
    mrb_value macro = mrb_fixnum_value(G_LOG_FATAL_MASK);
    mrb_define_const(mrb, GLib_module(mrb), "G_LOG_FATAL_MASK", macro);
  } while (0);
#endif
#ifdef G_LOG_LEVEL_USER_SHIFT
  do {
    mrb_value macro = mrb_fixnum_value(G_LOG_LEVEL_USER_SHIFT);
    mrb_define_const(mrb, GLib_module(mrb), "G_LOG_LEVEL_USER_SHIFT", macro);
  } while (0);
#endif
#ifdef G_MAXINT16
  do {
    mrb_value macro = mrb_fixnum_value(G_MAXINT16);
    mrb_define_const(mrb, GLib_module(mrb), "G_MAXINT16", macro);
  } while (0);
#endif
#ifdef G_MAXINT32
  do {
    mrb_value macro = mrb_fixnum_value(G_MAXINT32);
    mrb_define_const(mrb, GLib_module(mrb), "G_MAXINT32", macro);
  } while (0);
#endif
#ifdef G_MAXINT64
  do {
    mrb_value macro = mrb_fixnum_value(G_MAXINT64);
    mrb_define_const(mrb, GLib_module(mrb), "G_MAXINT64", macro);
  } while (0);
#endif
#ifdef G_MAXINT8
  do {
    mrb_value macro = mrb_fixnum_value(G_MAXINT8);
    mrb_define_const(mrb, GLib_module(mrb), "G_MAXINT8", macro);
  } while (0);
#endif
#ifdef G_MAXUINT16
  do {
    mrb_value macro = mrb_fixnum_value(G_MAXUINT16);
    mrb_define_const(mrb, GLib_module(mrb), "G_MAXUINT16", macro);
  } while (0);
#endif
#ifdef G_MAXUINT32
  do {
    mrb_value macro = mrb_fixnum_value(G_MAXUINT32);
    mrb_define_const(mrb, GLib_module(mrb), "G_MAXUINT32", macro);
  } while (0);
#endif
#ifdef G_MAXUINT64
  do {
    mrb_value macro = mrb_fixnum_value(G_MAXUINT64);
    mrb_define_const(mrb, GLib_module(mrb), "G_MAXUINT64", macro);
  } while (0);
#endif
#ifdef G_MAXUINT8
  do {
    mrb_value macro = mrb_fixnum_value(G_MAXUINT8);
    mrb_define_const(mrb, GLib_module(mrb), "G_MAXUINT8", macro);
  } while (0);
#endif
#ifdef G_MININT16
  do {
    mrb_value macro = mrb_fixnum_value(G_MININT16);
    mrb_define_const(mrb, GLib_module(mrb), "G_MININT16", macro);
  } while (0);
#endif
#ifdef G_MININT32
  do {
    mrb_value macro = mrb_fixnum_value(G_MININT32);
    mrb_define_const(mrb, GLib_module(mrb), "G_MININT32", macro);
  } while (0);
#endif
#ifdef G_MININT64
  do {
    mrb_value macro = mrb_fixnum_value(G_MININT64);
    mrb_define_const(mrb, GLib_module(mrb), "G_MININT64", macro);
  } while (0);
#endif
#ifdef G_MININT8
  do {
    mrb_value macro = mrb_fixnum_value(G_MININT8);
    mrb_define_const(mrb, GLib_module(mrb), "G_MININT8", macro);
  } while (0);
#endif
#ifdef G_OPTION_ERROR
  do {
    mrb_value macro = mrb_fixnum_value(G_OPTION_ERROR);
    mrb_define_const(mrb, GLib_module(mrb), "G_OPTION_ERROR", macro);
  } while (0);
#endif
#ifdef G_OPTION_REMAINING
  do {
    mrb_value macro = mrb_fixnum_value(G_OPTION_REMAINING);
    mrb_define_const(mrb, GLib_module(mrb), "G_OPTION_REMAINING", macro);
  } while (0);
#endif
#ifdef G_PDP_ENDIAN
  do {
    mrb_value macro = mrb_fixnum_value(G_PDP_ENDIAN);
    mrb_define_const(mrb, GLib_module(mrb), "G_PDP_ENDIAN", macro);
  } while (0);
#endif
#ifdef G_PI
  do {
    mrb_value macro = mrb_float_value(mrb, G_PI);
    mrb_define_const(mrb, GLib_module(mrb), "G_PI", macro);
  } while (0);
#endif
#ifdef G_PI_2
  do {
    mrb_value macro = mrb_float_value(mrb, G_PI_2);
    mrb_define_const(mrb, GLib_module(mrb), "G_PI_2", macro);
  } while (0);
#endif
#ifdef G_PI_4
  do {
    mrb_value macro = mrb_float_value(mrb, G_PI_4);
    mrb_define_const(mrb, GLib_module(mrb), "G_PI_4", macro);
  } while (0);
#endif
#ifdef G_PRIORITY_DEFAULT
  do {
    mrb_value macro = mrb_fixnum_value(G_PRIORITY_DEFAULT);
    mrb_define_const(mrb, GLib_module(mrb), "G_PRIORITY_DEFAULT", macro);
  } while (0);
#endif
#ifdef G_PRIORITY_DEFAULT_IDLE
  do {
    mrb_value macro = mrb_fixnum_value(G_PRIORITY_DEFAULT_IDLE);
    mrb_define_const(mrb, GLib_module(mrb), "G_PRIORITY_DEFAULT_IDLE", macro);
  } while (0);
#endif
#ifdef G_PRIORITY_HIGH
  do {
    mrb_value macro = mrb_fixnum_value(G_PRIORITY_HIGH);
    mrb_define_const(mrb, GLib_module(mrb), "G_PRIORITY_HIGH", macro);
  } while (0);
#endif
#ifdef G_PRIORITY_HIGH_IDLE
  do {
    mrb_value macro = mrb_fixnum_value(G_PRIORITY_HIGH_IDLE);
    mrb_define_const(mrb, GLib_module(mrb), "G_PRIORITY_HIGH_IDLE", macro);
  } while (0);
#endif
#ifdef G_PRIORITY_LOW
  do {
    mrb_value macro = mrb_fixnum_value(G_PRIORITY_LOW);
    mrb_define_const(mrb, GLib_module(mrb), "G_PRIORITY_LOW", macro);
  } while (0);
#endif
#ifdef G_REGEX_ERROR
  do {
    mrb_value macro = mrb_fixnum_value(G_REGEX_ERROR);
    mrb_define_const(mrb, GLib_module(mrb), "G_REGEX_ERROR", macro);
  } while (0);
#endif
#ifdef G_SEARCHPATH_SEPARATOR
  do {
    mrb_value macro = mrb_fixnum_value(G_SEARCHPATH_SEPARATOR);
    mrb_define_const(mrb, GLib_module(mrb), "G_SEARCHPATH_SEPARATOR", macro);
  } while (0);
#endif
#ifdef G_SEARCHPATH_SEPARATOR_S
  do {
    mrb_value macro = mrb_fixnum_value(G_SEARCHPATH_SEPARATOR_S);
    mrb_define_const(mrb, GLib_module(mrb), "G_SEARCHPATH_SEPARATOR_S", macro);
  } while (0);
#endif
#ifdef G_SHELL_ERROR
  do {
    mrb_value macro = mrb_fixnum_value(G_SHELL_ERROR);
    mrb_define_const(mrb, GLib_module(mrb), "G_SHELL_ERROR", macro);
  } while (0);
#endif
#ifdef G_SPAWN_ERROR
  do {
    mrb_value macro = mrb_fixnum_value(G_SPAWN_ERROR);
    mrb_define_const(mrb, GLib_module(mrb), "G_SPAWN_ERROR", macro);
  } while (0);
#endif
#ifdef G_SPAWN_EXIT_ERROR
  do {
    mrb_value macro = mrb_fixnum_value(G_SPAWN_EXIT_ERROR);
    mrb_define_const(mrb, GLib_module(mrb), "G_SPAWN_EXIT_ERROR", macro);
  } while (0);
#endif
#ifdef G_SQRT2
  do {
    mrb_value macro = mrb_float_value(mrb, G_SQRT2);
    mrb_define_const(mrb, GLib_module(mrb), "G_SQRT2", macro);
  } while (0);
#endif
#ifdef G_THREAD_ERROR
  do {
    mrb_value macro = mrb_fixnum_value(G_THREAD_ERROR);
    mrb_define_const(mrb, GLib_module(mrb), "G_THREAD_ERROR", macro);
  } while (0);
#endif
#ifdef TRUE
  do {
    mrb_value macro = mrb_bool_value(TRUE);
    mrb_define_const(mrb, GLib_module(mrb), "TRUE", macro);
  } while (0);
#endif
}
