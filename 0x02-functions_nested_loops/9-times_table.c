#include"main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 * Return: void
 */

void times_table(void)
{
	int n, i, t;

	for (n = 0; n <= 9; n++)
	{
		for (i = 0; i <= 9; i++)
		{
			t = i * n;

			if (i != 9)
			{
				if (t <= 9)
					_putchar(t + '0');
				else
				{
				_putchar((t / 10) + '0');
				_putchar((t % 10) + '0');
				}
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				if (t <= 9)
					_putchar(t + '0');
				else
				{
				_putchar((t / 10) + '0');
				_putchar((t % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
}
