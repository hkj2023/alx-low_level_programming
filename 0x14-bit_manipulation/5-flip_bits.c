#include "main.h"

/**
 * flip_bits - to flip one bit
 * @n: the number tob flip
 * @m: second operand
 * Return: Always 0 (Success)
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int result;
unsigned int count;
count = 0;
result = n ^ m;
while (result)
{
count += result & 1;
result >>= 1;
}
return (count);
count++;
}
