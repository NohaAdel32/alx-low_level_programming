#include "variadic_functions.h"
/**
 * print_strings - function with 3 parameter
 * @separator: char type pointer to string
 * @n: unsigned int type
 *
 * Description: prints string followed by a new line
 * Return: na
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ap;

	va_start(ap, n);

	if (separator != NULL && n)
	{
		for (i = 0; i < n; i++)
		{
			str = va_arg(ap, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
			if (i < n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}



