#include "lists.h"
#include <stdio.h>

/**
 * listint_len - to print the lenght
 * @h: a pointer
 * Return: Always 0 (Success)
 */

size_t listint_len(const listint_t *h)
{
size_t nodes = 0;
while (h)
{
nodes++;
h = h->next;
}
return (nodes);
}
