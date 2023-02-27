#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * @length the length of string
 */
void rev_string(char *s)
{
	char tmp;
	int j, length, len;

	length = 0;
	len = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	len = length - 1;

	for (i = 0; j < length / 2; j++)
	{
		tmp = s[j];
		s[j] = s[len];
		s[len--] = tmp;
	}
}
