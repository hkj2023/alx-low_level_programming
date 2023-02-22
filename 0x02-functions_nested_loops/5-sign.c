#include "main.h"

/**
 * print_sign - to print the sign of character
 * @c : the character is to be checked
 * Return: 1 for positive, -1 for negative and 0 for others.
 */
int print_sign(int c)
{
if (c > 0)
{
_putchar(43);
return (1);
}
else if (c < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
