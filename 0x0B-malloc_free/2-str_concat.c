#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * str_concat - to concatenate.
 * @s1: -string 1
 * @s2: string 2
 * str - the string
 * main: entry point.
 * Return: Always 0 (Success)
 */
char *str_concat(char *s1, char *s2)
{
char *concatinated;
int index, con_index = 0, length = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (index = 0; s1[index] || s2[index]; index++)
length++;
concatinated = malloc(sizeof(char) * length);
if (concatinated == NULL)
return (NULL);
for (index = 0; s1[index]; index++)
concatinated[con_index++] = s1[index];
for (index = 0; s2[index]; index++)
concatinated[con_index++] = s2[index];
return (concatinated);
}

