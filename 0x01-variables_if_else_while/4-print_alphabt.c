#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry to displays character.
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n, e, q;

	e = 'e';
	q = 'q';

	for (n = 'a'; n <= 'z'; n++)
	{
	if (n != e && n != q)
	putchar(n);
	}
	putchar('\n');
	return (0);
}
