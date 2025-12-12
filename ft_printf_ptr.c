# include "ft_printf.h"

static int put_ptr(unsigned long long n)
{
    char *base;
    int count;

    base = "0123456789abcdef";
    count = 0;

    if (n >= 16)
    {
        count += put_ptr(n / 16);
    }
    count += write(1, &base[n % 16], 1);
    return (count);
}

int ft_printf_ptr(unsigned long long ptr)
{
    int count;

    count = 0;

    /* print pointer prefix */
    count += write(1, "0x", 2);
    count += put_ptr(ptr);
    return (count);
}
