#include <stdio.h>
#include "lists.h"
/**
 * _strlen - returns the length of string
 * @s: string
 * Return: length of string
 */

int *_strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * print_list - function with one argument
 * @h: const pointer type
 *
 * Description: prints all the elements of a list_t list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;
	int len = _strlen(h->str);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
