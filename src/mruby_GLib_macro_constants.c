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
#ifdef G_DIR_SEPARATOR_S
  do {
    mrb_value macro = G_DIR_SEPARATOR_S == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_DIR_SEPARATOR_S);
    mrb_define_const(mrb, GLib_module(mrb), "G_DIR_SEPARATOR_S", macro);
  } while (0);
#endif
#ifdef G_E
  do {
    mrb_value macro = mrb_float_value(mrb, G_E);
    mrb_define_const(mrb, GLib_module(mrb), "G_E", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_ACCESS_CAN_DELETE
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_ACCESS_CAN_DELETE == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_ACCESS_CAN_DELETE);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_ACCESS_CAN_DELETE", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_ACCESS_CAN_EXECUTE
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_ACCESS_CAN_EXECUTE == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_ACCESS_CAN_EXECUTE);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_ACCESS_CAN_EXECUTE", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_ACCESS_CAN_READ
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_ACCESS_CAN_READ == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_ACCESS_CAN_READ);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_ACCESS_CAN_READ", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_ACCESS_CAN_RENAME
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_ACCESS_CAN_RENAME == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_ACCESS_CAN_RENAME);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_ACCESS_CAN_RENAME", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_ACCESS_CAN_TRASH
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_ACCESS_CAN_TRASH == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_ACCESS_CAN_TRASH);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_ACCESS_CAN_TRASH", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_ACCESS_CAN_WRITE
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_ACCESS_CAN_WRITE == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_ACCESS_CAN_WRITE);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_ACCESS_CAN_WRITE", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_DOS_IS_ARCHIVE
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_DOS_IS_ARCHIVE == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_DOS_IS_ARCHIVE);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_DOS_IS_ARCHIVE", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_DOS_IS_SYSTEM
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_DOS_IS_SYSTEM == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_DOS_IS_SYSTEM);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_DOS_IS_SYSTEM", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_ETAG_VALUE
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_ETAG_VALUE == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_ETAG_VALUE);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_ETAG_VALUE", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_FILESYSTEM_FREE
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_FILESYSTEM_FREE == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_FILESYSTEM_FREE);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_FILESYSTEM_FREE", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_FILESYSTEM_READONLY
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_FILESYSTEM_READONLY == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_FILESYSTEM_READONLY);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_FILESYSTEM_READONLY", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_FILESYSTEM_SIZE
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_FILESYSTEM_SIZE == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_FILESYSTEM_SIZE);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_FILESYSTEM_SIZE", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_FILESYSTEM_TYPE
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_FILESYSTEM_TYPE == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_FILESYSTEM_TYPE);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_FILESYSTEM_TYPE", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_FILESYSTEM_USE_PREVIEW
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_FILESYSTEM_USE_PREVIEW == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_FILESYSTEM_USE_PREVIEW);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_FILESYSTEM_USE_PREVIEW", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_FILESYSTEM_USED
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_FILESYSTEM_USED == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_FILESYSTEM_USED);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_FILESYSTEM_USED", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_GVFS_BACKEND
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_GVFS_BACKEND == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_GVFS_BACKEND);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_GVFS_BACKEND", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_ID_FILE
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_ID_FILE == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_ID_FILE);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_ID_FILE", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_ID_FILESYSTEM
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_ID_FILESYSTEM == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_ID_FILESYSTEM);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_ID_FILESYSTEM", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_MOUNTABLE_CAN_EJECT
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_MOUNTABLE_CAN_EJECT == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_MOUNTABLE_CAN_EJECT);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_MOUNTABLE_CAN_EJECT", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_MOUNTABLE_CAN_MOUNT
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_MOUNTABLE_CAN_MOUNT == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_MOUNTABLE_CAN_MOUNT);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_MOUNTABLE_CAN_MOUNT", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_MOUNTABLE_CAN_POLL
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_MOUNTABLE_CAN_POLL == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_MOUNTABLE_CAN_POLL);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_MOUNTABLE_CAN_POLL", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_MOUNTABLE_CAN_START
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_MOUNTABLE_CAN_START == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_MOUNTABLE_CAN_START);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_MOUNTABLE_CAN_START", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_MOUNTABLE_CAN_START_DEGRADED
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_MOUNTABLE_CAN_START_DEGRADED == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_MOUNTABLE_CAN_START_DEGRADED);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_MOUNTABLE_CAN_START_DEGRADED", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_MOUNTABLE_CAN_STOP
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_MOUNTABLE_CAN_STOP == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_MOUNTABLE_CAN_STOP);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_MOUNTABLE_CAN_STOP", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_MOUNTABLE_CAN_UNMOUNT
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_MOUNTABLE_CAN_UNMOUNT == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_MOUNTABLE_CAN_UNMOUNT);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_MOUNTABLE_CAN_UNMOUNT", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_MOUNTABLE_HAL_UDI
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_MOUNTABLE_HAL_UDI == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_MOUNTABLE_HAL_UDI);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_MOUNTABLE_HAL_UDI", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_MOUNTABLE_IS_MEDIA_CHECK_AUTOMATIC
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_MOUNTABLE_IS_MEDIA_CHECK_AUTOMATIC == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_MOUNTABLE_IS_MEDIA_CHECK_AUTOMATIC);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_MOUNTABLE_IS_MEDIA_CHECK_AUTOMATIC", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_MOUNTABLE_START_STOP_TYPE
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_MOUNTABLE_START_STOP_TYPE == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_MOUNTABLE_START_STOP_TYPE);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_MOUNTABLE_START_STOP_TYPE", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_MOUNTABLE_UNIX_DEVICE
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_MOUNTABLE_UNIX_DEVICE == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_MOUNTABLE_UNIX_DEVICE);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_MOUNTABLE_UNIX_DEVICE", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_MOUNTABLE_UNIX_DEVICE_FILE
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_MOUNTABLE_UNIX_DEVICE_FILE == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_MOUNTABLE_UNIX_DEVICE_FILE);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_MOUNTABLE_UNIX_DEVICE_FILE", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_OWNER_GROUP
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_OWNER_GROUP == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_OWNER_GROUP);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_OWNER_GROUP", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_OWNER_USER
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_OWNER_USER == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_OWNER_USER);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_OWNER_USER", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_OWNER_USER_REAL
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_OWNER_USER_REAL == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_OWNER_USER_REAL);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_OWNER_USER_REAL", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_PREVIEW_ICON
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_PREVIEW_ICON == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_PREVIEW_ICON);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_PREVIEW_ICON", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_SELINUX_CONTEXT
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_SELINUX_CONTEXT == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_SELINUX_CONTEXT);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_SELINUX_CONTEXT", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_STANDARD_ALLOCATED_SIZE
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_STANDARD_ALLOCATED_SIZE == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_STANDARD_ALLOCATED_SIZE);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_STANDARD_ALLOCATED_SIZE", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_STANDARD_CONTENT_TYPE
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_STANDARD_CONTENT_TYPE == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_STANDARD_CONTENT_TYPE);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_STANDARD_CONTENT_TYPE", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_STANDARD_COPY_NAME
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_STANDARD_COPY_NAME == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_STANDARD_COPY_NAME);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_STANDARD_COPY_NAME", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_STANDARD_DESCRIPTION
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_STANDARD_DESCRIPTION == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_STANDARD_DESCRIPTION);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_STANDARD_DESCRIPTION", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_STANDARD_DISPLAY_NAME
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_STANDARD_DISPLAY_NAME == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_STANDARD_DISPLAY_NAME);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_STANDARD_DISPLAY_NAME", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_STANDARD_EDIT_NAME
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_STANDARD_EDIT_NAME == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_STANDARD_EDIT_NAME);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_STANDARD_EDIT_NAME", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_STANDARD_FAST_CONTENT_TYPE
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_STANDARD_FAST_CONTENT_TYPE == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_STANDARD_FAST_CONTENT_TYPE);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_STANDARD_FAST_CONTENT_TYPE", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_STANDARD_ICON
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_STANDARD_ICON == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_STANDARD_ICON);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_STANDARD_ICON", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_STANDARD_IS_BACKUP
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_STANDARD_IS_BACKUP == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_STANDARD_IS_BACKUP);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_STANDARD_IS_BACKUP", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_STANDARD_IS_HIDDEN
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_STANDARD_IS_HIDDEN == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_STANDARD_IS_HIDDEN);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_STANDARD_IS_HIDDEN", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_STANDARD_IS_SYMLINK
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_STANDARD_IS_SYMLINK == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_STANDARD_IS_SYMLINK);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_STANDARD_IS_SYMLINK", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_STANDARD_IS_VIRTUAL
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_STANDARD_IS_VIRTUAL == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_STANDARD_IS_VIRTUAL);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_STANDARD_IS_VIRTUAL", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_STANDARD_IS_VOLATILE
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_STANDARD_IS_VOLATILE == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_STANDARD_IS_VOLATILE);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_STANDARD_IS_VOLATILE", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_STANDARD_NAME
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_STANDARD_NAME == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_STANDARD_NAME);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_STANDARD_NAME", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_STANDARD_SIZE
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_STANDARD_SIZE == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_STANDARD_SIZE);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_STANDARD_SIZE", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_STANDARD_SORT_ORDER
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_STANDARD_SORT_ORDER == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_STANDARD_SORT_ORDER);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_STANDARD_SORT_ORDER", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_STANDARD_SYMBOLIC_ICON
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_STANDARD_SYMBOLIC_ICON == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_STANDARD_SYMBOLIC_ICON);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_STANDARD_SYMBOLIC_ICON", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_STANDARD_SYMLINK_TARGET
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_STANDARD_SYMLINK_TARGET == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_STANDARD_SYMLINK_TARGET);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_STANDARD_SYMLINK_TARGET", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_STANDARD_TARGET_URI
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_STANDARD_TARGET_URI == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_STANDARD_TARGET_URI);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_STANDARD_TARGET_URI", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_STANDARD_TYPE
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_STANDARD_TYPE == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_STANDARD_TYPE);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_STANDARD_TYPE", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_THUMBNAIL_IS_VALID
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_THUMBNAIL_IS_VALID == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_THUMBNAIL_IS_VALID);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_THUMBNAIL_IS_VALID", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_THUMBNAIL_PATH
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_THUMBNAIL_PATH == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_THUMBNAIL_PATH);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_THUMBNAIL_PATH", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_THUMBNAILING_FAILED
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_THUMBNAILING_FAILED == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_THUMBNAILING_FAILED);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_THUMBNAILING_FAILED", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_TIME_ACCESS
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_TIME_ACCESS == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_TIME_ACCESS);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_TIME_ACCESS", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_TIME_ACCESS_USEC
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_TIME_ACCESS_USEC == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_TIME_ACCESS_USEC);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_TIME_ACCESS_USEC", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_TIME_CHANGED
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_TIME_CHANGED == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_TIME_CHANGED);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_TIME_CHANGED", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_TIME_CHANGED_USEC
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_TIME_CHANGED_USEC == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_TIME_CHANGED_USEC);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_TIME_CHANGED_USEC", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_TIME_CREATED
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_TIME_CREATED == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_TIME_CREATED);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_TIME_CREATED", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_TIME_CREATED_USEC
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_TIME_CREATED_USEC == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_TIME_CREATED_USEC);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_TIME_CREATED_USEC", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_TIME_MODIFIED
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_TIME_MODIFIED == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_TIME_MODIFIED);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_TIME_MODIFIED", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_TIME_MODIFIED_USEC
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_TIME_MODIFIED_USEC == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_TIME_MODIFIED_USEC);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_TIME_MODIFIED_USEC", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_TRASH_DELETION_DATE
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_TRASH_DELETION_DATE == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_TRASH_DELETION_DATE);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_TRASH_DELETION_DATE", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_TRASH_ITEM_COUNT
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_TRASH_ITEM_COUNT == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_TRASH_ITEM_COUNT);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_TRASH_ITEM_COUNT", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_TRASH_ORIG_PATH
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_TRASH_ORIG_PATH == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_TRASH_ORIG_PATH);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_TRASH_ORIG_PATH", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_UNIX_BLOCK_SIZE
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_UNIX_BLOCK_SIZE == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_UNIX_BLOCK_SIZE);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_UNIX_BLOCK_SIZE", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_UNIX_BLOCKS
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_UNIX_BLOCKS == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_UNIX_BLOCKS);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_UNIX_BLOCKS", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_UNIX_DEVICE
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_UNIX_DEVICE == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_UNIX_DEVICE);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_UNIX_DEVICE", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_UNIX_GID
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_UNIX_GID == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_UNIX_GID);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_UNIX_GID", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_UNIX_INODE
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_UNIX_INODE == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_UNIX_INODE);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_UNIX_INODE", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_UNIX_IS_MOUNTPOINT
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_UNIX_IS_MOUNTPOINT == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_UNIX_IS_MOUNTPOINT);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_UNIX_IS_MOUNTPOINT", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_UNIX_MODE
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_UNIX_MODE == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_UNIX_MODE);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_UNIX_MODE", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_UNIX_NLINK
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_UNIX_NLINK == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_UNIX_NLINK);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_UNIX_NLINK", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_UNIX_RDEV
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_UNIX_RDEV == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_UNIX_RDEV);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_UNIX_RDEV", macro);
  } while (0);
