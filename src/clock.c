#include <rp6502.h>
#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include "user_set_time.h"

#define IN_BUF_SIZE 32

void main()
{
    // uint16_t e;
    // datetime_t datetime;

    // e = get_rtc_time(&datetime);
    // if (e)
    // {
    //     switch(e)
    //     {
    //         case 1:
    //     }
    // }
    tm time;
    uint16_t size = sizeof(tm);
    printf("size of time_t = %d", size);
}
