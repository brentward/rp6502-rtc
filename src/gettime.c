#include <rp6502.h>
#include <stdio.h>
#include <stdint.h>

void main()
{
    datetime_t *datetime;
    get_rtc_time(datetime);
    // switch (datetime->dotw) {
    //     case 0:
    //         printf("Sunday ");
    //     case 1:
    //         printf("Monday ");
    //     case 2:
    //         printf("Tuesday ");
    //     case 3:
    //         printf("Wednesday ");
    //     case 4:
    //         printf("Thursday ");
    //     case 5:
    //         printf("Friday ");cd 
    //     case 6:
    //         printf("Saturday ");
    //     case 7:
    //         printf("Sunday ");
    //     default:
    //         printf("Invalid day of week ");
    // }

    printf("%d/%02d/%04d %d:%02d:%02d\n", datetime->month, datetime->day, datetime->year, datetime->hour, datetime->min, datetime->sec);
}
