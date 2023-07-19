#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: the sign of number
 * Return: 1 for the number is greater than zero
 * and 0 for the number is zero and -1 for is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}

	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}

	else
	{
		_putchar(45);
		return (-1);
	}
}
