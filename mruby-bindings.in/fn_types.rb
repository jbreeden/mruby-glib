# ## void _g_log_fallback_handler(const char * log_domain, GLogLevelFlags log_level, const char * message, void * unused_data)
# # Param: unused_data
# CTypes.set_fn_param_type('_g_log_fallback_handler', 'unused_data', CTypes['???'])

# ## GArray * g_array_append_vals(struct _GArray * array, const void * data, unsigned int len)
# # Param: data
# CTypes.set_fn_param_type('g_array_append_vals', 'data', CTypes['???'])

# ## GArray * g_array_insert_vals(struct _GArray * array, unsigned int index_, const void * data, unsigned int len)
# # Param: data
# CTypes.set_fn_param_type('g_array_insert_vals', 'data', CTypes['???'])

# ## GArray * g_array_prepend_vals(struct _GArray * array, const void * data, unsigned int len)
# # Param: data
# CTypes.set_fn_param_type('g_array_prepend_vals', 'data', CTypes['???'])

# ## void g_array_set_clear_func(struct _GArray * array, void (*)(void *) clear_func)
# # Param: clear_func
# CTypes.set_fn_param_type('g_array_set_clear_func', 'clear_func', CTypes['???'])

# ## void g_array_sort(struct _GArray * array, int (*)(const void *, const void *) compare_func)
# # Param: compare_func
# CTypes.set_fn_param_type('g_array_sort', 'compare_func', CTypes['???'])

# ## void g_array_sort_with_data(struct _GArray * array, int (*)(const void *, const void *, void *) compare_func, void * user_data)
# # Param: compare_func
# CTypes.set_fn_param_type('g_array_sort_with_data', 'compare_func', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_array_sort_with_data', 'user_data', CTypes['???'])

# ## gdouble g_ascii_strtod(const char * nptr, char ** endptr)
# # Param: endptr
# CTypes.set_fn_param_type('g_ascii_strtod', 'endptr', CTypes['???'])

# ## gint64 g_ascii_strtoll(const char * nptr, char ** endptr, unsigned int base)
# # Return value
# CTypes.set_fn_return_type('g_ascii_strtoll', CTypes['???'])
# # Param: endptr
# CTypes.set_fn_param_type('g_ascii_strtoll', 'endptr', CTypes['???'])

# ## guint64 g_ascii_strtoull(const char * nptr, char ** endptr, unsigned int base)
# # Return value
# CTypes.set_fn_return_type('g_ascii_strtoull', CTypes['???'])
# # Param: endptr
# CTypes.set_fn_param_type('g_ascii_strtoull', 'endptr', CTypes['???'])

# ## void g_assertion_message_cmpnum(const char * domain, const char * file, int line, const char * func, const char * expr, long double arg1, const char * cmp, long double arg2, char numtype)
# # Param: arg1
# CTypes.set_fn_param_type('g_assertion_message_cmpnum', 'arg1', CTypes['???'])
# # Param: arg2
# CTypes.set_fn_param_type('g_assertion_message_cmpnum', 'arg2', CTypes['???'])

# ## GAsyncQueue * g_async_queue_new_full(void (*)(void *) item_free_func)
# # Param: item_free_func
# CTypes.set_fn_param_type('g_async_queue_new_full', 'item_free_func', CTypes['???'])

# ## gpointer g_async_queue_pop(struct _GAsyncQueue * queue)
# # Return value
# CTypes.set_fn_return_type('g_async_queue_pop', CTypes['???'])

# ## gpointer g_async_queue_pop_unlocked(struct _GAsyncQueue * queue)
# # Return value
# CTypes.set_fn_return_type('g_async_queue_pop_unlocked', CTypes['???'])

# ## void g_async_queue_push(struct _GAsyncQueue * queue, void * data)
# # Param: data
# CTypes.set_fn_param_type('g_async_queue_push', 'data', CTypes['???'])

# ## void g_async_queue_push_front(struct _GAsyncQueue * queue, void * item)
# # Param: item
# CTypes.set_fn_param_type('g_async_queue_push_front', 'item', CTypes['???'])

# ## void g_async_queue_push_front_unlocked(struct _GAsyncQueue * queue, void * item)
# # Param: item
# CTypes.set_fn_param_type('g_async_queue_push_front_unlocked', 'item', CTypes['???'])

# ## void g_async_queue_push_sorted(struct _GAsyncQueue * queue, void * data, int (*)(const void *, const void *, void *) func, void * user_data)
# # Param: data
# CTypes.set_fn_param_type('g_async_queue_push_sorted', 'data', CTypes['???'])
# # Param: func
# CTypes.set_fn_param_type('g_async_queue_push_sorted', 'func', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_async_queue_push_sorted', 'user_data', CTypes['???'])

# ## void g_async_queue_push_sorted_unlocked(struct _GAsyncQueue * queue, void * data, int (*)(const void *, const void *, void *) func, void * user_data)
# # Param: data
# CTypes.set_fn_param_type('g_async_queue_push_sorted_unlocked', 'data', CTypes['???'])
# # Param: func
# CTypes.set_fn_param_type('g_async_queue_push_sorted_unlocked', 'func', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_async_queue_push_sorted_unlocked', 'user_data', CTypes['???'])

# ## void g_async_queue_push_unlocked(struct _GAsyncQueue * queue, void * data)
# # Param: data
# CTypes.set_fn_param_type('g_async_queue_push_unlocked', 'data', CTypes['???'])

# ## gboolean g_async_queue_remove(struct _GAsyncQueue * queue, void * item)
# # Param: item
# CTypes.set_fn_param_type('g_async_queue_remove', 'item', CTypes['???'])

# ## gboolean g_async_queue_remove_unlocked(struct _GAsyncQueue * queue, void * item)
# # Param: item
# CTypes.set_fn_param_type('g_async_queue_remove_unlocked', 'item', CTypes['???'])

# ## void g_async_queue_sort(struct _GAsyncQueue * queue, int (*)(const void *, const void *, void *) func, void * user_data)
# # Param: func
# CTypes.set_fn_param_type('g_async_queue_sort', 'func', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_async_queue_sort', 'user_data', CTypes['???'])

# ## void g_async_queue_sort_unlocked(struct _GAsyncQueue * queue, int (*)(const void *, const void *, void *) func, void * user_data)
# # Param: func
# CTypes.set_fn_param_type('g_async_queue_sort_unlocked', 'func', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_async_queue_sort_unlocked', 'user_data', CTypes['???'])

# ## gpointer g_async_queue_timed_pop(struct _GAsyncQueue * queue, struct _GTimeVal * end_time)
# # Return value
# CTypes.set_fn_return_type('g_async_queue_timed_pop', CTypes['???'])

# ## gpointer g_async_queue_timed_pop_unlocked(struct _GAsyncQueue * queue, struct _GTimeVal * end_time)
# # Return value
# CTypes.set_fn_return_type('g_async_queue_timed_pop_unlocked', CTypes['???'])

# ## gpointer g_async_queue_timeout_pop(struct _GAsyncQueue * queue, unsigned long timeout)
# # Return value
# CTypes.set_fn_return_type('g_async_queue_timeout_pop', CTypes['???'])

# ## gpointer g_async_queue_timeout_pop_unlocked(struct _GAsyncQueue * queue, unsigned long timeout)
# # Return value
# CTypes.set_fn_return_type('g_async_queue_timeout_pop_unlocked', CTypes['???'])

# ## gpointer g_async_queue_try_pop(struct _GAsyncQueue * queue)
# # Return value
# CTypes.set_fn_return_type('g_async_queue_try_pop', CTypes['???'])

# ## gpointer g_async_queue_try_pop_unlocked(struct _GAsyncQueue * queue)
# # Return value
# CTypes.set_fn_return_type('g_async_queue_try_pop_unlocked', CTypes['???'])

# ## void g_atexit(void (*)(void) func)
# # Param: func
# CTypes.set_fn_param_type('g_atexit', 'func', CTypes['???'])

# ## gint g_atomic_int_add(volatile int * atomic, int val)
# # Param: atomic
# CTypes.set_fn_param_type('g_atomic_int_add', 'atomic', CTypes['???'])

# ## guint g_atomic_int_and(volatile unsigned int * atomic, unsigned int val)
# # Param: atomic
# CTypes.set_fn_param_type('g_atomic_int_and', 'atomic', CTypes['???'])

# ## gboolean g_atomic_int_compare_and_exchange(volatile int * atomic, int oldval, int newval)
# # Param: atomic
# CTypes.set_fn_param_type('g_atomic_int_compare_and_exchange', 'atomic', CTypes['???'])

# ## gboolean g_atomic_int_dec_and_test(volatile int * atomic)
# # Param: atomic
# CTypes.set_fn_param_type('g_atomic_int_dec_and_test', 'atomic', CTypes['???'])

# ## gint g_atomic_int_exchange_and_add(volatile int * atomic, int val)
# # Param: atomic
# CTypes.set_fn_param_type('g_atomic_int_exchange_and_add', 'atomic', CTypes['???'])

# ## gint g_atomic_int_get(const volatile int * atomic)
# # Param: atomic
# CTypes.set_fn_param_type('g_atomic_int_get', 'atomic', CTypes['???'])

# ## void g_atomic_int_inc(volatile int * atomic)
# # Param: atomic
# CTypes.set_fn_param_type('g_atomic_int_inc', 'atomic', CTypes['???'])

# ## guint g_atomic_int_or(volatile unsigned int * atomic, unsigned int val)
# # Param: atomic
# CTypes.set_fn_param_type('g_atomic_int_or', 'atomic', CTypes['???'])

# ## void g_atomic_int_set(volatile int * atomic, int newval)
# # Param: atomic
# CTypes.set_fn_param_type('g_atomic_int_set', 'atomic', CTypes['???'])

# ## guint g_atomic_int_xor(volatile unsigned int * atomic, unsigned int val)
# # Param: atomic
# CTypes.set_fn_param_type('g_atomic_int_xor', 'atomic', CTypes['???'])

# ## gssize g_atomic_pointer_add(volatile void * atomic, long val)
# # Return value
# CTypes.set_fn_return_type('g_atomic_pointer_add', CTypes['???'])
# # Param: atomic
# CTypes.set_fn_param_type('g_atomic_pointer_add', 'atomic', CTypes['???'])

# ## gsize g_atomic_pointer_and(volatile void * atomic, unsigned long val)
# # Param: atomic
# CTypes.set_fn_param_type('g_atomic_pointer_and', 'atomic', CTypes['???'])

# ## gboolean g_atomic_pointer_compare_and_exchange(volatile void * atomic, void * oldval, void * newval)
# # Param: atomic
# CTypes.set_fn_param_type('g_atomic_pointer_compare_and_exchange', 'atomic', CTypes['???'])
# # Param: oldval
# CTypes.set_fn_param_type('g_atomic_pointer_compare_and_exchange', 'oldval', CTypes['???'])
# # Param: newval
# CTypes.set_fn_param_type('g_atomic_pointer_compare_and_exchange', 'newval', CTypes['???'])

# ## gpointer g_atomic_pointer_get(const volatile void * atomic)
# # Return value
# CTypes.set_fn_return_type('g_atomic_pointer_get', CTypes['???'])
# # Param: atomic
# CTypes.set_fn_param_type('g_atomic_pointer_get', 'atomic', CTypes['???'])

# ## gsize g_atomic_pointer_or(volatile void * atomic, unsigned long val)
# # Param: atomic
# CTypes.set_fn_param_type('g_atomic_pointer_or', 'atomic', CTypes['???'])

# ## void g_atomic_pointer_set(volatile void * atomic, void * newval)
# # Param: atomic
# CTypes.set_fn_param_type('g_atomic_pointer_set', 'atomic', CTypes['???'])
# # Param: newval
# CTypes.set_fn_param_type('g_atomic_pointer_set', 'newval', CTypes['???'])

# ## gsize g_atomic_pointer_xor(volatile void * atomic, unsigned long val)
# # Param: atomic
# CTypes.set_fn_param_type('g_atomic_pointer_xor', 'atomic', CTypes['???'])

# ## guchar * g_base64_decode(const char * text, unsigned long * out_len)
# # Return value
# CTypes.set_fn_return_type('g_base64_decode', CTypes['???'])
# # Param: out_len
# CTypes.set_fn_param_type('g_base64_decode', 'out_len', CTypes['???'])

# ## guchar * g_base64_decode_inplace(char * text, unsigned long * out_len)
# # Return value
# CTypes.set_fn_return_type('g_base64_decode_inplace', CTypes['???'])
# # Param: out_len
# CTypes.set_fn_param_type('g_base64_decode_inplace', 'out_len', CTypes['???'])

# ## gsize g_base64_decode_step(const char * in, unsigned long len, unsigned char * out, int * state, unsigned int * save)
# # Param: out
# CTypes.set_fn_param_type('g_base64_decode_step', 'out', CTypes['???'])
# # Param: state
# CTypes.set_fn_param_type('g_base64_decode_step', 'state', CTypes['???'])
# # Param: save
# CTypes.set_fn_param_type('g_base64_decode_step', 'save', CTypes['???'])

# ## gchar * g_base64_encode(const unsigned char * data, unsigned long len)
# # Param: data
# CTypes.set_fn_param_type('g_base64_encode', 'data', CTypes['???'])

# ## gsize g_base64_encode_close(int break_lines, char * out, int * state, int * save)
# # Param: state
# CTypes.set_fn_param_type('g_base64_encode_close', 'state', CTypes['???'])
# # Param: save
# CTypes.set_fn_param_type('g_base64_encode_close', 'save', CTypes['???'])

# ## gsize g_base64_encode_step(const unsigned char * in, unsigned long len, int break_lines, char * out, int * state, int * save)
# # Param: in
# CTypes.set_fn_param_type('g_base64_encode_step', 'in', CTypes['???'])
# # Param: state
# CTypes.set_fn_param_type('g_base64_encode_step', 'state', CTypes['???'])
# # Param: save
# CTypes.set_fn_param_type('g_base64_encode_step', 'save', CTypes['???'])

# ## void g_bit_lock(volatile int * address, int lock_bit)
# # Param: address
# CTypes.set_fn_param_type('g_bit_lock', 'address', CTypes['???'])

# ## gboolean g_bit_trylock(volatile int * address, int lock_bit)
# # Param: address
# CTypes.set_fn_param_type('g_bit_trylock', 'address', CTypes['???'])

# ## void g_bit_unlock(volatile int * address, int lock_bit)
# # Param: address
# CTypes.set_fn_param_type('g_bit_unlock', 'address', CTypes['???'])

# ## time_t g_bookmark_file_get_added(struct _GBookmarkFile * bookmark, const char * uri, struct _GError ** error)
# # Return value
# CTypes.set_fn_return_type('g_bookmark_file_get_added', CTypes['???'])

# ## gboolean g_bookmark_file_get_app_info(struct _GBookmarkFile * bookmark, const char * uri, const char * name, char ** exec, unsigned int * count, long * stamp, struct _GError ** error)
# # Param: exec
# CTypes.set_fn_param_type('g_bookmark_file_get_app_info', 'exec', CTypes['???'])
# # Param: count
# CTypes.set_fn_param_type('g_bookmark_file_get_app_info', 'count', CTypes['???'])
# # Param: stamp
# CTypes.set_fn_param_type('g_bookmark_file_get_app_info', 'stamp', CTypes['???'])

# ## gchar ** g_bookmark_file_get_applications(struct _GBookmarkFile * bookmark, const char * uri, unsigned long * length, struct _GError ** error)
# # Return value
# CTypes.set_fn_return_type('g_bookmark_file_get_applications', CTypes['???'])
# # Param: length
# CTypes.set_fn_param_type('g_bookmark_file_get_applications', 'length', CTypes['???'])

# ## gchar ** g_bookmark_file_get_groups(struct _GBookmarkFile * bookmark, const char * uri, unsigned long * length, struct _GError ** error)
# # Return value
# CTypes.set_fn_return_type('g_bookmark_file_get_groups', CTypes['???'])
# # Param: length
# CTypes.set_fn_param_type('g_bookmark_file_get_groups', 'length', CTypes['???'])

# ## gboolean g_bookmark_file_get_icon(struct _GBookmarkFile * bookmark, const char * uri, char ** href, char ** mime_type, struct _GError ** error)
# # Param: href
# CTypes.set_fn_param_type('g_bookmark_file_get_icon', 'href', CTypes['???'])
# # Param: mime_type
# CTypes.set_fn_param_type('g_bookmark_file_get_icon', 'mime_type', CTypes['???'])

# ## time_t g_bookmark_file_get_modified(struct _GBookmarkFile * bookmark, const char * uri, struct _GError ** error)
# # Return value
# CTypes.set_fn_return_type('g_bookmark_file_get_modified', CTypes['???'])

# ## gchar ** g_bookmark_file_get_uris(struct _GBookmarkFile * bookmark, unsigned long * length)
# # Return value
# CTypes.set_fn_return_type('g_bookmark_file_get_uris', CTypes['???'])
# # Param: length
# CTypes.set_fn_param_type('g_bookmark_file_get_uris', 'length', CTypes['???'])

# ## time_t g_bookmark_file_get_visited(struct _GBookmarkFile * bookmark, const char * uri, struct _GError ** error)
# # Return value
# CTypes.set_fn_return_type('g_bookmark_file_get_visited', CTypes['???'])

# ## gboolean g_bookmark_file_load_from_data_dirs(struct _GBookmarkFile * bookmark, const char * file, char ** full_path, struct _GError ** error)
# # Param: full_path
# CTypes.set_fn_param_type('g_bookmark_file_load_from_data_dirs', 'full_path', CTypes['???'])

# ## void g_bookmark_file_set_groups(struct _GBookmarkFile * bookmark, const char * uri, const char ** groups, unsigned long length)
# # Param: groups
# CTypes.set_fn_param_type('g_bookmark_file_set_groups', 'groups', CTypes['???'])

