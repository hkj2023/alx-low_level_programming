#include "lists.h"

/**
 * sum_listint - to get the sum of n datas
 * @head: a pointer
 * Return: Always 0 (Success)
 */
int sum_listint(listint_t *head)
{
int add = 0;
while (head)
{
add += head->n;
head = head->next;
}
return (add);
}
