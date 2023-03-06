#include "main.h"

/**
 *_strspn - the legth of the string prefix
 *@accept: accepts the prefix
 *@s: the string
 *Return: Always 0 (Success).
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, flag;
i = 0, flag = 0;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
flag++;
break;
}
else if (accept[i + 1] == '\0')
return (flag);
}
s++;
}
return (flag);
}