# ## gchar * g_bookmark_file_to_data(struct _GBookmarkFile * bookmark, unsigned long * length, struct _GError ** error)
# # Param: length
# CTypes.set_fn_param_type('g_bookmark_file_to_data', 'length', CTypes['???'])

## gchar * g_build_filenamev(char ** args)
# Param: args
CTypes.set_fn_param_type('g_build_filenamev', 'args', CTypes['nullterminated:cstring:array'])

## gchar * g_build_pathv(const char * separator, char ** args)
# Param: args
CTypes.set_fn_param_type('g_build_pathv', 'args', CTypes['nullterminated:cstring:array'])

# ## GByteArray * g_byte_array_append(struct _GByteArray * array, const unsigned char * data, unsigned int len)
# # Param: data
# CTypes.set_fn_param_type('g_byte_array_append', 'data', CTypes['???'])

# ## guint8 * g_byte_array_free(struct _GByteArray * array, int free_segment)
# # Return value
# CTypes.set_fn_return_type('g_byte_array_free', CTypes['???'])

# ## GByteArray * g_byte_array_new_take(unsigned char * data, unsigned long len)
# # Param: data
# CTypes.set_fn_param_type('g_byte_array_new_take', 'data', CTypes['???'])

# ## GByteArray * g_byte_array_prepend(struct _GByteArray * array, const unsigned char * data, unsigned int len)
# # Param: data
# CTypes.set_fn_param_type('g_byte_array_prepend', 'data', CTypes['???'])

# ## void g_byte_array_sort(struct _GByteArray * array, int (*)(const void *, const void *) compare_func)
# # Param: compare_func
# CTypes.set_fn_param_type('g_byte_array_sort', 'compare_func', CTypes['???'])

# ## void g_byte_array_sort_with_data(struct _GByteArray * array, int (*)(const void *, const void *, void *) compare_func, void * user_data)
# # Param: compare_func
# CTypes.set_fn_param_type('g_byte_array_sort_with_data', 'compare_func', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_byte_array_sort_with_data', 'user_data', CTypes['???'])

# ## gint g_bytes_compare(const void * bytes1, const void * bytes2)
# # Param: bytes1
# CTypes.set_fn_param_type('g_bytes_compare', 'bytes1', CTypes['???'])
# # Param: bytes2
# CTypes.set_fn_param_type('g_bytes_compare', 'bytes2', CTypes['???'])

# ## gboolean g_bytes_equal(const void * bytes1, const void * bytes2)
# # Param: bytes1
# CTypes.set_fn_param_type('g_bytes_equal', 'bytes1', CTypes['???'])
# # Param: bytes2
# CTypes.set_fn_param_type('g_bytes_equal', 'bytes2', CTypes['???'])

# ## gconstpointer g_bytes_get_data(struct _GBytes * bytes, unsigned long * size)
# # Return value
# CTypes.set_fn_return_type('g_bytes_get_data', CTypes['???'])
# # Param: size
# CTypes.set_fn_param_type('g_bytes_get_data', 'size', CTypes['???'])

# ## guint g_bytes_hash(const void * bytes)
# # Param: bytes
# CTypes.set_fn_param_type('g_bytes_hash', 'bytes', CTypes['???'])

# ## GBytes * g_bytes_new(const void * data, unsigned long size)
# # Param: data
# CTypes.set_fn_param_type('g_bytes_new', 'data', CTypes['???'])

# ## GBytes * g_bytes_new_static(const void * data, unsigned long size)
# # Param: data
# CTypes.set_fn_param_type('g_bytes_new_static', 'data', CTypes['???'])

# ## GBytes * g_bytes_new_take(void * data, unsigned long size)
# # Param: data
# CTypes.set_fn_param_type('g_bytes_new_take', 'data', CTypes['???'])

# ## GBytes * g_bytes_new_with_free_func(const void * data, unsigned long size, void (*)(void *) free_func, void * user_data)
# # Param: data
# CTypes.set_fn_param_type('g_bytes_new_with_free_func', 'data', CTypes['???'])
# # Param: free_func
# CTypes.set_fn_param_type('g_bytes_new_with_free_func', 'free_func', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_bytes_new_with_free_func', 'user_data', CTypes['???'])

# ## gpointer g_bytes_unref_to_data(struct _GBytes * bytes, unsigned long * size)
# # Return value
# CTypes.set_fn_return_type('g_bytes_unref_to_data', CTypes['???'])
# # Param: size
# CTypes.set_fn_param_type('g_bytes_unref_to_data', 'size', CTypes['???'])

## void g_checksum_get_digest(struct _GChecksum * checksum, unsigned char * buffer, unsigned long * digest_len)
# Param: buffer
CTypes.set_fn_param_type('g_checksum_get_digest', 'buffer', CTypes['out:char**,int*'])
# Param: digest_len
CTypes.set_fn_param_type('g_checksum_get_digest', 'digest_len', CTypes['ignore'])

# ## gssize g_checksum_type_get_length(GChecksumType checksum_type)
# # Return value
# CTypes.set_fn_return_type('g_checksum_type_get_length', CTypes['???'])

# ## void g_checksum_update(struct _GChecksum * checksum, const unsigned char * data, long length)
# # Param: data
# CTypes.set_fn_param_type('g_checksum_update', 'data', CTypes['???'])

# ## guint g_child_watch_add(int pid, void (*)(int, int, void *) function, void * data)
# # Param: function
# CTypes.set_fn_param_type('g_child_watch_add', 'function', CTypes['???'])
# # Param: data
# CTypes.set_fn_param_type('g_child_watch_add', 'data', CTypes['???'])

# ## guint g_child_watch_add_full(int priority, int pid, void (*)(int, int, void *) function, void * data, void (*)(void *) notify)
# # Param: function
# CTypes.set_fn_param_type('g_child_watch_add_full', 'function', CTypes['???'])
# # Param: data
# CTypes.set_fn_param_type('g_child_watch_add_full', 'data', CTypes['???'])
# # Param: notify
# CTypes.set_fn_param_type('g_child_watch_add_full', 'notify', CTypes['???'])

# ## void g_clear_pointer(void ** pp, void (*)(void *) destroy)
# # Param: pp
# CTypes.set_fn_param_type('g_clear_pointer', 'pp', CTypes['???'])
# # Param: destroy
# CTypes.set_fn_param_type('g_clear_pointer', 'destroy', CTypes['???'])

# ## gchar * g_compute_checksum_for_data(GChecksumType checksum_type, const unsigned char * data, unsigned long length)
# # Param: data
# CTypes.set_fn_param_type('g_compute_checksum_for_data', 'data', CTypes['???'])

# ## gchar * g_compute_hmac_for_data(GChecksumType digest_type, const unsigned char * key, unsigned long key_len, const unsigned char * data, unsigned long length)
# # Param: key
# CTypes.set_fn_param_type('g_compute_hmac_for_data', 'key', CTypes['???'])
# # Param: data
# CTypes.set_fn_param_type('g_compute_hmac_for_data', 'data', CTypes['???'])

# ## gchar * g_compute_hmac_for_string(GChecksumType digest_type, const unsigned char * key, unsigned long key_len, const char * str, long length)
# # Param: key
# CTypes.set_fn_param_type('g_compute_hmac_for_string', 'key', CTypes['???'])

# ## void g_cond_wait(struct _GCond * cond, union _GMutex * mutex)
# # Param: mutex
# CTypes.set_fn_param_type('g_cond_wait', 'mutex', CTypes['???'])

# ## gboolean g_cond_wait_until(struct _GCond * cond, union _GMutex * mutex, long end_time)
# # Param: mutex
# CTypes.set_fn_param_type('g_cond_wait_until', 'mutex', CTypes['???'])

# ## gchar * g_convert(const char * str, long len, const char * to_codeset, const char * from_codeset, unsigned long * bytes_read, unsigned long * bytes_written, struct _GError ** error)
# # Param: bytes_read
# CTypes.set_fn_param_type('g_convert', 'bytes_read', CTypes['???'])
# # Param: bytes_written
# CTypes.set_fn_param_type('g_convert', 'bytes_written', CTypes['???'])

# ## gchar * g_convert_with_fallback(const char * str, long len, const char * to_codeset, const char * from_codeset, const char * fallback, unsigned long * bytes_read, unsigned long * bytes_written, struct _GError ** error)
# # Param: bytes_read
# CTypes.set_fn_param_type('g_convert_with_fallback', 'bytes_read', CTypes['???'])
# # Param: bytes_written
# CTypes.set_fn_param_type('g_convert_with_fallback', 'bytes_written', CTypes['???'])

# ## gchar * g_convert_with_iconv(const char * str, long len, struct _GIConv * converter, unsigned long * bytes_read, unsigned long * bytes_written, struct _GError ** error)
# # Param: bytes_read
# CTypes.set_fn_param_type('g_convert_with_iconv', 'bytes_read', CTypes['???'])
# # Param: bytes_written
# CTypes.set_fn_param_type('g_convert_with_iconv', 'bytes_written', CTypes['???'])

# ## void g_datalist_clear(struct _GData ** datalist)
# # Param: datalist
# CTypes.set_fn_param_type('g_datalist_clear', 'datalist', CTypes['???'])

# ## void g_datalist_foreach(struct _GData ** datalist, void (*)(unsigned int, void *, void *) func, void * user_data)
# # Param: datalist
# CTypes.set_fn_param_type('g_datalist_foreach', 'datalist', CTypes['???'])
# # Param: func
# CTypes.set_fn_param_type('g_datalist_foreach', 'func', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_datalist_foreach', 'user_data', CTypes['???'])

# ## gpointer g_datalist_get_data(struct _GData ** datalist, const char * key)
# # Return value
# CTypes.set_fn_return_type('g_datalist_get_data', CTypes['???'])
# # Param: datalist
# CTypes.set_fn_param_type('g_datalist_get_data', 'datalist', CTypes['???'])

# ## guint g_datalist_get_flags(struct _GData ** datalist)
# # Param: datalist
# CTypes.set_fn_param_type('g_datalist_get_flags', 'datalist', CTypes['???'])

# ## gpointer g_datalist_id_dup_data(struct _GData ** datalist, unsigned int key_id, void *(*)(void *, void *) dup_func, void * user_data)
# # Return value
# CTypes.set_fn_return_type('g_datalist_id_dup_data', CTypes['???'])
# # Param: datalist
# CTypes.set_fn_param_type('g_datalist_id_dup_data', 'datalist', CTypes['???'])
# # Param: dup_func
# CTypes.set_fn_param_type('g_datalist_id_dup_data', 'dup_func', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_datalist_id_dup_data', 'user_data', CTypes['???'])

# ## gpointer g_datalist_id_get_data(struct _GData ** datalist, unsigned int key_id)
# # Return value
# CTypes.set_fn_return_type('g_datalist_id_get_data', CTypes['???'])
# # Param: datalist
# CTypes.set_fn_param_type('g_datalist_id_get_data', 'datalist', CTypes['???'])

# ## gpointer g_datalist_id_remove_no_notify(struct _GData ** datalist, unsigned int key_id)
# # Return value
# CTypes.set_fn_return_type('g_datalist_id_remove_no_notify', CTypes['???'])
# # Param: datalist
# CTypes.set_fn_param_type('g_datalist_id_remove_no_notify', 'datalist', CTypes['???'])

# ## gboolean g_datalist_id_replace_data(struct _GData ** datalist, unsigned int key_id, void * oldval, void * newval, void (*)(void *) destroy, void (**)(void *) old_destroy)
# # Param: datalist
# CTypes.set_fn_param_type('g_datalist_id_replace_data', 'datalist', CTypes['???'])
# # Param: oldval
# CTypes.set_fn_param_type('g_datalist_id_replace_data', 'oldval', CTypes['???'])
# # Param: newval
# CTypes.set_fn_param_type('g_datalist_id_replace_data', 'newval', CTypes['???'])
# # Param: destroy
# CTypes.set_fn_param_type('g_datalist_id_replace_data', 'destroy', CTypes['???'])
# # Param: old_destroy
# CTypes.set_fn_param_type('g_datalist_id_replace_data', 'old_destroy', CTypes['???'])

# ## void g_datalist_id_set_data_full(struct _GData ** datalist, unsigned int key_id, void * data, void (*)(void *) destroy_func)
# # Param: datalist
# CTypes.set_fn_param_type('g_datalist_id_set_data_full', 'datalist', CTypes['???'])
# # Param: data
# CTypes.set_fn_param_type('g_datalist_id_set_data_full', 'data', CTypes['???'])
# # Param: destroy_func
# CTypes.set_fn_param_type('g_datalist_id_set_data_full', 'destroy_func', CTypes['???'])

# ## void g_datalist_init(struct _GData ** datalist)
# # Param: datalist
# CTypes.set_fn_param_type('g_datalist_init', 'datalist', CTypes['???'])

# ## void g_datalist_set_flags(struct _GData ** datalist, unsigned int flags)
# # Param: datalist
# CTypes.set_fn_param_type('g_datalist_set_flags', 'datalist', CTypes['???'])

# ## void g_datalist_unset_flags(struct _GData ** datalist, unsigned int flags)
# # Param: datalist
# CTypes.set_fn_param_type('g_datalist_unset_flags', 'datalist', CTypes['???'])

# ## void g_dataset_destroy(const void * dataset_location)
# # Param: dataset_location
# CTypes.set_fn_param_type('g_dataset_destroy', 'dataset_location', CTypes['???'])

# ## void g_dataset_foreach(const void * dataset_location, void (*)(unsigned int, void *, void *) func, void * user_data)
# # Param: dataset_location
# CTypes.set_fn_param_type('g_dataset_foreach', 'dataset_location', CTypes['???'])
# # Param: func
# CTypes.set_fn_param_type('g_dataset_foreach', 'func', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_dataset_foreach', 'user_data', CTypes['???'])

# ## gpointer g_dataset_id_get_data(const void * dataset_location, unsigned int key_id)
# # Return value
# CTypes.set_fn_return_type('g_dataset_id_get_data', CTypes['???'])
# # Param: dataset_location
# CTypes.set_fn_param_type('g_dataset_id_get_data', 'dataset_location', CTypes['???'])

# ## gpointer g_dataset_id_remove_no_notify(const void * dataset_location, unsigned int key_id)
# # Return value
# CTypes.set_fn_return_type('g_dataset_id_remove_no_notify', CTypes['???'])
# # Param: dataset_location
# CTypes.set_fn_param_type('g_dataset_id_remove_no_notify', 'dataset_location', CTypes['???'])

# ## void g_dataset_id_set_data_full(const void * dataset_location, unsigned int key_id, void * data, void (*)(void *) destroy_func)
# # Param: dataset_location
# CTypes.set_fn_param_type('g_dataset_id_set_data_full', 'dataset_location', CTypes['???'])
# # Param: data
# CTypes.set_fn_param_type('g_dataset_id_set_data_full', 'data', CTypes['???'])
# # Param: destroy_func
# CTypes.set_fn_param_type('g_dataset_id_set_data_full', 'destroy_func', CTypes['???'])

# ## GDateDay g_date_get_day(const struct _GDate * date)
# # Return value
# CTypes.set_fn_return_type('g_date_get_day', CTypes['???'])

# ## guint8 g_date_get_days_in_month(GDateMonth month, unsigned short year)
# # Return value
# CTypes.set_fn_return_type('g_date_get_days_in_month', CTypes['???'])

# ## guint8 g_date_get_monday_weeks_in_year(unsigned short year)
# # Return value
# CTypes.set_fn_return_type('g_date_get_monday_weeks_in_year', CTypes['???'])

# ## guint8 g_date_get_sunday_weeks_in_year(unsigned short year)
# # Return value
# CTypes.set_fn_return_type('g_date_get_sunday_weeks_in_year', CTypes['???'])

# ## GDateYear g_date_get_year(const struct _GDate * date)
# # Return value
# CTypes.set_fn_return_type('g_date_get_year', CTypes['???'])

# ## gint g_date_time_compare(const void * dt1, const void * dt2)
# # Param: dt1
# CTypes.set_fn_param_type('g_date_time_compare', 'dt1', CTypes['???'])
# # Param: dt2
# CTypes.set_fn_param_type('g_date_time_compare', 'dt2', CTypes['???'])

# ## GTimeSpan g_date_time_difference(struct _GDateTime * end, struct _GDateTime * begin)
# # Return value
# CTypes.set_fn_return_type('g_date_time_difference', CTypes['???'])

# ## gboolean g_date_time_equal(const void * dt1, const void * dt2)
# # Param: dt1
# CTypes.set_fn_param_type('g_date_time_equal', 'dt1', CTypes['???'])
# # Param: dt2
# CTypes.set_fn_param_type('g_date_time_equal', 'dt2', CTypes['???'])

# ## GTimeSpan g_date_time_get_utc_offset(struct _GDateTime * datetime)
# # Return value
# CTypes.set_fn_return_type('g_date_time_get_utc_offset', CTypes['???'])

# ## void g_date_time_get_ymd(struct _GDateTime * datetime, int * year, int * month, int * day)
# # Param: year
# CTypes.set_fn_param_type('g_date_time_get_ymd', 'year', CTypes['???'])
# # Param: month
# CTypes.set_fn_param_type('g_date_time_get_ymd', 'month', CTypes['???'])
# # Param: day
# CTypes.set_fn_param_type('g_date_time_get_ymd', 'day', CTypes['???'])

# ## guint g_date_time_hash(const void * datetime)
# # Param: datetime
# CTypes.set_fn_param_type('g_date_time_hash', 'datetime', CTypes['???'])

# ## gint64 g_date_time_to_unix(struct _GDateTime * datetime)
# # Return value
# CTypes.set_fn_return_type('g_date_time_to_unix', CTypes['???'])

