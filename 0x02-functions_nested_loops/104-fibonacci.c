#include<stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	unsigned long sum;
	unsigned long fib1 = 0;
	unsigned long fib2 = 1;

	int count;

	for (count = 0; count <= 98; count++)
	{
		sum = fib1 + fib2;

		if (count == 98)
			printf("%lu\n", sum);
		else
		{
			fib1 = fib2;
			fib2 = sum;

			printf("%lu, ", sum);
		}
	}
	return (0);
}
