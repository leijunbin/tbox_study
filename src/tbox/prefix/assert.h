#ifndef TB_PREFIX_ASSERT_H
#define TB_PREFIX_ASSERT_H

/* includes */
#include "keyword.h"
#include "check.h"

/* extern */
__tb_extern_c_enter__

/* macros */
// assert
#ifdef __tb_debug__
#define tb_assert_and_check_return_val(x, v) 
#else
#define tb_assert_and_check_return_val(x, v) tb_check_return_val(x, v)
#endif

// the static assert
#define tb_assert_static(x)                         \
  do {                                              \
    typedef int __tb_static_assert__[(x) ? 1 : -1]; \
    __tb_volatile__ __tb_static_assert__ __a = {0}; \
    tb_used_ptr((tb_cpointer_t)(tb_size_t)__a);\
  } while (0)

/* extern */
__tb_extern_c_leave__

#endif  // TB_PREFIX_ASSERT_H