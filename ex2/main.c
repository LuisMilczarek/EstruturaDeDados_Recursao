#include <stdio.h>
#include <stdint.h>

#include <utils.h>


uint64_t fibo_linear(uint64_t n)
{
    if(n==0)
        return 0;

    uint64_t a = 0;
    uint64_t b = 1;
    uint64_t result=0;

    for(int i = 0; i < n; i++)
    {
        result = a +b;
        a = b;
        b = result;
    }
    return result;
}

int main()
{
    double time;
    MEASURE_TIME(time, fibo_linear(50));
    printf("time: %0.16fs\n", time/1000);
}