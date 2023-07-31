#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: a string
 * @b: change to this character
 * @n: numer of change
 * Return: string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *r = s;

	for (i = 0; i < n; i++)
	{
		s[i] = 'b';
	}
	return (r);
}
