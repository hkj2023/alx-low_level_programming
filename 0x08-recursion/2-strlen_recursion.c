#include "main.h"

/**
 * _strlen_recursion - to print the length of string.
 * @s: the string
 * Return: Always 0 (Success).
 */
int _strlen_recursion(char *s)
{
int length;
length = 0;
if (*s)
{
length++;
length = length + _strlen_recursion(s + 1);
}
return (length);
}
