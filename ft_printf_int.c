#include "ft_printf.h"

static int put_nbr(long n)
{
    int count;
    char    digit;

    count = 0;

    if (n < 0)
    {
        count += write(1, "-", 1);
        n = -n;
    }
    if (n >= 10)
    {
        count += put_nbr(n / 10);
    }
    digit = (n % 10) + '0';
    count += write(1, &digit, 1);
    return (count);
}

int ft_printf_int(int n)
{
    return (put_nbr(n));
}