#endif
#ifdef G_FILE_ATTRIBUTE_UNIX_UID
  do {
    mrb_value macro = G_FILE_ATTRIBUTE_UNIX_UID == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_FILE_ATTRIBUTE_UNIX_UID);
    mrb_define_const(mrb, GLib_module(mrb), "G_FILE_ATTRIBUTE_UNIX_UID", macro);
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
#ifdef G_KEY_FILE_DESKTOP_GROUP
  do {
    mrb_value macro = G_KEY_FILE_DESKTOP_GROUP == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_KEY_FILE_DESKTOP_GROUP);
    mrb_define_const(mrb, GLib_module(mrb), "G_KEY_FILE_DESKTOP_GROUP", macro);
  } while (0);
#endif
#ifdef G_KEY_FILE_DESKTOP_KEY_ACTIONS
  do {
    mrb_value macro = G_KEY_FILE_DESKTOP_KEY_ACTIONS == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_KEY_FILE_DESKTOP_KEY_ACTIONS);
    mrb_define_const(mrb, GLib_module(mrb), "G_KEY_FILE_DESKTOP_KEY_ACTIONS", macro);
  } while (0);
#endif
#ifdef G_KEY_FILE_DESKTOP_KEY_CATEGORIES
  do {
    mrb_value macro = G_KEY_FILE_DESKTOP_KEY_CATEGORIES == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_KEY_FILE_DESKTOP_KEY_CATEGORIES);
    mrb_define_const(mrb, GLib_module(mrb), "G_KEY_FILE_DESKTOP_KEY_CATEGORIES", macro);
  } while (0);
