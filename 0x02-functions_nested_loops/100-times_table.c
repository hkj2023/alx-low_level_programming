#include "main.h"

/**
*print_times_table - to prints times table of n
*@n: number to be checked
*Return: Always 0 (Success)
*/

void print_times_table(int n)
{
int d, mul, res;
if (n <= 15 && n >= 0)
{
for (d = 0; d <= n; d++)
{
_putchar('0');

for (mul = 1; mul <= n; mul++)
{
_putchar(',');
_putchar(' ');
res = d * mul;
if (res <= 99)
_putchar(' ');

if (res <= 9)
_putchar(' ');
if (res >= 100)
{
_putchar((res / 100) + '0');
_putchar((res / 10) % 10 + '0');
}
else if (res <= 99 && res >= 10)
{
_putchar((res / 10) + '0');
}
_putchar((res % 10) + '0');
}
_putchar('\n');
}
}
}
