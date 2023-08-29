#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a given index
 * @head: Pointer to address of a list
 * @index: Index of the list where node should be deleted
 *
 * Return: 1 on success, -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *del;
	listint_t *prev;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		del = *head;
		*head = (*head)->next;
		free(del);
		return (1);
	}
	del = *head;

	while (del)
	{
		if (i == index)
		{
			prev->next = del->next;
			free(del);
			return (1);
		}
		i++;
		prev = del;
		del = del->next;
	}

	return (-1);
}
