#include <rp6502.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "getsn.h"
#include <time.h>

#define BUF_SIZE 6

void main()
{
    struct tm current_time;
    struct timespec now;
    current_time.tm_hour = 5;
    current_time.tm_sec = 5;
    current_time.tm_min = 5;
    current_time.tm_mday = 29;
    current_time.tm_mon = 7;
    current_time.tm_year = 123;
    current_time.tm_isdst = -1;
    current_time.tm_wday = 0;
    current_time.tm_yday = 0;
    now.tv_sec = mktime(&current_time);
    now.tv_nsec = 0;
    clock_settime(CLOCK_REALTIME, &now);
}
