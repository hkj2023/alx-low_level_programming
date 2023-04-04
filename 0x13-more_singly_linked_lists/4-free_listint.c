#include "lists.h"

/**
 * free_listint - to make listint_t free
 * @head: a pointer
 */

void free_listint(listint_t *head)
{
listint_t *tmp;
while (head)
{
tmp = head->next;
free(head);
head = tmp;
}
}
