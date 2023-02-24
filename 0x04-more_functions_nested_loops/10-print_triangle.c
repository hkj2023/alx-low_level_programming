#include "main.h"

/**
 * print_triangle - to Prints a triangl
 *@n: The squares triangle
 *Return: Always 0 (Success)
 */

void print_triangle(int n)
{
int a, b, c;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (a = 0; a < n; a++)
for (b = n - a; b > 1; b--)
{
_putchar(32);
}
for (c = 0; c <= a; c++)
{
_putchar(35);
}
_putchar('\n');
}
}
