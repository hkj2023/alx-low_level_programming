#include "main.h"

/**
 * leet - string to 1337.
 * @str: The string to be to 1337.
 * Return: Always 0 (Success).
 */
char *leet(char *str)
{
int a, b, c;
char x[] = "oOlLeEaAtT";
char y[] = "0011334477";
a = 0;
while (str[a] != '\0')
{
b = 0, c = 0;
while (x[b] != '\0')
{
if (str[a] == x[b])
{
c = b;
str[a] = y[c];
}
b++;
}
a++;
}
return (str);
}