# ## void g_date_to_struct_tm(const struct _GDate * date, struct tm * tm)
# # Param: tm
# CTypes.set_fn_param_type('g_date_to_struct_tm', 'tm', CTypes['???'])

# ## gboolean g_direct_equal(const void * v1, const void * v2)
# # Param: v1
# CTypes.set_fn_param_type('g_direct_equal', 'v1', CTypes['???'])
# # Param: v2
# CTypes.set_fn_param_type('g_direct_equal', 'v2', CTypes['???'])

# ## guint g_direct_hash(const void * v)
# # Param: v
# CTypes.set_fn_param_type('g_direct_hash', 'v', CTypes['???'])

# ## gboolean g_double_equal(const void * v1, const void * v2)
# # Param: v1
# CTypes.set_fn_param_type('g_double_equal', 'v1', CTypes['???'])
# # Param: v2
# CTypes.set_fn_param_type('g_double_equal', 'v2', CTypes['???'])

# ## guint g_double_hash(const void * v)
# # Param: v
# CTypes.set_fn_param_type('g_double_hash', 'v', CTypes['???'])

# ## const gchar * g_environ_getenv(char ** envp, const char * variable)
# # Param: envp
# CTypes.set_fn_param_type('g_environ_getenv', 'envp', CTypes['???'])

# ## gchar ** g_environ_setenv(char ** envp, const char * variable, const char * value, int overwrite)
# # Return value
# CTypes.set_fn_return_type('g_environ_setenv', CTypes['???'])
# # Param: envp
# CTypes.set_fn_param_type('g_environ_setenv', 'envp', CTypes['???'])

# ## gchar ** g_environ_unsetenv(char ** envp, const char * variable)
# # Return value
# CTypes.set_fn_return_type('g_environ_unsetenv', CTypes['???'])
# # Param: envp
# CTypes.set_fn_param_type('g_environ_unsetenv', 'envp', CTypes['???'])

## gboolean g_file_get_contents(const char * filename, char ** contents, unsigned long * length, struct _GError ** error)
# Param: contents
CTypes.set_fn_param_type('g_file_get_contents', 'contents', CTypes['out:char**,int*'])
# Param: length
CTypes.set_fn_param_type('g_file_get_contents', 'length', CTypes['ignore'])

## gint g_file_open_tmp(const char * tmpl, char ** name_used, struct _GError ** error)
# Param: name_used
CTypes.set_fn_param_type('g_file_open_tmp', 'name_used', CTypes['out:cstring'])

# ## gchar * g_filename_from_uri(const char * uri, char ** hostname, struct _GError ** error)
# # Param: hostname
# CTypes.set_fn_param_type('g_filename_from_uri', 'hostname', CTypes['???'])

# ## gchar * g_filename_from_utf8(const char * utf8string, long len, unsigned long * bytes_read, unsigned long * bytes_written, struct _GError ** error)
# # Param: bytes_read
# CTypes.set_fn_param_type('g_filename_from_utf8', 'bytes_read', CTypes['???'])
# # Param: bytes_written
# CTypes.set_fn_param_type('g_filename_from_utf8', 'bytes_written', CTypes['???'])

# ## gchar * g_filename_to_utf8(const char * opsysstring, long len, unsigned long * bytes_read, unsigned long * bytes_written, struct _GError ** error)
# # Param: bytes_read
# CTypes.set_fn_param_type('g_filename_to_utf8', 'bytes_read', CTypes['???'])
# # Param: bytes_written
# CTypes.set_fn_param_type('g_filename_to_utf8', 'bytes_written', CTypes['???'])

# ## gint g_fprintf(struct __sFILE * file, const char * format)
# # Param: file
# CTypes.set_fn_param_type('g_fprintf', 'file', CTypes['???'])

# ## void g_free(void * mem)
# # Param: mem
# CTypes.set_fn_param_type('g_free', 'mem', CTypes['???'])

# ## gboolean g_get_charset(const char ** charset)
# # Param: charset
# CTypes.set_fn_param_type('g_get_charset', 'charset', CTypes['???'])

# ## gchar ** g_get_environ()
# # Return value
# CTypes.set_fn_return_type('g_get_environ', CTypes['???'])

# ## gboolean g_get_filename_charsets(const char *** charsets)
# # Param: charsets
# CTypes.set_fn_param_type('g_get_filename_charsets', 'charsets', CTypes['???'])

# ## const gchar *const * g_get_language_names()
# # Return value
# CTypes.set_fn_return_type('g_get_language_names', CTypes['???'])

# ## gchar ** g_get_locale_variants(const char * locale)
# # Return value
# CTypes.set_fn_return_type('g_get_locale_variants', CTypes['???'])

# ## gint64 g_get_monotonic_time()
# # Return value
# CTypes.set_fn_return_type('g_get_monotonic_time', CTypes['???'])

# ## gint64 g_get_real_time()
# # Return value
# CTypes.set_fn_return_type('g_get_real_time', CTypes['???'])

# ## const gchar *const * g_get_system_config_dirs()
# # Return value
# CTypes.set_fn_return_type('g_get_system_config_dirs', CTypes['???'])

# ## const gchar *const * g_get_system_data_dirs()
# # Return value
# CTypes.set_fn_return_type('g_get_system_data_dirs', CTypes['???'])

# ## gboolean g_hash_table_add(struct _GHashTable * hash_table, void * key)
# # Param: key
# CTypes.set_fn_param_type('g_hash_table_add', 'key', CTypes['???'])

# ## gboolean g_hash_table_contains(struct _GHashTable * hash_table, const void * key)
# # Param: key
# CTypes.set_fn_param_type('g_hash_table_contains', 'key', CTypes['???'])

# ## gpointer g_hash_table_find(struct _GHashTable * hash_table, int (*)(void *, void *, void *) predicate, void * user_data)
# # Return value
# CTypes.set_fn_return_type('g_hash_table_find', CTypes['???'])
# # Param: predicate
# CTypes.set_fn_param_type('g_hash_table_find', 'predicate', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_hash_table_find', 'user_data', CTypes['???'])

# ## void g_hash_table_foreach(struct _GHashTable * hash_table, void (*)(void *, void *, void *) func, void * user_data)
# # Param: func
# CTypes.set_fn_param_type('g_hash_table_foreach', 'func', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_hash_table_foreach', 'user_data', CTypes['???'])

# ## guint g_hash_table_foreach_remove(struct _GHashTable * hash_table, int (*)(void *, void *, void *) func, void * user_data)
# # Param: func
# CTypes.set_fn_param_type('g_hash_table_foreach_remove', 'func', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_hash_table_foreach_remove', 'user_data', CTypes['???'])

# ## guint g_hash_table_foreach_steal(struct _GHashTable * hash_table, int (*)(void *, void *, void *) func, void * user_data)
# # Param: func
# CTypes.set_fn_param_type('g_hash_table_foreach_steal', 'func', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_hash_table_foreach_steal', 'user_data', CTypes['???'])

# ## gpointer * g_hash_table_get_keys_as_array(struct _GHashTable * hash_table, unsigned int * length)
# # Return value
# CTypes.set_fn_return_type('g_hash_table_get_keys_as_array', CTypes['???'])
# # Param: length
# CTypes.set_fn_param_type('g_hash_table_get_keys_as_array', 'length', CTypes['???'])

# ## gboolean g_hash_table_insert(struct _GHashTable * hash_table, void * key, void * value)
# # Param: key
# CTypes.set_fn_param_type('g_hash_table_insert', 'key', CTypes['???'])
# # Param: value
# CTypes.set_fn_param_type('g_hash_table_insert', 'value', CTypes['???'])

# ## gboolean g_hash_table_iter_next(struct _GHashTableIter * iter, void ** key, void ** value)
# # Param: key
# CTypes.set_fn_param_type('g_hash_table_iter_next', 'key', CTypes['???'])
# # Param: value
# CTypes.set_fn_param_type('g_hash_table_iter_next', 'value', CTypes['???'])

# ## void g_hash_table_iter_replace(struct _GHashTableIter * iter, void * value)
# # Param: value
# CTypes.set_fn_param_type('g_hash_table_iter_replace', 'value', CTypes['???'])

# ## gpointer g_hash_table_lookup(struct _GHashTable * hash_table, const void * key)
# # Return value
# CTypes.set_fn_return_type('g_hash_table_lookup', CTypes['???'])
# # Param: key
# CTypes.set_fn_param_type('g_hash_table_lookup', 'key', CTypes['???'])

# ## gboolean g_hash_table_lookup_extended(struct _GHashTable * hash_table, const void * lookup_key, void ** orig_key, void ** value)
# # Param: lookup_key
# CTypes.set_fn_param_type('g_hash_table_lookup_extended', 'lookup_key', CTypes['???'])
# # Param: orig_key
# CTypes.set_fn_param_type('g_hash_table_lookup_extended', 'orig_key', CTypes['???'])
# # Param: value
# CTypes.set_fn_param_type('g_hash_table_lookup_extended', 'value', CTypes['???'])

# ## GHashTable * g_hash_table_new(unsigned int (*)(const void *) hash_func, int (*)(const void *, const void *) key_equal_func)
# # Param: hash_func
# CTypes.set_fn_param_type('g_hash_table_new', 'hash_func', CTypes['???'])
# # Param: key_equal_func
# CTypes.set_fn_param_type('g_hash_table_new', 'key_equal_func', CTypes['???'])

# ## GHashTable * g_hash_table_new_full(unsigned int (*)(const void *) hash_func, int (*)(const void *, const void *) key_equal_func, void (*)(void *) key_destroy_func, void (*)(void *) value_destroy_func)
# # Param: hash_func
# CTypes.set_fn_param_type('g_hash_table_new_full', 'hash_func', CTypes['???'])
# # Param: key_equal_func
# CTypes.set_fn_param_type('g_hash_table_new_full', 'key_equal_func', CTypes['???'])
# # Param: key_destroy_func
# CTypes.set_fn_param_type('g_hash_table_new_full', 'key_destroy_func', CTypes['???'])
# # Param: value_destroy_func
# CTypes.set_fn_param_type('g_hash_table_new_full', 'value_destroy_func', CTypes['???'])

# ## gboolean g_hash_table_remove(struct _GHashTable * hash_table, const void * key)
# # Param: key
# CTypes.set_fn_param_type('g_hash_table_remove', 'key', CTypes['???'])

# ## gboolean g_hash_table_replace(struct _GHashTable * hash_table, void * key, void * value)
# # Param: key
# CTypes.set_fn_param_type('g_hash_table_replace', 'key', CTypes['???'])
# # Param: value
# CTypes.set_fn_param_type('g_hash_table_replace', 'value', CTypes['???'])

# ## gboolean g_hash_table_steal(struct _GHashTable * hash_table, const void * key)
# # Param: key
# CTypes.set_fn_param_type('g_hash_table_steal', 'key', CTypes['???'])

# ## void g_hmac_get_digest(struct _GHmac * hmac, unsigned char * buffer, unsigned long * digest_len)
# # Param: buffer
# CTypes.set_fn_param_type('g_hmac_get_digest', 'buffer', CTypes['???'])
# # Param: digest_len
# CTypes.set_fn_param_type('g_hmac_get_digest', 'digest_len', CTypes['???'])

# ## GHmac * g_hmac_new(GChecksumType digest_type, const unsigned char * key, unsigned long key_len)
# # Param: key
# CTypes.set_fn_param_type('g_hmac_new', 'key', CTypes['???'])

# ## void g_hmac_update(struct _GHmac * hmac, const unsigned char * data, long length)
# # Param: data
# CTypes.set_fn_param_type('g_hmac_update', 'data', CTypes['???'])

# ## GHook * g_hook_find(struct _GHookList * hook_list, int need_valids, int (*)(struct _GHook *, void *) func, void * data)
# # Param: func
# CTypes.set_fn_param_type('g_hook_find', 'func', CTypes['???'])
# # Param: data
# CTypes.set_fn_param_type('g_hook_find', 'data', CTypes['???'])

# ## GHook * g_hook_find_data(struct _GHookList * hook_list, int need_valids, void * data)
# # Param: data
# CTypes.set_fn_param_type('g_hook_find_data', 'data', CTypes['???'])

# ## GHook * g_hook_find_func(struct _GHookList * hook_list, int need_valids, void * func)
# # Param: func
# CTypes.set_fn_param_type('g_hook_find_func', 'func', CTypes['???'])

# ## GHook * g_hook_find_func_data(struct _GHookList * hook_list, int need_valids, void * func, void * data)
# # Param: func
# CTypes.set_fn_param_type('g_hook_find_func_data', 'func', CTypes['???'])
# # Param: data
# CTypes.set_fn_param_type('g_hook_find_func_data', 'data', CTypes['???'])

# ## void g_hook_insert_sorted(struct _GHookList * hook_list, struct _GHook * hook, int (*)(struct _GHook *, struct _GHook *) func)
# # Param: func
# CTypes.set_fn_param_type('g_hook_insert_sorted', 'func', CTypes['???'])

# ## void g_hook_list_marshal(struct _GHookList * hook_list, int may_recurse, void (*)(struct _GHook *, void *) marshaller, void * marshal_data)
# # Param: marshaller
# CTypes.set_fn_param_type('g_hook_list_marshal', 'marshaller', CTypes['???'])
# # Param: marshal_data
# CTypes.set_fn_param_type('g_hook_list_marshal', 'marshal_data', CTypes['???'])

# ## void g_hook_list_marshal_check(struct _GHookList * hook_list, int may_recurse, int (*)(struct _GHook *, void *) marshaller, void * marshal_data)
# # Param: marshaller
# CTypes.set_fn_param_type('g_hook_list_marshal_check', 'marshaller', CTypes['???'])
# # Param: marshal_data
# CTypes.set_fn_param_type('g_hook_list_marshal_check', 'marshal_data', CTypes['???'])

# ## gsize g_iconv(struct _GIConv * converter, char ** inbuf, unsigned long * inbytes_left, char ** outbuf, unsigned long * outbytes_left)
# # Param: inbuf
# CTypes.set_fn_param_type('g_iconv', 'inbuf', CTypes['???'])
# # Param: inbytes_left
# CTypes.set_fn_param_type('g_iconv', 'inbytes_left', CTypes['???'])
# # Param: outbuf
# CTypes.set_fn_param_type('g_iconv', 'outbuf', CTypes['???'])
# # Param: outbytes_left
# CTypes.set_fn_param_type('g_iconv', 'outbytes_left', CTypes['???'])

# ## GIConv g_iconv_open(const char * to_codeset, const char * from_codeset)
# # Return value
# CTypes.set_fn_return_type('g_iconv_open', CTypes['???'])

# ## guint g_idle_add(int (*)(void *) function, void * data)
# # Param: function
# CTypes.set_fn_param_type('g_idle_add', 'function', CTypes['???'])
# # Param: data
# CTypes.set_fn_param_type('g_idle_add', 'data', CTypes['???'])

# ## guint g_idle_add_full(int priority, int (*)(void *) function, void * data, void (*)(void *) notify)
# # Param: function
# CTypes.set_fn_param_type('g_idle_add_full', 'function', CTypes['???'])
# # Param: data
# CTypes.set_fn_param_type('g_idle_add_full', 'data', CTypes['???'])
# # Param: notify
# CTypes.set_fn_param_type('g_idle_add_full', 'notify', CTypes['???'])

# ## gboolean g_idle_remove_by_data(void * data)
# # Param: data
# CTypes.set_fn_param_type('g_idle_remove_by_data', 'data', CTypes['???'])

# ## gboolean g_int64_equal(const void * v1, const void * v2)
# # Param: v1
# CTypes.set_fn_param_type('g_int64_equal', 'v1', CTypes['???'])
# # Param: v2
# CTypes.set_fn_param_type('g_int64_equal', 'v2', CTypes['???'])

# ## guint g_int64_hash(const void * v)
# # Param: v
# CTypes.set_fn_param_type('g_int64_hash', 'v', CTypes['???'])

# ## gboolean g_int_equal(const void * v1, const void * v2)
# # Param: v1
# CTypes.set_fn_param_type('g_int_equal', 'v1', CTypes['???'])
# # Param: v2
# CTypes.set_fn_param_type('g_int_equal', 'v2', CTypes['???'])

# ## guint g_int_hash(const void * v)
# # Param: v
# CTypes.set_fn_param_type('g_int_hash', 'v', CTypes['???'])

# ## guint g_io_add_watch(struct _GIOChannel * channel, GIOCondition condition, int (*)(struct _GIOChannel *, GIOCondition, void *) func, void * user_data)
# # Param: func
# CTypes.set_fn_param_type('g_io_add_watch', 'func', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_io_add_watch', 'user_data', CTypes['???'])

# ## guint g_io_add_watch_full(struct _GIOChannel * channel, int priority, GIOCondition condition, int (*)(struct _GIOChannel *, GIOCondition, void *) func, void * user_data, void (*)(void *) notify)
# # Param: func
# CTypes.set_fn_param_type('g_io_add_watch_full', 'func', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_io_add_watch_full', 'user_data', CTypes['???'])
# # Param: notify
# CTypes.set_fn_param_type('g_io_add_watch_full', 'notify', CTypes['???'])

# ## const gchar * g_io_channel_get_line_term(struct _GIOChannel * channel, int * length)
# # Param: length
# CTypes.set_fn_param_type('g_io_channel_get_line_term', 'length', CTypes['???'])

# ## GIOError g_io_channel_read(struct _GIOChannel * channel, char * buf, unsigned long count, unsigned long * bytes_read)
# # Param: bytes_read
# CTypes.set_fn_param_type('g_io_channel_read', 'bytes_read', CTypes['???'])

