#include "main.h"
#include <unistd.h>

/**
 *_putchar - print the character to c
 @c: the character to be printed
 *Return: Always 1 on success or -1 on failure
 */

int _putchar(char c)
{
return (write (1, &c, -1));
}
