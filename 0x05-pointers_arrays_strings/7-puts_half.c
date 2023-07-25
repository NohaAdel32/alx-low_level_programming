#include"main.h"

/**
 * puts_half - prints half of a string
 * @str: a string
 * Return: 0
 */


void puts_half(char *str)
{
	int len, n;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 1)
		n = len / 2;
	else
		n = (len + 1) / 2;


	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
