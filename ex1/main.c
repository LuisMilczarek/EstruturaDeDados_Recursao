#include <stdio.h>
#include <stdint.h>
#include <utils.h>

uint64_t fibo(uint64_t n)
{
    if(n <= 1)
        return n;
    return fibo(n-1)+fibo(n-2);
}

int main()
{
    double time;

    MEASURE_TIME(time, fibo(50));
    printf("time: %0.16fs\n", time/1000);
}