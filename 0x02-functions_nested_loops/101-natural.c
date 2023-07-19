#include<stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	long n, sum;

	sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			sum = sum + n;
		}
	}

	printf("%ld\n", sum);
	return (0);
}
