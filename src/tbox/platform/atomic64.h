#ifndef TB_PLATFORM_ATOMIC64_H
#define TB_PLATFORM_ATOMIC64_H

/* includes */
#include "prefix.h"
#if __tb_has_feature__(c_atomic) && !defined(__STDC_NO_ATOMICS__)
#include "libc/atomic64.h"
#else
#include "libc/atomic64.h" // todo arch
#endif

#endif // TB_PLATFORM_ATOMIC64_H