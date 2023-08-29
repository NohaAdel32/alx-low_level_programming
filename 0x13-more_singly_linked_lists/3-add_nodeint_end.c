#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a list
 * @head: Pointer to address of a list
 * @n: Integer
 *
 * Return: Address of the new element
 * NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end = malloc(sizeof(listint_t));
	listint_t *new = *head;

	if (!end)
		return (NULL);

	if (!*head)
	{
		*head = end;
		end->n = n;
		end->next = NULL;
		return (*head);
	}
	else
	{
		while (new->next)
		{
			new = new->next;
		}
		end->n = n;
		new->next = end;
		end->next = NULL;
		return (end);
	}
}
