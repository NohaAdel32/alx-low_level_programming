#include"main.h"

/**
 * print_line -  draws a straight line in the terminal
 * @n: is the number of times the character
 * Return: 0
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');

	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
