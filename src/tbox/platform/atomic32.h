#ifndef TB_PLATFORM_ATOMIC32_H
#define TB_PLATFORM_ATOMIC32_H

/* includes */
#include "prefix.h"
#if __tb_has_feature__(c_atomic) && !defined(__STDC_NO_ATOMICS__)
#include "libc/atomic32.h"
#else
#include "libc/atomic32.h" // todo arch
#endif

#endif // TB_PLATFORM_ATOMIC32_H