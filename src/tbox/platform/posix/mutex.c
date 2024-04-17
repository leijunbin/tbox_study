/* includes */
#include "prefix.h"
#include "../impl/mutex.h"

/* private implementation */
tb_mutex_ref_t tb_mutex_init_impl(tb_mutex_t *mutex)
{
    // init mutex
    tb_assert_static(sizeof(pthread_mutex_t) == sizeof(tb_mutex_t));
    return (mutex && !pthread_mutex_init(mutex, tb_null)) ? ((tb_mutex_ref_t)mutex) : tb_null;
}

tb_void_t tb_mutex_exit_impl(tb_mutex_t *mutex)
{
    // exit it
    if(mutex)
        pthread_mutex_destroy(mutex);
}

tb_bool_t tb_mutex_enter_without_profiler(tb_mutex_ref_t mutex)
{
    // check
    tb_check_return_val(mutex, tb_false);

    // enter
    return pthread_mutex_lock((pthread_mutex_t*)mutex) == 0;
}

tb_bool_t tb_mutex_enter_try_without_profiler(tb_mutex_ref_t mutex)
{
    // check
    tb_check_return_val(mutex, tb_false);

    // try to enter
    return pthread_mutex_trylock((pthread_mutex_t*)mutex) == 0;
}