#endif
#ifdef G_KEY_FILE_DESKTOP_KEY_COMMENT
  do {
    mrb_value macro = G_KEY_FILE_DESKTOP_KEY_COMMENT == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_KEY_FILE_DESKTOP_KEY_COMMENT);
    mrb_define_const(mrb, GLib_module(mrb), "G_KEY_FILE_DESKTOP_KEY_COMMENT", macro);
  } while (0);
#endif
#ifdef G_KEY_FILE_DESKTOP_KEY_DBUS_ACTIVATABLE
  do {
    mrb_value macro = G_KEY_FILE_DESKTOP_KEY_DBUS_ACTIVATABLE == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_KEY_FILE_DESKTOP_KEY_DBUS_ACTIVATABLE);
    mrb_define_const(mrb, GLib_module(mrb), "G_KEY_FILE_DESKTOP_KEY_DBUS_ACTIVATABLE", macro);
  } while (0);
#endif
#ifdef G_KEY_FILE_DESKTOP_KEY_EXEC
  do {
    mrb_value macro = G_KEY_FILE_DESKTOP_KEY_EXEC == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_KEY_FILE_DESKTOP_KEY_EXEC);
    mrb_define_const(mrb, GLib_module(mrb), "G_KEY_FILE_DESKTOP_KEY_EXEC", macro);
  } while (0);
