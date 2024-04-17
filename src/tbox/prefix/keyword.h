#ifndef TB_PREFIX_KEYWORD_H
#define TB_PREFIX_KEYWORD_H

/* macros */

// volatile
#define __tb_volatile__ volatile

#if defined(TB_COMPILER_IS_MSVC)
#define __tb_aligned__(a) 
#elif defined(TB_COMPILER_IS_GCC)
#define __tb_aligned__(a) __attribute__((aligned(a)))
#else
#define __tb_aligned__(a)
#endif

// extern c
#ifdef __cplusplus
#define __tb_extern_c__ extern "C"
#define __tb_extern_c_enter__ extern "C" {
#define __tb_extern_c_leave__ }
#else
#define __tb_extern_c__
#define __tb_extern_c_enter__
#define __tb_extern_c_leave__
#endif  // __cplusplus

// has feature
#ifdef __has_feature
// clang compiler
#define __tb_has_feature__(x) __has_feature(x)
#else
// other compiler
#define __tb_has_feature__(x) 0
#endif // __has_feature

// this type reference keyword for defining tb_xxxx_ref_t
// typedef __tb_typeref__(xxxx)
#define __tb_typeref__(object)     \
  struct __tb_##object##_dummy_t { \
    tb_int_t dummy;                \
  } const* tb_##object##_ref_t

#endif  // TB_PREFIX_KEYWORD_H