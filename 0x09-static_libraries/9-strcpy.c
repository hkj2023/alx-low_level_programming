#include "main.h"

/**
 * char *_strcpy - to copy a function
 * @dest: destination
 * @src: source
 * Return: Always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
int i;
int j = 0;
while (*(src + i) != '\0')
{
i++;
}
for (i = 0; j < i ; j++)
{
dest[j] = src[j];
}
dest[i] = '\0';
return (dest);
}
