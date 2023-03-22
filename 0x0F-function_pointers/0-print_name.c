#include "function_pointers.h"

/**
 * print_name -to print my name
 * @name: the string name
 * @f: the function pointer
 * Return: entry point
 */


void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