# ## GIOStatus g_io_channel_read_chars(struct _GIOChannel * channel, char * buf, unsigned long count, unsigned long * bytes_read, struct _GError ** error)
# # Param: bytes_read
# CTypes.set_fn_param_type('g_io_channel_read_chars', 'bytes_read', CTypes['???'])

# ## GIOStatus g_io_channel_read_line(struct _GIOChannel * channel, char ** str_return, unsigned long * length, unsigned long * terminator_pos, struct _GError ** error)
# # Param: str_return
# CTypes.set_fn_param_type('g_io_channel_read_line', 'str_return', CTypes['???'])
# # Param: length
# CTypes.set_fn_param_type('g_io_channel_read_line', 'length', CTypes['???'])
# # Param: terminator_pos
# CTypes.set_fn_param_type('g_io_channel_read_line', 'terminator_pos', CTypes['???'])

# ## GIOStatus g_io_channel_read_line_string(struct _GIOChannel * channel, struct _GString * buffer, unsigned long * terminator_pos, struct _GError ** error)
# # Param: terminator_pos
# CTypes.set_fn_param_type('g_io_channel_read_line_string', 'terminator_pos', CTypes['???'])

# ## GIOStatus g_io_channel_read_to_end(struct _GIOChannel * channel, char ** str_return, unsigned long * length, struct _GError ** error)
# # Param: str_return
# CTypes.set_fn_param_type('g_io_channel_read_to_end', 'str_return', CTypes['???'])
# # Param: length
# CTypes.set_fn_param_type('g_io_channel_read_to_end', 'length', CTypes['???'])

# ## GIOStatus g_io_channel_read_unichar(struct _GIOChannel * channel, unsigned int * thechar, struct _GError ** error)
# # Param: thechar
# CTypes.set_fn_param_type('g_io_channel_read_unichar', 'thechar', CTypes['???'])

# ## GIOError g_io_channel_write(struct _GIOChannel * channel, const char * buf, unsigned long count, unsigned long * bytes_written)
# # Param: bytes_written
# CTypes.set_fn_param_type('g_io_channel_write', 'bytes_written', CTypes['???'])

# ## GIOStatus g_io_channel_write_chars(struct _GIOChannel * channel, const char * buf, long count, unsigned long * bytes_written, struct _GError ** error)
# # Param: bytes_written
# CTypes.set_fn_param_type('g_io_channel_write_chars', 'bytes_written', CTypes['???'])

# ## gboolean * g_key_file_get_boolean_list(struct _GKeyFile * key_file, const char * group_name, const char * key, unsigned long * length, struct _GError ** error)
# # Return value
# CTypes.set_fn_return_type('g_key_file_get_boolean_list', CTypes['???'])
# # Param: length
# CTypes.set_fn_param_type('g_key_file_get_boolean_list', 'length', CTypes['???'])

# ## gdouble * g_key_file_get_double_list(struct _GKeyFile * key_file, const char * group_name, const char * key, unsigned long * length, struct _GError ** error)
# # Return value
# CTypes.set_fn_return_type('g_key_file_get_double_list', CTypes['???'])
# # Param: length
# CTypes.set_fn_param_type('g_key_file_get_double_list', 'length', CTypes['???'])

# ## gchar ** g_key_file_get_groups(struct _GKeyFile * key_file, unsigned long * length)
# # Return value
# CTypes.set_fn_return_type('g_key_file_get_groups', CTypes['???'])
# # Param: length
# CTypes.set_fn_param_type('g_key_file_get_groups', 'length', CTypes['???'])

# ## gint64 g_key_file_get_int64(struct _GKeyFile * key_file, const char * group_name, const char * key, struct _GError ** error)
# # Return value
# CTypes.set_fn_return_type('g_key_file_get_int64', CTypes['???'])

# ## gint * g_key_file_get_integer_list(struct _GKeyFile * key_file, const char * group_name, const char * key, unsigned long * length, struct _GError ** error)
# # Return value
# CTypes.set_fn_return_type('g_key_file_get_integer_list', CTypes['???'])
# # Param: length
# CTypes.set_fn_param_type('g_key_file_get_integer_list', 'length', CTypes['???'])

# ## gchar ** g_key_file_get_keys(struct _GKeyFile * key_file, const char * group_name, unsigned long * length, struct _GError ** error)
# # Return value
# CTypes.set_fn_return_type('g_key_file_get_keys', CTypes['???'])
# # Param: length
# CTypes.set_fn_param_type('g_key_file_get_keys', 'length', CTypes['???'])

# ## gchar ** g_key_file_get_locale_string_list(struct _GKeyFile * key_file, const char * group_name, const char * key, const char * locale, unsigned long * length, struct _GError ** error)
# # Return value
# CTypes.set_fn_return_type('g_key_file_get_locale_string_list', CTypes['???'])
# # Param: length
# CTypes.set_fn_param_type('g_key_file_get_locale_string_list', 'length', CTypes['???'])

# ## gchar ** g_key_file_get_string_list(struct _GKeyFile * key_file, const char * group_name, const char * key, unsigned long * length, struct _GError ** error)
# # Return value
# CTypes.set_fn_return_type('g_key_file_get_string_list', CTypes['???'])
# # Param: length
# CTypes.set_fn_param_type('g_key_file_get_string_list', 'length', CTypes['???'])

# ## guint64 g_key_file_get_uint64(struct _GKeyFile * key_file, const char * group_name, const char * key, struct _GError ** error)
# # Return value
# CTypes.set_fn_return_type('g_key_file_get_uint64', CTypes['???'])

# ## gboolean g_key_file_load_from_data_dirs(struct _GKeyFile * key_file, const char * file, char ** full_path, GKeyFileFlags flags, struct _GError ** error)
# # Param: full_path
# CTypes.set_fn_param_type('g_key_file_load_from_data_dirs', 'full_path', CTypes['???'])

# ## gboolean g_key_file_load_from_dirs(struct _GKeyFile * key_file, const char * file, const char ** search_dirs, char ** full_path, GKeyFileFlags flags, struct _GError ** error)
# # Param: search_dirs
# CTypes.set_fn_param_type('g_key_file_load_from_dirs', 'search_dirs', CTypes['???'])
# # Param: full_path
# CTypes.set_fn_param_type('g_key_file_load_from_dirs', 'full_path', CTypes['???'])

# ## void g_key_file_set_boolean_list(struct _GKeyFile * key_file, const char * group_name, const char * key, int [] list, unsigned long length)
# # Param: list
# CTypes.set_fn_param_type('g_key_file_set_boolean_list', 'list', CTypes['???'])

# ## void g_key_file_set_double_list(struct _GKeyFile * key_file, const char * group_name, const char * key, double [] list, unsigned long length)
# # Param: list
# CTypes.set_fn_param_type('g_key_file_set_double_list', 'list', CTypes['???'])

# ## void g_key_file_set_integer_list(struct _GKeyFile * key_file, const char * group_name, const char * key, int [] list, unsigned long length)
# # Param: list
# CTypes.set_fn_param_type('g_key_file_set_integer_list', 'list', CTypes['???'])

# ## void g_key_file_set_locale_string_list(struct _GKeyFile * key_file, const char * group_name, const char * key, const char * locale, const char *const[] list, unsigned long length)
# # Param: list
# CTypes.set_fn_param_type('g_key_file_set_locale_string_list', 'list', CTypes['???'])

# ## void g_key_file_set_string_list(struct _GKeyFile * key_file, const char * group_name, const char * key, const char *const[] list, unsigned long length)
# # Param: list
# CTypes.set_fn_param_type('g_key_file_set_string_list', 'list', CTypes['???'])

# ## gchar * g_key_file_to_data(struct _GKeyFile * key_file, unsigned long * length, struct _GError ** error)
# # Param: length
# CTypes.set_fn_param_type('g_key_file_to_data', 'length', CTypes['???'])

# ## GList * g_list_append(struct _GList * list, void * data)
# # Param: data
# CTypes.set_fn_param_type('g_list_append', 'data', CTypes['???'])

# ## GList * g_list_copy_deep(struct _GList * list, void *(*)(const void *, void *) func, void * user_data)
# # Param: func
# CTypes.set_fn_param_type('g_list_copy_deep', 'func', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_list_copy_deep', 'user_data', CTypes['???'])

# ## GList * g_list_find(struct _GList * list, const void * data)
# # Param: data
# CTypes.set_fn_param_type('g_list_find', 'data', CTypes['???'])

# ## GList * g_list_find_custom(struct _GList * list, const void * data, int (*)(const void *, const void *) func)
# # Param: data
# CTypes.set_fn_param_type('g_list_find_custom', 'data', CTypes['???'])
# # Param: func
# CTypes.set_fn_param_type('g_list_find_custom', 'func', CTypes['???'])

# ## void g_list_foreach(struct _GList * list, void (*)(void *, void *) func, void * user_data)
# # Param: func
# CTypes.set_fn_param_type('g_list_foreach', 'func', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_list_foreach', 'user_data', CTypes['???'])

# ## void g_list_free_full(struct _GList * list, void (*)(void *) free_func)
# # Param: free_func
# CTypes.set_fn_param_type('g_list_free_full', 'free_func', CTypes['???'])

# ## gint g_list_index(struct _GList * list, const void * data)
# # Param: data
# CTypes.set_fn_param_type('g_list_index', 'data', CTypes['???'])

# ## GList * g_list_insert(struct _GList * list, void * data, int position)
# # Param: data
# CTypes.set_fn_param_type('g_list_insert', 'data', CTypes['???'])

# ## GList * g_list_insert_before(struct _GList * list, struct _GList * sibling, void * data)
# # Param: data
# CTypes.set_fn_param_type('g_list_insert_before', 'data', CTypes['???'])

# ## GList * g_list_insert_sorted(struct _GList * list, void * data, int (*)(const void *, const void *) func)
# # Param: data
# CTypes.set_fn_param_type('g_list_insert_sorted', 'data', CTypes['???'])
# # Param: func
# CTypes.set_fn_param_type('g_list_insert_sorted', 'func', CTypes['???'])

# ## GList * g_list_insert_sorted_with_data(struct _GList * list, void * data, int (*)(const void *, const void *, void *) func, void * user_data)
# # Param: data
# CTypes.set_fn_param_type('g_list_insert_sorted_with_data', 'data', CTypes['???'])
# # Param: func
# CTypes.set_fn_param_type('g_list_insert_sorted_with_data', 'func', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_list_insert_sorted_with_data', 'user_data', CTypes['???'])

# ## gpointer g_list_nth_data(struct _GList * list, unsigned int n)
# # Return value
# CTypes.set_fn_return_type('g_list_nth_data', CTypes['???'])

# ## GList * g_list_prepend(struct _GList * list, void * data)
# # Param: data
# CTypes.set_fn_param_type('g_list_prepend', 'data', CTypes['???'])

# ## GList * g_list_remove(struct _GList * list, const void * data)
# # Param: data
# CTypes.set_fn_param_type('g_list_remove', 'data', CTypes['???'])

# ## GList * g_list_remove_all(struct _GList * list, const void * data)
# # Param: data
# CTypes.set_fn_param_type('g_list_remove_all', 'data', CTypes['???'])

# ## GList * g_list_sort(struct _GList * list, int (*)(const void *, const void *) compare_func)
# # Param: compare_func
# CTypes.set_fn_param_type('g_list_sort', 'compare_func', CTypes['???'])

# ## GList * g_list_sort_with_data(struct _GList * list, int (*)(const void *, const void *, void *) compare_func, void * user_data)
# # Param: compare_func
# CTypes.set_fn_param_type('g_list_sort_with_data', 'compare_func', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_list_sort_with_data', 'user_data', CTypes['???'])

## gchar ** g_listenv()
# Return value
CTypes.set_fn_return_type('g_listenv', CTypes['nullterminated:gstring:array'])

# ## gchar * g_locale_from_utf8(const char * utf8string, long len, unsigned long * bytes_read, unsigned long * bytes_written, struct _GError ** error)
# # Param: bytes_read
# CTypes.set_fn_param_type('g_locale_from_utf8', 'bytes_read', CTypes['???'])
# # Param: bytes_written
# CTypes.set_fn_param_type('g_locale_from_utf8', 'bytes_written', CTypes['???'])

# ## gchar * g_locale_to_utf8(const char * opsysstring, long len, unsigned long * bytes_read, unsigned long * bytes_written, struct _GError ** error)
# # Param: bytes_read
# CTypes.set_fn_param_type('g_locale_to_utf8', 'bytes_read', CTypes['???'])
# # Param: bytes_written
# CTypes.set_fn_param_type('g_locale_to_utf8', 'bytes_written', CTypes['???'])

# ## void g_log_default_handler(const char * log_domain, GLogLevelFlags log_level, const char * message, void * unused_data)
# # Param: unused_data
# CTypes.set_fn_param_type('g_log_default_handler', 'unused_data', CTypes['???'])

# ## GLogFunc g_log_set_default_handler(void (*)(const char *, GLogLevelFlags, const char *, void *) log_func, void * user_data)
# # Return value
# CTypes.set_fn_return_type('g_log_set_default_handler', CTypes['???'])
# # Param: log_func
# CTypes.set_fn_param_type('g_log_set_default_handler', 'log_func', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_log_set_default_handler', 'user_data', CTypes['???'])

# ## guint g_log_set_handler(const char * log_domain, GLogLevelFlags log_levels, void (*)(const char *, GLogLevelFlags, const char *, void *) log_func, void * user_data)
# # Param: log_func
# CTypes.set_fn_param_type('g_log_set_handler', 'log_func', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_log_set_handler', 'user_data', CTypes['???'])

# ## guint g_log_set_handler_full(const char * log_domain, GLogLevelFlags log_levels, void (*)(const char *, GLogLevelFlags, const char *, void *) log_func, void * user_data, void (*)(void *) destroy)
# # Param: log_func
# CTypes.set_fn_param_type('g_log_set_handler_full', 'log_func', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_log_set_handler_full', 'user_data', CTypes['???'])
# # Param: destroy
# CTypes.set_fn_param_type('g_log_set_handler_full', 'destroy', CTypes['???'])

# ## GSource * g_main_context_find_source_by_funcs_user_data(struct _GMainContext * context, struct _GSourceFuncs * funcs, void * user_data)
# # Param: user_data
# CTypes.set_fn_param_type('g_main_context_find_source_by_funcs_user_data', 'user_data', CTypes['???'])

# ## GSource * g_main_context_find_source_by_user_data(struct _GMainContext * context, void * user_data)
# # Param: user_data
# CTypes.set_fn_param_type('g_main_context_find_source_by_user_data', 'user_data', CTypes['???'])

# ## GPollFunc g_main_context_get_poll_func(struct _GMainContext * context)
# # Return value
# CTypes.set_fn_return_type('g_main_context_get_poll_func', CTypes['???'])

# ## void g_main_context_invoke(struct _GMainContext * context, int (*)(void *) function, void * data)
# # Param: function
# CTypes.set_fn_param_type('g_main_context_invoke', 'function', CTypes['???'])
# # Param: data
# CTypes.set_fn_param_type('g_main_context_invoke', 'data', CTypes['???'])

# ## void g_main_context_invoke_full(struct _GMainContext * context, int priority, int (*)(void *) function, void * data, void (*)(void *) notify)
# # Param: function
# CTypes.set_fn_param_type('g_main_context_invoke_full', 'function', CTypes['???'])
# # Param: data
# CTypes.set_fn_param_type('g_main_context_invoke_full', 'data', CTypes['???'])
# # Param: notify
# CTypes.set_fn_param_type('g_main_context_invoke_full', 'notify', CTypes['???'])

# ## gboolean g_main_context_prepare(struct _GMainContext * context, int * priority)
# # Param: priority
# CTypes.set_fn_param_type('g_main_context_prepare', 'priority', CTypes['???'])

# ## gint g_main_context_query(struct _GMainContext * context, int max_priority, int * timeout_, struct _GPollFD * fds, int n_fds)
# # Param: timeout_
# CTypes.set_fn_param_type('g_main_context_query', 'timeout_', CTypes['???'])

# ## void g_main_context_set_poll_func(struct _GMainContext * context, int (*)(struct _GPollFD *, unsigned int, int) func)
# # Param: func
# CTypes.set_fn_param_type('g_main_context_set_poll_func', 'func', CTypes['???'])

# ## gboolean g_main_context_wait(struct _GMainContext * context, struct _GCond * cond, union _GMutex * mutex)
# # Param: mutex
# CTypes.set_fn_param_type('g_main_context_wait', 'mutex', CTypes['???'])

# ## gpointer g_malloc(unsigned long n_bytes)
# # Return value
# CTypes.set_fn_return_type('g_malloc', CTypes['???'])

# ## gpointer g_malloc0(unsigned long n_bytes)
# # Return value
# CTypes.set_fn_return_type('g_malloc0', CTypes['???'])

# ## gpointer g_malloc0_n(unsigned long n_blocks, unsigned long n_block_bytes)
# # Return value
# CTypes.set_fn_return_type('g_malloc0_n', CTypes['???'])

# ## gpointer g_malloc_n(unsigned long n_blocks, unsigned long n_block_bytes)
# # Return value
# CTypes.set_fn_return_type('g_malloc_n', CTypes['???'])

# ## gboolean g_markup_collect_attributes(const char * element_name, const char ** attribute_names, const char ** attribute_values, struct _GError ** error, GMarkupCollectType first_type, const char * first_attr)
# # Param: attribute_names
# CTypes.set_fn_param_type('g_markup_collect_attributes', 'attribute_names', CTypes['???'])
# # Param: attribute_values
# CTypes.set_fn_param_type('g_markup_collect_attributes', 'attribute_values', CTypes['???'])

