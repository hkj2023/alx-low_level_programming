#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - to add all parameters
* @n: n args
* main:entry point
* Return: Always 0 (Success)
*/

int sum_them_all(const unsigned int n, ...)
{
unsigned int i = 0;
unsigned int sum = 0;
va_list apt;
va_start(apt, n);
for (i = 0; i < n; i++)
sum += va_arg(apt, int);
va_end(apt);
return (sum);
return (0);
}
