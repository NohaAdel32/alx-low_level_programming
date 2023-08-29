#include "lists.h"

/**
 * free_listint - Frees a list
 * @head: Pointer to a struct
 */
void free_listint(listint_t *head)
{
	listint_t *del;

	while (head)
	{
		del = head;
		free(head);
		head = del->next;
	}
}