# ## void g_markup_parse_context_get_position(struct _GMarkupParseContext * context, int * line_number, int * char_number)
# # Param: line_number
# CTypes.set_fn_param_type('g_markup_parse_context_get_position', 'line_number', CTypes['???'])
# # Param: char_number
# CTypes.set_fn_param_type('g_markup_parse_context_get_position', 'char_number', CTypes['???'])

# ## gpointer g_markup_parse_context_get_user_data(struct _GMarkupParseContext * context)
# # Return value
# CTypes.set_fn_return_type('g_markup_parse_context_get_user_data', CTypes['???'])

# ## GMarkupParseContext * g_markup_parse_context_new(const struct _GMarkupParser * parser, GMarkupParseFlags flags, void * user_data, void (*)(void *) user_data_dnotify)
# # Param: user_data
# CTypes.set_fn_param_type('g_markup_parse_context_new', 'user_data', CTypes['???'])
# # Param: user_data_dnotify
# CTypes.set_fn_param_type('g_markup_parse_context_new', 'user_data_dnotify', CTypes['???'])

# ## gpointer g_markup_parse_context_pop(struct _GMarkupParseContext * context)
# # Return value
# CTypes.set_fn_return_type('g_markup_parse_context_pop', CTypes['???'])

# ## void g_markup_parse_context_push(struct _GMarkupParseContext * context, const struct _GMarkupParser * parser, void * user_data)
# # Param: user_data
# CTypes.set_fn_param_type('g_markup_parse_context_push', 'user_data', CTypes['???'])

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

# ## gpointer g_memdup(const void * mem, unsigned int byte_size)
# # Return value
# CTypes.set_fn_return_type('g_memdup', CTypes['???'])
# # Param: mem
# CTypes.set_fn_param_type('g_memdup', 'mem', CTypes['???'])

# ## void g_mutex_clear(union _GMutex * mutex)
# # Param: mutex
# CTypes.set_fn_param_type('g_mutex_clear', 'mutex', CTypes['???'])

# ## void g_mutex_init(union _GMutex * mutex)
# # Param: mutex
# CTypes.set_fn_param_type('g_mutex_init', 'mutex', CTypes['???'])

# ## void g_mutex_lock(union _GMutex * mutex)
# # Param: mutex
# CTypes.set_fn_param_type('g_mutex_lock', 'mutex', CTypes['???'])

# ## void g_mutex_locker_free(void * locker)
# # Param: locker
# CTypes.set_fn_param_type('g_mutex_locker_free', 'locker', CTypes['???'])

# ## GMutexLocker * g_mutex_locker_new(union _GMutex * mutex)
# # Return value
# CTypes.set_fn_return_type('g_mutex_locker_new', CTypes['???'])
# # Param: mutex
# CTypes.set_fn_param_type('g_mutex_locker_new', 'mutex', CTypes['???'])

# ## gboolean g_mutex_trylock(union _GMutex * mutex)
# # Param: mutex
# CTypes.set_fn_param_type('g_mutex_trylock', 'mutex', CTypes['???'])

# ## void g_mutex_unlock(union _GMutex * mutex)
# # Param: mutex
# CTypes.set_fn_param_type('g_mutex_unlock', 'mutex', CTypes['???'])

# ## gint g_node_child_index(struct _GNode * node, void * data)
# # Param: data
# CTypes.set_fn_param_type('g_node_child_index', 'data', CTypes['???'])

# ## void g_node_children_foreach(struct _GNode * node, GTraverseFlags flags, void (*)(struct _GNode *, void *) func, void * data)
# # Param: func
# CTypes.set_fn_param_type('g_node_children_foreach', 'func', CTypes['???'])
# # Param: data
# CTypes.set_fn_param_type('g_node_children_foreach', 'data', CTypes['???'])

# ## GNode * g_node_copy_deep(struct _GNode * node, void *(*)(const void *, void *) copy_func, void * data)
# # Param: copy_func
# CTypes.set_fn_param_type('g_node_copy_deep', 'copy_func', CTypes['???'])
# # Param: data
# CTypes.set_fn_param_type('g_node_copy_deep', 'data', CTypes['???'])

# ## GNode * g_node_find(struct _GNode * root, GTraverseType order, GTraverseFlags flags, void * data)
# # Param: data
# CTypes.set_fn_param_type('g_node_find', 'data', CTypes['???'])

# ## GNode * g_node_find_child(struct _GNode * node, GTraverseFlags flags, void * data)
# # Param: data
# CTypes.set_fn_param_type('g_node_find_child', 'data', CTypes['???'])

# ## GNode * g_node_new(void * data)
# # Param: data
# CTypes.set_fn_param_type('g_node_new', 'data', CTypes['???'])

# ## void g_node_traverse(struct _GNode * root, GTraverseType order, GTraverseFlags flags, int max_depth, int (*)(struct _GNode *, void *) func, void * data)
# # Param: func
# CTypes.set_fn_param_type('g_node_traverse', 'func', CTypes['???'])
# # Param: data
# CTypes.set_fn_param_type('g_node_traverse', 'data', CTypes['???'])

# ## void g_nullify_pointer(void ** nullify_location)
# # Param: nullify_location
# CTypes.set_fn_param_type('g_nullify_pointer', 'nullify_location', CTypes['???'])

# ## gpointer g_once_impl(struct _GOnce * once, void *(*)(void *) func, void * arg)
# # Return value
# CTypes.set_fn_return_type('g_once_impl', CTypes['???'])
# # Param: func
# CTypes.set_fn_param_type('g_once_impl', 'func', CTypes['???'])
# # Param: arg
# CTypes.set_fn_param_type('g_once_impl', 'arg', CTypes['???'])

# ## gboolean g_once_init_enter(volatile void * location)
# # Param: location
# CTypes.set_fn_param_type('g_once_init_enter', 'location', CTypes['???'])

# ## void g_once_init_leave(volatile void * location, unsigned long result)
# # Param: location
# CTypes.set_fn_param_type('g_once_init_leave', 'location', CTypes['???'])

# ## gboolean g_option_context_parse(struct _GOptionContext * context, int * argc, char *** argv, struct _GError ** error)
# # Param: argc
# CTypes.set_fn_param_type('g_option_context_parse', 'argc', CTypes['???'])
# # Param: argv
# CTypes.set_fn_param_type('g_option_context_parse', 'argv', CTypes['???'])

# ## gboolean g_option_context_parse_strv(struct _GOptionContext * context, char *** arguments, struct _GError ** error)
# # Param: arguments
# CTypes.set_fn_param_type('g_option_context_parse_strv', 'arguments', CTypes['???'])

# ## void g_option_context_set_translate_func(struct _GOptionContext * context, const char *(*)(const char *, void *) func, void * data, void (*)(void *) destroy_notify)
# # Param: func
# CTypes.set_fn_param_type('g_option_context_set_translate_func', 'func', CTypes['???'])
# # Param: data
# CTypes.set_fn_param_type('g_option_context_set_translate_func', 'data', CTypes['???'])
# # Param: destroy_notify
# CTypes.set_fn_param_type('g_option_context_set_translate_func', 'destroy_notify', CTypes['???'])

# ## GOptionGroup * g_option_group_new(const char * name, const char * description, const char * help_description, void * user_data, void (*)(void *) destroy)
# # Param: user_data
# CTypes.set_fn_param_type('g_option_group_new', 'user_data', CTypes['???'])
# # Param: destroy
# CTypes.set_fn_param_type('g_option_group_new', 'destroy', CTypes['???'])

# ## void g_option_group_set_error_hook(struct _GOptionGroup * group, void (*)(struct _GOptionContext *, struct _GOptionGroup *, void *, struct _GError **) error_func)
# # Param: error_func
# CTypes.set_fn_param_type('g_option_group_set_error_hook', 'error_func', CTypes['???'])

# ## void g_option_group_set_parse_hooks(struct _GOptionGroup * group, int (*)(struct _GOptionContext *, struct _GOptionGroup *, void *, struct _GError **) pre_parse_func, int (*)(struct _GOptionContext *, struct _GOptionGroup *, void *, struct _GError **) post_parse_func)
# # Param: pre_parse_func
# CTypes.set_fn_param_type('g_option_group_set_parse_hooks', 'pre_parse_func', CTypes['???'])
# # Param: post_parse_func
# CTypes.set_fn_param_type('g_option_group_set_parse_hooks', 'post_parse_func', CTypes['???'])

# ## void g_option_group_set_translate_func(struct _GOptionGroup * group, const char *(*)(const char *, void *) func, void * data, void (*)(void *) destroy_notify)
# # Param: func
# CTypes.set_fn_param_type('g_option_group_set_translate_func', 'func', CTypes['???'])
# # Param: data
# CTypes.set_fn_param_type('g_option_group_set_translate_func', 'data', CTypes['???'])
# # Param: destroy_notify
# CTypes.set_fn_param_type('g_option_group_set_translate_func', 'destroy_notify', CTypes['???'])

# ## void g_pointer_bit_lock(volatile void * address, int lock_bit)
# # Param: address
# CTypes.set_fn_param_type('g_pointer_bit_lock', 'address', CTypes['???'])

# ## gboolean g_pointer_bit_trylock(volatile void * address, int lock_bit)
# # Param: address
# CTypes.set_fn_param_type('g_pointer_bit_trylock', 'address', CTypes['???'])

# ## void g_pointer_bit_unlock(volatile void * address, int lock_bit)
# # Param: address
# CTypes.set_fn_param_type('g_pointer_bit_unlock', 'address', CTypes['???'])

# ## gpointer g_private_get(struct _GPrivate * key)
# # Return value
# CTypes.set_fn_return_type('g_private_get', CTypes['???'])

# ## void g_private_replace(struct _GPrivate * key, void * value)
# # Param: value
# CTypes.set_fn_param_type('g_private_replace', 'value', CTypes['???'])

# ## void g_private_set(struct _GPrivate * key, void * value)
# # Param: value
# CTypes.set_fn_param_type('g_private_set', 'value', CTypes['???'])

# ## void g_ptr_array_add(struct _GPtrArray * array, void * data)
# # Param: data
# CTypes.set_fn_param_type('g_ptr_array_add', 'data', CTypes['???'])

# ## void g_ptr_array_foreach(struct _GPtrArray * array, void (*)(void *, void *) func, void * user_data)
# # Param: func
# CTypes.set_fn_param_type('g_ptr_array_foreach', 'func', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_ptr_array_foreach', 'user_data', CTypes['???'])

# ## gpointer * g_ptr_array_free(struct _GPtrArray * array, int free_seg)
# # Return value
# CTypes.set_fn_return_type('g_ptr_array_free', CTypes['???'])

# ## void g_ptr_array_insert(struct _GPtrArray * array, int index_, void * data)
# # Param: data
# CTypes.set_fn_param_type('g_ptr_array_insert', 'data', CTypes['???'])

# ## GPtrArray * g_ptr_array_new_full(unsigned int reserved_size, void (*)(void *) element_free_func)
# # Param: element_free_func
# CTypes.set_fn_param_type('g_ptr_array_new_full', 'element_free_func', CTypes['???'])

# ## GPtrArray * g_ptr_array_new_with_free_func(void (*)(void *) element_free_func)
# # Param: element_free_func
# CTypes.set_fn_param_type('g_ptr_array_new_with_free_func', 'element_free_func', CTypes['???'])

# ## gboolean g_ptr_array_remove(struct _GPtrArray * array, void * data)
# # Param: data
# CTypes.set_fn_param_type('g_ptr_array_remove', 'data', CTypes['???'])

# ## gboolean g_ptr_array_remove_fast(struct _GPtrArray * array, void * data)
# # Param: data
# CTypes.set_fn_param_type('g_ptr_array_remove_fast', 'data', CTypes['???'])

# ## gpointer g_ptr_array_remove_index(struct _GPtrArray * array, unsigned int index_)
# # Return value
# CTypes.set_fn_return_type('g_ptr_array_remove_index', CTypes['???'])

# ## gpointer g_ptr_array_remove_index_fast(struct _GPtrArray * array, unsigned int index_)
# # Return value
# CTypes.set_fn_return_type('g_ptr_array_remove_index_fast', CTypes['???'])

# ## void g_ptr_array_set_free_func(struct _GPtrArray * array, void (*)(void *) element_free_func)
# # Param: element_free_func
# CTypes.set_fn_param_type('g_ptr_array_set_free_func', 'element_free_func', CTypes['???'])

# ## void g_ptr_array_sort(struct _GPtrArray * array, int (*)(const void *, const void *) compare_func)
# # Param: compare_func
# CTypes.set_fn_param_type('g_ptr_array_sort', 'compare_func', CTypes['???'])

# ## void g_ptr_array_sort_with_data(struct _GPtrArray * array, int (*)(const void *, const void *, void *) compare_func, void * user_data)
# # Param: compare_func
# CTypes.set_fn_param_type('g_ptr_array_sort_with_data', 'compare_func', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_ptr_array_sort_with_data', 'user_data', CTypes['???'])

# ## void g_qsort_with_data(const void * pbase, int total_elems, unsigned long size, int (*)(const void *, const void *, void *) compare_func, void * user_data)
# # Param: pbase
# CTypes.set_fn_param_type('g_qsort_with_data', 'pbase', CTypes['???'])
# # Param: compare_func
# CTypes.set_fn_param_type('g_qsort_with_data', 'compare_func', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_qsort_with_data', 'user_data', CTypes['???'])

# ## GList * g_queue_find(struct _GQueue * queue, const void * data)
# # Param: data
# CTypes.set_fn_param_type('g_queue_find', 'data', CTypes['???'])

# ## GList * g_queue_find_custom(struct _GQueue * queue, const void * data, int (*)(const void *, const void *) func)
# # Param: data
# CTypes.set_fn_param_type('g_queue_find_custom', 'data', CTypes['???'])
# # Param: func
# CTypes.set_fn_param_type('g_queue_find_custom', 'func', CTypes['???'])

# ## void g_queue_foreach(struct _GQueue * queue, void (*)(void *, void *) func, void * user_data)
# # Param: func
# CTypes.set_fn_param_type('g_queue_foreach', 'func', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_queue_foreach', 'user_data', CTypes['???'])

# ## void g_queue_free_full(struct _GQueue * queue, void (*)(void *) free_func)
# # Param: free_func
# CTypes.set_fn_param_type('g_queue_free_full', 'free_func', CTypes['???'])

# ## gint g_queue_index(struct _GQueue * queue, const void * data)
# # Param: data
# CTypes.set_fn_param_type('g_queue_index', 'data', CTypes['???'])

# ## void g_queue_insert_after(struct _GQueue * queue, struct _GList * sibling, void * data)
# # Param: data
# CTypes.set_fn_param_type('g_queue_insert_after', 'data', CTypes['???'])

# ## void g_queue_insert_before(struct _GQueue * queue, struct _GList * sibling, void * data)
# # Param: data
# CTypes.set_fn_param_type('g_queue_insert_before', 'data', CTypes['???'])

# ## void g_queue_insert_sorted(struct _GQueue * queue, void * data, int (*)(const void *, const void *, void *) func, void * user_data)
# # Param: data
# CTypes.set_fn_param_type('g_queue_insert_sorted', 'data', CTypes['???'])
# # Param: func
# CTypes.set_fn_param_type('g_queue_insert_sorted', 'func', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_queue_insert_sorted', 'user_data', CTypes['???'])

# ## gpointer g_queue_peek_head(struct _GQueue * queue)
# # Return value
# CTypes.set_fn_return_type('g_queue_peek_head', CTypes['???'])

# ## gpointer g_queue_peek_nth(struct _GQueue * queue, unsigned int n)
# # Return value
# CTypes.set_fn_return_type('g_queue_peek_nth', CTypes['???'])

# ## gpointer g_queue_peek_tail(struct _GQueue * queue)
# # Return value
# CTypes.set_fn_return_type('g_queue_peek_tail', CTypes['???'])

# ## gpointer g_queue_pop_head(struct _GQueue * queue)
# # Return value
# CTypes.set_fn_return_type('g_queue_pop_head', CTypes['???'])

# ## gpointer g_queue_pop_nth(struct _GQueue * queue, unsigned int n)
# # Return value
# CTypes.set_fn_return_type('g_queue_pop_nth', CTypes['???'])

# ## gpointer g_queue_pop_tail(struct _GQueue * queue)
# # Return value
# CTypes.set_fn_return_type('g_queue_pop_tail', CTypes['???'])

# ## void g_queue_push_head(struct _GQueue * queue, void * data)
# # Param: data
# CTypes.set_fn_param_type('g_queue_push_head', 'data', CTypes['???'])

# ## void g_queue_push_nth(struct _GQueue * queue, void * data, int n)
# # Param: data
# CTypes.set_fn_param_type('g_queue_push_nth', 'data', CTypes['???'])

# ## void g_queue_push_tail(struct _GQueue * queue, void * data)
# # Param: data
# CTypes.set_fn_param_type('g_queue_push_tail', 'data', CTypes['???'])

# ## gboolean g_queue_remove(struct _GQueue * queue, const void * data)
# # Param: data
# CTypes.set_fn_param_type('g_queue_remove', 'data', CTypes['???'])

# ## guint g_queue_remove_all(struct _GQueue * queue, const void * data)
# # Param: data
# CTypes.set_fn_param_type('g_queue_remove_all', 'data', CTypes['???'])

# ## void g_queue_sort(struct _GQueue * queue, int (*)(const void *, const void *, void *) compare_func, void * user_data)
# # Param: compare_func
# CTypes.set_fn_param_type('g_queue_sort', 'compare_func', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_queue_sort', 'user_data', CTypes['???'])

# ## gint32 g_rand_int_range(struct _GRand * rand_, int begin, int end)
# # Return value
# CTypes.set_fn_return_type('g_rand_int_range', CTypes['???'])

# ## GRand * g_rand_new_with_seed_array(const unsigned int * seed, unsigned int seed_length)
# # Param: seed
# CTypes.set_fn_param_type('g_rand_new_with_seed_array', 'seed', CTypes['???'])

