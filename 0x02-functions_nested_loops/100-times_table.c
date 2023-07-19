#include"main.h"

/**
 * print_times_table - prints the n times table
 * @n: times table
 * Return: void
 */


void print_times_table(int n)
{
	int prod, n1, n2;

	if (n <= 15 && n >= 0)
	{
		for (n1 = 0, n1 <= n, n1++)
		{
			_putchar(48)

				for (n2 = 1, n2 <= n, n2++)
				{
					_putchar(',');
					_putchar(' ');
					prod = n1 * n2;

					if (prod <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(prod + '0');
					}
					else if (prod <= 99)
					{
						_putchar(' ');
						_putchar((prod / 10) + '0');
						_Putchar((prod % 10) + '0');
					}
					else
					{
						_putchar((prod / 100) + '0');
						prod = prod % 100;
						_putchar((prod / 10) + '0');
						_putchar((prod % 10) + '0');
					}
				}
			_putchar('\n');
		}
	}
}

