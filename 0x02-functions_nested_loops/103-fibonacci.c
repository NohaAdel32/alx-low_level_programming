#include<stdio.h>

/**
 * main - Entry point
 * Return: 0
 */


int main(void)
{
	unsigned long sum = 0, m, count, fib1 = 0, fib2 = 1;

	for (count = 0; m <= 4000000; count++)
	{
		m = fib1 + fib2;
		fib1 = fib2;
		fib2 = m;

		if (m % 2 == 0)
			sum = sum + m;
	}
	printf("%lu\n", sum);
	return (0);
}