# ## void g_rand_set_seed_array(struct _GRand * rand_, const unsigned int * seed, unsigned int seed_length)
# # Param: seed
# CTypes.set_fn_param_type('g_rand_set_seed_array', 'seed', CTypes['???'])

# ## gint32 g_random_int_range(int begin, int end)
# # Return value
# CTypes.set_fn_return_type('g_random_int_range', CTypes['???'])

# ## gpointer g_realloc(void * mem, unsigned long n_bytes)
# # Return value
# CTypes.set_fn_return_type('g_realloc', CTypes['???'])
# # Param: mem
# CTypes.set_fn_param_type('g_realloc', 'mem', CTypes['???'])

# ## gpointer g_realloc_n(void * mem, unsigned long n_blocks, unsigned long n_block_bytes)
# # Return value
# CTypes.set_fn_return_type('g_realloc_n', CTypes['???'])
# # Param: mem
# CTypes.set_fn_param_type('g_realloc_n', 'mem', CTypes['???'])

# ## gboolean g_regex_check_replacement(const char * replacement, int * has_references, struct _GError ** error)
# # Param: has_references
# CTypes.set_fn_param_type('g_regex_check_replacement', 'has_references', CTypes['???'])

# ## gboolean g_regex_match(const struct _GRegex * regex, const char * string, GRegexMatchFlags match_options, struct _GMatchInfo ** match_info)
# # Param: match_info
# CTypes.set_fn_param_type('g_regex_match', 'match_info', CTypes['???'])

# ## gboolean g_regex_match_all(const struct _GRegex * regex, const char * string, GRegexMatchFlags match_options, struct _GMatchInfo ** match_info)
# # Param: match_info
# CTypes.set_fn_param_type('g_regex_match_all', 'match_info', CTypes['???'])

# ## gboolean g_regex_match_all_full(const struct _GRegex * regex, const char * string, long string_len, int start_position, GRegexMatchFlags match_options, struct _GMatchInfo ** match_info, struct _GError ** error)
# # Param: match_info
# CTypes.set_fn_param_type('g_regex_match_all_full', 'match_info', CTypes['???'])

# ## gboolean g_regex_match_full(const struct _GRegex * regex, const char * string, long string_len, int start_position, GRegexMatchFlags match_options, struct _GMatchInfo ** match_info, struct _GError ** error)
# # Param: match_info
# CTypes.set_fn_param_type('g_regex_match_full', 'match_info', CTypes['???'])

# ## gchar * g_regex_replace_eval(const struct _GRegex * regex, const char * string, long string_len, int start_position, GRegexMatchFlags match_options, int (*)(const struct _GMatchInfo *, struct _GString *, void *) eval, void * user_data, struct _GError ** error)
# # Param: eval
# CTypes.set_fn_param_type('g_regex_replace_eval', 'eval', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_regex_replace_eval', 'user_data', CTypes['???'])

## gchar ** g_regex_split(const struct _GRegex * regex, const char * string, GRegexMatchFlags match_options)
# Return value
CTypes.set_fn_return_type('g_regex_split', CTypes['nullterminated:gstring:array'])

## gchar ** g_regex_split_full(const struct _GRegex * regex, const char * string, long string_len, int start_position, GRegexMatchFlags match_options, int max_tokens, struct _GError ** error)
# Return value
CTypes.set_fn_return_type('g_regex_split_full', CTypes['nullterminated:gstring:array'])

## gchar ** g_regex_split_simple(const char * pattern, const char * string, GRegexCompileFlags compile_options, GRegexMatchFlags match_options)
# Return value
CTypes.set_fn_return_type('g_regex_split_simple', CTypes['nullterminated:gstring:array'])

# ## GTokenValue g_scanner_cur_value(struct _GScanner * scanner)
# # Return value
# CTypes.set_fn_return_type('g_scanner_cur_value', CTypes['???'])

# ## gpointer g_scanner_lookup_symbol(struct _GScanner * scanner, const char * symbol)
# # Return value
# CTypes.set_fn_return_type('g_scanner_lookup_symbol', CTypes['???'])

# ## void g_scanner_scope_add_symbol(struct _GScanner * scanner, unsigned int scope_id, const char * symbol, void * value)
# # Param: value
# CTypes.set_fn_param_type('g_scanner_scope_add_symbol', 'value', CTypes['???'])

# ## void g_scanner_scope_foreach_symbol(struct _GScanner * scanner, unsigned int scope_id, void (*)(void *, void *, void *) func, void * user_data)
# # Param: func
# CTypes.set_fn_param_type('g_scanner_scope_foreach_symbol', 'func', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_scanner_scope_foreach_symbol', 'user_data', CTypes['???'])

# ## gpointer g_scanner_scope_lookup_symbol(struct _GScanner * scanner, unsigned int scope_id, const char * symbol)
# # Return value
# CTypes.set_fn_return_type('g_scanner_scope_lookup_symbol', CTypes['???'])

# ## GSequenceIter * g_sequence_append(struct _GSequence * seq, void * data)
# # Param: data
# CTypes.set_fn_param_type('g_sequence_append', 'data', CTypes['???'])

# ## void g_sequence_foreach(struct _GSequence * seq, void (*)(void *, void *) func, void * user_data)
# # Param: func
# CTypes.set_fn_param_type('g_sequence_foreach', 'func', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_sequence_foreach', 'user_data', CTypes['???'])

# ## void g_sequence_foreach_range(struct _GSequenceNode * begin, struct _GSequenceNode * end, void (*)(void *, void *) func, void * user_data)
# # Param: func
# CTypes.set_fn_param_type('g_sequence_foreach_range', 'func', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_sequence_foreach_range', 'user_data', CTypes['???'])

# ## gpointer g_sequence_get(struct _GSequenceNode * iter)
# # Return value
# CTypes.set_fn_return_type('g_sequence_get', CTypes['???'])

# ## GSequenceIter * g_sequence_insert_before(struct _GSequenceNode * iter, void * data)
# # Param: data
# CTypes.set_fn_param_type('g_sequence_insert_before', 'data', CTypes['???'])

# ## GSequenceIter * g_sequence_insert_sorted(struct _GSequence * seq, void * data, int (*)(const void *, const void *, void *) cmp_func, void * cmp_data)
# # Param: data
# CTypes.set_fn_param_type('g_sequence_insert_sorted', 'data', CTypes['???'])
# # Param: cmp_func
# CTypes.set_fn_param_type('g_sequence_insert_sorted', 'cmp_func', CTypes['???'])
# # Param: cmp_data
# CTypes.set_fn_param_type('g_sequence_insert_sorted', 'cmp_data', CTypes['???'])

# ## GSequenceIter * g_sequence_insert_sorted_iter(struct _GSequence * seq, void * data, int (*)(struct _GSequenceNode *, struct _GSequenceNode *, void *) iter_cmp, void * cmp_data)
# # Param: data
# CTypes.set_fn_param_type('g_sequence_insert_sorted_iter', 'data', CTypes['???'])
# # Param: iter_cmp
# CTypes.set_fn_param_type('g_sequence_insert_sorted_iter', 'iter_cmp', CTypes['???'])
# # Param: cmp_data
# CTypes.set_fn_param_type('g_sequence_insert_sorted_iter', 'cmp_data', CTypes['???'])

# ## GSequenceIter * g_sequence_lookup(struct _GSequence * seq, void * data, int (*)(const void *, const void *, void *) cmp_func, void * cmp_data)
# # Param: data
# CTypes.set_fn_param_type('g_sequence_lookup', 'data', CTypes['???'])
# # Param: cmp_func
# CTypes.set_fn_param_type('g_sequence_lookup', 'cmp_func', CTypes['???'])
# # Param: cmp_data
# CTypes.set_fn_param_type('g_sequence_lookup', 'cmp_data', CTypes['???'])

# ## GSequenceIter * g_sequence_lookup_iter(struct _GSequence * seq, void * data, int (*)(struct _GSequenceNode *, struct _GSequenceNode *, void *) iter_cmp, void * cmp_data)
# # Param: data
# CTypes.set_fn_param_type('g_sequence_lookup_iter', 'data', CTypes['???'])
# # Param: iter_cmp
# CTypes.set_fn_param_type('g_sequence_lookup_iter', 'iter_cmp', CTypes['???'])
# # Param: cmp_data
# CTypes.set_fn_param_type('g_sequence_lookup_iter', 'cmp_data', CTypes['???'])

# ## GSequence * g_sequence_new(void (*)(void *) data_destroy)
# # Param: data_destroy
# CTypes.set_fn_param_type('g_sequence_new', 'data_destroy', CTypes['???'])

# ## GSequenceIter * g_sequence_prepend(struct _GSequence * seq, void * data)
# # Param: data
# CTypes.set_fn_param_type('g_sequence_prepend', 'data', CTypes['???'])

# ## GSequenceIter * g_sequence_search(struct _GSequence * seq, void * data, int (*)(const void *, const void *, void *) cmp_func, void * cmp_data)
# # Param: data
# CTypes.set_fn_param_type('g_sequence_search', 'data', CTypes['???'])
# # Param: cmp_func
# CTypes.set_fn_param_type('g_sequence_search', 'cmp_func', CTypes['???'])
# # Param: cmp_data
# CTypes.set_fn_param_type('g_sequence_search', 'cmp_data', CTypes['???'])

# ## GSequenceIter * g_sequence_search_iter(struct _GSequence * seq, void * data, int (*)(struct _GSequenceNode *, struct _GSequenceNode *, void *) iter_cmp, void * cmp_data)
# # Param: data
# CTypes.set_fn_param_type('g_sequence_search_iter', 'data', CTypes['???'])
# # Param: iter_cmp
# CTypes.set_fn_param_type('g_sequence_search_iter', 'iter_cmp', CTypes['???'])
# # Param: cmp_data
# CTypes.set_fn_param_type('g_sequence_search_iter', 'cmp_data', CTypes['???'])

# ## void g_sequence_set(struct _GSequenceNode * iter, void * data)
# # Param: data
# CTypes.set_fn_param_type('g_sequence_set', 'data', CTypes['???'])

# ## void g_sequence_sort(struct _GSequence * seq, int (*)(const void *, const void *, void *) cmp_func, void * cmp_data)
# # Param: cmp_func
# CTypes.set_fn_param_type('g_sequence_sort', 'cmp_func', CTypes['???'])
# # Param: cmp_data
# CTypes.set_fn_param_type('g_sequence_sort', 'cmp_data', CTypes['???'])

# ## void g_sequence_sort_changed(struct _GSequenceNode * iter, int (*)(const void *, const void *, void *) cmp_func, void * cmp_data)
# # Param: cmp_func
# CTypes.set_fn_param_type('g_sequence_sort_changed', 'cmp_func', CTypes['???'])
# # Param: cmp_data
# CTypes.set_fn_param_type('g_sequence_sort_changed', 'cmp_data', CTypes['???'])

# ## void g_sequence_sort_changed_iter(struct _GSequenceNode * iter, int (*)(struct _GSequenceNode *, struct _GSequenceNode *, void *) iter_cmp, void * cmp_data)
# # Param: iter_cmp
# CTypes.set_fn_param_type('g_sequence_sort_changed_iter', 'iter_cmp', CTypes['???'])
# # Param: cmp_data
# CTypes.set_fn_param_type('g_sequence_sort_changed_iter', 'cmp_data', CTypes['???'])

# ## void g_sequence_sort_iter(struct _GSequence * seq, int (*)(struct _GSequenceNode *, struct _GSequenceNode *, void *) cmp_func, void * cmp_data)
# # Param: cmp_func
# CTypes.set_fn_param_type('g_sequence_sort_iter', 'cmp_func', CTypes['???'])
# # Param: cmp_data
# CTypes.set_fn_param_type('g_sequence_sort_iter', 'cmp_data', CTypes['???'])

# ## GPrintFunc g_set_print_handler(void (*)(const char *) func)
# # Return value
# CTypes.set_fn_return_type('g_set_print_handler', CTypes['???'])
# # Param: func
# CTypes.set_fn_param_type('g_set_print_handler', 'func', CTypes['???'])

# ## GPrintFunc g_set_printerr_handler(void (*)(const char *) func)
# # Return value
# CTypes.set_fn_return_type('g_set_printerr_handler', CTypes['???'])
# # Param: func
# CTypes.set_fn_param_type('g_set_printerr_handler', 'func', CTypes['???'])

# ## gboolean g_shell_parse_argv(const char * command_line, int * argcp, char *** argvp, struct _GError ** error)
# # Param: argcp
# CTypes.set_fn_param_type('g_shell_parse_argv', 'argcp', CTypes['???'])
# # Param: argvp
# CTypes.set_fn_param_type('g_shell_parse_argv', 'argvp', CTypes['???'])

# ## gpointer g_slice_alloc(unsigned long block_size)
# # Return value
# CTypes.set_fn_return_type('g_slice_alloc', CTypes['???'])

# ## gpointer g_slice_alloc0(unsigned long block_size)
# # Return value
# CTypes.set_fn_return_type('g_slice_alloc0', CTypes['???'])

# ## gpointer g_slice_copy(unsigned long block_size, const void * mem_block)
# # Return value
# CTypes.set_fn_return_type('g_slice_copy', CTypes['???'])
# # Param: mem_block
# CTypes.set_fn_param_type('g_slice_copy', 'mem_block', CTypes['???'])

# ## void g_slice_free1(unsigned long block_size, void * mem_block)
# # Param: mem_block
# CTypes.set_fn_param_type('g_slice_free1', 'mem_block', CTypes['???'])

# ## void g_slice_free_chain_with_offset(unsigned long block_size, void * mem_chain, unsigned long next_offset)
# # Param: mem_chain
# CTypes.set_fn_param_type('g_slice_free_chain_with_offset', 'mem_chain', CTypes['???'])

# ## gint64 g_slice_get_config(GSliceConfig ckey)
# # Return value
# CTypes.set_fn_return_type('g_slice_get_config', CTypes['???'])

# ## gint64 * g_slice_get_config_state(GSliceConfig ckey, long address, unsigned int * n_values)
# # Return value
# CTypes.set_fn_return_type('g_slice_get_config_state', CTypes['???'])
# # Param: n_values
# CTypes.set_fn_param_type('g_slice_get_config_state', 'n_values', CTypes['???'])

# ## GSList * g_slist_append(struct _GSList * list, void * data)
# # Param: data
# CTypes.set_fn_param_type('g_slist_append', 'data', CTypes['???'])

# ## GSList * g_slist_copy_deep(struct _GSList * list, void *(*)(const void *, void *) func, void * user_data)
# # Param: func
# CTypes.set_fn_param_type('g_slist_copy_deep', 'func', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_slist_copy_deep', 'user_data', CTypes['???'])

# ## GSList * g_slist_find(struct _GSList * list, const void * data)
# # Param: data
# CTypes.set_fn_param_type('g_slist_find', 'data', CTypes['???'])

# ## GSList * g_slist_find_custom(struct _GSList * list, const void * data, int (*)(const void *, const void *) func)
# # Param: data
# CTypes.set_fn_param_type('g_slist_find_custom', 'data', CTypes['???'])
# # Param: func
# CTypes.set_fn_param_type('g_slist_find_custom', 'func', CTypes['???'])

# ## void g_slist_foreach(struct _GSList * list, void (*)(void *, void *) func, void * user_data)
# # Param: func
# CTypes.set_fn_param_type('g_slist_foreach', 'func', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_slist_foreach', 'user_data', CTypes['???'])

# ## void g_slist_free_full(struct _GSList * list, void (*)(void *) free_func)
# # Param: free_func
# CTypes.set_fn_param_type('g_slist_free_full', 'free_func', CTypes['???'])

# ## gint g_slist_index(struct _GSList * list, const void * data)
# # Param: data
# CTypes.set_fn_param_type('g_slist_index', 'data', CTypes['???'])

# ## GSList * g_slist_insert(struct _GSList * list, void * data, int position)
# # Param: data
# CTypes.set_fn_param_type('g_slist_insert', 'data', CTypes['???'])

# ## GSList * g_slist_insert_before(struct _GSList * slist, struct _GSList * sibling, void * data)
# # Param: data
# CTypes.set_fn_param_type('g_slist_insert_before', 'data', CTypes['???'])

# ## GSList * g_slist_insert_sorted(struct _GSList * list, void * data, int (*)(const void *, const void *) func)
# # Param: data
# CTypes.set_fn_param_type('g_slist_insert_sorted', 'data', CTypes['???'])
# # Param: func
# CTypes.set_fn_param_type('g_slist_insert_sorted', 'func', CTypes['???'])

# ## GSList * g_slist_insert_sorted_with_data(struct _GSList * list, void * data, int (*)(const void *, const void *, void *) func, void * user_data)
# # Param: data
# CTypes.set_fn_param_type('g_slist_insert_sorted_with_data', 'data', CTypes['???'])
# # Param: func
# CTypes.set_fn_param_type('g_slist_insert_sorted_with_data', 'func', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_slist_insert_sorted_with_data', 'user_data', CTypes['???'])

# ## gpointer g_slist_nth_data(struct _GSList * list, unsigned int n)
# # Return value
# CTypes.set_fn_return_type('g_slist_nth_data', CTypes['???'])

# ## GSList * g_slist_prepend(struct _GSList * list, void * data)
# # Param: data
# CTypes.set_fn_param_type('g_slist_prepend', 'data', CTypes['???'])

# ## GSList * g_slist_remove(struct _GSList * list, const void * data)
# # Param: data
# CTypes.set_fn_param_type('g_slist_remove', 'data', CTypes['???'])

# ## GSList * g_slist_remove_all(struct _GSList * list, const void * data)
# # Param: data
# CTypes.set_fn_param_type('g_slist_remove_all', 'data', CTypes['???'])

