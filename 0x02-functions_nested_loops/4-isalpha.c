#include "main.h"

/**
 * _isalpha - to print lower case or upper
 * @c : the character is to be checked
 * Return: 1 for lowercase and Uppercase or 0 for other results
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
