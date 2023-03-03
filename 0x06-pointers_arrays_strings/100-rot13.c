#include "main.h"

/**
 * rot13 -  to encode to a root13.
 * @str: string
 * Return: Always 0 (Success)
 */
char *rot13(char *str)
{
int i = 0;
while (str[i] != '\0')
{
while ((str[i] >= 'a' && str[i] <= 'z') ||
(str[i] >= 'A' && str[i] <= 'Z'))
{
if ((str[i] >= 'a' && str[i] <= 'm') ||
(str[i] >= 'A' && str[i] <= 'M'))
str[i] = str[i] + 13;
else
str[i] = str[i] - 13;
i++;
}
i++;
}
return (str);
}