#endif
#ifdef G_KEY_FILE_DESKTOP_KEY_GENERIC_NAME
  do {
    mrb_value macro = G_KEY_FILE_DESKTOP_KEY_GENERIC_NAME == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_KEY_FILE_DESKTOP_KEY_GENERIC_NAME);
    mrb_define_const(mrb, GLib_module(mrb), "G_KEY_FILE_DESKTOP_KEY_GENERIC_NAME", macro);
  } while (0);
#endif
#ifdef G_KEY_FILE_DESKTOP_KEY_HIDDEN
  do {
    mrb_value macro = G_KEY_FILE_DESKTOP_KEY_HIDDEN == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_KEY_FILE_DESKTOP_KEY_HIDDEN);
    mrb_define_const(mrb, GLib_module(mrb), "G_KEY_FILE_DESKTOP_KEY_HIDDEN", macro);
  } while (0);
#endif
#ifdef G_KEY_FILE_DESKTOP_KEY_ICON
  do {
    mrb_value macro = G_KEY_FILE_DESKTOP_KEY_ICON == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_KEY_FILE_DESKTOP_KEY_ICON);
    mrb_define_const(mrb, GLib_module(mrb), "G_KEY_FILE_DESKTOP_KEY_ICON", macro);
  } while (0);
