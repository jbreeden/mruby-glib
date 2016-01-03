## gchar * g_build_filenamev(char ** args)
# Param: args
CTypes.set_fn_param_type('g_build_filenamev', 'args', CTypes['nullterminated:cstring:array'])

## gchar * g_build_pathv(const char * separator, char ** args)
# Param: args
CTypes.set_fn_param_type('g_build_pathv', 'args', CTypes['nullterminated:cstring:array'])

## void g_checksum_get_digest(struct _GChecksum * checksum, unsigned char * buffer, unsigned long * digest_len)
# Param: buffer
CTypes.set_fn_param_type('g_checksum_get_digest', 'buffer', CTypes['out:char**,int*'])
# Param: digest_len
CTypes.set_fn_param_type('g_checksum_get_digest', 'digest_len', CTypes['ignore'])

## gboolean g_file_get_contents(const char * filename, char ** contents, unsigned long * length, struct _GError ** error)
# Param: contents
CTypes.set_fn_param_type('g_file_get_contents', 'contents', CTypes['out:char**,int*'])
# Param: length
CTypes.set_fn_param_type('g_file_get_contents', 'length', CTypes['ignore'])

## gint g_file_open_tmp(const char * tmpl, char ** name_used, struct _GError ** error)
# Param: name_used
CTypes.set_fn_param_type('g_file_open_tmp', 'name_used', CTypes['out:cstring'])

## gchar ** g_listenv()
# Return value
CTypes.set_fn_return_type('g_listenv', CTypes['nullterminated:gstring:array'])

## gchar ** g_match_info_fetch_all(const struct _GMatchInfo * match_info)
# Return value
CTypes.set_fn_return_type('g_match_info_fetch_all', CTypes['nullterminated:gstring:array'])

## gboolean g_match_info_fetch_named_pos(const struct _GMatchInfo * match_info, const char * name, int * start_pos, int * end_pos)
# Param: start_pos
CTypes.set_fn_param_type('g_match_info_fetch_named_pos', 'start_pos', CTypes['out:int *'])
# Param: end_pos
CTypes.set_fn_param_type('g_match_info_fetch_named_pos', 'end_pos', CTypes['out:int *'])

## gboolean g_match_info_fetch_pos(const struct _GMatchInfo * match_info, int match_num, int * start_pos, int * end_pos)
# Param: start_pos
CTypes.set_fn_param_type('g_match_info_fetch_pos', 'start_pos', CTypes['out:int *'])
# Param: end_pos
CTypes.set_fn_param_type('g_match_info_fetch_pos', 'end_pos', CTypes['out:int *'])

## gchar ** g_regex_split(const struct _GRegex * regex, const char * string, GRegexMatchFlags match_options)
# Return value
CTypes.set_fn_return_type('g_regex_split', CTypes['nullterminated:gstring:array'])

## gchar ** g_regex_split_full(const struct _GRegex * regex, const char * string, long string_len, int start_position, GRegexMatchFlags match_options, int max_tokens, struct _GError ** error)
# Return value
CTypes.set_fn_return_type('g_regex_split_full', CTypes['nullterminated:gstring:array'])

## gchar ** g_regex_split_simple(const char * pattern, const char * string, GRegexCompileFlags compile_options, GRegexMatchFlags match_options)
# Return value
CTypes.set_fn_return_type('g_regex_split_simple', CTypes['nullterminated:gstring:array'])

## gboolean g_spawn_async(const char * working_directory, char ** argv, char ** envp, GSpawnFlags flags, void (*)(void *) child_setup, void * user_data, int * child_pid, struct _GError ** error)
# Param: argv
CTypes.set_fn_param_type('g_spawn_async', 'argv', CTypes['nullterminated:cstring:array'])
# Param: envp
CTypes.set_fn_param_type('g_spawn_async', 'envp', CTypes['nullterminated:cstring:array'])
# Param: child_setup
CTypes.set_fn_param_type('g_spawn_async', 'child_setup', CTypes['unused:pointer'])
# Param: user_data
CTypes.set_fn_param_type('g_spawn_async', 'user_data', CTypes['unused:pointer'])
# Param: child_pid
CTypes.set_fn_param_type('g_spawn_async', 'child_pid', CTypes['out:int *'])

