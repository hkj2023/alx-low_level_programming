#include "main.h"

/**
 * _strlen - to print the length of a string
 * @s: string
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
int longi = 0;
while (*s != '\0')
{
longi++;
s++;
}
return (longi);
}
