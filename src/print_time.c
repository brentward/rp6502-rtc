#include <rp6502.h>
#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include <errno.h>

void main()
{
    struct timespec now;
    int res;
    struct tm time_struct;
    char buf[80];
    res = clock_gettime(CLOCK_REALTIME, &now);
    if (res == -1)
    {
        printf("errno: %d\n", errno);
    } else 
    {
        time_struct = *localtime(&(now.tv_sec));
        strftime(buf, sizeof(buf), "%A, %B %d, %Y %I:%M:%S %p %Z", &time_struct);
        printf("%s\n", buf);
    }

    // time_t now;
    // struct tm time_struct;
    // char buf[80];
    // time(&now);
    // time_struct = *localtime(&now);
    // strftime(buf, sizeof(buf), "%a %Y-%m-%d %H:%M:%S %Z", &time_struct);
    // printf("%s\n", buf);

    // time_t now;
    // struct tm time_struct;
    // int res;
    // char buf[80];
    // res = rtc(&now);
    // if (res == -1)
    // {
    //     printf("errno: %d\n", errno);
    // } else
    // {
    //     time_struct = *localtime(&now);
    //     strftime(buf, sizeof(buf), "%a %Y-%m-%d %H:%M:%S %Z", &time_struct);
    //     printf("%s\n", buf);
    // }
}
