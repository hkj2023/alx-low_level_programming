#include "main.h"

/**
 * _isupper - prints upper case letter
 * @i: the character to be checked
 * Return: 1 if i is uppercase, 0 otherwise
 */
int _isupper(int i)
{
	while (i >= 'A' && i <= 'Z')
	{
		return (i);
	}
	return (0);
}
