#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i, j, leng;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	leng = i;

	for (j = leng - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
