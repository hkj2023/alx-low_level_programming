#include "main.h"

/**
 * cap_string - string to upper case.
 * @str: to be capitalized
 * Return: Always 0 (Success)
 */
char *cap_string(char *str)
{
int y;
y = 0;
while (str[y])
{
while (!(str[y] >= 'a' && str[y] <= 'z'))
y++;
if (str[y - 1] == ' ' ||
str[y - 1] == '\t' ||
str[y - 1] == '\n' ||
str[y - 1] == ',' ||
str[y - 1] == ';' ||
str[y - 1] == '.' ||
str[y - 1] == '!' ||
str[y - 1] == '?' ||
str[y - 1] == '"' ||
str[y - 1] == '(' ||
str[y - 1] == ')' ||
str[y - 1] == '{' ||
str[y - 1] == '}' ||
y == 0)
str[y] -= 32;
y++;
}
return (str);
}
