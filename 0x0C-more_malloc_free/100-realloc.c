#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _realloc - to reallocates a memory
 * @ptr: void pointer
 * @old_size: integer
 * @new_size: integer
 * Return: Always 0 (Success)
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
ptr = malloc(new_size);
if (new_size == old_size)
return (ptr);
free(ptr);
ptr = malloc(new_size);
return (ptr);
}
