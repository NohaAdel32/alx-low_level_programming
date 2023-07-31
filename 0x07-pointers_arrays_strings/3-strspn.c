#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: input string
 * @accept: prefix string
 * Return: the lenght of a prefix sustring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int j;
	unsigned int counter = 0;

	while (*s)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				counter++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (counter);
		}
		s++;
	}
	return (counter);
}
