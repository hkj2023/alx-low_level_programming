#include <stdlib.h>
#include "lists.h"

/**
 * list_len - to print the length of elemet
 * @h: pointer to the list_t
 * Return: Always 0 (Success)
 */
size_t list_len(const list_t *h)
{
size_t n = 0;
while (h)
{
n++;
h = h->next;
}
return (n);
}
