#ifndef TB_PLATFORM_LIBC_ATOMIC_H
#define TB_PLATFORM_LIBC_ATOMIC_H

/* includes */
#include "prefix.h"
#include <stdatomic.h>

/* macros */
#define TB_ATOMIC_RELAXED memory_order_relaxed 
#define TB_ATOMIC_CONSUME memory_order_consume
#define TB_ATOMIC_ACQUIRE memory_order_acquire
#define TB_ATOMIC_RELEASE memory_order_release
#define TB_ATOMIC_ACQ_REL memory_order_acq_rel
#define TB_ATOMIC_SEQ_CST memory_order_seq_cst

#define tb_memory_barrier() atomic_thread_fence(memory_order_seq_cst)

#define TB_ATOMIC_FLAG_INIT ATOMIC_FLAG_INIT
#define tb_atomic_flag_test_and_set_explicit(a, mo) atomic_flag_test_and_set_explicit(a, mo)
#define tb_atomic_flag_test_and_set(a) atomic_flag_test_and_set(a)
#ifdef atomic_flag_test_explicit
#define tb_atomic_flag_test_explicit(a, mo) atomic_flag_test_explicit(a, mo)
#else
#define tb_atomic_flag_test_explicit(a, mo) 
#endif

#define tb_atomic_get_explicit()

#endif // TB_PLATFORM_LIBC_ATOMIC_H