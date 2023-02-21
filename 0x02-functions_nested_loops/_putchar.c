#include <unistd.h>

/**
 * main - Entry
 * Return: Success -1
 */

int _putchar(char c)
{
return (write (1, &c, 1));
}

