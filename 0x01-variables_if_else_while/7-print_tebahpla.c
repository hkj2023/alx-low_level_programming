#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - to print reverse alphabet.
 * Return: Always 0 (Success).
 */

int main(void)
{

	char rev;

	for (rev = 'z'; rev >= 'a'; rev--)

	putchar(rev);
	putchar('\n');
	return (0);
}
