#include "function_pointers.h"

/**
 * int_index - to search integers
 * @array: elements of array
 * @size: the size of array
 * @cmp: a pointer to the function
 * main: entry point
 * Return: Always 0 (Success)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int index;
if (array == NULL || cmp == NULL)
return (-1);
for (index = 0; index < size; index++)
{
if (cmp(array[index]) != 0)
return (index);
}
return (-1);
}
