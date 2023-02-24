#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers -  print numbers 0 to 9.
 *
 * Return: true
 * _putchar - function.
 */
void print_numbers(void)
{
char a;
for (a = 0; a <= 9; a++)
{
_putchar(a + '0');
}
_putchar('\n');
}