## gboolean g_spawn_async_with_pipes(const char * working_directory, char ** argv, char ** envp, GSpawnFlags flags, void (*)(void *) child_setup, void * user_data, int * child_pid, int * standard_input, int * standard_output, int * standard_error, struct _GError ** error)
# Param: argv
CTypes.set_fn_param_type('g_spawn_async_with_pipes', 'argv', CTypes['nullterminated:cstring:array'])
# Param: envp
CTypes.set_fn_param_type('g_spawn_async_with_pipes', 'envp', CTypes['nullterminated:cstring:array'])
# Param: child_setup
CTypes.set_fn_param_type('g_spawn_async_with_pipes', 'child_setup', CTypes['unused:pointer'])
# Param: user_data
CTypes.set_fn_param_type('g_spawn_async_with_pipes', 'user_data', CTypes['unused:pointer'])
# Param: child_pid
CTypes.set_fn_param_type('g_spawn_async_with_pipes', 'child_pid', CTypes['out:int *'])
# Param: standard_input
CTypes.set_fn_param_type('g_spawn_async_with_pipes', 'standard_input', CTypes['out:int *'])
# Param: standard_output
CTypes.set_fn_param_type('g_spawn_async_with_pipes', 'standard_output', CTypes['out:int *'])
# Param: standard_error
CTypes.set_fn_param_type('g_spawn_async_with_pipes', 'standard_error', CTypes['out:int *'])

## gboolean g_spawn_command_line_sync(const char * command_line, char ** standard_output, char ** standard_error, int * exit_status, struct _GError ** error)
# Param: standard_output
CTypes.set_fn_param_type('g_spawn_command_line_sync', 'standard_output', CTypes['out:cstring'])
# Param: standard_error
CTypes.set_fn_param_type('g_spawn_command_line_sync', 'standard_error', CTypes['out:cstring'])
# Param: exit_status
CTypes.set_fn_param_type('g_spawn_command_line_sync', 'exit_status', CTypes['out:int *'])

## gboolean g_spawn_sync(const char * working_directory, char ** argv, char ** envp, GSpawnFlags flags, void (*)(void *) child_setup, void * user_data, char ** standard_output, char ** standard_error, int * exit_status, struct _GError ** error)
# Param: argv
CTypes.set_fn_param_type('g_spawn_sync', 'argv', CTypes['nullterminated:cstring:array'])
# Param: envp
CTypes.set_fn_param_type('g_spawn_sync', 'envp', CTypes['nullterminated:cstring:array'])
# Param: child_setup
CTypes.set_fn_param_type('g_spawn_sync', 'child_setup', CTypes['unused:pointer'])
# Param: user_data
CTypes.set_fn_param_type('g_spawn_sync', 'user_data', CTypes['unused:pointer'])
# Param: standard_output
CTypes.set_fn_param_type('g_spawn_sync', 'standard_output', CTypes['out:cstring'])
# Param: standard_error
CTypes.set_fn_param_type('g_spawn_sync', 'standard_error', CTypes['out:cstring'])
# Param: exit_status
CTypes.set_fn_param_type('g_spawn_sync', 'exit_status', CTypes['out:int *'])

## gboolean g_file_copy(GFile * source, GFile * destination, GFileCopyFlags flags, GCancellable * cancellable, GFileProgressCallback progress_callback, gpointer progress_callback_data, GError ** error)
# Param: progress_callback (GFileProgressCallback)
CTypes.set_fn_param_type('g_file_copy', 'progress_callback', CTypes['unused:pointer'])
# Param: progress_callback_data (gpointer)
CTypes.set_fn_param_type('g_file_copy', 'progress_callback_data', CTypes['unused:pointer'])

## char * g_file_get_basename(GFile * file)
# Return value (char *)
CTypes.set_fn_return_type('g_file_get_basename', CTypes['return:gstring'])

## char * g_file_get_parse_name(GFile * file)
# Return value (char *)
CTypes.set_fn_return_type('g_file_get_parse_name', CTypes['return:gstring'])

## char * g_file_get_path(GFile * file)
# Return value (char *)
CTypes.set_fn_return_type('g_file_get_path', CTypes['return:gstring'])

## char * g_file_get_relative_path(GFile * parent, GFile * descendant)
# Return value (char *)
CTypes.set_fn_return_type('g_file_get_relative_path', CTypes['return:gstring'])

