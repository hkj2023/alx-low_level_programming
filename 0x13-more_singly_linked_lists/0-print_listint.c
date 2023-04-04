#include "lists.h"
#include <stdio.h>

/**
 * print_listint - to print all element
 * @h: a pointer
 * Return:Always 0 (Success)
 */

size_t print_listint(const listint_t *h)
{
size_t nodes = 0;
while (h)
{
nodes++;
printf("%d\n", h->n);
h = h->next;
}
return (nodes);
}
