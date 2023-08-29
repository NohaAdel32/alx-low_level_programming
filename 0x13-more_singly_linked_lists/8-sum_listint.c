#include "lists.h"

/**
 * sum_listint - Sums all data of linked list
 * @head: Pointer to a struct
 *
 * Return: Sum of all data (n) of a linked list
 * 0 if empty list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp;

	tmp = head;

	if (!tmp)
		return (0);

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
