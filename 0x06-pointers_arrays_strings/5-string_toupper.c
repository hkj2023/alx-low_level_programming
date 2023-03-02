#include "main.h"

/**
 * string_toupper - to change to lowercase.
 * @str: The string to be changed.
 * Return: Always 0 (Success).
 */
char *string_toupper(char *str)
{
int x;
x = 0;
while (str[x])
{
if (str[x] >= 'a' && str[x] <= 'z')
str[x] = str[x] - 32;
x++;
}
return (str);
}
