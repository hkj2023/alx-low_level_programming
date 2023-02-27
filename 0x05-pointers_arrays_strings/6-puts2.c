#include "main.h"

/**
 * puts2 - prints char out of 2.
 * lngth the lenght of array
 * @str: string
 * @a intiger
 */
void puts2(char *str)
{
int lngth = 0, a;
while (str[lngth] != '\0')
{
lngth++;
}
for (a = 0; a < lngth; a = a + 2)
{
_putchar(str[a]);
}
_putchar('\n');
}
