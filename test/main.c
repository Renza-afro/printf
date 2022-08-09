#include <limits.h>
#include <stdio.h>
#include "main.h"
#include <stdint.h>

/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
int n = 0;
/* %c %s %% */

/* print char */
_printf("hello %c Alx\n", 'A');
printf("hello %c Alx\n", 'A');

/* print string */
_printf("hello my name is: %s\n", "Renza");
printf("hello my name is: %s\n", "Renza");

/* print string and char */
_printf("Name: %s, Grade: %c\n", "Renza", 'A');
printf("Name: %s, Grade: %c\n", "Renza", 'A');

/* print %% */
n = _printf("%%\n");
printf("n: %d\n", n);
n = printf("%%\n");
printf("n: %d\n", n);


return (0);
}
