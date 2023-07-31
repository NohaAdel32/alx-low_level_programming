#include "main.h"

/**
 * _strchr -  locates a character in a string
 * @s: input string
 * @c: charater to search
 * Return: character
 */

char *_strchr(char *s, char c)
{
	int i;
	char *r;

	for (i = 0; s[i] != '\0; i++)
	{
		if (s[i] == c)
		{
			*r = &s[i];
			return (r);
		}
	}
	return (Null);
}
