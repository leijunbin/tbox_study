#ifndef TB_PLATFORM_ATOMIC_H
#define TB_PLATFORM_ATOMIC_H

/* includes */
#include "prefix.h"
#if __tb_has_feature__(c_atomic) && !defined(__STDC_NO_ATOMICS__)
#include "libc/atomic.h"
#else
#include "libc/atomic.h" // todo arch
#endif


#endif // TB_PLATFORM_ATOMIC_H