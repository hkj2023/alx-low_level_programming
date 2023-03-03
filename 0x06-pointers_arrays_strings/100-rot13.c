#include "main.h"

/**
 * rot13 -  to encode to a root13.
 * @str: string
 * Return: Always 0 (Success)
 */
char *rot13(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if ((*(str + i) >= 'a' && *(str + i) < 'n')
|| (*(str + i) >= 'A' && *(str + i) < 'N'))
{
*(str + i) = *(str + i) + 13;
}
else if ((*(str + i) >= 'n' && *(str + i) <= 'z')
|| (*(str + i) >= 'N' && *(str + i) <= 'Z'))
{
*(str + i) = *(str + i) - 13;
}
}
return (str);
}
