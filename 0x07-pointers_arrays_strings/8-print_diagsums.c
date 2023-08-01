#include "main.h"
#include<stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 *                  of a square matrix of integers.
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 */

void print_diagsums(int *a, int size)
{
	int i, j, d1, d2;

	d1 = 0;
	d2 = 0;
	for (i = 0; i < size; i++)
	{
		d1 += a[i][i];
		d2 += a[i][size - i - 1];
	}
	printf("%i, %i\n", d1, d2);
}

