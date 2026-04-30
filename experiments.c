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
    char string_buf[50];
    FILE *file_ptr = fopen("output.csv","w");
    double time;
    for(uint64_t n = 0; n <=50;n++)
    {
        MEASURE_TIME(time, fibo(n));
        sprintf(string_buf, "%lu;%f",n,time);
        fprintf(file_ptr,"%s\n",string_buf);
    }
    fclose(file_ptr);
}