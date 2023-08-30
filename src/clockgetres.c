#include <rp6502.h>
#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include <errno.h>

void main()
{
    struct timespec resolution;
    unsigned long res;
    res = clock_getres(CLOCK_REALTIME, &resolution);
    if (res == -1)
    {
        printf("errno: %d\n", errno);
        printf("_oserror: %d\n", _oserror);
    } else 
    {
        printf("Clock resolution: %lu.%09lu seconds\n", resolution.tv_sec, resolution.tv_nsec);
    }
}
