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

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				counter++;
				break;
			}
		}
	}
	return (counter);
}
