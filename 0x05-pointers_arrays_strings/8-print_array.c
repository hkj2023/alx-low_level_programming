#include "main.h"
#include <stdio.h>

/**
 * print_array - print arrays element
 * @n array of integer
 * @c: array of pointer
 * @n: int type integer
 * Return Alwys 0 (Success).
 * Description: all elements should be listed
 */

void print_array(int *c, int n)
{
int i = 0;
for (n--; n >= 0; n--, i++)
{
printf("%d", c[i]);
if (n > 0)
{
printf(", ");
}
}
printf("\n");
}
