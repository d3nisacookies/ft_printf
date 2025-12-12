#include "ft_printf.h"


static int put_hex(unsigned int n, char *base)
{
    int count;

    count = 0;

    if (n >= 16)
    {
        count += put_hex(n / 16, base);
    }
    count += write(1, &base[n % 16], 1);
    return (count);
}

int ft_printf_hex(unsigned int n, char format)
{
    if (format == 'x')
        return (put_hex(n, "0123456789abcdef"));
    else
        return (put_hex(n, "0123456789ABCDEF"));
}