#endif
#ifdef G_KEY_FILE_DESKTOP_KEY_MIME_TYPE
  do {
    mrb_value macro = G_KEY_FILE_DESKTOP_KEY_MIME_TYPE == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_KEY_FILE_DESKTOP_KEY_MIME_TYPE);
    mrb_define_const(mrb, GLib_module(mrb), "G_KEY_FILE_DESKTOP_KEY_MIME_TYPE", macro);
  } while (0);
#endif
#ifdef G_KEY_FILE_DESKTOP_KEY_NAME
  do {
    mrb_value macro = G_KEY_FILE_DESKTOP_KEY_NAME == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_KEY_FILE_DESKTOP_KEY_NAME);
    mrb_define_const(mrb, GLib_module(mrb), "G_KEY_FILE_DESKTOP_KEY_NAME", macro);
  } while (0);
#endif
#ifdef G_KEY_FILE_DESKTOP_KEY_NO_DISPLAY
  do {
    mrb_value macro = G_KEY_FILE_DESKTOP_KEY_NO_DISPLAY == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_KEY_FILE_DESKTOP_KEY_NO_DISPLAY);
    mrb_define_const(mrb, GLib_module(mrb), "G_KEY_FILE_DESKTOP_KEY_NO_DISPLAY", macro);
  } while (0);
#endif
#ifdef G_KEY_FILE_DESKTOP_KEY_NOT_SHOW_IN
  do {
    mrb_value macro = G_KEY_FILE_DESKTOP_KEY_NOT_SHOW_IN == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_KEY_FILE_DESKTOP_KEY_NOT_SHOW_IN);
    mrb_define_const(mrb, GLib_module(mrb), "G_KEY_FILE_DESKTOP_KEY_NOT_SHOW_IN", macro);
  } while (0);
#endif
#ifdef G_KEY_FILE_DESKTOP_KEY_ONLY_SHOW_IN
  do {
    mrb_value macro = G_KEY_FILE_DESKTOP_KEY_ONLY_SHOW_IN == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_KEY_FILE_DESKTOP_KEY_ONLY_SHOW_IN);
    mrb_define_const(mrb, GLib_module(mrb), "G_KEY_FILE_DESKTOP_KEY_ONLY_SHOW_IN", macro);
  } while (0);
#endif
#ifdef G_KEY_FILE_DESKTOP_KEY_PATH
  do {
    mrb_value macro = G_KEY_FILE_DESKTOP_KEY_PATH == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_KEY_FILE_DESKTOP_KEY_PATH);
    mrb_define_const(mrb, GLib_module(mrb), "G_KEY_FILE_DESKTOP_KEY_PATH", macro);
  } while (0);
#endif
#ifdef G_KEY_FILE_DESKTOP_KEY_STARTUP_NOTIFY
  do {
    mrb_value macro = G_KEY_FILE_DESKTOP_KEY_STARTUP_NOTIFY == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_KEY_FILE_DESKTOP_KEY_STARTUP_NOTIFY);
    mrb_define_const(mrb, GLib_module(mrb), "G_KEY_FILE_DESKTOP_KEY_STARTUP_NOTIFY", macro);
  } while (0);
#endif
#ifdef G_KEY_FILE_DESKTOP_KEY_STARTUP_WM_CLASS
  do {
    mrb_value macro = G_KEY_FILE_DESKTOP_KEY_STARTUP_WM_CLASS == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_KEY_FILE_DESKTOP_KEY_STARTUP_WM_CLASS);
    mrb_define_const(mrb, GLib_module(mrb), "G_KEY_FILE_DESKTOP_KEY_STARTUP_WM_CLASS", macro);
  } while (0);
