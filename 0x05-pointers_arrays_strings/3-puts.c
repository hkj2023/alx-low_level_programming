#include "main.h"
/**
 * _puts - to print the string
 * @str: pointer to the string
 * @i string array
 */
void _puts(char *str)
{
int i = 0;
while (*str != '\0')
{
i++;
_putchar(*str++);
}
_putchar('\n');
}
