#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - to pring strings
* @n: n args
* @separator: comma separator
* main:entry point
* Return: Always 0 (Success)
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list apt;
unsigned int i;
i = 0;
va_start(apt, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(apt, int));
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
putchar('\n');
va_end(apt);
}
