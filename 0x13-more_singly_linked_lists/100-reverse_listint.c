#include "lists.h"

/**
 * reverse_listint - to reverse the list
 * @head: a pointer
 * Return: Always 0 (Success)
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *ahead, *behind;
if (head == NULL || *head == NULL)
return (NULL);
behind = NULL;
while ((*head)->next != NULL)
{
ahead = (*head)->next;
(*head)->next = behind;
behind = *head;
*head = ahead;
}
(*head)->next = behind;
return (*head);
}
