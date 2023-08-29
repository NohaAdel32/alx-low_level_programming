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

	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!idx)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}

	tmp = *head;

	while (tmp)
	{
		if (i == idx - 1)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		i++;
		tmp = tmp->next;
	}


	return (NULL);
}
