#include"main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: is the number of times the character
 * Return: 0
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		_putchar(92);
		_putchar('\n');

		for (i = 2; i <= n; i++)
		{
			for (j = 1; j < i; j++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}


	}
}
