#include"main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: 0
 */


void rev_string(char *s)
{
	int i, j, len;

	while (s[j] != 0)
		j++;

	len = j;
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
