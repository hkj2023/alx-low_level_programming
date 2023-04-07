#include  "main.h"

/**
 *set_bit - to set a bit a given index
 * @n: -the number
 * @index: the index
 * Return: Always 0 (Success)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);
*n |= (1 << index);
return (1);
}
