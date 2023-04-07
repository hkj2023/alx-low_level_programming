#include "main.h"

/**
 * get_endianness - to get endiannes
 * Return: Always 0 (Success)
 */

int get_endianness(void)
{
int result;
result = 1;
if (*(char *)&result == 1)
return (1);
else
return (0);
}
