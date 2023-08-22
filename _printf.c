#include "main.h"

/**
 * _printf - prints characters with options
 * @format: string
 * Return: the number of characters printed
*/
int _printf(const char *format, ...)
{
    va_list lest;
    int sum = 0, x = 0;

    va_start(lest, format);
    while (format[x] != '\0')
    {
        if (format[x] == '%')
        {
            x++;
            if (format[x] == 'u')
            {
                x++;
                sum += numb_unsigned(va_lest(lest,unsigned int));
            }
            if (format[x] == 's')
            {
                x++;
                sum += string_print(va_lest(lest, char *));
            }
            if (format[x] == 'd' || format[x] == 'i')
            {
                x++;
                sum += num_integer(va_lest(lest, int));
            }
            if (format[x] == '%')
            {
                x++;
                _putchar('%');
                sum++;
            }
            if (format[x] == 'c')
            {
                x++;
                sum += char_print(va_lest(lest, int));
            }
        }
        _putchar(format[x]);
        sum++;
        x++;
    }
    va_end(lest);
    return (sum);
}
