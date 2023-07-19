#include"main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 * Return: void
 */

void times_table(void)
{
	int n, i, prod;

	for (n = 0; n <= 9; n++)
	{
		_putchar(48);

		for (i = 0; i <= 9; i++)
		{
			_putchar(',');
			_putchar(' ');
			prod = i * n;

			if (prod <= 9)
				_putchar(prod + '0');

			else
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
