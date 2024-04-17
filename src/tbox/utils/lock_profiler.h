#ifndef TB_UTILS_LOCK_PROFILER_H
#define TB_UTILS_LOCK_PROFILER_H

/* includes */
#include "prefix.h"

/* extern */
__tb_extern_c_enter__

/* macros */
// enable lock profiler
#undef TB_LOCK_PROFILER_ENABLE
#if defined(__tb_debug__) && !defined(TB_CONFIG_MICRO_ENABLE)
#define TB_LOCK_PROFILER_ENABLE
#endif // defined(__tb_debug__) && !defined(TB_CONFIG_MICRO_ENABLE)

/* type */
// the lock profiler ref type
typedef __tb_typeref__(lock_profiler);

/* interfaces */
tb_lock_profiler_ref_t tb_lock_profiler(tb_noarg_t);
tb_lock_profiler_ref_t tb_lock_profiler_init(tb_noarg_t);
tb_void_t tb_lock_profiler_exit(tb_lock_profiler_ref_t profiler);
tb_void_t tb_lock_profiler_dump(tb_lock_profiler_ref_t profiler);
tb_void_t tb_lock_profiler_register(tb_lock_profiler_ref_t profiler);
tb_void_t tb_lock_profiler_occupied(tb_lock_profiler_ref_t profiler);

/* extern */
__tb_extern_c_leave__

#endif // TB_UTILS_LOCK_PROFILER_H