#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry is to tell us what result is to be returned
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
		printf("%i the number is positive \n", n);
	else if (n == 0)
		printf("%i the number is zero \n", n);
	else
		printf("%i the number is negative \n", n);
	return (0);

}
