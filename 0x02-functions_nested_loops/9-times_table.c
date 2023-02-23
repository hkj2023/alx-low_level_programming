#include "main.h"

/**
 *times_table - prints times table .
 */

void times_table(void)
{
int x, y, z;
x = 0;
while (x < 10)
{
for (y = 0; y < 10; y++)
{
z = y * x;
if (y == 0)
{
_putchar(z + '0');
}
if (z < 10 && y != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(z + '0');
}
else if (z >= 10)
{
_putchar(',');
_putchar(' ');
_putchar((z / 10) + '0');
_putchar((z % 10) + '0');
}
}
x++;
_putchar('\n');
}
}
