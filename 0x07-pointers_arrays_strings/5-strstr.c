#include "main.h"

/**
 * _strstr - to laocate string
 * @haystack: the searched string
 * @needle: the string to be searched
 * Return: Always 0 (SUccess)
 */

char *_strstr(char *haystack, char *needle)
{
int i;
if (*needle == 0)
return (haystack);
while (*haystack)
{
i = 0;
if (haystack[i] == needle[i])
{
while (haystack[i] == needle[i])
{
if (needle[i + 1] == '\0')
return (haystack);
i++;
}
}
haystack++;
}
return ('\0');
}
