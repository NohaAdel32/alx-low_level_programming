#include"main.h"

/**
 * print_number - prints an integer
 * @n: input integer number
 * Return: 0
 */


void print_number(int n)
{
	unsigned int u, i, m;

	if (n < 0)
	{
		_putchar('-');
		u = -n;
	}
	else
	{
		u = n;
	}
	if (u >= 0 && u <= 9)
	{
		_putchar(u + '0');
	}
	else
	{
		i = 1000000;
		while (i >= 10)
		{
			if (u >= i)
			{
				_putchar((u / i) + '0');
				m = u % i;
			}
			i /= 10;
		}
		_putchar((m % 10) + '0');
	}
}
