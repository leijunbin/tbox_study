#ifndef TB_PLATFORM_MUTEX_H
#define TB_PLATFORM_MUTEX_H

/* includes */
#include "prefix.h"

/* extern */
__tb_extern_c_enter__

/* interfaces */
tb_mutex_ref_t tb_mutex_init(tb_noarg_t);
tb_void_t tb_mutex_exit(tb_mutex_ref_t mutex);
tb_bool_t tb_mutex_enter(tb_mutex_ref_t mutex);
tb_bool_t tb_mutex_entry_try(tb_mutex_ref_t mutex);
tb_bool_t tb_mutex_leave(tb_mutex_ref_t mutex);

/* extern */
__tb_extern_c_leave__

#endif  // TB_PLATFORM_MUTEX_H