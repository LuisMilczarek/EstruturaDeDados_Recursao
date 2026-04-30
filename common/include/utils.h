#include <time.h>

#define MEASURE_TIME(var, func_call)                              \
    do {                                                          \
        struct timespec _start, _end;                             \
        clock_gettime(CLOCK_MONOTONIC, &_start);                  \
        (func_call);                                              \
        clock_gettime(CLOCK_MONOTONIC, &_end);                    \
        (var) = (_end.tv_sec  - _start.tv_sec)  * 1e3 +           \
                (_end.tv_nsec - _start.tv_nsec) / 1e6;            \
    } while (0)
    