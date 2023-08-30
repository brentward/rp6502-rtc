#include <rp6502.h>
#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include <errno.h>

void main()
{
    struct timespec now;
    unsigned long res;
    struct tm time_struct;
    char buf[80];
    res = clock_gettime(CLOCK_REALTIME, &now);
    if (res == -1)
    {
        printf("errno: %d\n", errno);
        printf("_oserror: %d\n", _oserror);
    } else 
    {
        time_struct = *localtime(&(now.tv_sec));
        strftime(buf, sizeof(buf), "%a %m/%d/%Y %I:%M:%S %p", &time_struct);
        printf("%s\n", buf);
    }
}
