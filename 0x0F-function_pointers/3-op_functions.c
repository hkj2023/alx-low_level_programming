#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - to add two numbers
 * @a: Integer a
 * @b: Integer b
 * Return: Always 0 (Success)
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - to subtuct two numbers
 * @a: Integer a
 * @b: Integer b
 * Return: Always 0 (Success)
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - to multiply  two numbers
 * @a: Integer a
 * @b: Integer b
 * Return: Always 0 (Success)
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - division of two numbers
 * @a: Integer a
 * @b: Integer b
 * Return: Always 0 (Success)
 */
int op_div(int a, int b)
{
return (a / b);
}

/**
 * op_mod - to find modulo of number
 * @a: Integer a
 * @b: Integer b
 * Return: Always 0 (Success)
 */

int op_mod(int a, int b)
{
return (a % b);
}
