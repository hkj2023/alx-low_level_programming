#include "main.h"

/**
 * _strncpy - to copy string.
 * @dest: String destnation.
 * @src: the string source.
 * @n: the number of bytes to be copies
 * Return: Always 0 (Success).
 */
char *_strncpy(char *dest, char *src, int n)
{
int x, y;
x = 0;
y = 0;
while (src[x++])
y++;
for (x = 0; src[x] && x < n; x++)
dest[x] = src[x];
for (x = y; x < n; x++)
dest[x] = '\0';
return (dest);
}
