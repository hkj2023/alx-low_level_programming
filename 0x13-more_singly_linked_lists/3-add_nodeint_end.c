#include "lists.h"

/**
 * add_nodeint_end - to add node at the end
 * @head: the first node of a list
 * @n: the integer to be inserted
 * Return: Always 0 (Success)
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *last;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
if (*head == NULL)
*head = new;
else
{
last = *head;
while (last->next != NULL)
last = last->next;
last->next = new;
}
return (*head);
}
