#include"main.h"

/**
 * print_number - print an integer
 * @n: integer to print
 */

void print_number(int n)
{
	unsigned int i;
	int m;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (n <= 9)
	{
		_putchar(n + '0')
	}
	else
	{
		i = 100000000;

		while (n >= i)
		{
			m = n / i;
			_putchar(m + '0');
			n %= i;
			i /= 10;
		}
	}
}

