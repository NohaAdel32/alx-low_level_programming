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
	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2;


	while (n < len)
	{
		_putchar(str[n]);
		n++;
	}
