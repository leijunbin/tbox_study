/* includes */
#include "string.h"
#ifndef TB_CONFIG_LIBC_HAVE_MEMSET

#else
#include "impl/libc/memset.c"
#endif // TB_CONFIG_LIBC_HAVE_MEMSET

/* interfaces */
tb_pointer_t tb_memset(tb_pointer_t s, tb_byte_t c, tb_size_t n)
{
#ifdef __tb_debug__

#endif
    return tb_memset_impl(s, c, n);
}