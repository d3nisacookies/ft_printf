#include "ft_printf.h"


static int put_unsigned(unsigned int n)
{
    int count;
    int digit;


    count = 0;
    if (n >= 10)
    {
        count += put_unsigned(n / 10);
    }
    digit = (n % 10) + '0';
    count += write(1, &digit, 1);
    return (count);
}

int ft_printf_unsigned(unsigned int n)
{
    return (put_unsigned(n));
}
