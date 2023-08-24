// A simple and safe gets() for the RP6502

#include "getsn.h"
#include <rp6502.h>
#include <stdio.h>
#include <errno.h>

char *__fastcall__ getsn(char *s, unsigned size)
{
    unsigned i;
    char ch;

    if (!size)
        return (char *)_seterrno(EINVAL);

    i = 0;
    while (1)
    {
        // Get char from UART
        if (!RIA_RX_READY)
            continue;
        ch = RIA_RX;

        if (ch == '\r')
            break;

        if (ch == '\b' && i)
        {
            --i;
            putchar('\b');
            putchar(' ');
            putchar('\b');
            continue;
        }

        if (ch < ' ' || ch > '~')
            continue;

        if (i < size - 1)
        {
            putchar(ch);
            s[i++] = ch;
        }
    }

    putchar('\n');
    s[i] = 0;
    return s;
}
