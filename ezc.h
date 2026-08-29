#ifndef EZC_H
#define EZC_H

#ifdef __cplusplus
extern "C" {
#endif

#include "stdio.h"
#include "stdint.h"

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

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

#define CLAMP_FLOOR(n, floor) ((n) < (floor) ? (floor) : (n))
#define CLAMP_CEIL(n, ceil) ((n) > (ceil) ? (ceil) : (n))

#define SET_BIT(bit, mask) ((mask) |= (bit))
#define UNSET_BIT(bit, mask) ((mask) &= ~(bit))
#define IS_BIT_SET(bit, mask) (((mask) & (bit)) == (bit))

#define KB(n) ((n) * 1024)
#define MB(n) ((n) * 1024 * 1024)
#define GB(n) ((n) * 1024 * 1024 * 1024)

#ifdef __cplusplus
}
#endif

#endif
