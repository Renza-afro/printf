#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
* _printf-> ....
* @format: ..
* Return: ..
*/
int _printf(const char * const format, ...)
{
va_list args;
int i = 0, k = 0, value = 0;
char *str = NULL;
/*int value = 0;*/

va_start(args, format);
while (format[i] != '\0')
{
if (format[i] != '%')
{
_putchar(format[i]);
value++;
}
 /*value += 1;*/
else
{
if (format[i + 1] == 'c')
{
_putchar(va_arg(args, int));
value++;
i++;
}
else if (format[i + 1] == 's')
{
i++;
str = va_arg(args, char *);
k = 0;
while (str[k] != '\0')
{
_putchar(str[k]);
value++;
k++;
}
}
else if (format[i + 1] == '%')
{
i++;
_putchar('%');
value++;
}
}
i++;
}
va_end(args);
return (value);
}
