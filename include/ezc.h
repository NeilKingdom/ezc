#ifndef EZC_H
#define EZC_H

#ifdef __cplusplus
extern "C" {
#endif

#include "stdint.h"
#include <sys/types.h>

typedef int8_t   i8;
typedef uint8_t  u8;
typedef int16_t  i16;
typedef uint16_t u16;
typedef int32_t  i32;
typedef uint32_t u32;
typedef int64_t  i64;
typedef uint64_t u64;
typedef float    f32;
typedef double   f64;
typedef ssize_t  isize;
typedef size_t   usize;

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define CLAMP(min, max, n) (MAX((min), MIN((max), (n))))

#define SET_BIT(mask, bit)    ((mask) |= (bit))
#define UNSET_BIT(mask, bit)  ((mask) &= ~(bit))
#define IS_BIT_SET(mask, bit) (((mask) & (bit)) == (bit))
#define TOGGLE_BIT(mask, bit) ((mask) ^= (bit))

#define KB(n) ((n) * 1024)
#define MB(n) ((n) * 1024 * 1024)
#define GB(n) ((n) * 1024 * 1024 * 1024)

#ifdef __cplusplus
}
#endif

#endif
