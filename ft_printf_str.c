#include "ft_printf.h"

int ft_printf_str(char *s)
{
    int i;

    if (!s)
    {
        return (write(1, "(null)", 6));
    }

    i = 0;

    while (s[i] != '\0')
    {
        write(1, &s[i], 1);
        i++;
    }
    return (i);
}