# ## GSList * g_slist_sort(struct _GSList * list, int (*)(const void *, const void *) compare_func)
# # Param: compare_func
# CTypes.set_fn_param_type('g_slist_sort', 'compare_func', CTypes['???'])

# ## GSList * g_slist_sort_with_data(struct _GSList * list, int (*)(const void *, const void *, void *) compare_func, void * user_data)
# # Param: compare_func
# CTypes.set_fn_param_type('g_slist_sort_with_data', 'compare_func', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_slist_sort_with_data', 'user_data', CTypes['???'])

# ## gpointer g_source_add_unix_fd(struct _GSource * source, int fd, GIOCondition events)
# # Return value
# CTypes.set_fn_return_type('g_source_add_unix_fd', CTypes['???'])

# ## gint64 g_source_get_ready_time(struct _GSource * source)
# # Return value
# CTypes.set_fn_return_type('g_source_get_ready_time', CTypes['???'])

# ## gint64 g_source_get_time(struct _GSource * source)
# # Return value
# CTypes.set_fn_return_type('g_source_get_time', CTypes['???'])

# ## void g_source_modify_unix_fd(struct _GSource * source, void * tag, GIOCondition new_events)
# # Param: tag
# CTypes.set_fn_param_type('g_source_modify_unix_fd', 'tag', CTypes['???'])

# ## GIOCondition g_source_query_unix_fd(struct _GSource * source, void * tag)
# # Param: tag
# CTypes.set_fn_param_type('g_source_query_unix_fd', 'tag', CTypes['???'])

# ## gboolean g_source_remove_by_funcs_user_data(struct _GSourceFuncs * funcs, void * user_data)
# # Param: user_data
# CTypes.set_fn_param_type('g_source_remove_by_funcs_user_data', 'user_data', CTypes['???'])

# ## gboolean g_source_remove_by_user_data(void * user_data)
# # Param: user_data
# CTypes.set_fn_param_type('g_source_remove_by_user_data', 'user_data', CTypes['???'])

# ## void g_source_remove_unix_fd(struct _GSource * source, void * tag)
# # Param: tag
# CTypes.set_fn_param_type('g_source_remove_unix_fd', 'tag', CTypes['???'])

# ## void g_source_set_callback(struct _GSource * source, int (*)(void *) func, void * data, void (*)(void *) notify)
# # Param: func
# CTypes.set_fn_param_type('g_source_set_callback', 'func', CTypes['???'])
# # Param: data
# CTypes.set_fn_param_type('g_source_set_callback', 'data', CTypes['???'])
# # Param: notify
# CTypes.set_fn_param_type('g_source_set_callback', 'notify', CTypes['???'])

# ## void g_source_set_callback_indirect(struct _GSource * source, void * callback_data, struct _GSourceCallbackFuncs * callback_funcs)
# # Param: callback_data
# CTypes.set_fn_param_type('g_source_set_callback_indirect', 'callback_data', CTypes['???'])

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

# ## gpointer g_steal_pointer(void * pp)
# # Return value
# CTypes.set_fn_return_type('g_steal_pointer', CTypes['???'])
# # Param: pp
# CTypes.set_fn_param_type('g_steal_pointer', 'pp', CTypes['???'])

# ## gboolean g_str_equal(const void * v1, const void * v2)
# # Param: v1
# CTypes.set_fn_param_type('g_str_equal', 'v1', CTypes['???'])
# # Param: v2
# CTypes.set_fn_param_type('g_str_equal', 'v2', CTypes['???'])

# ## guint g_str_hash(const void * v)
# # Param: v
# CTypes.set_fn_param_type('g_str_hash', 'v', CTypes['???'])

# ## gchar ** g_str_tokenize_and_fold(const char * string, const char * translit_locale, char *** ascii_alternates)
# # Return value
# CTypes.set_fn_return_type('g_str_tokenize_and_fold', CTypes['???'])
# # Param: ascii_alternates
# CTypes.set_fn_param_type('g_str_tokenize_and_fold', 'ascii_alternates', CTypes['???'])

# ## gchar ** g_strdupv(char ** str_array)
# # Return value
# CTypes.set_fn_return_type('g_strdupv', CTypes['???'])
# # Param: str_array
# CTypes.set_fn_param_type('g_strdupv', 'str_array', CTypes['???'])

# ## void g_strfreev(char ** str_array)
# # Param: str_array
# CTypes.set_fn_param_type('g_strfreev', 'str_array', CTypes['???'])

# ## gchar * g_strjoinv(const char * separator, char ** str_array)
# # Param: str_array
# CTypes.set_fn_param_type('g_strjoinv', 'str_array', CTypes['???'])

# ## gchar ** g_strsplit(const char * string, const char * delimiter, int max_tokens)
# # Return value
# CTypes.set_fn_return_type('g_strsplit', CTypes['???'])

# ## gchar ** g_strsplit_set(const char * string, const char * delimiters, int max_tokens)
# # Return value
# CTypes.set_fn_return_type('g_strsplit_set', CTypes['???'])

# ## gdouble g_strtod(const char * nptr, char ** endptr)
# # Param: endptr
# CTypes.set_fn_param_type('g_strtod', 'endptr', CTypes['???'])

# ## gboolean g_strv_contains(const char *const * strv, const char * str)
# # Param: strv
# CTypes.set_fn_param_type('g_strv_contains', 'strv', CTypes['???'])

# ## guint g_strv_length(char ** str_array)
# # Param: str_array
# CTypes.set_fn_param_type('g_strv_length', 'str_array', CTypes['???'])

# ## void g_test_add_data_func(const char * testpath, const void * test_data, void (*)(const void *) test_func)
# # Param: test_data
# CTypes.set_fn_param_type('g_test_add_data_func', 'test_data', CTypes['???'])
# # Param: test_func
# CTypes.set_fn_param_type('g_test_add_data_func', 'test_func', CTypes['???'])

# ## void g_test_add_data_func_full(const char * testpath, void * test_data, void (*)(const void *) test_func, void (*)(void *) data_free_func)
# # Param: test_data
# CTypes.set_fn_param_type('g_test_add_data_func_full', 'test_data', CTypes['???'])
# # Param: test_func
# CTypes.set_fn_param_type('g_test_add_data_func_full', 'test_func', CTypes['???'])
# # Param: data_free_func
# CTypes.set_fn_param_type('g_test_add_data_func_full', 'data_free_func', CTypes['???'])

# ## void g_test_add_func(const char * testpath, void (*)(void) test_func)
# # Param: test_func
# CTypes.set_fn_param_type('g_test_add_func', 'test_func', CTypes['???'])

# ## void g_test_add_vtable(const char * testpath, unsigned long data_size, const void * test_data, void (*)(void *, const void *) data_setup, void (*)(void *, const void *) data_test, void (*)(void *, const void *) data_teardown)
# # Param: test_data
# CTypes.set_fn_param_type('g_test_add_vtable', 'test_data', CTypes['???'])
# # Param: data_setup
# CTypes.set_fn_param_type('g_test_add_vtable', 'data_setup', CTypes['???'])
# # Param: data_test
# CTypes.set_fn_param_type('g_test_add_vtable', 'data_test', CTypes['???'])
# # Param: data_teardown
# CTypes.set_fn_param_type('g_test_add_vtable', 'data_teardown', CTypes['???'])

# ## GTestCase * g_test_create_case(const char * test_name, unsigned long data_size, const void * test_data, void (*)(void *, const void *) data_setup, void (*)(void *, const void *) data_test, void (*)(void *, const void *) data_teardown)
# # Param: test_data
# CTypes.set_fn_param_type('g_test_create_case', 'test_data', CTypes['???'])
# # Param: data_setup
# CTypes.set_fn_param_type('g_test_create_case', 'data_setup', CTypes['???'])
# # Param: data_test
# CTypes.set_fn_param_type('g_test_create_case', 'data_test', CTypes['???'])
# # Param: data_teardown
# CTypes.set_fn_param_type('g_test_create_case', 'data_teardown', CTypes['???'])

# ## void g_test_init(int * argc, char *** argv)
# # Param: argc
# CTypes.set_fn_param_type('g_test_init', 'argc', CTypes['???'])
# # Param: argv
# CTypes.set_fn_param_type('g_test_init', 'argv', CTypes['???'])

# ## void g_test_log_buffer_push(GTestLogBuffer * tbuffer, unsigned int n_bytes, const unsigned char * bytes)
# # Param: bytes
# CTypes.set_fn_param_type('g_test_log_buffer_push', 'bytes', CTypes['???'])

# ## void g_test_log_set_fatal_handler(int (*)(const char *, GLogLevelFlags, const char *, void *) log_func, void * user_data)
# # Param: log_func
# CTypes.set_fn_param_type('g_test_log_set_fatal_handler', 'log_func', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_test_log_set_fatal_handler', 'user_data', CTypes['???'])

# ## void g_test_queue_destroy(void (*)(void *) destroy_func, void * destroy_data)
# # Param: destroy_func
# CTypes.set_fn_param_type('g_test_queue_destroy', 'destroy_func', CTypes['???'])
# # Param: destroy_data
# CTypes.set_fn_param_type('g_test_queue_destroy', 'destroy_data', CTypes['???'])

# ## void g_test_queue_free(void * gfree_pointer)
# # Param: gfree_pointer
# CTypes.set_fn_param_type('g_test_queue_free', 'gfree_pointer', CTypes['???'])

# ## gint32 g_test_rand_int()
# # Return value
# CTypes.set_fn_return_type('g_test_rand_int', CTypes['???'])

# ## gint32 g_test_rand_int_range(int begin, int end)
# # Return value
# CTypes.set_fn_return_type('g_test_rand_int_range', CTypes['???'])

# ## void g_thread_exit(void * retval)
# # Param: retval
# CTypes.set_fn_param_type('g_thread_exit', 'retval', CTypes['???'])

# ## gpointer g_thread_join(struct _GThread * thread)
# # Return value
# CTypes.set_fn_return_type('g_thread_join', CTypes['???'])

# ## GThread * g_thread_new(const char * name, void *(*)(void *) func, void * data)
# # Param: func
# CTypes.set_fn_param_type('g_thread_new', 'func', CTypes['???'])
# # Param: data
# CTypes.set_fn_param_type('g_thread_new', 'data', CTypes['???'])

# ## gboolean g_thread_pool_move_to_front(struct _GThreadPool * pool, void * data)
# # Param: data
# CTypes.set_fn_param_type('g_thread_pool_move_to_front', 'data', CTypes['???'])

# ## GThreadPool * g_thread_pool_new(void (*)(void *, void *) func, void * user_data, int max_threads, int exclusive, struct _GError ** error)
# # Param: func
# CTypes.set_fn_param_type('g_thread_pool_new', 'func', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_thread_pool_new', 'user_data', CTypes['???'])

# ## gboolean g_thread_pool_push(struct _GThreadPool * pool, void * data, struct _GError ** error)
# # Param: data
# CTypes.set_fn_param_type('g_thread_pool_push', 'data', CTypes['???'])

# ## void g_thread_pool_set_sort_function(struct _GThreadPool * pool, int (*)(const void *, const void *, void *) func, void * user_data)
# # Param: func
# CTypes.set_fn_param_type('g_thread_pool_set_sort_function', 'func', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_thread_pool_set_sort_function', 'user_data', CTypes['???'])

# ## GThread * g_thread_try_new(const char * name, void *(*)(void *) func, void * data, struct _GError ** error)
# # Param: func
# CTypes.set_fn_param_type('g_thread_try_new', 'func', CTypes['???'])
# # Param: data
# CTypes.set_fn_param_type('g_thread_try_new', 'data', CTypes['???'])

# ## gint g_time_zone_adjust_time(struct _GTimeZone * tz, GTimeType type, long * time_)
# # Param: time_
# CTypes.set_fn_param_type('g_time_zone_adjust_time', 'time_', CTypes['???'])

# ## gint32 g_time_zone_get_offset(struct _GTimeZone * tz, int interval)
# # Return value
# CTypes.set_fn_return_type('g_time_zone_get_offset', CTypes['???'])

# ## guint g_timeout_add(unsigned int interval, int (*)(void *) function, void * data)
# # Param: function
# CTypes.set_fn_param_type('g_timeout_add', 'function', CTypes['???'])
# # Param: data
# CTypes.set_fn_param_type('g_timeout_add', 'data', CTypes['???'])

# ## guint g_timeout_add_full(int priority, unsigned int interval, int (*)(void *) function, void * data, void (*)(void *) notify)
# # Param: function
# CTypes.set_fn_param_type('g_timeout_add_full', 'function', CTypes['???'])
# # Param: data
# CTypes.set_fn_param_type('g_timeout_add_full', 'data', CTypes['???'])
# # Param: notify
# CTypes.set_fn_param_type('g_timeout_add_full', 'notify', CTypes['???'])

# ## guint g_timeout_add_seconds(unsigned int interval, int (*)(void *) function, void * data)
# # Param: function
# CTypes.set_fn_param_type('g_timeout_add_seconds', 'function', CTypes['???'])
# # Param: data
# CTypes.set_fn_param_type('g_timeout_add_seconds', 'data', CTypes['???'])

# ## guint g_timeout_add_seconds_full(int priority, unsigned int interval, int (*)(void *) function, void * data, void (*)(void *) notify)
# # Param: function
# CTypes.set_fn_param_type('g_timeout_add_seconds_full', 'function', CTypes['???'])
# # Param: data
# CTypes.set_fn_param_type('g_timeout_add_seconds_full', 'data', CTypes['???'])
# # Param: notify
# CTypes.set_fn_param_type('g_timeout_add_seconds_full', 'notify', CTypes['???'])

# ## gdouble g_timer_elapsed(struct _GTimer * timer, unsigned long * microseconds)
# # Param: microseconds
# CTypes.set_fn_param_type('g_timer_elapsed', 'microseconds', CTypes['???'])

# ## guint g_trash_stack_height(struct _GTrashStack ** stack_p)
# # Param: stack_p
# CTypes.set_fn_param_type('g_trash_stack_height', 'stack_p', CTypes['???'])

# ## gpointer g_trash_stack_peek(struct _GTrashStack ** stack_p)
# # Return value
# CTypes.set_fn_return_type('g_trash_stack_peek', CTypes['???'])
# # Param: stack_p
# CTypes.set_fn_param_type('g_trash_stack_peek', 'stack_p', CTypes['???'])

# ## gpointer g_trash_stack_pop(struct _GTrashStack ** stack_p)
# # Return value
# CTypes.set_fn_return_type('g_trash_stack_pop', CTypes['???'])
# # Param: stack_p
# CTypes.set_fn_param_type('g_trash_stack_pop', 'stack_p', CTypes['???'])

# ## void g_trash_stack_push(struct _GTrashStack ** stack_p, void * data_p)
# # Param: stack_p
# CTypes.set_fn_param_type('g_trash_stack_push', 'stack_p', CTypes['???'])
# # Param: data_p
# CTypes.set_fn_param_type('g_trash_stack_push', 'data_p', CTypes['???'])

# ## void g_tree_foreach(struct _GTree * tree, int (*)(void *, void *, void *) func, void * user_data)
# # Param: func
# CTypes.set_fn_param_type('g_tree_foreach', 'func', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_tree_foreach', 'user_data', CTypes['???'])

# ## void g_tree_insert(struct _GTree * tree, void * key, void * value)
# # Param: key
# CTypes.set_fn_param_type('g_tree_insert', 'key', CTypes['???'])
# # Param: value
# CTypes.set_fn_param_type('g_tree_insert', 'value', CTypes['???'])

# ## gpointer g_tree_lookup(struct _GTree * tree, const void * key)
# # Return value
# CTypes.set_fn_return_type('g_tree_lookup', CTypes['???'])
# # Param: key
# CTypes.set_fn_param_type('g_tree_lookup', 'key', CTypes['???'])

# ## gboolean g_tree_lookup_extended(struct _GTree * tree, const void * lookup_key, void ** orig_key, void ** value)
# # Param: lookup_key
# CTypes.set_fn_param_type('g_tree_lookup_extended', 'lookup_key', CTypes['???'])
# # Param: orig_key
# CTypes.set_fn_param_type('g_tree_lookup_extended', 'orig_key', CTypes['???'])
# # Param: value
# CTypes.set_fn_param_type('g_tree_lookup_extended', 'value', CTypes['???'])

# ## GTree * g_tree_new(int (*)(const void *, const void *) key_compare_func)
# # Param: key_compare_func
# CTypes.set_fn_param_type('g_tree_new', 'key_compare_func', CTypes['???'])

# ## GTree * g_tree_new_full(int (*)(const void *, const void *, void *) key_compare_func, void * key_compare_data, void (*)(void *) key_destroy_func, void (*)(void *) value_destroy_func)
# # Param: key_compare_func
# CTypes.set_fn_param_type('g_tree_new_full', 'key_compare_func', CTypes['???'])
# # Param: key_compare_data
# CTypes.set_fn_param_type('g_tree_new_full', 'key_compare_data', CTypes['???'])
# # Param: key_destroy_func
# CTypes.set_fn_param_type('g_tree_new_full', 'key_destroy_func', CTypes['???'])
# # Param: value_destroy_func
# CTypes.set_fn_param_type('g_tree_new_full', 'value_destroy_func', CTypes['???'])

# ## GTree * g_tree_new_with_data(int (*)(const void *, const void *, void *) key_compare_func, void * key_compare_data)
# # Param: key_compare_func
# CTypes.set_fn_param_type('g_tree_new_with_data', 'key_compare_func', CTypes['???'])
# # Param: key_compare_data
# CTypes.set_fn_param_type('g_tree_new_with_data', 'key_compare_data', CTypes['???'])