#endif
#ifdef G_KEY_FILE_DESKTOP_KEY_TERMINAL
  do {
    mrb_value macro = G_KEY_FILE_DESKTOP_KEY_TERMINAL == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_KEY_FILE_DESKTOP_KEY_TERMINAL);
    mrb_define_const(mrb, GLib_module(mrb), "G_KEY_FILE_DESKTOP_KEY_TERMINAL", macro);
  } while (0);
#endif
#ifdef G_KEY_FILE_DESKTOP_KEY_TRY_EXEC
  do {
    mrb_value macro = G_KEY_FILE_DESKTOP_KEY_TRY_EXEC == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_KEY_FILE_DESKTOP_KEY_TRY_EXEC);
    mrb_define_const(mrb, GLib_module(mrb), "G_KEY_FILE_DESKTOP_KEY_TRY_EXEC", macro);
  } while (0);
#endif
#ifdef G_KEY_FILE_DESKTOP_KEY_TYPE
  do {
    mrb_value macro = G_KEY_FILE_DESKTOP_KEY_TYPE == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_KEY_FILE_DESKTOP_KEY_TYPE);
    mrb_define_const(mrb, GLib_module(mrb), "G_KEY_FILE_DESKTOP_KEY_TYPE", macro);
  } while (0);
#endif
#ifdef G_KEY_FILE_DESKTOP_KEY_URL
  do {
    mrb_value macro = G_KEY_FILE_DESKTOP_KEY_URL == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_KEY_FILE_DESKTOP_KEY_URL);
    mrb_define_const(mrb, GLib_module(mrb), "G_KEY_FILE_DESKTOP_KEY_URL", macro);
  } while (0);
#endif
#ifdef G_KEY_FILE_DESKTOP_KEY_VERSION
  do {
    mrb_value macro = G_KEY_FILE_DESKTOP_KEY_VERSION == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_KEY_FILE_DESKTOP_KEY_VERSION);
    mrb_define_const(mrb, GLib_module(mrb), "G_KEY_FILE_DESKTOP_KEY_VERSION", macro);
  } while (0);
#endif
#ifdef G_KEY_FILE_DESKTOP_TYPE_APPLICATION
  do {
    mrb_value macro = G_KEY_FILE_DESKTOP_TYPE_APPLICATION == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_KEY_FILE_DESKTOP_TYPE_APPLICATION);
    mrb_define_const(mrb, GLib_module(mrb), "G_KEY_FILE_DESKTOP_TYPE_APPLICATION", macro);
  } while (0);
#endif
#ifdef G_KEY_FILE_DESKTOP_TYPE_DIRECTORY
  do {
    mrb_value macro = G_KEY_FILE_DESKTOP_TYPE_DIRECTORY == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_KEY_FILE_DESKTOP_TYPE_DIRECTORY);
    mrb_define_const(mrb, GLib_module(mrb), "G_KEY_FILE_DESKTOP_TYPE_DIRECTORY", macro);
  } while (0);
#endif
#ifdef G_KEY_FILE_DESKTOP_TYPE_LINK
  do {
    mrb_value macro = G_KEY_FILE_DESKTOP_TYPE_LINK == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_KEY_FILE_DESKTOP_TYPE_LINK);
    mrb_define_const(mrb, GLib_module(mrb), "G_KEY_FILE_DESKTOP_TYPE_LINK", macro);
  } while (0);
#endif
#ifdef G_KEY_FILE_ERROR
  do {
    mrb_value macro = mrb_fixnum_value(G_KEY_FILE_ERROR);
    mrb_define_const(mrb, GLib_module(mrb), "G_KEY_FILE_ERROR", macro);
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
#ifdef G_POLLFD_FORMAT
  do {
    mrb_value macro = G_POLLFD_FORMAT == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_POLLFD_FORMAT);
    mrb_define_const(mrb, GLib_module(mrb), "G_POLLFD_FORMAT", macro);
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
#ifdef G_STR_DELIMITERS
  do {
    mrb_value macro = G_STR_DELIMITERS == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, G_STR_DELIMITERS);
    mrb_define_const(mrb, GLib_module(mrb), "G_STR_DELIMITERS", macro);
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
