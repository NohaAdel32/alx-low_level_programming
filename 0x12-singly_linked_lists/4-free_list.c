#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function with one argument
 * @head: pointer to list_t
 *
 * Description: frees a list
 * Return: na
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
