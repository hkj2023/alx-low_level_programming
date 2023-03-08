#include "main.h"


/**
 * is_even - Checks i a number is divisible.
 * @n: The number to be checked.
 * @ev: to know even number.
 * Return: Always 0 (Success).
 */
int is_even(int n, int ev)
{
if (n % ev == 0)
return (0);
if (ev == n / 2)
return (1);
return (is_even(n, ev + 1));
}

/**
 * is_prime_number - to print prime number
 * @n: the number
 * Return: Always 0 (Sucess)
 */
int is_prime_number(int n)
{
int ev = 2;
if (n <= 1)
return (0);
if (n >= 2 && n <= 3)
return (1);
return (is_even(n, ev));
}
