#include "main.h"


/**
 * _memcpy - copying memory area
 * @dest: destination.
 * @src: source memory area.
 * @n: bytes copied
 * Return: Always 0 (Success).
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;
a = 0;
while (a < n)
{
*(dest + a) = *(src + a);
a++;
}
return (dest);
}
