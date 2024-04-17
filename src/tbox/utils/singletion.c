/* trace */
#define TB_TRACE_MODULE_NAME "singletion"
#define TB_TRACE_MODULE_DEBUG (0)

/* includes */
#include "singletion.h"
#include "../libc/libc.h"

/* types */
// the singletion type
typedef struct __tb_singletion_t
{
    // the exit func
    tb_singletion_exit_func_t exit;
    // the kill func
    tb_singletion_kill_func_t kill;
    // the priv data
    tb_cpointer_t priv;
    // the instance
    tb_atomic_t instance;
}tb_singletion_t;

/* globals */
static tb_singletion_t g_singletions[TB_SINGLETION_TYPE_MAXN] = {{0}};

/* implementation */
tb_bool_t tb_singletion_init(tb_noarg_t)
{
    // this is thread safe, because tb_singletion_init() only will be called in/before the tb_init()
    static tb_bool_t binited = tb_false;

    if(!binited)
    {
        tb_memset(&g_singletions, 0, sizeof(g_singletions));
        binited = tb_true;
    }

    return tb_true;
}

tb_void_t tb_singletion_kill(tb_noarg_t)
{
    tb_size_t
}
