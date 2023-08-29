#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 * @head: Pointer to a struct
 *
 * Return: Head node's data (n)
 * 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *tmp;

	if (!head)
		return (0);

	data = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (data);
}
