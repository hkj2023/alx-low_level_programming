#include "main.h"


/**
 * _memset - fill memory with a constant
 * @s: memory address
 * @x: constant byte.
 * @n: bytes filled.
 * Return: Always 0 (Success).
 */
char *_memset(char *s, char x, unsigned int n)
{
unsigned int i;
i = 0;
while (i < n)
{
*(s + i)  = x;
i++;
}
return (s);
}
