#include "main.h"
/**
 * _strcat - concatenating string
 * @dst: destination.
 * @src: source.
 * @a - the first counter
 * @b - the second counter
 * Return: Always 0 (Success)
*/
char *_strcat(char *dest, char *src)
{
int a, b;
a = 0;
b = 0;
while (dest[a] != '\0')
{
a++;
}
while (src[b] != '\0')
{
dest[a] = src[b];
b++;
a++;
}
dest[a] = '\0';
return (dest);
}
