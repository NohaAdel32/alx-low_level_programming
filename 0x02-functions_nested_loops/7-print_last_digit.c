#include"main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: the last digit of a number
 * Return: LD
 */

int print_last_digit(int n)
{
	int LD;

	if (n < 0)
		LD = -1 * (n % 10);

	else
		LD = n % 10;

	_putchar('0' + LD);
	return (LD);
}

