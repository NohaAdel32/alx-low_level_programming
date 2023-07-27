#include"main.h"
/**
 * _strcmp - compares two strings
 * @s1: a first string
 * @s2: a second string
 * Return: 0 or 1 or -1
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
