/* trace */
#define TB_TRACE_MODULE_NAME "lock_profiler"
#define TB_TRACE_MODULE_DEBUG (0)

/* includes */
#include "lock_profiler.h"

/* macros */
#ifdef __tb_small__
#define TB_LOCK_PROFILER_MAXN (256)
#else
#define TB_LOCK_PROFILER_MAXN (512)
#endif // __tb_small__

/* types */
typedef struct __tb_lock_profiler_item_t
{
    // the lock address
    tb_atomic_t lock;
    // the occupied count
    tb_atomic32_t size;
    // the lock name
    tb_atomic_t name;
}tb_lock_profiler_item_t;

typedef struct __tb_lock_profiler_t
{
    tb_lock_profiler_item_t list[TB_LOCK_PROFILER_MAXN];
} tb_lock_profiler_t;

/* instance implementation */
