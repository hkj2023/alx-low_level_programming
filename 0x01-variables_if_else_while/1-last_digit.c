#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry is to tell us the length
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n, lastdgt;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	/* Here is my cose */
	lastdgt = n % 10;

	if (lastdgt > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, lastdgt);
	}
	else if (lastdgt == 0)
	{
	printf("Last digit of %d is %d and 0\n", n, lastdgt);
	}
	else if (lastdgt < 6 && lastdgt != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdgt);
	}
	return (0);
}
