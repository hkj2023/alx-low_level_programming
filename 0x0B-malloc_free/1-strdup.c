#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strdup - to duplicate the string;
 * @str: -the dtring chacter
 * str - the string
 * main: entry point.
 * Return: Always 0 (Success)
 */
char *_strdup(char *str)
{
char *strdup;
unsigned int x, y;
if (str == NULL)
return (NULL);
for (x = 0; str[x] != '\0'; x++)
strdup = (char *)malloc(sizeof(char) * (x + 1));
if (strdup == NULL)
return (NULL);
for (y = 0; y <= x; y++)
strdup[y] = str[y];
return (strdup);
}
