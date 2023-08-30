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
    char str[BUF_SIZE];

    current_time.tm_hour = -1;
    current_time.tm_sec = -1;
    current_time.tm_min = -1;
    current_time.tm_mday = 0;
    current_time.tm_mon = -1;
    current_time.tm_year = -1;
    current_time.tm_isdst = -1;
    current_time.tm_wday = 0;
    current_time.tm_yday = 0;

    while (current_time.tm_mon < 0) {
        puts("Enter month (1-12): ");
        getsn(str, BUF_SIZE);
        current_time.tm_mon = atoi(str) - 1;
        if (current_time.tm_mon > 11)
            current_time.tm_mon = -1;
    }
    while (!current_time.tm_mday) {
        puts("Enter day (1-31): ");
        getsn(str, BUF_SIZE);
        current_time.tm_mday = atoi(str);
        if (current_time.tm_mday > 31)
            current_time.tm_mday = 0;
    }
    while (current_time.tm_year < 0) {
        puts("Enter year: ");
        getsn(str, BUF_SIZE);
        current_time.tm_year = atoi(str) - 1900;
    }
    while (current_time.tm_hour < 0) {
        puts("Enter hour (0-23): ");
        getsn(str, BUF_SIZE);
        current_time.tm_hour = atoi(str);
        if (current_time.tm_hour > 23)
            current_time.tm_hour = -1;
    }
    while (current_time.tm_min < 0) {
        puts("Enter minute (0-59): ");
        getsn(str, BUF_SIZE);
        current_time.tm_min = atoi(str);
        if (current_time.tm_min > 59)
            current_time.tm_min = -1;
    }
    while (current_time.tm_sec < 0) {
        puts("Enter second (0-59): ");
        getsn(str, BUF_SIZE);
        current_time.tm_sec = atoi(str);
        if (current_time.tm_sec > 59)
            current_time.tm_sec = -1;
    }
    now.tv_sec = mktime(&current_time);
    now.tv_nsec = 0;
    clock_settime(CLOCK_REALTIME, &now);
}
