#include "main.h"

/**
 *print_last_digit - to print the last digit of number
 * @n : the number to be computed the abs;
 * Return: Return the value of last digit
 */
int print_last_digit(int n)
{
int c;
c = n % 10;
if (c < 0)
c = c * -1;
_putchar(c + '0');
return (c);
}