## char * g_file_get_uri(GFile * file)
# Return value (char *)
CTypes.set_fn_return_type('g_file_get_uri', CTypes['return:gstring'])

## char * g_file_get_uri_scheme(GFile * file)
# Return value (char *)
CTypes.set_fn_return_type('g_file_get_uri_scheme', CTypes['return:gstring'])

## gboolean g_file_measure_disk_usage(GFile * file, GFileMeasureFlags flags, GCancellable * cancellable, GFileMeasureProgressCallback progress_callback, gpointer progress_data, guint64 * disk_usage, guint64 * num_dirs, guint64 * num_files, GError ** error)
# Param: progress_callback (GFileMeasureProgressCallback)
CTypes.set_fn_param_type('g_file_measure_disk_usage', 'progress_callback', CTypes['unused:pointer'])
# Param: progress_data (gpointer)
CTypes.set_fn_param_type('g_file_measure_disk_usage', 'progress_data', CTypes['unused:pointer'])
# Param: disk_usage (guint64 *)
CTypes.set_fn_param_type('g_file_measure_disk_usage', 'disk_usage', CTypes['out:int *'])
# Param: num_dirs (guint64 *)
CTypes.set_fn_param_type('g_file_measure_disk_usage', 'num_dirs', CTypes['out:int *'])
# Param: num_files (guint64 *)
CTypes.set_fn_param_type('g_file_measure_disk_usage', 'num_files', CTypes['out:int *'])

## gboolean g_file_move(GFile * source, GFile * destination, GFileCopyFlags flags, GCancellable * cancellable, GFileProgressCallback progress_callback, gpointer progress_callback_data, GError ** error)
# Param: progress_callback (GFileProgressCallback)
CTypes.set_fn_param_type('g_file_move', 'progress_callback', CTypes['unused:pointer'])
# Param: progress_callback_data (gpointer)
CTypes.set_fn_param_type('g_file_move', 'progress_callback_data', CTypes['unused:pointer'])

## gchar * g_file_read_link(const gchar * filename, GError ** error)
# Return value (gchar *)
CTypes.set_fn_return_type('g_file_read_link', CTypes['return:gstring'])

## gchar * g_filename_display_basename(const gchar * filename)
# Return value (gchar *)
CTypes.set_fn_return_type('g_filename_display_basename', CTypes['return:gstring'])

## gchar * g_filename_display_name(const gchar * filename)
# Return value (gchar *)
CTypes.set_fn_return_type('g_filename_display_name', CTypes['return:gstring'])

## gchar * g_filename_from_utf8(const gchar * utf8string, gssize len, gsize * bytes_read, gsize * bytes_written, GError ** error)
# Return value (gchar *)
CTypes.set_fn_return_type('g_filename_from_utf8', CTypes['return:gstring'])

## gchar * g_filename_to_uri(const gchar * filename, const gchar * hostname, GError ** error)
# Return value (gchar *)
CTypes.set_fn_return_type('g_filename_to_uri', CTypes['return:gstring'])

## gchar * g_filename_to_utf8(const gchar * opsysstring, gssize len, gsize * bytes_read, gsize * bytes_written, GError ** error)
# Return value (gchar *)
CTypes.set_fn_return_type('g_filename_to_utf8', CTypes['return:gstring'])

## gboolean g_socket_get_option(GSocket * socket, gint level, gint optname, gint * value, GError ** error)
# Param: value (gint *)
CTypes.set_fn_param_type('g_socket_get_option', 'value', CTypes['out:int *'])

## void g_subprocess_launcher_set_environ(GSubprocessLauncher * self, gchar ** env)
# Param: env (gchar **)
CTypes.set_fn_param_type('g_subprocess_launcher_set_environ', 'env', CTypes['nullterminated:gstring:array'])

## GSubprocess * g_subprocess_launcher_spawnv(GSubprocessLauncher * self, const gchar *const * argv, GError ** error)
# Param: argv (const gchar *const *)
CTypes.set_fn_param_type('g_subprocess_launcher_spawnv', 'argv', CTypes['nullterminated:gstring:array'])

## GSubprocess * g_subprocess_newv(const gchar *const * argv, GSubprocessFlags flags, GError ** error)
# Param: argv (const gchar *const *)
CTypes.set_fn_param_type('g_subprocess_newv', 'argv', CTypes['nullterminated:gstring:array'])
