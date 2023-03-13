#include <unistd.h>
/**
*_putchar - to write character
* Return: Always 0 (SUccess)
*/
int _putchar(char c)
{
return (write (1, &c, 1));
}