# ## gboolean g_tree_remove(struct _GTree * tree, const void * key)
# # Param: key
# CTypes.set_fn_param_type('g_tree_remove', 'key', CTypes['???'])

# ## void g_tree_replace(struct _GTree * tree, void * key, void * value)
# # Param: key
# CTypes.set_fn_param_type('g_tree_replace', 'key', CTypes['???'])
# # Param: value
# CTypes.set_fn_param_type('g_tree_replace', 'value', CTypes['???'])

# ## gpointer g_tree_search(struct _GTree * tree, int (*)(const void *, const void *) search_func, const void * user_data)
# # Return value
# CTypes.set_fn_return_type('g_tree_search', CTypes['???'])
# # Param: search_func
# CTypes.set_fn_param_type('g_tree_search', 'search_func', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_tree_search', 'user_data', CTypes['???'])

# ## gboolean g_tree_steal(struct _GTree * tree, const void * key)
# # Param: key
# CTypes.set_fn_param_type('g_tree_steal', 'key', CTypes['???'])

# ## void g_tree_traverse(struct _GTree * tree, int (*)(void *, void *, void *) traverse_func, GTraverseType traverse_type, void * user_data)
# # Param: traverse_func
# CTypes.set_fn_param_type('g_tree_traverse', 'traverse_func', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_tree_traverse', 'user_data', CTypes['???'])

# ## gpointer g_try_malloc(unsigned long n_bytes)
# # Return value
# CTypes.set_fn_return_type('g_try_malloc', CTypes['???'])

# ## gpointer g_try_malloc0(unsigned long n_bytes)
# # Return value
# CTypes.set_fn_return_type('g_try_malloc0', CTypes['???'])

# ## gpointer g_try_malloc0_n(unsigned long n_blocks, unsigned long n_block_bytes)
# # Return value
# CTypes.set_fn_return_type('g_try_malloc0_n', CTypes['???'])

# ## gpointer g_try_malloc_n(unsigned long n_blocks, unsigned long n_block_bytes)
# # Return value
# CTypes.set_fn_return_type('g_try_malloc_n', CTypes['???'])

# ## gpointer g_try_realloc(void * mem, unsigned long n_bytes)
# # Return value
# CTypes.set_fn_return_type('g_try_realloc', CTypes['???'])
# # Param: mem
# CTypes.set_fn_param_type('g_try_realloc', 'mem', CTypes['???'])

# ## gpointer g_try_realloc_n(void * mem, unsigned long n_blocks, unsigned long n_block_bytes)
# # Return value
# CTypes.set_fn_return_type('g_try_realloc_n', CTypes['???'])
# # Param: mem
# CTypes.set_fn_param_type('g_try_realloc_n', 'mem', CTypes['???'])

# ## gunichar2 * g_ucs4_to_utf16(const unsigned int * str, long len, long * items_read, long * items_written, struct _GError ** error)
# # Return value
# CTypes.set_fn_return_type('g_ucs4_to_utf16', CTypes['???'])
# # Param: str
# CTypes.set_fn_param_type('g_ucs4_to_utf16', 'str', CTypes['???'])
# # Param: items_read
# CTypes.set_fn_param_type('g_ucs4_to_utf16', 'items_read', CTypes['???'])
# # Param: items_written
# CTypes.set_fn_param_type('g_ucs4_to_utf16', 'items_written', CTypes['???'])

# ## gchar * g_ucs4_to_utf8(const unsigned int * str, long len, long * items_read, long * items_written, struct _GError ** error)
# # Param: str
# CTypes.set_fn_param_type('g_ucs4_to_utf8', 'str', CTypes['???'])
# # Param: items_read
# CTypes.set_fn_param_type('g_ucs4_to_utf8', 'items_read', CTypes['???'])
# # Param: items_written
# CTypes.set_fn_param_type('g_ucs4_to_utf8', 'items_written', CTypes['???'])

# ## gboolean g_unichar_compose(unsigned int a, unsigned int b, unsigned int * ch)
# # Param: ch
# CTypes.set_fn_param_type('g_unichar_compose', 'ch', CTypes['???'])

# ## gboolean g_unichar_decompose(unsigned int ch, unsigned int * a, unsigned int * b)
# # Param: a
# CTypes.set_fn_param_type('g_unichar_decompose', 'a', CTypes['???'])
# # Param: b
# CTypes.set_fn_param_type('g_unichar_decompose', 'b', CTypes['???'])

# ## gsize g_unichar_fully_decompose(unsigned int ch, int compat, unsigned int * result, unsigned long result_len)
# # Param: result
# CTypes.set_fn_param_type('g_unichar_fully_decompose', 'result', CTypes['???'])

# ## gboolean g_unichar_get_mirror_char(unsigned int ch, unsigned int * mirrored_ch)
# # Param: mirrored_ch
# CTypes.set_fn_param_type('g_unichar_get_mirror_char', 'mirrored_ch', CTypes['???'])

# ## gunichar * g_unicode_canonical_decomposition(unsigned int ch, unsigned long * result_len)
# # Return value
# CTypes.set_fn_return_type('g_unicode_canonical_decomposition', CTypes['???'])
# # Param: result_len
# CTypes.set_fn_param_type('g_unicode_canonical_decomposition', 'result_len', CTypes['???'])

# ## void g_unicode_canonical_ordering(unsigned int * string, unsigned long len)
# # Param: string
# CTypes.set_fn_param_type('g_unicode_canonical_ordering', 'string', CTypes['???'])

# ## gchar ** g_uri_list_extract_uris(const char * uri_list)
# # Return value
# CTypes.set_fn_return_type('g_uri_list_extract_uris', CTypes['???'])

# ## gunichar * g_utf16_to_ucs4(const unsigned short * str, long len, long * items_read, long * items_written, struct _GError ** error)
# # Return value
# CTypes.set_fn_return_type('g_utf16_to_ucs4', CTypes['???'])
# # Param: str
# CTypes.set_fn_param_type('g_utf16_to_ucs4', 'str', CTypes['???'])
# # Param: items_read
# CTypes.set_fn_param_type('g_utf16_to_ucs4', 'items_read', CTypes['???'])
# # Param: items_written
# CTypes.set_fn_param_type('g_utf16_to_ucs4', 'items_written', CTypes['???'])

# ## gchar * g_utf16_to_utf8(const unsigned short * str, long len, long * items_read, long * items_written, struct _GError ** error)
# # Param: str
# CTypes.set_fn_param_type('g_utf16_to_utf8', 'str', CTypes['???'])
# # Param: items_read
# CTypes.set_fn_param_type('g_utf16_to_utf8', 'items_read', CTypes['???'])
# # Param: items_written
# CTypes.set_fn_param_type('g_utf16_to_utf8', 'items_written', CTypes['???'])

# ## gunichar * g_utf8_to_ucs4(const char * str, long len, long * items_read, long * items_written, struct _GError ** error)
# # Return value
# CTypes.set_fn_return_type('g_utf8_to_ucs4', CTypes['???'])
# # Param: items_read
# CTypes.set_fn_param_type('g_utf8_to_ucs4', 'items_read', CTypes['???'])
# # Param: items_written
# CTypes.set_fn_param_type('g_utf8_to_ucs4', 'items_written', CTypes['???'])

# ## gunichar * g_utf8_to_ucs4_fast(const char * str, long len, long * items_written)
# # Return value
# CTypes.set_fn_return_type('g_utf8_to_ucs4_fast', CTypes['???'])
# # Param: items_written
# CTypes.set_fn_param_type('g_utf8_to_ucs4_fast', 'items_written', CTypes['???'])

# ## gunichar2 * g_utf8_to_utf16(const char * str, long len, long * items_read, long * items_written, struct _GError ** error)
# # Return value
# CTypes.set_fn_return_type('g_utf8_to_utf16', CTypes['???'])
# # Param: items_read
# CTypes.set_fn_param_type('g_utf8_to_utf16', 'items_read', CTypes['???'])
# # Param: items_written
# CTypes.set_fn_param_type('g_utf8_to_utf16', 'items_written', CTypes['???'])

# ## gboolean g_utf8_validate(const char * str, long max_len, const char ** end)
# # Param: end
# CTypes.set_fn_param_type('g_utf8_validate', 'end', CTypes['???'])

# ## gint g_variant_compare(const void * one, const void * two)
# # Param: one
# CTypes.set_fn_param_type('g_variant_compare', 'one', CTypes['???'])
# # Param: two
# CTypes.set_fn_param_type('g_variant_compare', 'two', CTypes['???'])

# ## gchar * g_variant_dup_bytestring(struct _GVariant * value, unsigned long * length)
# # Param: length
# CTypes.set_fn_param_type('g_variant_dup_bytestring', 'length', CTypes['???'])

# ## gchar ** g_variant_dup_bytestring_array(struct _GVariant * value, unsigned long * length)
# # Return value
# CTypes.set_fn_return_type('g_variant_dup_bytestring_array', CTypes['???'])
# # Param: length
# CTypes.set_fn_param_type('g_variant_dup_bytestring_array', 'length', CTypes['???'])

# ## gchar ** g_variant_dup_objv(struct _GVariant * value, unsigned long * length)
# # Return value
# CTypes.set_fn_return_type('g_variant_dup_objv', CTypes['???'])
# # Param: length
# CTypes.set_fn_param_type('g_variant_dup_objv', 'length', CTypes['???'])

# ## gchar * g_variant_dup_string(struct _GVariant * value, unsigned long * length)
# # Param: length
# CTypes.set_fn_param_type('g_variant_dup_string', 'length', CTypes['???'])

# ## gchar ** g_variant_dup_strv(struct _GVariant * value, unsigned long * length)
# # Return value
# CTypes.set_fn_return_type('g_variant_dup_strv', CTypes['???'])
# # Param: length
# CTypes.set_fn_param_type('g_variant_dup_strv', 'length', CTypes['???'])

# ## gboolean g_variant_equal(const void * one, const void * two)
# # Param: one
# CTypes.set_fn_param_type('g_variant_equal', 'one', CTypes['???'])
# # Param: two
# CTypes.set_fn_param_type('g_variant_equal', 'two', CTypes['???'])

# ## const gchar ** g_variant_get_bytestring_array(struct _GVariant * value, unsigned long * length)
# # Return value
# CTypes.set_fn_return_type('g_variant_get_bytestring_array', CTypes['???'])
# # Param: length
# CTypes.set_fn_param_type('g_variant_get_bytestring_array', 'length', CTypes['???'])

# ## gconstpointer g_variant_get_data(struct _GVariant * value)
# # Return value
# CTypes.set_fn_return_type('g_variant_get_data', CTypes['???'])

# ## gconstpointer g_variant_get_fixed_array(struct _GVariant * value, unsigned long * n_elements, unsigned long element_size)
# # Return value
# CTypes.set_fn_return_type('g_variant_get_fixed_array', CTypes['???'])
# # Param: n_elements
# CTypes.set_fn_param_type('g_variant_get_fixed_array', 'n_elements', CTypes['???'])

# ## gint32 g_variant_get_handle(struct _GVariant * value)
# # Return value
# CTypes.set_fn_return_type('g_variant_get_handle', CTypes['???'])

# ## gint16 g_variant_get_int16(struct _GVariant * value)
# # Return value
# CTypes.set_fn_return_type('g_variant_get_int16', CTypes['???'])

# ## gint32 g_variant_get_int32(struct _GVariant * value)
# # Return value
# CTypes.set_fn_return_type('g_variant_get_int32', CTypes['???'])

# ## gint64 g_variant_get_int64(struct _GVariant * value)
# # Return value
# CTypes.set_fn_return_type('g_variant_get_int64', CTypes['???'])

# ## const gchar ** g_variant_get_objv(struct _GVariant * value, unsigned long * length)
# # Return value
# CTypes.set_fn_return_type('g_variant_get_objv', CTypes['???'])
# # Param: length
# CTypes.set_fn_param_type('g_variant_get_objv', 'length', CTypes['???'])

# ## const gchar * g_variant_get_string(struct _GVariant * value, unsigned long * length)
# # Param: length
# CTypes.set_fn_param_type('g_variant_get_string', 'length', CTypes['???'])

# ## const gchar ** g_variant_get_strv(struct _GVariant * value, unsigned long * length)
# # Return value
# CTypes.set_fn_return_type('g_variant_get_strv', CTypes['???'])
# # Param: length
# CTypes.set_fn_param_type('g_variant_get_strv', 'length', CTypes['???'])

# ## guint16 g_variant_get_uint16(struct _GVariant * value)
# # Return value
# CTypes.set_fn_return_type('g_variant_get_uint16', CTypes['???'])

# ## guint64 g_variant_get_uint64(struct _GVariant * value)
# # Return value
# CTypes.set_fn_return_type('g_variant_get_uint64', CTypes['???'])

# ## void g_variant_get_va(struct _GVariant * value, const char * format_string, const char ** endptr, int * app)
# # Param: endptr
# CTypes.set_fn_param_type('g_variant_get_va', 'endptr', CTypes['???'])
# # Param: app
# CTypes.set_fn_param_type('g_variant_get_va', 'app', CTypes['???'])

# ## guint g_variant_hash(const void * value)
# # Param: value
# CTypes.set_fn_param_type('g_variant_hash', 'value', CTypes['???'])

# ## GVariant * g_variant_new_array(const struct _GVariantType * child_type, struct _GVariant *const * children, unsigned long n_children)
# # Param: children
# CTypes.set_fn_param_type('g_variant_new_array', 'children', CTypes['???'])

# ## GVariant * g_variant_new_bytestring_array(const char *const * strv, long length)
# # Param: strv
# CTypes.set_fn_param_type('g_variant_new_bytestring_array', 'strv', CTypes['???'])

# ## GVariant * g_variant_new_fixed_array(const struct _GVariantType * element_type, const void * elements, unsigned long n_elements, unsigned long element_size)
# # Param: elements
# CTypes.set_fn_param_type('g_variant_new_fixed_array', 'elements', CTypes['???'])

# ## GVariant * g_variant_new_from_data(const struct _GVariantType * type, const void * data, unsigned long size, int trusted, void (*)(void *) notify, void * user_data)
# # Param: data
# CTypes.set_fn_param_type('g_variant_new_from_data', 'data', CTypes['???'])
# # Param: notify
# CTypes.set_fn_param_type('g_variant_new_from_data', 'notify', CTypes['???'])
# # Param: user_data
# CTypes.set_fn_param_type('g_variant_new_from_data', 'user_data', CTypes['???'])

# ## GVariant * g_variant_new_objv(const char *const * strv, long length)
# # Param: strv
# CTypes.set_fn_param_type('g_variant_new_objv', 'strv', CTypes['???'])

# ## GVariant * g_variant_new_parsed_va(const char * format, int * app)
# # Param: app
# CTypes.set_fn_param_type('g_variant_new_parsed_va', 'app', CTypes['???'])

# ## GVariant * g_variant_new_strv(const char *const * strv, long length)
# # Param: strv
# CTypes.set_fn_param_type('g_variant_new_strv', 'strv', CTypes['???'])

# ## GVariant * g_variant_new_tuple(struct _GVariant *const * children, unsigned long n_children)
# # Param: children
# CTypes.set_fn_param_type('g_variant_new_tuple', 'children', CTypes['???'])

# ## GVariant * g_variant_new_va(const char * format_string, const char ** endptr, int * app)
# # Param: endptr
# CTypes.set_fn_param_type('g_variant_new_va', 'endptr', CTypes['???'])
# # Param: app
# CTypes.set_fn_param_type('g_variant_new_va', 'app', CTypes['???'])

# ## GVariant * g_variant_parse(const struct _GVariantType * type, const char * text, const char * limit, const char ** endptr, struct _GError ** error)
# # Param: endptr
# CTypes.set_fn_param_type('g_variant_parse', 'endptr', CTypes['???'])

# ## void g_variant_store(struct _GVariant * value, void * data)
# # Param: data
# CTypes.set_fn_param_type('g_variant_store', 'data', CTypes['???'])

# ## gboolean g_variant_type_equal(const void * type1, const void * type2)
# # Param: type1
# CTypes.set_fn_param_type('g_variant_type_equal', 'type1', CTypes['???'])
# # Param: type2
# CTypes.set_fn_param_type('g_variant_type_equal', 'type2', CTypes['???'])

# ## guint g_variant_type_hash(const void * type)
# # Param: type
# CTypes.set_fn_param_type('g_variant_type_hash', 'type', CTypes['???'])

# ## GVariantType * g_variant_type_new_tuple(const struct _GVariantType *const * items, int length)
# # Param: items
# CTypes.set_fn_param_type('g_variant_type_new_tuple', 'items', CTypes['???'])

# ## gboolean g_variant_type_string_scan(const char * string, const char * limit, const char ** endptr)
# # Param: endptr
# CTypes.set_fn_param_type('g_variant_type_string_scan', 'endptr', CTypes['???'])

# ## gint g_vasprintf(char ** string, const char * format, struct __va_list_tag [1] args)
# # Param: string
# CTypes.set_fn_param_type('g_vasprintf', 'string', CTypes['???'])
# # Param: args
# CTypes.set_fn_param_type('g_vasprintf', 'args', CTypes['???'])

# ## gint g_vfprintf(struct __sFILE * file, const char * format, struct __va_list_tag [1] args)
# # Param: file
# CTypes.set_fn_param_type('g_vfprintf', 'file', CTypes['???'])
# # Param: args
# CTypes.set_fn_param_type('g_vfprintf', 'args', CTypes['???'])

# ## gint g_vprintf(const char * format, struct __va_list_tag [1] args)
# # Param: args
# CTypes.set_fn_param_type('g_vprintf', 'args', CTypes['???'])

# ## gint g_vsprintf(char * string, const char * format, struct __va_list_tag [1] args)
# # Param: args
# CTypes.set_fn_param_type('g_vsprintf', 'args', CTypes['???'])
