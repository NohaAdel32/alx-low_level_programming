#include "lists.h"

/**
 * free_listint2 - Frees a list
 * @head: Pointer to address of a list
 */
void free_listint2(listint_t **head)
{
	listint_t *del;

	if (!head)
		return;

	while (*head)
	{
		del = *head->next;
		free(*head);
		*head = del;
	}
	*head = NULL;
}
