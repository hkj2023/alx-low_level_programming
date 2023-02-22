#include "main.h"

/**
 * print_alphabet_10 - print alphabet 10 times
 * Return: void
 */
void print_alphabet_10(void)
{
char x;
int y = 0;
while (y <= 9)
{
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
y++
}
}
