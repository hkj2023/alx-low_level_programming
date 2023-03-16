#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * malloc_checked - to create malloc
 * main: entry point
 * @b: integer
 * Return: Always 0 (Success).
 */

void *malloc_checked(unsigned int b)
{
char *check;
check = malloc(b);
if (check == NULL)
exit(98);
return (check);
}
