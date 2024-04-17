#ifndef TB_PLATFORM_LIBC_ATOMIC32_H
#define TB_PLATFORM_LIBC_ATOMIC32_H

/* includes */
#include <stdatomic.h>

/* macros */
#define tb_atomic_get(a) atomic_load(a)

#endif // TB_PLATFORM_LIBC_ATOMIC32_H