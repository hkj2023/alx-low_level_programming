#include "lists.h"

/**
 * add_node_end - to add node at the end
 * @head: the first node of a list
 * @str: the string to be inserted
 * Return: Always 0 (Success)
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *hd, *tail;
hd = malloc(sizeof(listint_t));
if (hd == NULL)
return (NULL);
hd->n = n;
hd->next = NULL;
if (*hd == NULL)
*head = hd;
else
{
tail = *head;
while (tail->next != NULL)
tail = tail->next;
tail->next = hd;
}
return (*head);
}
