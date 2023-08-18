#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - the sum of all its parameters
 * @n: num of num
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list sum_ptr;

	if (n == 0)
		return (0);
	va_start(sum_ptr, n);

	for (i = 0; i < n; i++)
		sum += va_arg(sum_ptr, int);
	va_end(sum_ptr);
	return (sum);
}
