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
char *str_dup;
int i, length;
if (str == NULL)
return (NULL);
length = 0;
for (i = 0; str[i]; i++)
length++;
str_dup = malloc(sizeof(char) * (length + 1));
if (str_dup == NULL)
return (NULL);

for (i = 0; str[i]; i++)
str_dup[i] = str[i];
str_dup[length] = '\0';
return (str_dup);
}
