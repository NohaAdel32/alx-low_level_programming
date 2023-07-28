#include"main.h"

/**
 * print_number - print an integer
 * @n: integer to print
 */

void print_number(int n)
{
	unsigned int i;
	int m, n1;

	if (n < 0)
	{
		_putchar('-');
		n1 =  -n;
	}
	else
	{
		n1 = n;
	}

	if (n1 <= 9)
	{
		_putchar(n1 + '0')
	}
	else
	{
		i = 100000000;

		while (n1 >= i)
		{
			m = n1 / i;
			_putchar(m + '0');
			n1 %= i;
			i /= 10;
		}
	}
}

