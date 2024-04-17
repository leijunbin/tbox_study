#ifndef TB_LIBC_STRING_H
#define TB_LIBC_STRING_H

/* includes */
#include "prefix.h"

/* extern */
__tb_extern_c_enter__

/* macros */

/* interfaces */
// memset
tb_pointer_t tb_memset(tb_pointer_t s, tb_byte_t c, tb_size_t n);

/* extern */
__tb_extern_c_leave__

#endif // TB_LIBC_STRING_H