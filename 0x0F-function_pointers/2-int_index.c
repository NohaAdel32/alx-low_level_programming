#include<stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: this is an array
 * @size: size of array
 * @cmp: a function of compare
 * Return: index or 1 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
			else
				return (-1);
		}
	}
}

