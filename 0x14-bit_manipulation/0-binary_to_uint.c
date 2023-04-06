#include "main.h"

/**
 * binary_to_uint - to convert to decimal
 * @b: character
 * Return: Always 0 (Success)
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
int i = 0;
if (!b)
return (0);
for (; b[i]; i++)
{
if ((b[i] < '0') || (b[i] > '1'))
return (0);
result = 2 * result + (b[i] - '0');
}
return (result);
}
