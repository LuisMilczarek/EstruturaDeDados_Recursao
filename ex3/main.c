#include <stdio.h>
#include <stdint.h>

#include <utils.h>

uint64_t fibo_memoization(uint64_t n, uint64_t *cache, size_t max_n)
{
    if(n > max_n)
        return 0;
    if(n != 0 && cache[n] == 0)
        cache[n] = fibo_memoization(n-1, cache, max_n) + fibo_memoization(n-2, cache, max_n);
    return cache[n];
}

int main()
{
    static uint64_t cache[50];
    
    cache[0] = 0;
    cache[1] = 1;

    double time;
    MEASURE_TIME(time, fibo_memoization(50, cache, 50));
    printf("time: %20.16fs\n", time);

}