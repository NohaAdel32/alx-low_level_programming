#include "variadic_functions.h"
/**
 * print_all - function with 2 parameter
 * @format: char type pointer to string
 *
 * Description: prints anything followed by a new line
 * Return: na
 */
void print_all(const char * const format, ...)
{
	unsigned int i;
	char *str;
	char *space;
	va_list ap;

	va_start(ap, format);
	j = 0;

	while (format && format[j])
	{
		space = "";
		if (format[j + 1])
			space = ", ";
		switch (format[j])
		{
			case 'c':
				printf("%c%s", va_arg(ap, int), space);
				break;
			case 'i':
				printf("%i%s", va_arg(ap, int), space);
				break;
			case 'f':
				printf("%f%s", va_arg(ap, float), space);
				break;
			case 's':
				str = va_arg(ap, char *);
				if (!str || !*str)
					str = "(nil)";
				printf("%s%s", str, space);
				break;
		}
		j++;
	}
	printf("\n");
	va_arg(ap);
}
