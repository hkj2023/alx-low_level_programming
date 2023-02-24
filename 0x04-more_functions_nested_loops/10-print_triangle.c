#include "main.h"

/**
 * print_triangle - to Prints a triangl
 *@n: The squares triangle
 *Return: Always 0 (Success)
 */

void print_triangle(int n)
{
if (n <= 0)
{
_putchar('\n');
} else
{
int i, j;
for (i = 1; i <= n; i++)
{
for (j = i; j < n; j++)
{
_putchar(' ');
}
for (j = 1; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
