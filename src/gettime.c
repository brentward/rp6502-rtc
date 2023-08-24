#include <rp6502.h>
#include <stdio.h>
#include <stdint.h>

void main()
{
    uint16_t e;
    datetime_t datetime;

    e = get_rtc_time(&datetime);
    if (e)
    {
        printf("error: %d", RIA_ERRNO);
    } else {
        switch (datetime.dotw)
        {
        case 0:
            printf("Sunday, ");
            break;
        case 1:
            printf("Monday, ");
            break;
        case 2:
            printf("Tuesday, ");
            break;
        case 3:
            printf("Wednesday, ");
            break;
        case 4:
            printf("Thursday, ");
            break;
        case 5:
            printf("Friday, ");
            break;
        case 6:
            printf("Saturday, ");
            break;
        default:
            printf("Invalid day of week, ");
            break;
        }
        printf("%d/%02d/%04d %d:%02d:%02d\n", datetime.month, datetime.day, datetime.year, datetime.hour, datetime.min, datetime.sec);
    }
}
