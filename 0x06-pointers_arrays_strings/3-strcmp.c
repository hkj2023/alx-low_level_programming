#include "main.h"

/**
 * _strcmp - to compare string pointers.
 * @s1: string 1.
 * @s2: string 2.
 * Return: Always 0 (Success).
 */
int _strcmp(char *s1, char *s2)
{
while ((*s1 && *s2) && (*s1 == *s2))
{
s1++;
s2++;
}
return (*s1 - *s2);
}
