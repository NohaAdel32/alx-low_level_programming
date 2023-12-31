#include "lists.h"

/**
 * reverse_listint - function with one argument
 * @head: pointer to head pointer of linked list
 *
 * Description: reverses a linked list
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *curr, *next;

	curr = *head;
	prev = NULL;

	if (!head || !*head)
		return (NULL);

	while (curr)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*head = prev;
	return (*head);
}
