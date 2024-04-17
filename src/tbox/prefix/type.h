#ifndef TB_PREFIX_TYPE_H
#define TB_PREFIX_TYPE_H

/* includes */
#include "keyword.h"

/* micros */
// bool values
#define tb_true ((tb_bool_t)1)
#define tb_false ((tb_bool_t)0)

// null
#ifdef __cplusplus
#define tb_null 0
#else
#define tb_null (tb_pointer_t)0
#endif // __cplusplus

/* types */
// basic
typedef signed int tb_int_t;
typedef unsigned int tb_uint_t;
typedef signed short tb_short_t;
typedef unsigned short tb_ushort_t;
typedef tb_int_t tb_bool_t;
typedef signed char tb_int8_t;
typedef tb_int8_t tb_sint8_t;
typedef unsigned char tb_uint8_t;
typedef tb_short_t tb_sint16_t;
typedef tb_ushort_t tb_uint16_t;
typedef tb_int_t tb_int32_t;
typedef tb_int32_t tb_sint32_t;
typedef tb_uint_t tb_uint32_t;
typedef char tb_char_t;
typedef unsigned char tb_uchar_t;
typedef tb_uint8_t tb_byte_t;
typedef void tb_void_t;
typedef tb_void_t* tb_pointer_t;
typedef tb_void_t const* tb_cpointer_t;
typedef tb_pointer_t tb_handle_t;

// int64
#if defined(TB_COMPILER_IS_MSVC)
typedef __int64 tb_int64_t;
typedef unsigned __int64 tb_uint64_t;
#elif (defined(__LONG_WIDTH__) && __LONG_WIDTH__ == 8) || \
        (defined(__SIZEOF_LONG__) && __SIZEOF_LONG__ == 8)
typedef signed long tb_int64_t;
typedef unsigned long tb_uint64_t;
#else
typedef signed long long tb_int64_t;
typedef unsigned long long tb_uint64_t;
#endif // int64
typedef tb_int64_t tb_sint64_t;

// the atomic32 type, need be aligned for arm, ..
#if (__tb_has_feature__(c_atomic) && !defined(__STDC_NO_ATOMICS__))
typedef __tb_volatile__ _Atomic tb_int32_t tb_atomic32_t;
#else
typedef __tb_volatile__ __tb_aligned__(4)  tb_int32_t tb_atomic32_t;
#endif // (__tb_has_feature__(c_atomic) && !defined(__STDC_NO_ATOMICS__))

// the atomic64 type, need be aligned for arm, ..
#if (__tb_has_feature__(c_atomic) && !defined(__STDC_NO_ATOMICS__))
typedef __tb_volatile__ _Atomic tb_int64_t tb_atomic64_t;
#else
typedef __tb_volatile__ __tb_aligned__(8)  tb_int64_t tb_atomic64_t;
#endif // (__tb_has_feature__(c_atomic) && !defined(__STDC_NO_ATOMICS__))

// the atomic type
#if TB_CPU_BIT64
typedef tb_atomic64_t tb_atomic_t;
#else
typedef tb_atomic32_t tb_atomic_t;
#endif // the atomic type

// no argument
#ifdef __cplusplus
#define tb_noarg_t
#else
#define tb_noarg_t tb_void_t
#endif // __cplusplus

// long and size
#if defined(TB_CONFIG_OS_WINDOWS) && TB_CPU_BIT64
typedef tb_int64_t tb_long_t;
typedef tb_uint64_t tb_ulong_t;
#else
typedef signed long tb_long_t;
typedef unsigned long tb_ulong_t;
#endif
typedef tb_ulong_t tb_size_t;

// the mutex ref type
typedef __tb_typeref__(mutex);

#endif  // TB_PREFIX_TYPE_H