#include <rp6502.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "getsn.h"
#include <time.h>

#define BUF_SIZE 6

void main()
{

    // datetime_t datetime;
    struct tm current_time;
    // time_t now;
    struct timespec now;

    char str[BUF_SIZE];

    current_time.tm_hour = 18;
    current_time.tm_sec = 0;
    current_time.tm_min = 34;
    current_time.tm_mday = 24;
    current_time.tm_mon = 8;
    current_time.tm_year = 71;
    current_time.tm_isdst = -1;
    current_time.tm_wday = 0;
    current_time.tm_yday = 0;

    now.tv_sec = mktime(&current_time);
    now.tv_nsec = 0;
    clock_settime(CLOCK_REALTIME, &now);

    // while (!datetime.month) {
    //     puts("Enter month (1-12): ");
    //     getsn(str, BUF_SIZE);
    //     datetime.month = atoi(str);
    //     if (datetime.month > 12)
    //         datetime.month = 0;
    // }
    // while (!datetime.day) {
    //     puts("Enter day (1-31): ");
    //     getsn(str, BUF_SIZE);
    //     datetime.day = atoi(str);
    //     if (datetime.day > 31)
    //         datetime.day = 0;
    // }
    // while (datetime.year < 0) {
    //     puts("Enter year (0-4095): ");
    //     getsn(str, BUF_SIZE);
    //     datetime.year = atoi(str);
    //     if (datetime.year > 4095)
    //         datetime.year = -1;
    // }
    // while (datetime.hour < 0) {
    //     puts("Enter hour (0-23): ");
    //     getsn(str, BUF_SIZE);
    //     datetime.hour = atoi(str);
    //     if (datetime.hour > 23)
    //         datetime.hour = -1;
    // }
    // while (datetime.min < 0) {
    //     puts("Enter minute (0-59): ");
    //     getsn(str, BUF_SIZE);
    //     datetime.min = atoi(str);
    //     if (datetime.min > 59)
    //         datetime.min = -1;
    // }
    // while (datetime.sec < 0) {
    //     puts("Enter second (0-59): ");
    //     getsn(str, BUF_SIZE);
    //     datetime.sec = atoi(str);
    //     if (datetime.sec > 59)
    //         datetime.sec = -1;
    // }
    // while (datetime.dotw < 0) {
    //     puts("Enter day of week (0-6, 0 is Sunday): ");
    //     getsn(str, BUF_SIZE);
    //     datetime.dotw = atoi(str);
    //     if (datetime.dotw > 6)
    //         datetime.dotw = 0;
    // }
    // set_rtc_time(&datetime);
}
