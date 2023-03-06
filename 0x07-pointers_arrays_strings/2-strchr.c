#include "main.h"


/**
 * _strchr - locates a character
 * @s: string.
 * @c: character.
 * Return: Always 0 (Succes).
 */
char *_strchr(char *s, char c)
{
unsigned int i;
i = 0;
while (*(s + i) != '\0')
{
if (*(s + i) == c)
{
return (s + i);
}
if (*(s + i) == c)
{
return (s + i);
}
i++;
}
return ('\0');
}
