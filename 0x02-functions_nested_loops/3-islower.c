#include "main.h"

/**
 * _islower - to print lower case
 * @c : the character is to be checked
 * Return: 1 for lowercase or 0 for other results
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
