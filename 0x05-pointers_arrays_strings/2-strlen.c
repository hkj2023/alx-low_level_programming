#include "main.h"

/**
 * _strlen - returns the length of string
 * @s: the string
 * Return: Always 0 (Sucuss).
**/

int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
	i++;
}
return (i);
}
