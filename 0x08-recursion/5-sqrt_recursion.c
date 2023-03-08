#include "main.h"

/**
 * _sqrt_recursion - to print square of a number
 * @n: a number
 * Return: Always 0 (Success)
 */
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}

/**
 * _sqrt - square root of a number
 * @n: number n
 * @a: number a
 * Return: sqrt
 */
int _sqrt(int n, int a)
{
if (n < 0)
return (-1);
if ((a * a) > n)
return (-1);
if (a * a == n)
return (a);
return (_sqrt(n, a + 1));
}
