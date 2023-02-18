#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry to display ALphabet.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	putchar(n);

	for (n = 'A'; n <= 'Z'; n++)
	putchar(n);
	putchar('\n');
	return (0);
}
