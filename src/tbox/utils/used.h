#ifndef TB_UTILS_USED_H
#define TB_UTILS_USED_H

/* includes */
#include "prefix.h"

/* entern */
__tb_extern_c_enter__

/* macors */
#define tb_used(ptr) tb_uesd_ptr((tb_cpointer_t)(tb_size_t)(ptr))

/* interfaces */
tb_void_t tb_uesd_ptr(tb_cpointer_t variable);

/* entern */
__tb_extern_c_leave__

#endif