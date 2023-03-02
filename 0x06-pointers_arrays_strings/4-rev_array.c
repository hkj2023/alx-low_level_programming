#include "main.h"

/**
 * reverse_array - to reverse the array.
 * @a: integer of array.
 * @n: number of array element.
 */

void reverse_array(int *a, int n)
{
int x, y;
for (y = n - 1; y >= n / 2; y--)
{
x = a[n - 1 - y];
a[n - 1 - y] = a[y];
a[y] = x;
}
}
