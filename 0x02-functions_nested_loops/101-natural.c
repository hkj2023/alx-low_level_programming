#include <stdio.h>

/**
*main - prints sum of natural number
*Return: Always 0 (Success)
*@c numbers
*@sum sum of the nubers
*/

int main(void)
{
int c, sum;
c = 0, sum = 0;
for (c = 0 ; c < 1024; c++)
{
if ((c % 3) == 0 || (c % 5) == 0)
sum = sum + c;
}
printf("%d\n", sum);
return (0);
}
