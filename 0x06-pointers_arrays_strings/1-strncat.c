#include "main.h"

/**
 * _strncat - to concatenate string.
 * @dest: The string to be concatinated.
 * @src: The string source.
 * @n: The number of bytes
 * Return: Always 0 (Success).
 */
char *_strncat(char *dest, char *src, int n)
{
int ind = 0, dlen = 0;
while (dest[ind++])
dlen++;
for (ind = 0; src[ind] && ind < n; ind++)
dest[dlen++] = src[ind];
return (dest);
}
