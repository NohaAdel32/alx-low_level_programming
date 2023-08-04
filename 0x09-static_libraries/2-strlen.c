#include"main.h"

/**
 * _strlen - returns the length of a string
 * @s: input character
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; *s != 0; len++)
		s++;

	return (len);
}
