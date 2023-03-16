#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_range - to know the range
 * main: entry point
 * @min: integer
 * @max: integer
 * Return: Always 0 (Success).
 *
 */



int *array_range(int min, int max)
{
int *array, index, size;
if (min > max)
return (NULL);
size = max - min + 1;
array = malloc(sizeof(int) * size);
if (array == NULL)
return (NULL);
index = 0;
while (index < size)
{
array[index] = min++;
index++;
}
return (array);
}
