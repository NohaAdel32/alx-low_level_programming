#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *sep;

	if (*separator && separator)
	{
		sep = (char *) separator;
		va_start(ap, n);
		if (n > 0)
		{
			printf("%d", va_arg(ap, int));

			for (i = 1; i < n; i++)
				printf("%s%d", sep, va_arg(ap, int));

			printf("\n");
			va_end(ap);
		}
	}
}
