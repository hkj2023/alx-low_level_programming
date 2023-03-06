#include "main.h"

/**
 *_strspn - the legth of the string prefix
 *@accept: accepts the prefix
 *@s: the string
 *Return: Always 0 (Success).
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int a, b, c;
for (a = 0; *(s + a) != '\0'; a++)
{
c = 1;
for (b = 0; *(accept + b) != '\0'; b++)
{
if (*(s + b) == *(accept + b))
{
c = 0;
break;
}
}
if (c == 1)
break;
}
return (a);
}
