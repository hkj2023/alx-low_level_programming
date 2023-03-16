#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - to create calloc.
 *  main: entry point
 * @nmemb: integer
 * @size: the size of integer
 * Return: Always 0 (Success).
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
p = malloc(nmemb * size);
if (p == NULL)
return (NULL);
for (i = 0; i < (nmemb * size); i++)
p[i] = 0;
return (p);
}
