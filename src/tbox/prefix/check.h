#ifndef TB_PREFIX_CHECK_H
#define TB_PREFIX_CHECK_H

/* includes */

/* macros */
// check
#define tb_check_return_val(x, v) \
  do {                      \
    if (!(x)) return v;     \
  }                         \
  while(0)

#endif  // TB_PREFIX_CHECK_H