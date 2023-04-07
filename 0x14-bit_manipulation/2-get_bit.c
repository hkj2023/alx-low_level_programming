#include "main.h"

/**
 * get_bit - to get the bit at certain index
 * @n:- the number
 * @index: - the index of bit
 * Return: Always 0 (Success)
 */

int get_bit(unsigned long int n, unsigned int index)
{
int number;
number = (n >> index);
if (index > 64)
return (-1);
return (number & 1);
}
