#include "main.h"

/**
 * puts_half - prints half string
 * @str: the string
 * Return: Always 0 (Success)
 * @i string length
 */

void puts_half(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
i++;
for (i /= 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
