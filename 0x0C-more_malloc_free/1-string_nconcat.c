#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - to concatinate string
 * main: entry point
 * @s1: string 1
 * @s2: string2
 * @n: integer number
 * Return: Always 0 (Success).
 */



char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int index, length = n;
if (s1 == NULL)
s1 = " ";
if (s2 == NULL)
s2 = " ";
index = 0;
while (s1[index])
{
concat = malloc(sizeof(char) * (length + 1));
index++;
}
if (concat == NULL)
return (NULL);
length = 0;
for (index = 0; s1[index]; index++)
concat[length++] = s1[index];
index++;
for (index = 0; s2[index] && index < n; index++)
concat[length++] = s2[index];
concat[length] = '\0';
return (concat);
}
