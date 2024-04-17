#include "prefix.h"
#include <string.h>

static tb_pointer_t tb_memset_impl(tb_pointer_t s, tb_byte_t c, tb_size_t n)
{
    tb_assert_and_check_return_val(s, tb_null);
    return memset(s, c, n);
}