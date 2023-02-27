#include <stdio.h>

/**
 * main - prints fibonnaci numbers
 * @n1, n2, i, d are numbers
 * Return: Always(0) Success
 */

int main(void)
{
long int n1, n2, i, j, c, d;
int k, bool1, bool2;
n1 = 1;
n2 = 2;
bool1 = 1;
bool2 =1;
printf("%ld, %ld", n1, n2);

for (k = 0; k < 96; k++)
{
if (bool1)
{
        i = n1 + n2;
        printf(", %ld", i);
        n1 = n2;
        n2 = i;
}
else
{
        if (bool2)
        {
                c = n1 % 1000000000;
                d = n2 % 1000000000;
                n1 = n1 / 1000000000;
                n2 = n2 / 1000000000;
                bool2 = 0;
        }
        j = (n1 + n2);
	i = n1 + n2 + (j /1000000000);
	printf("%ld", i);
	printf("%ld", j % 1000000000);
	n1 = n2;
	c = d;
	n2 = i;
	d = (j % 1000000000);
}
if (((n1 + n2) < 0) && bool1 == 1)
	bool1 = 0;
printf("\n");
return (0);
}
}
