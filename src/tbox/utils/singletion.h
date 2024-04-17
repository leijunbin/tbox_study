#ifndef TB_UTILS_SINGLETION_H
#define TB_UTILS_SINGLETION_H

/* includes */
#include "prefix.h"

/* extern */
__tb_extern_c_enter__

/* types */
// the singletion type enum
typedef enum __tb_singletion_type_e
{
    // the lock profiler type
    TB_SINGLETION_TYPE_LOCK_PROFILER = 2

    // the max count of the singletion type
#if defined(TB_CONFIG_MICRO_ENABLE)
,   TB_SINGLETION_TYPE_MAXN = TB_SINGLETION_TYPE_LOCK_PROFILER + 2
#else
,   TB_SINGLETION_TYPE_MAXN = TB_SINGLETION_TYPE_LOCK_PROFILER + 64
#endif
}tb_singletion_type_e;

// the singletion init func type
typedef tb_handle_t (*tb_singletion_init_func_t)(tb_cpointer_t *ppriv);
// the singletion exit func type
typedef tb_void_t (*tb_singletion_exit_func_t)(tb_handle_t instance, tb_cpointer_t priv);
// the singletion kill func type
typedef tb_void_t (*tb_singletion_kill_func_t)(tb_handle_t instance, tb_cpointer_t priv);
// the singletion static init func type
typedef tb_bool_t (*tb_singletion_static_init_func_t)(tb_handle_t instance, tb_cpointer_t priv);

/* interfaces */
tb_bool_t tb_singletion_init(tb_noarg_t);
tb_void_t tb_singletion_exit(tb_noarg_t);
tb_void_t tb_singletion_kill(tb_noarg_t);

tb_handle_t tb_singletion_instance(tb_size_t type, tb_singletion_init_func_t init, tb_singletion_exit_func_t exit, tb_singletion_kill_func_t kill, tb_cpointer_t priv);

tb_bool_t tb_singletion_static_init(tb_atomic32_t *binited, tb_handle_t instance, tb_singletion_static_init_func_t init, tb_cpointer_t priv);

/* extern */
__tb_extern_c_leave__

#endif // TB_UTILS_SINGLETION_H