#include "ft_printf.h"
#include <stdio.h>
int ft_printf(const char *format, ...)
{
    va_list args;
    int     count;

    va_start(args, format);
    count = 0;

    while(*format)
    {
        if (*format == '%')
        {
            format++;
            count += ft_format(*format, args);
        }else 
        {
            count += write(1, format, 1 );
        }
        format++;
    }
    va_end(args);
    return (count);
}
