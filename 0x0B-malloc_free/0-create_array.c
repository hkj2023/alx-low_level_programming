#include "main.h"
#include <stdlib.h>
/**
 * create_array - to create an array of chars.
 * @size: size of the array.
 * @c: storaged char
 * Return: Always 0 (Succeess)
 */
char *create_array(unsigned int size, char c)
{
char *a;
unsigned int i;
if (size == 0)
return (NULL);
a = malloc(size * sizeof(*a));
for (i = 0 ; i < size; i++)
a[i] = c;
return (a);
if (a == NULL)
	return (NULL);
}
