#include "main.h"

/**
 * _isdigit -  to print numbers 0-9
 * @a: input
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int a)
{
	if ((a >= 48) && (a <= 57))
	{
		return (1);
	}
	else
		return (0);
}
