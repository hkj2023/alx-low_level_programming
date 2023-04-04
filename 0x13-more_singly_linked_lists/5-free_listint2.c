#include "lists.h"

/**
 * free_listint2 - to make free a listint_t
 * @head: a pointer
 * Description: Sets the head to NULL.
 */

void free_listint2(listint_t **head)
{
listint_t *temp;
if (head == NULL)
return;
while (*head)
{
temp = (*head)->next;
free(*head);
*head = temp;
}
head = NULL;
}
