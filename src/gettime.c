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
        printf("%d, %d/%02d/%04d %d:%02d:%02d\n", datetime.dotw, datetime.month, datetime.day, datetime.year, datetime.hour, datetime.min, datetime.sec);
    }
}
