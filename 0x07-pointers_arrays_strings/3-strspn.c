#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: input string
 * @accept: prefix string
 * Return: the lenght of a prefix sustring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				counter++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (counter);
		}
	}
	return (counter);
}
