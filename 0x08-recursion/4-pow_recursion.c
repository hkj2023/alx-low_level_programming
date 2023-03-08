#include "main.h"

/**
 * _pow_recursion - to print power recursion
 * @a: number a
 * @b: number b
 * Return: Always 0 (Success)
 */


int _pow_recursion(int a, int b)
{
if (b == 0)
{
return (1);
}
if (b < 0)
{
return (-1);
}
return (a * _pow_recursion(a, b - 1));
}
