#ifndef TB_PLATFORM_MUTEX_H
#define TB_PLATFORM_MUTEX_H

/* includes */
#include "prefix.h"

#include <pthread.h>

/* type */
typedef pthread_mutex_t tb_mutex_t;

/* extern */
__tb_extern_c_enter__

/* interfaces */
tb_mutex_ref_t tb_mutex_init_impl(tb_mutex_t *mutex);
tb_void_t tb_mutex_exit_impl(tb_mutex_t *mutex);
tb_bool_t tb_mutex_enter_without_profilter(tb_mutex_ref_t mutex);
tb_bool_t tb_mutex_enter_try_without_profilter(tb_mutex_ref_t mutex);

/* extern */
__tb_extern_c_leave__

#endif // TB_PLATFORM_MUTEX_H