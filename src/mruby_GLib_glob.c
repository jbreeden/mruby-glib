#include "mruby_GLib.h"
#include "fnmatch.h"

struct glob_context {
  mrb_value segments;
  mrb_value block;
  mrb_int segments_length;
  mrb_int match_num;
};

static const char*
explicit_path(char* path) {
  if (strlen(path) == 0) {
    return ".";
  } else {
    return path;
  }
}

char*
path_join(const char* dir, const char* file) {
  char* joined = (char*)calloc(strlen(dir) + strlen(file) + 2, sizeof(char));
  int dir_len = strlen(dir);
  if (dir_len > 0 && dir[dir_len - 1] == '/') {
    strcpy(joined, dir);
    strcat(joined, file);
  } else if (dir_len == 0) {
    strcpy(joined, file);
  } else {
    strcpy(joined, dir);
    strcat(joined, "/");
    strcat(joined, file);
  }
  return joined;
}

static int
fnmatch_file(const char* pattern, const char* file) {
  if (file[0] == '.' && !(pattern[0] == '.')) {
    return FALSE;
  } else {
    int status = fnmatch(pattern, file, 0);
    return status != FNM_NOMATCH;
  }
}

static void
glob_recurse(struct glob_context *context, mrb_state* mrb, mrb_value self, char* root, mrb_int segment_num) {
  mrb_value segment = mrb_ary_ref(mrb, context->segments, segment_num);
  mrb_int pattern_count = mrb_ary_len(mrb, segment);

  GError * err = NULL;
  GDir * dir = g_dir_open(explicit_path(root), 0, &err);
  
  if (err != NULL) {
    return;
  }

#define EACH_ENTRY(dir, entry, path, is_dir) \
  for (int i = 0;;++i) { \
    const char * entry = NULL; \
    if (i == 0) { \
      entry = "."; \
    } else if (i == 1) { \
      entry = ".."; \
    } else { \
      entry = g_dir_read_name(dir); \
    } \
    if (entry == NULL) { \
      break; \
    } \
    char* path = path_join(root, entry); \
    gboolean is_dir = g_file_test(path, G_FILE_TEST_IS_DIR); \

#define END_EACH_ENTRY() \
    free(path); \
  }

#define EACH_PATTERN(pattern) \
  for (int i = 0; i < pattern_count; ++i) { \
    mrb_value ruby_pattern = mrb_ary_ref(mrb, segment, i); \
    const char* pattern = mrb_string_value_cstr(mrb, &ruby_pattern); \

#define END_EACH_PATTERN() \
  }

  /* Last Segment */
  if (segment_num == context->segments_length - 1) {
    EACH_ENTRY(dir, entry, path, is_dir)
      EACH_PATTERN(pattern)
        if (fnmatch_file(pattern, entry)) {
          mrb_funcall(mrb, context->block, "call", 2, mrb_str_new_cstr(mrb, path), mrb_fixnum_value(context->match_num));
          context->match_num += 1;
          break;
        }
      END_EACH_PATTERN()
    END_EACH_ENTRY()
  /* Deep Match */
  } else if (pattern_count == 1
      && mrb_obj_is_kind_of(mrb, mrb_ary_ref(mrb, segment, 0), mrb->symbol_class)
      && mrb_symbol(mrb_ary_ref(mrb, segment, 0)) == mrb_intern_cstr(mrb, "**")) {
    EACH_ENTRY(dir, entry, path, is_dir)
      if (entry[0] != '.' && is_dir) {
        glob_recurse(context, mrb, self, path, segment_num);
      }
    END_EACH_ENTRY()
    glob_recurse(context, mrb, self, root, segment_num + 1);
  /* "Normal" Case */
  } else {
    EACH_ENTRY(dir, entry, path, is_dir)
      EACH_PATTERN(pattern)
        if (is_dir && fnmatch_file(pattern, entry)) {
          glob_recurse(context, mrb, self, path, segment_num + 1);
        }
      END_EACH_PATTERN()
    END_EACH_ENTRY()
  }

  g_dir_close(dir);
}

mrb_value
mruby_Dir_Globber_glob_recurse(mrb_state* mrb, mrb_value self) {
  char* dir;
  mrb_int segment_num;
  mrb_get_args(mrb, "zi", &dir, &segment_num);

  struct glob_context context;
  context.segments = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@segments"));
  context.block = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@block"));
  context.segments_length = mrb_ary_len(mrb, context.segments);
  context.match_num = 0;
  glob_recurse(&context, mrb, self, dir, 0);
  return mrb_nil_value();
}

void
mruby_GLib_glob_init(mrb_state* mrb) {
  struct RClass* Dir_class = mrb_define_class(mrb, "Dir", mrb->object_class);
  struct RClass* Globber_class = mrb_define_class_under(mrb, Dir_class, "Globber", mrb->object_class);
  mrb_define_method(mrb, Globber_class, "glob_recurse", mruby_Dir_Globber_glob_recurse, MRB_ARGS_ARG(2, 0));
}
