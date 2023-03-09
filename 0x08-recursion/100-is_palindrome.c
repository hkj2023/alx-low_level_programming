#include "main.h"

/**
 * _strlen_recursion - size
 * @s: pointer to string params
 * Return: Always 0 (Success)
 */

int _strlen_recursion(char *s)
{
if (!*s)
{
return (0);
}
return (1 + _strlen_recursion(++s));
}

/**
 * palindrome - palindrome
 * @s: pointer to string
 * @p: location
 * Return: Always 0 (Success)
 */

int palindrome(char *s, int p)
{
if (p < 1)
{
return (1);
}
if (*s == *(s + p))
{
return (palindrome(s + 1, p - 2));
}
return (0);
}

/**
 * is_palindrome - palindrome
 * @s: pointer to string
 * Return: Always 0 (Succes)
 */

int is_palindrome(char *s)
{
int length = _strlen_recursion(s);
return (palindrome(s, length - 1));
}
