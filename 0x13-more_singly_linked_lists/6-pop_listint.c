#include "lists.h"

/**
 * pop_listint - to delete the head node
 * @head: a pointer
 * Return: Always 0 (Success)
 */

int pop_listint(listint_t **head)
{
listint_t *temp;
int node;
if (*head == NULL)
return (0);
temp = *head;
node = (*head)->n;
*head = (*head)->next;
free(temp);
return (node);
}
