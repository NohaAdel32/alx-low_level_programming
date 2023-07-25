#include"main.h"

/**
 * print_array - prints n elements of an array of integers
 * @n: is the number of elements of the array to be printed
 * @a: a string
 */


void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		if (i == (n - 1))
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	putchar('\n');
}
