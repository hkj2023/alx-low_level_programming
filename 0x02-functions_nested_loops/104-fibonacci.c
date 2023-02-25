#include <stdio.h>

/**
 * main - prints fibonnaci numbers
 * @n1, n2, i, d are numbers
 * Return: Always(0) Success
 */

int main(void)
{
int n1, n2, i, d, d_nxt;
d = 98;
for (i = 1; i <= d; i++)
{
if (i == 98)
{
printf("%d, ", n2);
}
else
{
printf("%d, ", n2);
d_nxt = n1 + n2;
n1 = n2;
n2 = d_nxt;
}
}
printf("\n");
return (0);
}
