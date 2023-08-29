#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Pointer to address of a list
 * @idx: Index of the list where new node should be added
 * @n: Integer
 *
 * Return: Address of the new node
 * Null if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *tmp;
	listint_t *new = malloc(sizeof(listint_t));

	tmp = NULL;

	if (!new)
		return (NULL);

	new->n = n;

	while (*head && idx)
	{
		if (idx == 0)
		{
			new->next = *head;
			*head = new;
			return (*head);
		}
		tmp = *head;
		*head = (*head)->next;
		i++;

		if (i == idx)
		{
			tmp->next = new;
			new->next = *head;
			return (new);
		}
	}


	return (NULL);
}
