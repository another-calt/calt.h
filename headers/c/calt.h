//
// CHECKS
//
#if !defined(__STDC_VERSION__) || __STDC_VERSION__ < 201112L || !defined(__GNUC__) || defined(__STRICT_ANSI__)
#error "GNU C11 or later is required, compile with '-std=gnu11'"
#endif


//
// IMPORTS
//


#include <stdio.h>
#include <stdint.h>

//
// KEYWORDS
//


#define program int main()

// assignment
#define var __auto_type
#define lock const __auto_type

// types

typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef float f32;
typedef double f64;

typedef char str[];


//
// FUNCTIONS
//

#define println(out) _Generic((out), \
    int: printf("%d\n", (out)), \
    float: printf("%f\n", (out)), \
    double: printf("%f\n", (out)), \
    char: printf("%c\n", (out)),  \
    char*: printf("%s\n", (out)),  \
    const char*: printf("%s\n", (out)),  \
    default: printf("[unknown print type]"))




