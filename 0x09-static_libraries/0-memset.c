#include "main.h"

/**
 * _memset - to fill memory blocke
 * @s: start of memory address
 * @a: the character value
 * @n: number
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char a, unsigned int n)
{
int i = 0;
while (n > 0)
{
s[i] = a;
n--;
}
i++;
return (s);
}

