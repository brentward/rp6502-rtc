#include <rp6502.h>
#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include <errno.h>

void main()
{
    // struct timespec now;
    // int res;
    // res = clock_gettime(CLOCK_REALTIME, &now);
    // if (res == -1)
    // {
    //     printf("errno: %d\n", errno);
    // } else 
    // {
    //     printf("tv_sec: %lu", now.tv_sec);
    // }
    time_t now;
    struct tm time_struct;
    char buf[80];
    time(&now);
    time_struct = *localtime(&now);
    strftime(buf, sizeof(buf), "%a %Y-%m-%d %H:%M:%S %Z", &time_struct);
    printf("%s\n", buf);
    // time_t now;
    // struct tm time_struct;
    // char buf[80];
    // now = rtc();
    // time_struct = *localtime(&now);
    // strftime(buf, sizeof(buf), "%a %Y-%m-%d %H:%M:%S %Z", &time_struct);
    // printf("%s\n", buf);
}
