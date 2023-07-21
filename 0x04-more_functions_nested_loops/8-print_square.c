#include"main.h"

/**
 * print_square -  prints a square
 * @size: is the size of the square
 * Return: 0
 */

void print_square(int size)
{
	int l, w;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (w = 1; w <= size; w++)
		{
			for (l = 1; l <= size; l++)
				_putchar(35);
			_putchar('\n');
		}
	}
}
