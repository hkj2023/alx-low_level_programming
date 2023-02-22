#include "main.h"

/**
 * _abs - to print the abs value of a number
 * @c : the number to be computed the abs;
 * Return: Return the absolute value of the number
 */
int _abs(int c)
{
int absVal;
if (c < 0)
{
absVal = c * -1;
return (absVal);
}
return (c);
}

