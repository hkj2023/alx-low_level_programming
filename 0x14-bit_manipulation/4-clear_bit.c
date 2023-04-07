#include "main.h"

/**
 * clear_bit - to seat the value to 0
 * @n: the number
 * @index: the index
 * Return: Always 0 (Success)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int number;
if (index > sizeof(n) * 8)
return (-1);
number = ~(1 << index);
*n &= number;
return (1);
}
